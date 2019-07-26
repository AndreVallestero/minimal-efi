#include <stdint.h>

#define EFI_FALSE                   0
#define EFI_TRUE                    1

#define EFI_SUCCESS                 0x0000000000000000
#define EFI_ERR                     0x8000000000000000
#define EFI_LOAD_ERROR              (EFI_ERR | 0x0000000000000001)
#define EFI_INVALID_PARAMETER       (EFI_ERR | 0x0000000000000002)
#define EFI_UNSUPPORTED             (EFI_ERR | 0x0000000000000003)
#define EFI_BAD_BUFFER_SIZE         (EFI_ERR | 0x0000000000000004)
#define EFI_BUFFER_TOO_SMALL        (EFI_ERR | 0x0000000000000005)
#define EFI_NOT_READY               (EFI_ERR | 0x0000000000000006)
#define EFI_DEVICE_ERROR            (EFI_ERR | 0x0000000000000007)
#define EFI_WRITE_PROTECTED         (EFI_ERR | 0x0000000000000008)
#define EFI_OUT_OF_RESOURCES        (EFI_ERR | 0x0000000000000009)
#define EFI_VOLUME_CORRUPTED        (EFI_ERR | 0x000000000000000a)
#define EFI_VOLUME_FULL             (EFI_ERR | 0x000000000000000b)
#define EFI_NO_MEDIA                (EFI_ERR | 0x000000000000000c)
#define EFI_MEDIA_CHANGED           (EFI_ERR | 0x000000000000000d)
#define EFI_NOT_FOUND               (EFI_ERR | 0x000000000000000e)
#define EFI_ACCESS_DENIED           (EFI_ERR | 0x000000000000000f)
#define EFI_NO_RESPONSE             (EFI_ERR | 0x0000000000000010)
#define EFI_NO_MAPPING              (EFI_ERR | 0x0000000000000011)
#define EFI_TIMEOUT                 (EFI_ERR | 0x0000000000000012)
#define EFI_NOT_STARTED             (EFI_ERR | 0x0000000000000013)
#define EFI_ALREADY_STARTED         (EFI_ERR | 0x0000000000000014)
#define EFI_ABORTED                 (EFI_ERR | 0x0000000000000015)
#define EFI_ICMP_ERROR              (EFI_ERR | 0x0000000000000016)
#define EFI_TFTP_ERROR              (EFI_ERR | 0x0000000000000017)
#define EFI_PROTOCOL_ERROR          (EFI_ERR | 0x0000000000000018)
#define EFI_INCOMPATIBLE_VERSION    (EFI_ERR | 0x0000000000000019)
#define EFI_SECURITY_VIOLATION      (EFI_ERR | 0x000000000000001a)
#define EFI_CRC_ERROR               (EFI_ERR | 0x000000000000001b)
#define EFI_END_OF_MEDIA            (EFI_ERR | 0x000000000000001c)
#define EFI_END_OF_FILE             (EFI_ERR | 0x000000000000001f)
#define EFI_INVALID_LANGUAGE        (EFI_ERR | 0x0000000000000020)
#define EFI_COMPROMISED_DATA        (EFI_ERR | 0x0000000000000021)
#define EFI_IP_ADDRESS_CONFLICT     (EFI_ERR | 0x0000000000000022)
#define EFI_HTTP_ERROR              (EFI_ERR | 0x0000000000000023)

#define EFI_MEMORY_UC               0x0000000000000001
#define EFI_MEMORY_WC               0x0000000000000002
#define EFI_MEMORY_WT               0x0000000000000004
#define EFI_MEMORY_WB               0x0000000000000008
#define EFI_MEMORY_UCE              0x0000000000000010
#define EFI_MEMORY_WP               0x0000000000001000
#define EFI_MEMORY_RP               0x0000000000002000
#define EFI_MEMORY_XP               0x0000000000004000
#define EFI_MEMORY_NV               0x0000000000008000
#define EFI_MEMORY_MORE_RELIABLE    0x0000000000010000
#define EFI_MEMORY_RO               0x0000000000020000
#define EFI_MEMORY_RUNTIME          0x8000000000000000

