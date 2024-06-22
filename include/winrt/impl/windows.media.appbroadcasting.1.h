// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_AppBroadcasting_1_H
#define WINRT_Windows_Media_AppBroadcasting_1_H
#include "winrt/impl/windows.media.appbroadcasting.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::AppBroadcasting
{
    struct __declspec(empty_bases) IAppBroadcastingMonitor :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingMonitor>
    {
        IAppBroadcastingMonitor(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingMonitor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastingStatus :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingStatus>
    {
        IAppBroadcastingStatus(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingStatus(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastingStatusDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingStatusDetails>
    {
        IAppBroadcastingStatusDetails(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingStatusDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastingUI :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingUI>
    {
        IAppBroadcastingUI(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingUI(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastingUIStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingUIStatics>
    {
        IAppBroadcastingUIStatics(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingUIStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
