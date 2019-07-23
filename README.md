# minimal-efi-app
A bare-bones minimal application for efi on the x64 platform

## Dependencies
The only dependencies are clang and gnu-efi.

On arch linux this can be easily installed with the command 
`pacman -S clang gnu-efi-libs`

## Building
Assuming you are in the same directory as `main.c`, you simply need to run these 3 commands:

1. `clang -I/usr/include/efi -I/usr/include/efi/x86_64 -I/usr/include/efi/protocol -fno-stack-protector -fpic -fshort-wchar -mno-red-zone -DHAVE_USE_MS_ABI -c -o main.o main.c`
2. `ld -nostdlib -znocombreloc -T /usr/lib/elf_x86_64_efi.lds -shared -Bsymbolic -L /usr/lib /usr/lib/crt0-efi-x86_64.o main.o -o BOOTX64.so -lefi -lgnuefi`
3. `objcopy -j .text -j .sdata -j .data -j .dynamic -j .dynsym  -j .rel -j .rela -j .reloc --target=efi-app-x86_64 BOOTX64.so BOOTX64.EFI`

## Testing
To test, simply use a GPT partitioned drive and on a partition formated as FAT32 (FAT16 and FAT12 are acceptable as well), create a folder called `EFI` in the partition's root directory, create a folder called `BOOT` in the `EFI` directory and finally place your `BOOTX64.EFI` file in the `BOOT` directory. The final folder structure should be `/EFI/BOOT/BOOTX64.EFI`.

Now you can simply select that partition on your motherboard's boot selector/menu and you will be able to boot to it.

## Acknowledgments
Further explanation can be found from these sources:

- https://kazlauskas.me/entries/x64-uefi-os-1.html
- https://www.rodsbooks.com/efi-programming/hello.html
- https://wiki.osdev.org/UEFI_Bare_Bones
- https://www.happyassassin.net/2014/01/25/uefi-boot-how-does-that-actually-work-then/

## Extra
Oneliner with cleanup:
```clang -I/usr/include/efi -I/usr/include/efi/x86_64 -I/usr/include/efi/protocol -fno-stack-protector -fpic -fshort-wchar -mno-red-zone -DHAVE_USE_MS_ABI -c -o main.o main.c  && ld -nostdlib -znocombreloc -T /usr/lib/elf_x86_64_efi.lds -shared -Bsymbolic -L /usr/lib /usr/lib/crt0-efi-x86_64.o main.o -o BOOTX64.so -lefi -lgnuefi && objcopy -j .text -j .sdata -j .data -j .dynamic -j .dynsym  -j .rel -j .rela -j .reloc --target=efi-app-x86_64 BOOTX64.so BOOTX64.EFI && rm main.o BOOTX64.so```