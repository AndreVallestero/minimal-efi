# minimal-efi
A bare-bones minimal executable application for efi on the x64 platform
- 0 external dependencies
- 1 source file
- 2 compile commands
- 42 SLOC
- 2560 bytes binary

## Build tools
The only build tools required are `clang` and `lld`. This project does not depend on any external headers, libraries, or link files.

On arch linux this can be easily installed with the command
`pacman -S clang lld`

## Building
Assuming you are in the same directory as `main.c`, you simply need to run these 2 commands:

1. `clang -target x86_64-pc-win32-coff -fno-stack-protector -fshort-wchar -mno-red-zone -c main.c -o main.o`
2. `lld-link -subsystem:efi_application -nodefaultlib -dll main.o -out:BOOTX64.EFI`

## Testing
To test, use a GPT partitioned drive, and on a partition formated as FAT32 (FAT16 and FAT12 are acceptable as well), create a directory called `EFI` in the partition's root directory, create a directory called `BOOT` inside the `EFI` directory, and finally, place your `BOOTX64.EFI` file inside the `BOOT` directory. The final directory structure should be `/EFI/BOOT/BOOTX64.EFI`.

Now you can simply select that partition on your motherboard's boot selector/menu and you will be able to boot to it.

## Acknowledgments
Code mostly derived from:
- https://github.com/yoppeh/efi-clang
- https://kazlauskas.me/entries/x64-uefi-os-1.html
- https://www.tianocore.org

Further explanation can be found from these sources:
- https://www.rodsbooks.com/efi-programming/hello.html
- https://wiki.osdev.org/UEFI_Bare_Bones
- https://www.happyassassin.net/2014/01/25/uefi-boot-how-does-that-actually-work-then/
- https://dvdhrm.github.io/2019/01/31/goodbye-gnuefi/
- https://uefi.org/specifications

## Extra
One-liner with cleanup:
`clang -target x86_64-pc-win32-coff -fno-stack-protector -fshort-wchar -mno-red-zone -c main.c -o main.o && lld-link -subsystem:efi_application -nodefaultlib -dll -out:BOOTX64.EFI && rm main.o BOOTX64.lib`

![scrot](https://user-images.githubusercontent.com/39736205/61829719-7c19a300-ae37-11e9-8571-86df407a81b3.png)
