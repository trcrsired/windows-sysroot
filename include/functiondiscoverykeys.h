//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#pragma once
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifndef DEFINE_API_PKEY
#include <propkey.h>
#endif

#include <functiondiscoverykeys_devpkey.h>

/* 08c0c253-a154-4746-9005-82de5317148b */
DEFINE_PROPERTYKEY(PKEY_FunctionInstance, 0x08c0c253, 0xa154, 0x4746, 0x90, 0x05, 0x82, 0xde, 0x53, 0x17, 0x14, 0x8b, 0x00000001);  // VT_UNKNOWN

// FMTID_FD = {904b03a2-471d-423c-a584-f3483238a146}
DEFINE_GUID(FMTID_FD, 0x904b03a2, 0x471d, 0x423c, 0xa5, 0x84, 0xf3, 0x48, 0x32, 0x38, 0xa1, 0x46);
DEFINE_API_PKEY(PKEY_FD_Visibility, VisibilityFlags, 0x904b03a2, 0x471d, 0x423c, 0xa5, 0x84, 0xf3, 0x48, 0x32, 0x38, 0xa1, 0x46, 0x00000001); //    VT_UINT
#define FD_Visibility_Default   0
#define FD_Visibility_Hidden    1

// FMTID_Device = {78C34FC8-104A-4aca-9EA4-524D52996E57}
DEFINE_GUID(FMTID_Device, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57);

DEFINE_API_PKEY(PKEY_Device_NotPresent,     DeviceNotPresent   , 0x904b03a2, 0x471d, 0x423c, 0xa5, 0x84, 0xf3, 0x48, 0x32, 0x38, 0xa1, 0x46, 0x00000002); //    VT_UINT
DEFINE_API_PKEY(PKEY_Device_QueueSize,      DeviceQueueSize    , 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000024); //    VT_UI4
DEFINE_API_PKEY(PKEY_Device_Status,         DeviceStatus       , 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000025); //    VT_LPWSTR
DEFINE_API_PKEY(PKEY_Device_Comment,        DeviceComment      , 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000026); //    VT_LPWSTR
DEFINE_API_PKEY(PKEY_Device_Model,          DeviceModel        , 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000027); //    VT_LPWSTR

// FMTID_Device = {53808008-07BB-4661-BC3C-B5953E708560}
DEFINE_GUID(FMTID_DeviceInterface, 0x53808008, 0x07BB, 0x4661, 0xBC, 0x3C, 0xB5, 0x95, 0x3E, 0x70, 0x85, 0x60);

DEFINE_API_PKEY(PKEY_DeviceInterface_DevicePath, DevicePath    , 0x53808008, 0x07BB, 0x4661, 0xBC, 0x3C, 0xB5, 0x95, 0x3E, 0x70, 0x85, 0x60, 0x00000001); //    VT_LPWSTR

DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Address,                  0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000033);  // VT_LPWSTR or VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_DiscoveryMethod,          0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000034);  // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsEncrypted,              0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000035);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsAuthenticated,          0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000036);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsConnected,              0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000037);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsPaired,                 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000038);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Icon,                     0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000039);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Version,                  0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000041);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Last_Seen,                0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000042);  // VT_FIELTIME
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Last_Connected,           0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000043);  // VT_FILETIME
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsShowInDisconnectedState, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000044);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsLocalMachine,           0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000046);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_MetadataPath,             0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000047);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsMetadataSearchInProgress, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000048);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_MetadataChecksum,         0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000049);  // VT_UI1 | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsNotInterestingForDisplay, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000004A);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_LaunchDeviceStageOnDeviceConnect, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000004C);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_LaunchDeviceStageFromExplorer, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000004D);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_BaselineExperienceId,     0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000004E);  // VT_CLSID
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsDeviceUniquelyIdentifiable, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000004F);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_AssociationArray,         0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000050);  // VT_LPWSTR  | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_DeviceDescription1,       0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000051);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_DeviceDescription2,       0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000052);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsNotWorkingProperly,     0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000053);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsSharedDevice,           0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000054);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsNetworkDevice,          0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000055);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_IsDefaultDevice,          0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000056);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_MetadataCabinet,          0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000057);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_RequiresPairingElevation, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000058);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_ExperienceId,             0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000059);  // VT_CLSID
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Category,                 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000005A);  // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Category_Desc_Singular,   0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000005B);  // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Category_Desc_Plural,     0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000005C);  // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Category_Icon,            0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000005D);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_CategoryGroup_Desc,       0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000005E);  // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_CategoryGroup_Icon,       0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x0000005F);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_PrimaryCategory,          0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000061);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_UnpairUninstall,          0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000062);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_RequiresUninstallElevation, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000063);  // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_DeviceFunctionSubRank,    0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000064);  // VT_UI4
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_AlwaysShowDeviceAsConnected, 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000065);  // VT_BOOL

DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_FriendlyName,             0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003000);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_Manufacturer,             0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00002000);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_ModelName,                0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00002002);  // VT_LPWSTR (localizable)
DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_ModelNumber,              0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00002003);  // VT_LPWSTR

DEFINE_PROPERTYKEY(PKEY_DeviceDisplay_InstallInProgress,        0x83da6326, 0x97a6, 0x4088, 0x94, 0x53, 0xa1, 0x92, 0x3f, 0x57, 0x3b, 0x29, 9);     // DEVPROP_TYPE_BOOLEAN

// FMTID_Pairing = {8807CAE6-7DB6-4f10-8EE4-435EAA1392BC}
DEFINE_GUID(FMTID_Pairing, 0x8807cae6, 0x7db6, 0x4f10, 0x8e, 0xe4, 0x43, 0x5e, 0xaa, 0x13, 0x92, 0xbc);
DEFINE_PROPERTYKEY(PKEY_Pairing_ListItemText, 0x8807cae6, 0x7db6, 0x4f10, 0x8e, 0xe4, 0x43, 0x5e, 0xaa, 0x13, 0x92, 0xbc, 0x0000001);        // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_Pairing_ListItemDescription, 0x8807cae6, 0x7db6, 0x4f10, 0x8e, 0xe4, 0x43, 0x5e, 0xaa, 0x13, 0x92, 0xbc, 0x0000002); // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_Pairing_ListItemIcon, 0x8807cae6, 0x7db6, 0x4f10, 0x8e, 0xe4, 0x43, 0x5e, 0xaa, 0x13, 0x92, 0xbc, 0x0000003);        // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_Pairing_ListItemDefault, 0x8807cae6, 0x7db6, 0x4f10, 0x8e, 0xe4, 0x43, 0x5e, 0xaa, 0x13, 0x92, 0xbc, 0x0000004);     // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_Pairing_IsWifiOnlyDevice, 0x8807cae6, 0x7db6, 0x4f10, 0x8e, 0xe4, 0x43, 0x5e, 0xaa, 0x13, 0x92, 0xbc, 0x0000010);    // VT_BOOL

// DiscoveryMethod values
#define DEVICEDISPLAY_DISCOVERYMETHOD_BLUETOOTH         L"Bluetooth"
#define DEVICEDISPLAY_DISCOVERYMETHOD_BLUETOOTH_LE      L"Bluetooth Low Energy"
#define DEVICEDISPLAY_DISCOVERYMETHOD_NETBIOS           L"NetBIOS"
#define DEVICEDISPLAY_DISCOVERYMETHOD_AD_PRINTER        L"Published Printer"
#define DEVICEDISPLAY_DISCOVERYMETHOD_PNP               L"PnP"
#define DEVICEDISPLAY_DISCOVERYMETHOD_UPNP              L"UPnP"
#define DEVICEDISPLAY_DISCOVERYMETHOD_WSD               L"WSD"
#define DEVICEDISPLAY_DISCOVERYMETHOD_WUSB              L"WUSB"
#define DEVICEDISPLAY_DISCOVERYMETHOD_WFD               L"WiFiDirect"
#define DEVICEDISPLAY_DISCOVERYMETHOD_ASP_INFRA         L"AspInfra"