#define EFI_SIMPLE_TEXT_INPUT_PROTOCOL_GUID {0x387477c1, 0x69c7, 0x11d2, {0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b}}
#define EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL_GUID    {0x387477c2, 0x69c7, 0x11d2, {0x82, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b}}

#define EFI_TIME_ADJUST_DAYLIGHT    0x01
#define EFI_TIME_IN_DAYLIGHT        0x02
#define EFI_UNSPECIFIED_TIMEZONE    0x07ff

#define EFI_OPTIONAL_POINTER                0x00000001

#define CAPSULE_FLAGS_PERSIST_ACROSS_RESET  0x00010000
#define CAPSULE_FLAGS_POPULATE_SYSTEM_TABLE 0x00020000
#define CAPSULE_FLAGS_INITIATE_RESET        0x00040000

#define EFI_DEVICE_PATH_PROTOCOL_GUID   {0x09576e91, 0x6d3f, 0x11d2, {0x8e, 0x39, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x3b}}

/* Event Types */
#define EVT_TIMER                               0x80000000
#define EVT_RUNTIME                             0x40000000
#define EVT_NOTIFY_WAIT                         0x00000100
#define EVT_NOTIFY_SIGNAL                       0x00000200
#define EVT_SIGNAL_EXIT_BOOT_SERVICES           0x00000201
#define EVT_SIGNAL_VIRTUAL_ADDRESS_CHANGE       0x00000202
    
#define TPL_APPLICATION                         4
#define TPL_CALLBACK                            8
#define TPL_NOTIFY                              16
#define TPL_HIGH_LEVEL                          31

#define EFI_OPEN_PROTOCOL_BY_HANDLE_PROTOCOL    0x00000001
#define EFI_OPEN_PROTOCOL_GET_PROTOCOL          0x00000002
#define EFI_OPEN_PROTOCOL_TEST_PROTOCOL         0x00000004
#define EFI_OPEN_PROTOCOL_BY_CHILD_CONTROLLER   0x00000008
#define EFI_OPEN_PROTOCOL_BY_DRIVER             0x00000010
#define EFI_OPEN_PROTOCOL_EXCLUSIVE             0x00000020

#define EFI_ACPI_TABLE_GUID     {0x8868e871, 0xe4f1, 0x11d3, {0xbc, 0x22, 0x00, 0x80, 0xc7, 0x3c, 0x88, 0x81}}
#define ACPI_TABLE_GUID         {0xeb9d2d30, 0x2d88, 0x11d3, {0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d}}
#define SAL_SYSTEM_TABLE_GUID   {0xeb9d2d32, 0x2d88, 0x11d3, {0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d}}
#define SMBIOS_TABLE_GUID       {0xeb9d2d31, 0x2d88, 0x11d3, {0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d}}
#define SMBIOS2_TABLE_GUID      {0xf2fd1544, 0x9794, 0x4a2c, {0x99, 0x2e, 0xe5, 0xbb, 0xcf, 0x20, 0xe3, 0x94}}
#define MPS_TABLE_GUID          {0xeb9d2d2f, 0x2d88, 0x11d3, {0x9a, 0x16, 0x00, 0x90, 0x27, 0x3f, 0xc1, 0x4d}}
#define EFI_ACPI_20_TABLE_GUID  EFI_ACPI_TABLE_GUID
#define EFO_ACPI_10_TABLE_GUID  ACPI_TABLE_GUID

typedef struct EFI_GUID {
    uint32_t  Data1;
    uint16_t  Data2;
    uint16_t  Data3;
    uint8_t   Data4[8];
} EFI_GUID;

typedef struct EFI_MEMORY_DESCRIPTOR {
    uint32_t                  Type;
    uint64_t    PhysicalStart;
    uint64_t     VirtualStart;
    uint64_t                  NumberOfPages;
    uint64_t                  Attribute;
} EFI_MEMORY_DESCRIPTOR;

typedef struct EFI_TABLE_HEADER {
    uint64_t  Signature;
    uint32_t  Revision;
    uint32_t  HeaderSize;
    uint32_t  CRC32;
    uint32_t  Reserved;
} EFI_TABLE_HEADER;

typedef struct EFI_INPUT_KEY {
    uint16_t  ScanCode;
    uint16_t  UnicodeChar;
} EFI_INPUT_KEY;

struct EFI_SIMPLE_TEXT_INPUT_PROTOCOL;

