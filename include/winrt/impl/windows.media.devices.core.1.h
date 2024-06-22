// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Devices_Core_1_H
#define WINRT_Windows_Media_Devices_Core_1_H
#include "winrt/impl/windows.foundation.0.h"
#include "winrt/impl/windows.media.devices.core.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core
{
    struct __declspec(empty_bases) ICameraIntrinsics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICameraIntrinsics>
    {
        ICameraIntrinsics(std::nullptr_t = nullptr) noexcept {}
        ICameraIntrinsics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICameraIntrinsics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICameraIntrinsics2>
    {
        ICameraIntrinsics2(std::nullptr_t = nullptr) noexcept {}
        ICameraIntrinsics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICameraIntrinsicsFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICameraIntrinsicsFactory>
    {
        ICameraIntrinsicsFactory(std::nullptr_t = nullptr) noexcept {}
        ICameraIntrinsicsFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDepthCorrelatedCoordinateMapper :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDepthCorrelatedCoordinateMapper>,
        impl::require<winrt::Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper, winrt::Windows::Foundation::IClosable>
    {
        IDepthCorrelatedCoordinateMapper(std::nullptr_t = nullptr) noexcept {}
        IDepthCorrelatedCoordinateMapper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameControlCapabilities :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameControlCapabilities>
    {
        IFrameControlCapabilities(std::nullptr_t = nullptr) noexcept {}
        IFrameControlCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameControlCapabilities2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameControlCapabilities2>
    {
        IFrameControlCapabilities2(std::nullptr_t = nullptr) noexcept {}
        IFrameControlCapabilities2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameController>
    {
        IFrameController(std::nullptr_t = nullptr) noexcept {}
        IFrameController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameController2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameController2>
    {
        IFrameController2(std::nullptr_t = nullptr) noexcept {}
        IFrameController2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameExposureCapabilities :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameExposureCapabilities>
    {
        IFrameExposureCapabilities(std::nullptr_t = nullptr) noexcept {}
        IFrameExposureCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameExposureCompensationCapabilities :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameExposureCompensationCapabilities>
    {
        IFrameExposureCompensationCapabilities(std::nullptr_t = nullptr) noexcept {}
        IFrameExposureCompensationCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameExposureCompensationControl :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameExposureCompensationControl>
    {
        IFrameExposureCompensationControl(std::nullptr_t = nullptr) noexcept {}
        IFrameExposureCompensationControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameExposureControl :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameExposureControl>
    {
        IFrameExposureControl(std::nullptr_t = nullptr) noexcept {}
        IFrameExposureControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameFlashCapabilities :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameFlashCapabilities>
    {
        IFrameFlashCapabilities(std::nullptr_t = nullptr) noexcept {}
        IFrameFlashCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameFlashControl :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameFlashControl>
    {
        IFrameFlashControl(std::nullptr_t = nullptr) noexcept {}
        IFrameFlashControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameFocusCapabilities :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameFocusCapabilities>
    {
        IFrameFocusCapabilities(std::nullptr_t = nullptr) noexcept {}
        IFrameFocusCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameFocusControl :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameFocusControl>
    {
        IFrameFocusControl(std::nullptr_t = nullptr) noexcept {}
        IFrameFocusControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameIsoSpeedCapabilities :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameIsoSpeedCapabilities>
    {
        IFrameIsoSpeedCapabilities(std::nullptr_t = nullptr) noexcept {}
        IFrameIsoSpeedCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFrameIsoSpeedControl :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFrameIsoSpeedControl>
    {
        IFrameIsoSpeedControl(std::nullptr_t = nullptr) noexcept {}
        IFrameIsoSpeedControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVariablePhotoSequenceController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVariablePhotoSequenceController>
    {
        IVariablePhotoSequenceController(std::nullptr_t = nullptr) noexcept {}
        IVariablePhotoSequenceController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