//  Name:     System.Device.BIOSVersion -- PKEY_Device_BIOSVersion
//  Type:     String -- VT_LPWSTR  (For variants: VT_BSTR)  Legacy code may treat this as VT_BSTR.
//  FormatID: EAEE7F1D-6A33-44D1-9441-5F46DEF23198, 9
DEFINE_PROPERTYKEY(PKEY_Device_BIOSVersion, 0xEAEE7F1D, 0x6A33, 0x44D1, 0x94, 0x41, 0x5F, 0x46, 0xDE, 0xF2, 0x31, 0x98, 9);

DEFINE_API_PKEY(PKEY_Write_Time,            WriteTime          , 0xf53b7e1c, 0x77e0, 0x4450, 0x8c, 0x5f, 0xa7, 0x6c, 0xc7, 0xfd, 0xe0, 0x58, 0x00000100); //    VT_FILETIME
DEFINE_API_PKEY(PKEY_Create_Time,           CreateTime         , 0xf53b7e1c, 0x77e0, 0x4450, 0x8c, 0x5f, 0xa7, 0x6c, 0xc7, 0xfd, 0xe0, 0x58, 0x00000101); //    VT_FILETIME

#ifdef FD_XP
DEFINE_API_PKEY(PKEY_Device_InstanceId, DeviceInstanceId   , 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000100); //    VT_LPWSTR
#endif
DEFINE_API_PKEY(PKEY_Device_Interface,  DeviceInterface    , 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00000101); //    VT_CLSID

DEFINE_API_PKEY(PKEY_ExposedIIDs,           ExposedIIDs       , 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00003002); //  VT_VECTOR | VT_CLSID
DEFINE_API_PKEY(PKEY_ExposedCLSIDs,         ExposedCLSIDs     , 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00003003); //  VT_VECTOR | VT_CLSID
DEFINE_API_PKEY(PKEY_InstanceValidatorClsid,InstanceValidator , 0x78c34fc8, 0x104a, 0x4aca, 0x9e, 0xa4, 0x52, 0x4d, 0x52, 0x99, 0x6e, 0x57, 0x00003004); // VT_CLSID

// FMTID_WSD = {92506491-FF95-4724-A05A-5B81885A7C92}
DEFINE_GUID(FMTID_WSD, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92);

DEFINE_API_PKEY(PKEY_WSD_AddressURI, WSD_AddressURI, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00001000);   // VT_LPWSTR
DEFINE_API_PKEY(PKEY_WSD_Types, WSD_Types, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00001001); // VT_LPWSTR
DEFINE_API_PKEY(PKEY_WSD_Scopes, WSD_Scopes, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00001002);   // VT_LPWSTR
DEFINE_API_PKEY(PKEY_WSD_MetadataVersion, WSD_MetadataVersion, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00001003); //VT_UI8
DEFINE_API_PKEY(PKEY_WSD_AppSeqInstanceID, WSD_AppSeqInstanceID, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00001004);   // VT_UI8
DEFINE_API_PKEY(PKEY_WSD_AppSeqSessionID, WSD_AppSeqSessionID, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00001005); // VT_LPWSTR
DEFINE_API_PKEY(PKEY_WSD_AppSeqMessageNumber, WSD_AppSeqMessageNumber, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00001006); // VT_UI8
DEFINE_API_PKEY(PKEY_WSD_XAddrs, WSD_XAddrs, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00002000); // VT_LPWSTR or VT_VECTOR | VT_LPWSTR

DEFINE_API_PKEY(PKEY_WSD_MetadataClean, WSD_MetadataClean, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00000001);   // VT_BOOL
DEFINE_API_PKEY(PKEY_WSD_ServiceInfo, WSD_ServiceInfo, 0x92506491, 0xFF95, 0x4724, 0xA0, 0x5A, 0x5B, 0x81, 0x88, 0x5A, 0x7C, 0x92, 0x00000002);   // VT_VECTOR|VT_VARIANT (variants are VT_UNKNOWN)