typedef uint64_t (*EFI_INPUT_RESET)(struct EFI_SIMPLE_TEXT_INPUT_PROTOCOL *This, uint8_t ExtendedVerification);
typedef uint64_t (*EFI_INPUT_READ_KEY)(struct EFI_SIMPLE_TEXT_INPUT_PROTOCOL *This, EFI_INPUT_KEY *Key);

typedef struct EFI_SIMPLE_TEXT_INPUT_PROTOCOL {
    EFI_INPUT_RESET     Reset;
    EFI_INPUT_READ_KEY  ReadKeyStroke;
    void                *WaitForKey;
} EFI_SIMPLE_TEXT_INPUT_PROTOCOL;

struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;

typedef uint64_t (*EFI_TEXT_RESET)(struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This, uint8_t ExtendedVerification);
typedef uint64_t (*EFI_TEXT_STRING)(struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This, int16_t *String);
typedef uint64_t (*EFI_TEXT_TEST_STRING)(struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This, int16_t *String);
typedef uint64_t (*EFI_TEXT_QUERY_MODE)(struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This, uint64_t ModeNumber, uint64_t *Columns, uint64_t *Rows);
typedef uint64_t (*EFI_TEXT_SET_MODE)(struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This, uint64_t ModeNumber);
typedef uint64_t (*EFI_TEXT_SET_ATTRIBUTE)(struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This, uint64_t Attribute);
typedef uint64_t (*EFI_TEXT_CLEAR_SCREEN)(struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This);
typedef uint64_t (*EFI_TEXT_SET_CURSOR_POSITION)(struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This, uint64_t Column, uint64_t Row);
typedef uint64_t (*EFI_TEXT_ENABLE_CURSOR)(struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *This, uint8_t Visible);

typedef struct SIMPLE_TEXT_OUTPUT_MODE {
    int32_t   MaxMode;
    int32_t   Mode;
    int32_t   Attribute;
    int32_t   CursorColumn;
    int32_t   CursorRow;
    uint8_t CursorVisible;
} SIMPLE_TEXT_OUTPUT_MODE;

typedef struct EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL {
    EFI_TEXT_RESET                  Reset;
    EFI_TEXT_STRING                 OutputString;
    EFI_TEXT_TEST_STRING            TestString;
    EFI_TEXT_QUERY_MODE             QueryMode;
    EFI_TEXT_SET_MODE               SetMode;
    EFI_TEXT_SET_ATTRIBUTE          SetAttribute;
    EFI_TEXT_CLEAR_SCREEN           ClearScreen;
    EFI_TEXT_SET_CURSOR_POSITION    SetCursorPosition;
    EFI_TEXT_ENABLE_CURSOR          EnableCursor;
    SIMPLE_TEXT_OUTPUT_MODE         *Mode;
} EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL;

typedef struct EFI_TIME {
    uint16_t  Year;
    uint8_t   Month;
    uint8_t   Day;
    uint8_t   Hour;
    uint8_t   Minute;
    uint8_t   Second;
    uint8_t   Pad1;
    uint32_t  Nanosecond;
    int16_t   TimeZone;
    uint8_t   Daylight;
    uint8_t   PAD2;
} EFI_TIME;

typedef struct EFI_TIME_CAPABILITIES {
    uint32_t  Resolution;
    uint32_t  Accuracy;
    uint8_t SetsToZero;
} EFI_TIME_CAPABILITIES;

typedef enum EFI_RESET_TYPE {
    EfiResetCold,
    EfiResetWarm,
    EfiResetShutdown,
    EfiResetPlatformSpecific
} EFI_RESET_TYPE;

typedef struct EFI_CAPSULE_BLOCK_DESCRIPTOR {
    uint64_t  Length;
    union {
        uint64_t    DataBlock;
        uint64_t    ContinuationPointer;
    } Union;
} EFI_CAPSULE_BLOCK_DESCRIPTOR;

typedef struct EFI_CAPSULE_HEADER {
    EFI_GUID    CapsuleGuid;
    uint32_t      HeaderSize;
    uint32_t      Flags;
    uint32_t      CapsuleImageSize;
} EFI_CAPSULE_HEADER;

