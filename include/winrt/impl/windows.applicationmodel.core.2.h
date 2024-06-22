// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Core_2_H
#define WINRT_Windows_ApplicationModel_Core_2_H
#include "winrt/impl/windows.applicationmodel.1.h"
#include "winrt/impl/windows.applicationmodel.activation.1.h"
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.system.1.h"
#include "winrt/impl/windows.applicationmodel.core.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core
{
    struct __declspec(empty_bases) AppListEntry : winrt::Windows::ApplicationModel::Core::IAppListEntry,
        impl::require<AppListEntry, winrt::Windows::ApplicationModel::Core::IAppListEntry2, winrt::Windows::ApplicationModel::Core::IAppListEntry3, winrt::Windows::ApplicationModel::Core::IAppListEntry4>
    {
        AppListEntry(std::nullptr_t) noexcept {}
        AppListEntry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Core::IAppListEntry(ptr, take_ownership_from_abi) {}
    };
    struct CoreApplication
    {
        CoreApplication() = delete;
        [[nodiscard]] static auto Id();
        static auto Suspending(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::SuspendingEventArgs> const& handler);
        using Suspending_revoker = impl::factory_event_revoker<winrt::Windows::ApplicationModel::Core::ICoreApplication, &impl::abi_t<winrt::Windows::ApplicationModel::Core::ICoreApplication>::remove_Suspending>;
        [[nodiscard]] static Suspending_revoker Suspending(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::SuspendingEventArgs> const& handler);
        static auto Suspending(winrt::event_token const& token);
        static auto Resuming(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using Resuming_revoker = impl::factory_event_revoker<winrt::Windows::ApplicationModel::Core::ICoreApplication, &impl::abi_t<winrt::Windows::ApplicationModel::Core::ICoreApplication>::remove_Resuming>;
        [[nodiscard]] static Resuming_revoker Resuming(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto Resuming(winrt::event_token const& token);
        [[nodiscard]] static auto Properties();
        static auto GetCurrentView();
        static auto Run(winrt::Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource);
        static auto RunWithActivationFactories(winrt::Windows::Foundation::IGetActivationFactory const& activationFactoryCallback);
        static auto BackgroundActivated(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler);
        using BackgroundActivated_revoker = impl::factory_event_revoker<winrt::Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<winrt::Windows::ApplicationModel::Core::ICoreApplication2>::remove_BackgroundActivated>;
        [[nodiscard]] static BackgroundActivated_revoker BackgroundActivated(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler);
        static auto BackgroundActivated(winrt::event_token const& token);
        static auto LeavingBackground(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler);
        using LeavingBackground_revoker = impl::factory_event_revoker<winrt::Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<winrt::Windows::ApplicationModel::Core::ICoreApplication2>::remove_LeavingBackground>;
        [[nodiscard]] static LeavingBackground_revoker LeavingBackground(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::LeavingBackgroundEventArgs> const& handler);
        static auto LeavingBackground(winrt::event_token const& token);
        static auto EnteredBackground(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler);
        using EnteredBackground_revoker = impl::factory_event_revoker<winrt::Windows::ApplicationModel::Core::ICoreApplication2, &impl::abi_t<winrt::Windows::ApplicationModel::Core::ICoreApplication2>::remove_EnteredBackground>;
        [[nodiscard]] static EnteredBackground_revoker EnteredBackground(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::EnteredBackgroundEventArgs> const& handler);
        static auto EnteredBackground(winrt::event_token const& token);
        static auto EnablePrelaunch(bool value);
        static auto RequestRestartAsync(param::hstring const& launchArguments);
        static auto RequestRestartForUserAsync(winrt::Windows::System::User const& user, param::hstring const& launchArguments);
        static auto Exit();
        static auto Exiting(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using Exiting_revoker = impl::factory_event_revoker<winrt::Windows::ApplicationModel::Core::ICoreApplicationExit, &impl::abi_t<winrt::Windows::ApplicationModel::Core::ICoreApplicationExit>::remove_Exiting>;
        [[nodiscard]] static Exiting_revoker Exiting(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto Exiting(winrt::event_token const& token);
        static auto UnhandledErrorDetected(winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler);
        using UnhandledErrorDetected_revoker = impl::factory_event_revoker<winrt::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError, &impl::abi_t<winrt::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>::remove_UnhandledErrorDetected>;
        [[nodiscard]] static UnhandledErrorDetected_revoker UnhandledErrorDetected(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs> const& handler);
        static auto UnhandledErrorDetected(winrt::event_token const& token);
        static auto IncrementApplicationUseCount();
        static auto DecrementApplicationUseCount();
        [[nodiscard]] static auto Views();
        static auto CreateNewView(param::hstring const& runtimeType, param::hstring const& entryPoint);
        [[nodiscard]] static auto MainView();
        static auto CreateNewView();
        static auto CreateNewView(winrt::Windows::ApplicationModel::Core::IFrameworkViewSource const& viewSource);
    };
    struct __declspec(empty_bases) CoreApplicationView : winrt::Windows::ApplicationModel::Core::ICoreApplicationView,
        impl::require<CoreApplicationView, winrt::Windows::ApplicationModel::Core::ICoreApplicationView2, winrt::Windows::ApplicationModel::Core::ICoreApplicationView3, winrt::Windows::ApplicationModel::Core::ICoreApplicationView5, winrt::Windows::ApplicationModel::Core::ICoreApplicationView6>
    {
        CoreApplicationView(std::nullptr_t) noexcept {}
        CoreApplicationView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Core::ICoreApplicationView(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreApplicationViewTitleBar : winrt::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar
    {
        CoreApplicationViewTitleBar(std::nullptr_t) noexcept {}
        CoreApplicationViewTitleBar(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Core::ICoreApplicationViewTitleBar(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HostedViewClosingEventArgs : winrt::Windows::ApplicationModel::Core::IHostedViewClosingEventArgs
    {
        HostedViewClosingEventArgs(std::nullptr_t) noexcept {}
        HostedViewClosingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Core::IHostedViewClosingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UnhandledError : winrt::Windows::ApplicationModel::Core::IUnhandledError
    {
        UnhandledError(std::nullptr_t) noexcept {}
        UnhandledError(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Core::IUnhandledError(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) UnhandledErrorDetectedEventArgs : winrt::Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs
    {
        UnhandledErrorDetectedEventArgs(std::nullptr_t) noexcept {}
        UnhandledErrorDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Core::IUnhandledErrorDetectedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