DEFINE_API_PKEY(PKEY_PUBSVCS_TYPE, PUBSVCS_TYPE, 0xF1B88AD3, 0x109C, 0x4FD2, 0xBA, 0x3F, 0x53, 0x5A, 0x76, 0x5F, 0x82, 0xF4, 0x00005001); // VT_LPWSTR
DEFINE_API_PKEY(PKEY_PUBSVCS_SCOPE, PUBSVCS_SCOPE, 0x2AE2B567, 0xEECB, 0x4A3E, 0xB7, 0x53, 0x54, 0xC7, 0x25, 0x49, 0x43, 0x66, 0x00005002);   // VT_LPWSTR | VT_VECTOR
DEFINE_API_PKEY(PKEY_PUBSVCS_METADATA, PUBSVCS_METADATA, 0x63C6D5B8, 0xF73A, 0x4ACA, 0x96, 0x7E, 0x0C, 0xC7, 0x87, 0xE0, 0xB5, 0x59, 0x00005003); // VT_LPWSTR
DEFINE_API_PKEY(PKEY_PUBSVCS_METADATA_VERSION, PUBSVCS_METADATA_VERSION, 0xC0C96C15, 0x1823, 0x4E5B, 0x93, 0x48, 0xE8, 0x25, 0x19, 0x92, 0x3F, 0x04, 0x00005004); // VT_UI8
DEFINE_API_PKEY(PKEY_PUBSVCS_NETWORK_PROFILES_ALLOWED, PUBSVCS_NETWORK_PROFILES_ALLOWED, 0x63C6D5B8, 0xF73A, 0x4ACA, 0x96, 0x7E, 0x0C, 0xC7, 0x87, 0xE0, 0xB5, 0x59, 0x00005005); // VT_VECTOR | VT_LPWSTR
DEFINE_API_PKEY(PKEY_PUBSVCS_NETWORK_PROFILES_DENIED, PUBSVCS_NETWORK_PROFILES_DENIED, 0x63C6D5B8, 0xF73A, 0x4ACA, 0x96, 0x7E, 0x0C, 0xC7, 0x87, 0xE0, 0xB5, 0x59, 0x00005006); // VT_VECTOR | VT_LPWSTR
DEFINE_API_PKEY(PKEY_PUBSVCS_NETWORK_PROFILES_DEFAULT, PUBSVCS_NETWORK_PROFILES_DEFAULT, 0x63C6D5B8, 0xF73A, 0x4ACA, 0x96, 0x7E, 0x0C, 0xC7, 0x87, 0xE0, 0xB5, 0x59, 0x00005007); // VT_BOOL

// FMTID_PNPX = {656A3BB3-ECC0-43FD-8477-4AE0404A96CD}
DEFINE_GUID(FMTID_PNPX, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD);
        // from Discovery messages
DEFINE_PROPERTYKEY(PKEY_PNPX_GlobalIdentity, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00001000);   // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PNPX_Types, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00001001);   // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_PNPX_Scopes, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00001002);   // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_PNPX_XAddrs, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00001003);   // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_PNPX_MetadataVersion, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00001004);   // VT_UI8
DEFINE_PROPERTYKEY(PKEY_PNPX_ID, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00001005);   // VT_LPWSTR

        // for Directed Discovery
DEFINE_PROPERTYKEY(PKEY_PNPX_RemoteAddress, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00001006);   // VT_LPWSTR
        // for installable ssdp root devices
DEFINE_PROPERTYKEY(PKEY_PNPX_RootProxy, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00001007);   // VT_BOOL


        // from ThisModel metadata