typedef uint64_t (*EFI_GET_TIME)(EFI_TIME *Time, EFI_TIME_CAPABILITIES *Capabilities);
typedef uint64_t (*EFI_SET_TIME)(EFI_TIME *Time);
typedef uint64_t (*EFI_GET_WAKEUP_TIME)(uint8_t *Enabled, uint8_t *Pending, EFI_TIME *Time);
typedef uint64_t (*EFI_SET_WAKEUP_TIME)(uint8_t Enable, EFI_TIME *Time);
typedef uint64_t (*EFI_SET_VIRTUAL_ADDRESS_MAP)(uint64_t MemoryMapSize, uint64_t DescriptorSize, uint32_t DescriptorVersion, EFI_MEMORY_DESCRIPTOR *VirtualMap);
typedef uint64_t (*EFI_CONVERT_POINTER)(uint64_t DebugDisposition, void **Address);
typedef uint64_t (*EFI_GET_VARIABLE)(int16_t *VariableName, EFI_GUID *VendorGuid, uint32_t *Attributes, uint64_t *DataSize, void *Data);
typedef uint64_t (*EFI_GET_NEXT_VARIABLE_NAME)(uint64_t *VariableNameSize, int16_t *VariableName, EFI_GUID *VendorGuid);
typedef uint64_t (*EFI_SET_VARIABLE)(int16_t *VariableName, EFI_GUID *VendorGuid, uint32_t Attributes, uint64_t DataSize, void *Data);
typedef uint64_t (*EFI_GET_NEXT_HIGH_MONO_COUNT)(uint32_t *HighCount);
typedef uint64_t (*EFI_RESET_SYSTEM)(EFI_RESET_TYPE ResetType, uint64_t ResetStatus, uint64_t DataSize, void *ResetData);
typedef uint64_t (*EFI_UPDATE_CAPSULE)(EFI_CAPSULE_HEADER **CapsuleHeaderArray, uint64_t CapsuleCount, uint64_t ScatterGatherList);
typedef uint64_t (*EFI_QUERY_CAPSULE_CAPABILITIES)(EFI_CAPSULE_HEADER **CapsuleHeaderArray, uint64_t CapsuleCount, uint64_t *MaximumCapsuleSize, EFI_RESET_TYPE *ResetType);
typedef uint64_t (*EFI_QUERY_VARIABLE_INFO)(uint32_t Attributes, uint64_t *MaximumVariableStorageSize, uint64_t *RemainingVariableStorageSize, uint64_t *MaximumVariableSize);

typedef struct EFI_RUNTIME_SERVICES {
    EFI_TABLE_HEADER                Hdr;
    EFI_GET_TIME                    GetTime;
    EFI_SET_TIME                    SetTime;
    EFI_GET_WAKEUP_TIME             GetWakeupTime;
    EFI_SET_WAKEUP_TIME             SetWakeupTime;
    EFI_SET_VIRTUAL_ADDRESS_MAP     SetVirtualAddressMap;
    EFI_CONVERT_POINTER             ConvertPointer;
    EFI_GET_VARIABLE                GetVariable;
    EFI_GET_NEXT_VARIABLE_NAME      GetNextVariableName;
    EFI_SET_VARIABLE                SetVariable;
    EFI_GET_NEXT_HIGH_MONO_COUNT    GetNextHighMonotonicCount;
    EFI_RESET_SYSTEM                ResetSystem;
    EFI_UPDATE_CAPSULE              UpdateCapsule;
    EFI_QUERY_CAPSULE_CAPABILITIES  QueryCapsuleCapabilities;
    EFI_QUERY_VARIABLE_INFO         QueryVariableInfo;
} EFI_RUNTIME_SERVICES;

typedef struct EFI_DEVICE_PATH_PROTOCOL {
    uint8_t   Type;
    uint8_t   SubType;
    uint8_t   Length[2];
} EFI_DEVICE_PATH_PROTOCOL;

typedef void (*EFI_EVENT_NOTIFY)(void *Event, void *Context);

typedef enum EFI_TIMER_DELAY {
    TimerCancel,
    TimerPeriodic,
    TimerRelative
} EFI_TIMER_DELAY;

typedef enum EFI_ALLOCATE_TYPE {
    AllocateAnyPages,
    AllocateMaxAddress,
    AllocateAddress,
    MaxAllocateType
} EFI_ALLOCATE_TYPE;

