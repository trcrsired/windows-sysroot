// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Casting_2_H
#define WINRT_Windows_Media_Casting_2_H
#include "winrt/impl/windows.devices.enumeration.1.h"
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.media.casting.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Casting
{
    struct __declspec(empty_bases) CastingConnection : winrt::Windows::Media::Casting::ICastingConnection
    {
        CastingConnection(std::nullptr_t) noexcept {}
        CastingConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingConnection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CastingConnectionErrorOccurredEventArgs : winrt::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs
    {
        CastingConnectionErrorOccurredEventArgs(std::nullptr_t) noexcept {}
        CastingConnectionErrorOccurredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CastingDevice : winrt::Windows::Media::Casting::ICastingDevice
    {
        CastingDevice(std::nullptr_t) noexcept {}
        CastingDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingDevice(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector(winrt::Windows::Media::Casting::CastingPlaybackTypes const& type);
        static auto GetDeviceSelectorFromCastingSourceAsync(winrt::Windows::Media::Casting::CastingSource const& castingSource);
        static auto FromIdAsync(param::hstring const& value);
        static auto DeviceInfoSupportsCastingAsync(winrt::Windows::Devices::Enumeration::DeviceInformation const& device);
    };
    struct __declspec(empty_bases) CastingDevicePicker : winrt::Windows::Media::Casting::ICastingDevicePicker
    {
        CastingDevicePicker(std::nullptr_t) noexcept {}
        CastingDevicePicker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingDevicePicker(ptr, take_ownership_from_abi) {}
        CastingDevicePicker();
    };
    struct __declspec(empty_bases) CastingDevicePickerFilter : winrt::Windows::Media::Casting::ICastingDevicePickerFilter
    {
        CastingDevicePickerFilter(std::nullptr_t) noexcept {}
        CastingDevicePickerFilter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingDevicePickerFilter(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CastingDeviceSelectedEventArgs : winrt::Windows::Media::Casting::ICastingDeviceSelectedEventArgs
    {
        CastingDeviceSelectedEventArgs(std::nullptr_t) noexcept {}
        CastingDeviceSelectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingDeviceSelectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CastingSource : winrt::Windows::Media::Casting::ICastingSource
    {
        CastingSource(std::nullptr_t) noexcept {}
        CastingSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingSource(ptr, take_ownership_from_abi) {}
    };
}
#endif