#define PKEY_PNPX_Manufacturer PKEY_DeviceDisplay_Manufacturer // Deprecated! Please use PKEY_DeviceDisplay_Manufacturer
DEFINE_PROPERTYKEY(PKEY_PNPX_ManufacturerUrl,          0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00002001);  // VT_LPWSTR
#define PKEY_PNPX_ModelName PKEY_DeviceDisplay_ModelName // Deprecated! Please use PKEY_DeviceDisplay_ModelName
#define PKEY_PNPX_ModelNumber PKEY_DeviceDisplay_ModelNumber //Depricated! Please use PKEY_DeviceDisplayModelNumber
DEFINE_PROPERTYKEY(PKEY_PNPX_ModelUrl,                 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00002004);  // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PNPX_Upc,                      0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00002005);   // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PNPX_PresentationUrl,          0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00002006);   // VT_LPWSTR
        // from ThisDevice metadata
#define PKEY_PNPX_FriendlyName PKEY_DeviceDisplay_FriendlyName // Deprecated! Please use PKEY_DeviceDisplay_Name
DEFINE_PROPERTYKEY(PKEY_PNPX_FirmwareVersion, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003001);   // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PNPX_SerialNumber, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003002);   // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PNPX_DeviceCategory, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003004);  // VT_LPWSTR | VT_VECTOR

    // for secure devices
DEFINE_PROPERTYKEY(PKEY_PNPX_SecureChannel, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00007001);   // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_PNPX_CompactSignature, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00007002);   // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_PNPX_DeviceCertHash, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00007003);   // VT_LPWSTR


        // DeviceCategory values
#define PNPX_DEVICECATEGORY_COMPUTER                         L"Computers"
#define PNPX_DEVICECATEGORY_INPUTDEVICE                      L"Input"
#define PNPX_DEVICECATEGORY_PRINTER                          L"Printers"
#define PNPX_DEVICECATEGORY_SCANNER                          L"Scanners"
#define PNPX_DEVICECATEGORY_FAX                              L"FAX"
#define PNPX_DEVICECATEGORY_MFP                              L"MFP"
#define PNPX_DEVICECATEGORY_CAMERA                           L"Cameras"
#define PNPX_DEVICECATEGORY_STORAGE                          L"Storage"
#define PNPX_DEVICECATEGORY_NETWORK_INFRASTRUCTURE           L"NetworkInfrastructure"
#define PNPX_DEVICECATEGORY_DISPLAYS                         L"Displays"
#define PNPX_DEVICECATEGORY_MULTIMEDIA_DEVICE                L"MediaDevices"
#define PNPX_DEVICECATEGORY_GAMING_DEVICE                    L"Gaming"
#define PNPX_DEVICECATEGORY_TELEPHONE                        L"Phones"
#define PNPX_DEVICECATEGORY_HOME_AUTOMATION_SYSTEM           L"HomeAutomation"
#define PNPX_DEVICECATEGORY_HOME_SECURITY_SYSTEM             L"HomeSecurity"
#define PNPX_DEVICECATEGORY_OTHER                            L"Other"

DEFINE_PROPERTYKEY(PKEY_PNPX_DeviceCategory_Desc, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003005);   // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_PNPX_Category_Desc_NonPlural,  0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003010);   // VT_LPWSTR | VT_VECTOR

DEFINE_PROPERTYKEY(PKEY_PNPX_PhysicalAddress, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003006);   // VT_UI1 | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_PNPX_NetworkInterfaceLuid, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003007);   // VT_UI8
DEFINE_PROPERTYKEY(PKEY_PNPX_NetworkInterfaceGuid, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003008);   // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PNPX_IpAddress, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00003009);   // VT_LPWSTR | VT_VECTOR
        // from Relationship metadata
DEFINE_PROPERTYKEY(PKEY_PNPX_ServiceAddress, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00004000);   // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_PNPX_ServiceId, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00004001);   // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PNPX_ServiceTypes, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00004002);   // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_PNPX_ServiceControlUrl, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x4004);    // VT_LPWSTR 
DEFINE_PROPERTYKEY(PKEY_PNPX_ServiceDescUrl, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x4005);    // VT_LPWSTR 
DEFINE_PROPERTYKEY(PKEY_PNPX_ServiceEventSubUrl, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x4006);    // VT_LPWSTR 

        // Association DB PKEYs