typedef enum EFI_MEMORY_TYPE {
    EfiReservedMemoryType,
    EfiLoaderCode,
    EfiLoaderData,
    EfiBootServicesCode,
    EfiBootServicesData,
    EfiRuntimeServicesCode,
    EfiRuntimeServicesData,
    EfiConventionalMemory,
    EfiUnusableMemory,
    EfiACPIReclaimMemory,
    EfiACPIMemoryNVS,
    EfiMemoryMappedIO,
    EfiMemoryMappedIOPortSpace,
    EfiPalCode,
    EfiPersistentMemory,
    EfiMaxMemoryType
} EFI_MEMORY_TYPE;

typedef enum EFI_INTERFACE_TYPE {
    EFI_NATIVE_INTERFACE
} EFI_INTERFACE_TYPE;

typedef enum EFI_LOCATE_SEARCH_TYPE {
    AllHandles,
    ByRegisterNotify,
    ByProtocol
} EFI_LOCATE_SEARCH_TYPE;

typedef struct EFI_OPEN_PROTOCOL_INFORMATION_ENTRY {
    void  *AgentHandle;
    void  *ControllerHandle;
    uint32_t      Attributes;
    uint32_t      OpenCount;
} EFI_OPEN_PROTOCOL_INFORMATION_ENTRY;

