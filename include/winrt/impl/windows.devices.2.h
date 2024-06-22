// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_2_H
#define WINRT_Windows_Devices_2_H
#include "winrt/impl/windows.devices.adc.provider.1.h"
#include "winrt/impl/windows.devices.gpio.provider.1.h"
#include "winrt/impl/windows.devices.i2c.provider.1.h"
#include "winrt/impl/windows.devices.pwm.provider.1.h"
#include "winrt/impl/windows.devices.spi.provider.1.h"
#include "winrt/impl/windows.devices.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices
{
    struct __declspec(empty_bases) LowLevelDevicesAggregateProvider : winrt::Windows::Devices::ILowLevelDevicesAggregateProvider
    {
        LowLevelDevicesAggregateProvider(std::nullptr_t) noexcept {}
        LowLevelDevicesAggregateProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::ILowLevelDevicesAggregateProvider(ptr, take_ownership_from_abi) {}
        LowLevelDevicesAggregateProvider(winrt::Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, winrt::Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, winrt::Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi);
    };
    struct __declspec(empty_bases) LowLevelDevicesController : winrt::Windows::Devices::ILowLevelDevicesController
    {
        LowLevelDevicesController(std::nullptr_t) noexcept {}
        LowLevelDevicesController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::ILowLevelDevicesController(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto DefaultProvider();
        static auto DefaultProvider(winrt::Windows::Devices::ILowLevelDevicesAggregateProvider const& value);
    };
}
#endif