DEFINE_API_PKEY(PKEY_PNPX_Devnode, PnPXDevNode, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00000001); // VT_BOOL
DEFINE_API_PKEY(PKEY_PNPX_AssociationState, AssociationState, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00000002); // VT_UINT
DEFINE_API_PKEY(PKEY_PNPX_AssociatedInstanceId, AssociatedInstanceId, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00000003); // VT_LPWSTR
DEFINE_API_PKEY(PKEY_PNPX_LastNotificationTime, LastNotificationTime, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00000004); // VT_DATE
        // for Computer Discovery
DEFINE_PROPERTYKEY(PKEY_PNPX_DomainName, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00005000);   // VT_LPWSTR
// Use PKEY_ComputerName (propkey.h) DEFINE_PROPERTYKEY(PKEY_PNPX_MachineName, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00005001);   // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_PNPX_ShareName, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00005002);   // VT_LPWSTR

    // SSDP Provider custom properties
DEFINE_PROPERTYKEY(PKEY_SSDP_AltLocationInfo, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00006000);   // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_SSDP_DevLifeTime, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00006001);   // VT_UI4
DEFINE_PROPERTYKEY(PKEY_SSDP_NetworkInterface, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00006002);   // VT_BOOL

// FMTID_PNPXDynamicProperty = {4FC5077E-B686-44BE-93E3-86CAFE368CCD}
DEFINE_GUID(FMTID_PNPXDynamicProperty, 0x4FC5077E, 0xB686, 0x44BE, 0x93, 0xE3, 0x86, 0xCA, 0xFE, 0x36, 0x8C, 0xCD);

DEFINE_PROPERTYKEY(PKEY_PNPX_Installable, 0x4FC5077E, 0xB686, 0x44BE, 0x93, 0xE3, 0x86, 0xCA, 0xFE, 0x36, 0x8C, 0xCD, 0x00000001); // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_PNPX_Associated, 0x4FC5077E, 0xB686, 0x44BE, 0x93, 0xE3, 0x86, 0xCA, 0xFE, 0x36, 0x8C, 0xCD, 0x00000002); // VT_BOOL
// PKEY_PNPX_Installed is deprecated this PKEY really represents Associated state
#define PKEY_PNPX_Installed PKEY_PNPX_Associated    // Deprecated! Please use PKEY_PNPX_Associated
DEFINE_PROPERTYKEY(PKEY_PNPX_CompatibleTypes, 0x4FC5077E, 0xB686, 0x44BE, 0x93, 0xE3, 0x86, 0xCA, 0xFE, 0x36, 0x8C, 0xCD, 0x00000003); // VT_LPWSTR | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_PNPX_InstallState, 0x4FC5077E, 0xB686, 0x44BE, 0x93, 0xE3, 0x86, 0xCA, 0xFE, 0x36, 0x8C, 0xCD, 0x00000004); // VT_UI4 | VT_VECTOR
#define PNPX_INSTALLSTATE_NOTINSTALLED  0   // vector length = 1
#define PNPX_INSTALLSTATE_INSTALLED     1   // vector length = 3, CM_Get_DevNode_Status in 2nd and 3rd elements
#define PNPX_INSTALLSTATE_INSTALLING    2   // vector length = 1 or 3, CM_Get_DevNode_Status in 2nd and 3rd elements if available
#define PNPX_INSTALLSTATE_FAILED        3   // vector length = 3, CM_Get_DevNode_Status in 2nd and 3rd elements

// Other
DEFINE_PROPERTYKEY(PKEY_PNPX_Removable, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00007000);   // VT_BOOL
DEFINE_PROPERTYKEY(PKEY_PNPX_IPBusEnumerated, 0x656A3BB3, 0xECC0, 0x43FD, 0x84, 0x77, 0x4A, 0xE0, 0x40, 0x4A, 0x96, 0xCD, 0x00007010);   // VT_BOOL

    // WNET Provider properties
