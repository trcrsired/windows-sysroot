// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Graphics_Display_Core_2_H
#define WINRT_Windows_Graphics_Display_Core_2_H
#include "winrt/impl/windows.graphics.display.core.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Display::Core
{
    struct HdmiDisplayHdr2086Metadata
    {
        uint16_t RedPrimaryX;
        uint16_t RedPrimaryY;
        uint16_t GreenPrimaryX;
        uint16_t GreenPrimaryY;
        uint16_t BluePrimaryX;
        uint16_t BluePrimaryY;
        uint16_t WhitePointX;
        uint16_t WhitePointY;
        uint16_t MaxMasteringLuminance;
        uint16_t MinMasteringLuminance;
        uint16_t MaxContentLightLevel;
        uint16_t MaxFrameAverageLightLevel;
    };
    inline bool operator==(HdmiDisplayHdr2086Metadata const& left, HdmiDisplayHdr2086Metadata const& right) noexcept
    {
        return left.RedPrimaryX == right.RedPrimaryX && left.RedPrimaryY == right.RedPrimaryY && left.GreenPrimaryX == right.GreenPrimaryX && left.GreenPrimaryY == right.GreenPrimaryY && left.BluePrimaryX == right.BluePrimaryX && left.BluePrimaryY == right.BluePrimaryY && left.WhitePointX == right.WhitePointX && left.WhitePointY == right.WhitePointY && left.MaxMasteringLuminance == right.MaxMasteringLuminance && left.MinMasteringLuminance == right.MinMasteringLuminance && left.MaxContentLightLevel == right.MaxContentLightLevel && left.MaxFrameAverageLightLevel == right.MaxFrameAverageLightLevel;
    }
    inline bool operator!=(HdmiDisplayHdr2086Metadata const& left, HdmiDisplayHdr2086Metadata const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) HdmiDisplayInformation : winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformation
    {
        HdmiDisplayInformation(std::nullptr_t) noexcept {}
        HdmiDisplayInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Display::Core::IHdmiDisplayInformation(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) HdmiDisplayMode : winrt::Windows::Graphics::Display::Core::IHdmiDisplayMode,
        impl::require<HdmiDisplayMode, winrt::Windows::Graphics::Display::Core::IHdmiDisplayMode2>
    {
        HdmiDisplayMode(std::nullptr_t) noexcept {}
        HdmiDisplayMode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Display::Core::IHdmiDisplayMode(ptr, take_ownership_from_abi) {}
    };
}
#endif