typedef uint64_t (*EFI_RAISE_TPL)(uint64_t NewTpl);
typedef uint64_t (*EFI_RESTORE_TPL)(uint64_t OldTpl);
typedef uint64_t (*EFI_ALLOCATE_PAGES)(EFI_ALLOCATE_TYPE Type, EFI_MEMORY_TYPE MemoryType, uint64_t Pages, uint64_t *Memory);
typedef uint64_t (*EFI_FREE_PAGES)(uint64_t Memory, uint64_t Pages);
typedef uint64_t (*EFI_GET_MEMORY_MAP)(uint64_t *MemoryMapSize, EFI_MEMORY_DESCRIPTOR *MemoryMap, uint64_t *MapKey, uint64_t *DescriptorSize, uint32_t *DescriptorVersion);
typedef uint64_t (*EFI_ALLOCATE_POOL)(EFI_MEMORY_TYPE PoolType, uint64_t Size, void **Buffer);
typedef uint64_t (*EFI_FREE_POOL)(void *Buffer);
typedef uint64_t (*EFI_CREATE_EVENT)(uint32_t Type, uint64_t NotifyTpl, EFI_EVENT_NOTIFY NotifyFunction, void *NotifyContext, EFI_GUID *EventGroup, void **Event);
typedef uint64_t (*EFI_SET_TIMER)(void *Event, EFI_TIMER_DELAY Type, uint64_t TriggerTime);
typedef uint64_t (*EFI_WAIT_FOR_EVENT)(uint64_t NumberOfEvents, void **Event, uint64_t *Index);
typedef uint64_t (*EFI_SIGNAL_EVENT)(void *Event);
typedef uint64_t (*EFI_CLOSE_EVENT)(void *Event);
typedef uint64_t (*EFI_CHECK_EVENT)(void *Event);
typedef uint64_t (*EFI_INSTALL_PROTOCOL_INTERFACE)(void *Handle, EFI_GUID *Protocol, EFI_INTERFACE_TYPE InterfaceType, void *Interface);
typedef uint64_t (*EFI_REINSTALL_PROTOCOL_INTERFACE)(void *Handle, EFI_GUID *Protocol, void *OldInterface, void *NewInterface);
typedef uint64_t (*EFI_UNINSTALL_PROTOCOL_INTERFACE)(void *Handle, EFI_GUID *Protocol, void *Interface);
typedef uint64_t (*EFI_HANDLE_PROTOCOL)(void *Handle, EFI_GUID *Protocol, void **Interface);
typedef uint64_t (*EFI_REGISTER_PROTOCOL_NOTIFY)(EFI_GUID *Protocol, void *Event, void **Registration);
typedef uint64_t (*EFI_LOCATE_HANDLE)(EFI_LOCATE_SEARCH_TYPE SearchType, EFI_GUID *Protocol, void *SearchKey, uint64_t *BufferSize, void **Buffer);
typedef uint64_t (*EFI_LOCATE_DEVICE_PATH)(EFI_GUID *Protocol, EFI_DEVICE_PATH_PROTOCOL **DevicePath, void **Device);
typedef uint64_t (*EFI_INSTALL_CONFIGURATION_TABLE)(EFI_GUID *Guid, void *Table);
typedef uint64_t (*EFI_IMAGE_LOAD)(uint8_t BootPolicy, void *ParentImageHandle, EFI_DEVICE_PATH_PROTOCOL *DevicePath, void *SourceBuffer, uint64_t SourceSize, void **ImageHandle);
typedef uint64_t (*EFI_IMAGE_START)(void *ImageHandle, uint64_t *ExitDataSize, int16_t **ExitData);
typedef uint64_t (*EFI_EXIT)(void *ImageHandle, uint64_t ExitStatus, uint64_t ExitDataSize, int16_t *ExitData);
typedef uint64_t (*EFI_IMAGE_UNLOAD)(void *ImageHandle);
typedef uint64_t (*EFI_EXIT_BOOT_SERVICES)(void *ImageHandle, uint64_t MapKey);
typedef uint64_t (*EFI_GET_NEXT_MONOTONIC_COUNT)(uint64_t *Count);
typedef uint64_t (*EFI_STALL)(uint64_t Microseconds);
typedef uint64_t (*EFI_SET_WATCHDOG_TIMER)(uint64_t Timeout, uint64_t WatchdogCode, uint64_t DataSize, int16_t *WatchdogData);
typedef uint64_t (*EFI_CONNECT_CONTROLLER)(void *ControllerHandle, void **DriverImageHandle, EFI_DEVICE_PATH_PROTOCOL *RemainingDevicePath, uint8_t Recursive);
typedef uint64_t (*EFI_DISCONNECT_CONTROLLER)(void *ControllerHandle, void *DriverImageHandle, void *ChildHandle);
typedef uint64_t (*EFI_OPEN_PROTOCOL)(void *Handle, EFI_GUID *Protocol, void **Interface, void *AgentHandle, void *ControllerHandle, uint32_t Attributes);
typedef uint64_t (*EFI_CLOSE_PROTOCOL)(void *Handle, EFI_GUID *Protocol, void *AgentHandle, void *ControllerHandle);
typedef uint64_t (*EFI_OPEN_PROTOCOL_INFORMATION)(void *Handle, EFI_GUID *Protocol, EFI_OPEN_PROTOCOL_INFORMATION_ENTRY **EntryBuffer, uint64_t *EntryCount);
typedef uint64_t (*EFI_PROTOCOLS_PER_HANDLE)(void *Handle, EFI_GUID ***ProtocolBuffer, uint64_t *ProtocolBufferCount);
typedef uint64_t (*EFI_LOCATE_HANDLE_BUFFER)(EFI_LOCATE_SEARCH_TYPE SearchType, EFI_GUID *Protocol, void *SearchKey, uint64_t *NoHandles, void ***Buffer);
typedef uint64_t (*EFI_LOCATE_PROTOCOL)(EFI_GUID *Protocol, void *Registration, void **Interface);
typedef uint64_t (*EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES)(void **Handle, ...);
typedef uint64_t (*EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES)(void **Handle, ...);
typedef uint64_t (*EFI_CALCULATE_CRC32)(void *Data, uint64_t DataSize, uint32_t *Crc32);
typedef uint64_t (*EFI_COPY_MEM)(void *Destination, void *Source, uint64_t Length);
typedef uint64_t (*EFI_SET_MEM)(void *Buffer, uint64_t Size, uint8_t Value);
typedef uint64_t (*EFI_CREATE_EVENT_EX)(uint32_t Type, uint64_t NotifyTpl, EFI_EVENT_NOTIFY NotifyFunction, void *NotifyContext, EFI_GUID *EventGroup, void **Event);