DEFINE_PROPERTYKEY(PKEY_WNET_Scope, 0xdebda43a, 0x37b3, 0x4383, 0x91, 0xE7, 0x44, 0x98, 0xda, 0x29, 0x95, 0xab, 0x00000001); // VT_UINT
DEFINE_PROPERTYKEY(PKEY_WNET_Type, 0xdebda43a, 0x37b3, 0x4383, 0x91, 0xE7, 0x44, 0x98, 0xda, 0x29, 0x95, 0xab, 0x00000002); // VT_UINT
DEFINE_PROPERTYKEY(PKEY_WNET_DisplayType, 0xdebda43a, 0x37b3, 0x4383, 0x91, 0xE7, 0x44, 0x98, 0xda, 0x29, 0x95, 0xab, 0x00000003); // VT_UINT
DEFINE_PROPERTYKEY(PKEY_WNET_Usage, 0xdebda43a, 0x37b3, 0x4383, 0x91, 0xE7, 0x44, 0x98, 0xda, 0x29, 0x95, 0xab, 0x00000004); // VT_UINT
DEFINE_PROPERTYKEY(PKEY_WNET_LocalName, 0xdebda43a, 0x37b3, 0x4383, 0x91, 0xE7, 0x44, 0x98, 0xda, 0x29, 0x95, 0xab, 0x00000005); // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_WNET_RemoteName, 0xdebda43a, 0x37b3, 0x4383, 0x91, 0xE7, 0x44, 0x98, 0xda, 0x29, 0x95, 0xab, 0x00000006); // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_WNET_Comment, 0xdebda43a, 0x37b3, 0x4383, 0x91, 0xE7, 0x44, 0x98, 0xda, 0x29, 0x95, 0xab, 0x00000007); // VT_LPWSTR
DEFINE_PROPERTYKEY(PKEY_WNET_Provider, 0xdebda43a, 0x37b3, 0x4383, 0x91, 0xE7, 0x44, 0x98, 0xda, 0x29, 0x95, 0xab, 0x00000008); // VT_LPWSTR


    // WCN Provider properties

DEFINE_PROPERTYKEY(PKEY_WCN_Version, 0x88190b80, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000001); // VT_UI1
DEFINE_PROPERTYKEY(PKEY_WCN_RequestType, 0x88190b81, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000002); // VT_INT
DEFINE_PROPERTYKEY(PKEY_WCN_AuthType, 0x88190b82, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000003); // VT_INT
DEFINE_PROPERTYKEY(PKEY_WCN_EncryptType, 0x88190b83, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000004); // VT_INT
DEFINE_PROPERTYKEY(PKEY_WCN_ConnType, 0x88190b84, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000005); // VT_INT
DEFINE_PROPERTYKEY(PKEY_WCN_ConfigMethods, 0x88190b85, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000006); // VT_INT
// map WCN DeviceType to PKEY_PNPX_DeviceCategory
//DEFINE_PROPERTYKEY(PKEY_WCN_DeviceType, 0x88190b86, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000007); // VT_INT
DEFINE_PROPERTYKEY(PKEY_WCN_RfBand, 0x88190b87, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000008); // VT_INT
DEFINE_PROPERTYKEY(PKEY_WCN_AssocState, 0x88190b88, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x00000009); // VT_INT
DEFINE_PROPERTYKEY(PKEY_WCN_ConfigError, 0x88190b89, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x0000000a); // VT_INT
DEFINE_PROPERTYKEY(PKEY_WCN_ConfigState, 0x88190b89, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x0000000b); // VT_UI1
DEFINE_PROPERTYKEY(PKEY_WCN_DevicePasswordId, 0x88190b89, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x0000000c); // VT_INT
DEFINE_PROPERTYKEY(PKEY_WCN_OSVersion, 0x88190b89, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x0000000d); // VT_UINT
DEFINE_PROPERTYKEY(PKEY_WCN_VendorExtension, 0x88190b8a, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x0000000e); // VT_UI1 | VT_VECTOR
DEFINE_PROPERTYKEY(PKEY_WCN_RegistrarType, 0x88190b8b, 0x4684, 0x11da, 0xa2, 0x6a, 0x00, 0x02, 0xb3, 0x98, 0x8e, 0x81, 0x0000000f); // VT_INT

