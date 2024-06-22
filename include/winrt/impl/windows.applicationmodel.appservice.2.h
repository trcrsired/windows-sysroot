// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_AppService_2_H
#define WINRT_Windows_ApplicationModel_AppService_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.foundation.collections.1.h"
#include "winrt/impl/windows.system.remotesystems.1.h"
#include "winrt/impl/windows.applicationmodel.appservice.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService
{
    struct AppServiceCatalog
    {
        AppServiceCatalog() = delete;
        static auto FindAppServiceProvidersAsync(param::hstring const& appServiceName);
    };
    struct __declspec(empty_bases) AppServiceClosedEventArgs : winrt::Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs
    {
        AppServiceClosedEventArgs(std::nullptr_t) noexcept {}
        AppServiceClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceConnection : winrt::Windows::ApplicationModel::AppService::IAppServiceConnection,
        impl::require<AppServiceConnection, winrt::Windows::ApplicationModel::AppService::IAppServiceConnection2, winrt::Windows::Foundation::IClosable>
    {
        AppServiceConnection(std::nullptr_t) noexcept {}
        AppServiceConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppService::IAppServiceConnection(ptr, take_ownership_from_abi) {}
        AppServiceConnection();
        static auto SendStatelessMessageAsync(winrt::Windows::ApplicationModel::AppService::AppServiceConnection const& connection, winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& connectionRequest, winrt::Windows::Foundation::Collections::ValueSet const& message);
    };
    struct __declspec(empty_bases) AppServiceDeferral : winrt::Windows::ApplicationModel::AppService::IAppServiceDeferral
    {
        AppServiceDeferral(std::nullptr_t) noexcept {}
        AppServiceDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppService::IAppServiceDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceRequest : winrt::Windows::ApplicationModel::AppService::IAppServiceRequest
    {
        AppServiceRequest(std::nullptr_t) noexcept {}
        AppServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppService::IAppServiceRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceRequestReceivedEventArgs : winrt::Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs
    {
        AppServiceRequestReceivedEventArgs(std::nullptr_t) noexcept {}
        AppServiceRequestReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceResponse : winrt::Windows::ApplicationModel::AppService::IAppServiceResponse
    {
        AppServiceResponse(std::nullptr_t) noexcept {}
        AppServiceResponse(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppService::IAppServiceResponse(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AppServiceTriggerDetails : winrt::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails,
        impl::require<AppServiceTriggerDetails, winrt::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails2, winrt::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails3, winrt::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails4>
    {
        AppServiceTriggerDetails(std::nullptr_t) noexcept {}
        AppServiceTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StatelessAppServiceResponse : winrt::Windows::ApplicationModel::AppService::IStatelessAppServiceResponse
    {
        StatelessAppServiceResponse(std::nullptr_t) noexcept {}
        StatelessAppServiceResponse(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppService::IStatelessAppServiceResponse(ptr, take_ownership_from_abi) {}
    };
}
#endif
