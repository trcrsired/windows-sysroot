// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Store_Preview_2_H
#define WINRT_Windows_ApplicationModel_Store_Preview_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.foundation.collections.1.h"
#include "winrt/impl/windows.security.authentication.web.core.1.h"
#include "winrt/impl/windows.security.credentials.1.h"
#include "winrt/impl/windows.system.1.h"
#include "winrt/impl/windows.ui.xaml.1.h"
#include "winrt/impl/windows.applicationmodel.store.preview.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview
{
    struct __declspec(empty_bases) DeliveryOptimizationSettings : winrt::Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings
    {
        DeliveryOptimizationSettings(std::nullptr_t) noexcept {}
        DeliveryOptimizationSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Store::Preview::IDeliveryOptimizationSettings(ptr, take_ownership_from_abi) {}
        static auto GetCurrentSettings();
    };
    struct StoreConfiguration
    {
        StoreConfiguration() = delete;
        static auto SetSystemConfiguration(param::hstring const& catalogHardwareManufacturerId, param::hstring const& catalogStoreContentModifierId, winrt::Windows::Foundation::DateTime const& systemConfigurationExpiration, param::hstring const& catalogHardwareDescriptor);
        static auto SetMobileOperatorConfiguration(param::hstring const& mobileOperatorId, uint32_t appDownloadLimitInMegabytes, uint32_t updateDownloadLimitInMegabytes);
        static auto SetStoreWebAccountId(param::hstring const& webAccountId);
        static auto IsStoreWebAccountId(param::hstring const& webAccountId);
        [[nodiscard]] static auto HardwareManufacturerInfo();
        static auto FilterUnsupportedSystemFeaturesAsync(param::async_iterable<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> const& systemFeatures);
        [[nodiscard]] static auto PurchasePromptingPolicy();
        static auto PurchasePromptingPolicy(winrt::Windows::Foundation::IReference<uint32_t> const& value);
        static auto HasStoreWebAccount();
        static auto HasStoreWebAccountForUser(winrt::Windows::System::User const& user);
        static auto GetStoreLogDataAsync(winrt::Windows::ApplicationModel::Store::Preview::StoreLogOptions const& options);
        static auto SetStoreWebAccountIdForUser(winrt::Windows::System::User const& user, param::hstring const& webAccountId);
        static auto IsStoreWebAccountIdForUser(winrt::Windows::System::User const& user, param::hstring const& webAccountId);
        static auto GetPurchasePromptingPolicyForUser(winrt::Windows::System::User const& user);
        static auto SetPurchasePromptingPolicyForUser(winrt::Windows::System::User const& user, winrt::Windows::Foundation::IReference<uint32_t> const& value);
        static auto GetStoreWebAccountId();
        static auto GetStoreWebAccountIdForUser(winrt::Windows::System::User const& user);
        static auto SetEnterpriseStoreWebAccountId(param::hstring const& webAccountId);
        static auto SetEnterpriseStoreWebAccountIdForUser(winrt::Windows::System::User const& user, param::hstring const& webAccountId);
        static auto GetEnterpriseStoreWebAccountId();
        static auto GetEnterpriseStoreWebAccountIdForUser(winrt::Windows::System::User const& user);
        static auto ShouldRestrictToEnterpriseStoreOnly();
        static auto ShouldRestrictToEnterpriseStoreOnlyForUser(winrt::Windows::System::User const& user);
        static auto IsPinToDesktopSupported();
        static auto IsPinToTaskbarSupported();
        static auto IsPinToStartSupported();
        static auto PinToDesktop(param::hstring const& appPackageFamilyName);
        static auto PinToDesktopForUser(winrt::Windows::System::User const& user, param::hstring const& appPackageFamilyName);
    };
    struct __declspec(empty_bases) StoreHardwareManufacturerInfo : winrt::Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo
    {
        StoreHardwareManufacturerInfo(std::nullptr_t) noexcept {}
        StoreHardwareManufacturerInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo(ptr, take_ownership_from_abi) {}
    };
    struct StorePreview
    {
        StorePreview() = delete;
        static auto RequestProductPurchaseByProductIdAndSkuIdAsync(param::hstring const& productId, param::hstring const& skuId);
        static auto LoadAddOnProductInfosAsync();
    };
    struct __declspec(empty_bases) StorePreviewProductInfo : winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo
    {
        StorePreviewProductInfo(std::nullptr_t) noexcept {}
        StorePreviewProductInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorePreviewPurchaseResults : winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults
    {
        StorePreviewPurchaseResults(std::nullptr_t) noexcept {}
        StorePreviewPurchaseResults(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StorePreviewSkuInfo : winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo
    {
        StorePreviewSkuInfo(std::nullptr_t) noexcept {}
        StorePreviewSkuInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo(ptr, take_ownership_from_abi) {}
    };
    struct WebAuthenticationCoreManagerHelper
    {
        WebAuthenticationCoreManagerHelper() = delete;
        static auto RequestTokenWithUIElementHostingAsync(winrt::Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, winrt::Windows::UI::Xaml::UIElement const& uiElement);
        static auto RequestTokenWithUIElementHostingAsync(winrt::Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, winrt::Windows::Security::Credentials::WebAccount const& webAccount, winrt::Windows::UI::Xaml::UIElement const& uiElement);
    };
}
#endif