//-----------------------------------------------------------------------------
// DriverPackage properties

#define PKEY_DriverPackage_Model                PKEY_DrvPkg_Model
#define PKEY_DriverPackage_VendorWebSite        PKEY_DrvPkg_VendorWebSite
#define PKEY_DriverPackage_DetailedDescription  PKEY_DrvPkg_DetailedDescription
#define PKEY_DriverPackage_DocumentationLink    PKEY_DrvPkg_DocumentationLink
#define PKEY_DriverPackage_Icon                 PKEY_DrvPkg_Icon
#define PKEY_DriverPackage_BrandingIcon         PKEY_DrvPkg_BrandingIcon

//-----------------------------------------------------------------------------
// Hardware properties

DEFINE_PROPERTYKEY(PKEY_Hardware_Devinst, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 4097);

//  Name:     System.Hardware.DisplayAttribute -- PKEY_Hardware_DisplayAttribute
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 5
DEFINE_PROPERTYKEY(PKEY_Hardware_DisplayAttribute, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 5);

//  Name:     System.Hardware.DriverDate -- PKEY_Hardware_DriverDate
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 11
DEFINE_PROPERTYKEY(PKEY_Hardware_DriverDate, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 11);

//  Name:     System.Hardware.DriverProvider -- PKEY_Hardware_DriverProvider
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 10
DEFINE_PROPERTYKEY(PKEY_Hardware_DriverProvider, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 10);

//  Name:     System.Hardware.DriverVersion -- PKEY_Hardware_DriverVersion
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 9
DEFINE_PROPERTYKEY(PKEY_Hardware_DriverVersion, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 9);

//  Name:     System.Hardware.Function -- PKEY_Hardware_Function
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 4099
DEFINE_PROPERTYKEY(PKEY_Hardware_Function, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 4099);

//  Name:     System.Hardware.Icon -- PKEY_Hardware_Icon
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 3
DEFINE_PROPERTYKEY(PKEY_Hardware_Icon, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 3);

//  Name:     System.Hardware.Image -- PKEY_Hardware_Image
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 4098
DEFINE_PROPERTYKEY(PKEY_Hardware_Image, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 4098);

//  Name:     System.Hardware.Manufacturer -- PKEY_Hardware_Manufacturer
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 6
DEFINE_PROPERTYKEY(PKEY_Hardware_Manufacturer, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 6);

//  Name:     System.Hardware.Model -- PKEY_Hardware_Model
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 7
DEFINE_PROPERTYKEY(PKEY_Hardware_Model, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 7);

//  Name:     System.Hardware.Name -- PKEY_Hardware_Name
//  Type:     String -- VT_LPWSTR  (For variants: VT_BSTR)
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 2
DEFINE_PROPERTYKEY(PKEY_Hardware_Name, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 2);

//  Name:     System.Hardware.SerialNumber -- PKEY_Hardware_SerialNumber
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 8
DEFINE_PROPERTYKEY(PKEY_Hardware_SerialNumber, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 8);

//  Name:     System.Hardware.ShellAttributes -- PKEY_Hardware_ShellAttributes
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 4100
DEFINE_PROPERTYKEY(PKEY_Hardware_ShellAttributes, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 4100);

//  Name:     System.Hardware.Status -- PKEY_Hardware_Status
//  Type:     Unspecified -- VT_NULL
//  FormatID: 5EAF3EF2-E0CA-4598-BF06-71ED1D9DD953, 4096
DEFINE_PROPERTYKEY(PKEY_Hardware_Status, 0x5EAF3EF2, 0xE0CA, 0x4598, 0xBF, 0x06, 0x71, 0xED, 0x1D, 0x9D, 0xD9, 0x53, 4096);



#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

