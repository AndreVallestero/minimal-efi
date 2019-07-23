#include <efi.h>
#include <efilib.h>
#include <efiprot.h>
efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
    InitializeLib(ImageHandle, SystemTable);
    Print(L"Hello, world!");
    for(;;) __asm__("hlt");
}