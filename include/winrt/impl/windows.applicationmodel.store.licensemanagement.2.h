// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Store_LicenseManagement_2_H
#define WINRT_Windows_ApplicationModel_Store_LicenseManagement_2_H
#include "winrt/impl/windows.foundation.collections.1.h"
#include "winrt/impl/windows.storage.streams.1.h"
#include "winrt/impl/windows.applicationmodel.store.licensemanagement.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::LicenseManagement
{
    struct LicenseManager
    {
        LicenseManager() = delete;
        static auto AddLicenseAsync(winrt::Windows::Storage::Streams::IBuffer const& license);
        static auto GetSatisfactionInfosAsync(param::async_iterable<hstring> const& contentIds, param::async_iterable<hstring> const& keyIds);
        static auto RefreshLicensesAsync(winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption const& refreshOption);
    };
    struct __declspec(empty_bases) LicenseSatisfactionInfo : winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo
    {
        LicenseSatisfactionInfo(std::nullptr_t) noexcept {}
        LicenseSatisfactionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) LicenseSatisfactionResult : winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult
    {
        LicenseSatisfactionResult(std::nullptr_t) noexcept {}
        LicenseSatisfactionResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