typedef struct EFI_BOOT_SERVICES {
    EFI_TABLE_HEADER                            Hdr;
    EFI_RAISE_TPL                               RaiseTPL;
    EFI_RESTORE_TPL                             RestoreTPL;
    EFI_ALLOCATE_PAGES                          AllocatePages;
    EFI_FREE_PAGES                              FreePages;
    EFI_GET_MEMORY_MAP                          GetMemoryMap;
    EFI_ALLOCATE_POOL                           AllocatePool;
    EFI_FREE_POOL                               FreePool;
    EFI_CREATE_EVENT                            CreateEvent;
    EFI_SET_TIMER                               SetTimer;
    EFI_WAIT_FOR_EVENT                          WaitForEvent;
    EFI_SIGNAL_EVENT                            SignalEvent;
    EFI_CLOSE_EVENT                             CloseEvent;
    EFI_CHECK_EVENT                             CheckEvent;
    EFI_INSTALL_PROTOCOL_INTERFACE              InstallProtocolInterface;
    EFI_REINSTALL_PROTOCOL_INTERFACE            ReinstallProtocolInterface;
    EFI_UNINSTALL_PROTOCOL_INTERFACE            UninstallProtocolInterface;
    EFI_HANDLE_PROTOCOL                         HandleProtocol;
    void                                        *Reserved;
    EFI_REGISTER_PROTOCOL_NOTIFY                RegisterProtocolNotify;
    EFI_LOCATE_HANDLE                           LocateHandle;
    EFI_LOCATE_DEVICE_PATH                      LocateDevicePath;
    EFI_INSTALL_CONFIGURATION_TABLE             InstallConfigurationTable;
    EFI_IMAGE_LOAD                              LoadImage;
    EFI_IMAGE_START                             StartImage;
    EFI_EXIT                                    Exit;
    EFI_IMAGE_UNLOAD                            UnloadImage;
    EFI_EXIT_BOOT_SERVICES                      ExitBootServices;
    EFI_GET_NEXT_MONOTONIC_COUNT                GetNextMonotonicCount;
    EFI_STALL                                   Stall;
    EFI_SET_WATCHDOG_TIMER                      SetWatchdogTimer;
    EFI_CONNECT_CONTROLLER                      ConnectController;
    EFI_DISCONNECT_CONTROLLER                   DisconnectController;
    EFI_OPEN_PROTOCOL                           OpenProtocol;
    EFI_CLOSE_PROTOCOL                          CloseProtocol;
    EFI_OPEN_PROTOCOL_INFORMATION               OpenProtocolInformation;
    EFI_PROTOCOLS_PER_HANDLE                    ProtocolsPerHandle;
    EFI_LOCATE_HANDLE_BUFFER                    LocateHandleBuffer;
    EFI_LOCATE_PROTOCOL                         LocateProtocol;
    EFI_INSTALL_MULTIPLE_PROTOCOL_INTERFACES    InstallMultipleProtocolInterfaces;
    EFI_UNINSTALL_MULTIPLE_PROTOCOL_INTERFACES  UninstallMultipleProtocolInterfaces;
    EFI_CALCULATE_CRC32                         CalculateCrc32;
    EFI_COPY_MEM                                CopyMem;
    EFI_SET_MEM                                 SetMem;
    EFI_CREATE_EVENT_EX                         CreateEventEx;
} EFI_BOOT_SERVICES;

typedef struct EFI_CONFIGURATION_TABLE {
    EFI_GUID    VendorGuid;
    void        *VendorTable;
} EFI_CONFIGURATION_TABLE;

typedef struct EfiSystemTable {
    EFI_TABLE_HEADER                Hdr;
    int16_t                          *FirmwareVendor;
    uint32_t                          FirmwareRevision;
    void *                     ConsoleInHandle;
    EFI_SIMPLE_TEXT_INPUT_PROTOCOL  *ConIn;
    void *                     ConsoleOutHandle;
    EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *ConOut;
    void *                     StandardErrorHandle;
    EFI_SIMPLE_TEXT_OUTPUT_PROTOCOL *StdErr;
    EFI_RUNTIME_SERVICES            *RuntimeServices;
    EFI_BOOT_SERVICES               *BootServices;
    uint64_t                           NumberOfTableEntries;
    EFI_CONFIGURATION_TABLE         *ConfigurationTable;
} EfiSystemTable;

int efi_main(void *imageHandle, EfiSystemTable* systemTable) {
    systemTable->ConOut->OutputString(systemTable->ConOut, (int16_t *)L"Hello, Minimal World!");
    for(;;) __asm__("hlt");

    return 0;
}