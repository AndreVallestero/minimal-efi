#include <stdint.h>

typedef struct EfiTableHeader {
    uint64_t  Signature;
    uint32_t  Revision;
    uint32_t  HeaderSize;
    uint32_t  CRC32;
    uint32_t  Reserved;
} EfiTableHeader;

struct EfiSimpleTextOutputProtocol;
typedef uint64_t (*EfiTextString)(struct EfiSimpleTextOutputProtocol *This, int16_t *String);
typedef struct EfiSimpleTextOutputProtocol {
    uint64_t      Reset;
    EfiTextString OutputString;
    uint64_t      TestString;
    uint64_t      QueryMode;
    uint64_t      SetMode;
    uint64_t      SetAttribute;
    uint64_t      ClearScreen;
    uint64_t      SetCursorPosition;
    uint64_t      EnableCursor;
    uint64_t      Mode;
} EfiSimpleTextOutputProtocol;

typedef struct EfiSystemTable {
    EfiTableHeader              Hdr;
    int16_t                     *FirmwareVendor;
    uint32_t                    FirmwareRevision;
    void*                       ConsoleInHandle;
    uint64_t                    ConIn;
    void*                       ConsoleOutHandle;
    EfiSimpleTextOutputProtocol *ConOut;
    void*                       StandardErrorHandle;
    uint64_t                    StdErr;
    uint64_t                    RuntimeServices;
    uint64_t                    BootServices;
    uint64_t                    NumberOfTableEntries;
    uint64_t                    ConfigurationTable;
} EfiSystemTable;

int efi_main(void *imageHandle, EfiSystemTable* systemTable) {
    systemTable->ConOut->OutputString(systemTable->ConOut, (int16_t *)L"Hello, World!");
    for(;;) __asm__("hlt");
    return 0;
}