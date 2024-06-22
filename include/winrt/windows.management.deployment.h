// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Management_Deployment_H
#define WINRT_Windows_Management_Deployment_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/windows.management.h"
#include "winrt/impl/windows.applicationmodel.2.h"
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.foundation.collections.2.h"
#include "winrt/impl/windows.management.deployment.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IAddPackageOptions<D>::DependencyPackageUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_DependencyPackageUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::PackageVolume) consume_Windows_Management_Deployment_IAddPackageOptions<D>::TargetVolume() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_TargetVolume(&value));
        return winrt::Windows::Management::Deployment::PackageVolume{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::TargetVolume(winrt::Windows::Management::Deployment::PackageVolume const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_TargetVolume(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Management_Deployment_IAddPackageOptions<D>::OptionalPackageFamilyNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_OptionalPackageFamilyNames(&value));
        return winrt::Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IAddPackageOptions<D>::OptionalPackageUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_OptionalPackageUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IAddPackageOptions<D>::RelatedPackageUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_RelatedPackageUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) consume_Windows_Management_Deployment_IAddPackageOptions<D>::ExternalLocationUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_ExternalLocationUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::ExternalLocationUri(winrt::Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_ExternalLocationUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::StubPackageOption) consume_Windows_Management_Deployment_IAddPackageOptions<D>::StubPackageOption() const
    {
        winrt::Windows::Management::Deployment::StubPackageOption value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_StubPackageOption(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::StubPackageOption(winrt::Windows::Management::Deployment::StubPackageOption const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_StubPackageOption(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::DeveloperMode() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_DeveloperMode(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::DeveloperMode(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_DeveloperMode(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::ForceAppShutdown() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_ForceAppShutdown(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::ForceAppShutdown(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_ForceAppShutdown(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::ForceTargetAppShutdown() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_ForceTargetAppShutdown(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::ForceTargetAppShutdown(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_ForceTargetAppShutdown(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::ForceUpdateFromAnyVersion() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_ForceUpdateFromAnyVersion(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::ForceUpdateFromAnyVersion(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_ForceUpdateFromAnyVersion(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::InstallAllResources() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_InstallAllResources(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::InstallAllResources(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_InstallAllResources(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::RequiredContentGroupOnly() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_RequiredContentGroupOnly(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::RequiredContentGroupOnly(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_RequiredContentGroupOnly(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::RetainFilesOnFailure() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_RetainFilesOnFailure(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::RetainFilesOnFailure(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_RetainFilesOnFailure(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::StageInPlace() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_StageInPlace(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::StageInPlace(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_StageInPlace(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::AllowUnsigned() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_AllowUnsigned(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::AllowUnsigned(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_AllowUnsigned(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions<D>::DeferRegistrationWhenPackagesAreInUse() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->get_DeferRegistrationWhenPackagesAreInUse(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions<D>::DeferRegistrationWhenPackagesAreInUse(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions)->put_DeferRegistrationWhenPackagesAreInUse(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::Uri, hstring>) consume_Windows_Management_Deployment_IAddPackageOptions2<D>::ExpectedDigests() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions2)->get_ExpectedDigests(&value));
        return winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::Uri, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAddPackageOptions2<D>::LimitToExistingPackages() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions2)->get_LimitToExistingPackages(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAddPackageOptions2<D>::LimitToExistingPackages(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAddPackageOptions2)->put_LimitToExistingPackages(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAppInstallerManager<D>::SetAutoUpdateSettings(param::hstring const& packageFamilyName, winrt::Windows::Management::Deployment::AutoUpdateSettingsOptions const& appInstallerInfo) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAppInstallerManager)->SetAutoUpdateSettings(*(void**)(&packageFamilyName), *(void**)(&appInstallerInfo)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAppInstallerManager<D>::ClearAutoUpdateSettings(param::hstring const& packageFamilyName) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAppInstallerManager)->ClearAutoUpdateSettings(*(void**)(&packageFamilyName)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAppInstallerManager<D>::PauseAutoUpdatesUntil(param::hstring const& packageFamilyName, winrt::Windows::Foundation::DateTime const& dateTime) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAppInstallerManager)->PauseAutoUpdatesUntil(*(void**)(&packageFamilyName), impl::bind_in(dateTime)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::AppInstallerManager) consume_Windows_Management_Deployment_IAppInstallerManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAppInstallerManagerStatics)->GetDefault(&result));
        return winrt::Windows::Management::Deployment::AppInstallerManager{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::AppInstallerManager) consume_Windows_Management_Deployment_IAppInstallerManagerStatics<D>::GetForSystem() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAppInstallerManagerStatics)->GetForSystem(&result));
        return winrt::Windows::Management::Deployment::AppInstallerManager{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::PackageVersion) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::Version() const
    {
        winrt::Windows::ApplicationModel::PackageVersion value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_Version(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::Version(winrt::Windows::ApplicationModel::PackageVersion const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->put_Version(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::AppInstallerUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_AppInstallerUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::AppInstallerUri(winrt::Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->put_AppInstallerUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::OnLaunch() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_OnLaunch(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::OnLaunch(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->put_OnLaunch(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::HoursBetweenUpdateChecks() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_HoursBetweenUpdateChecks(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::HoursBetweenUpdateChecks(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->put_HoursBetweenUpdateChecks(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::ShowPrompt() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_ShowPrompt(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::ShowPrompt(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->put_ShowPrompt(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::UpdateBlocksActivation() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_UpdateBlocksActivation(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::UpdateBlocksActivation(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->put_UpdateBlocksActivation(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::AutomaticBackgroundTask() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_AutomaticBackgroundTask(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::AutomaticBackgroundTask(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->put_AutomaticBackgroundTask(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::ForceUpdateFromAnyVersion() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_ForceUpdateFromAnyVersion(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::ForceUpdateFromAnyVersion(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->put_ForceUpdateFromAnyVersion(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::IsAutoRepairEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_IsAutoRepairEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::IsAutoRepairEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->put_IsAutoRepairEnabled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::UpdateUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_UpdateUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::RepairUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_RepairUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::DependencyPackageUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_DependencyPackageUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptions<D>::OptionalPackageUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions)->get_OptionalPackageUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::AutoUpdateSettingsOptions) consume_Windows_Management_Deployment_IAutoUpdateSettingsOptionsStatics<D>::CreateFromAppInstallerInfo(winrt::Windows::ApplicationModel::AppInstallerInfo const& appInstallerInfo) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptionsStatics)->CreateFromAppInstallerInfo(*(void**)(&appInstallerInfo), &result));
        return winrt::Windows::Management::Deployment::AutoUpdateSettingsOptions{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainerMember>) consume_Windows_Management_Deployment_ICreateSharedPackageContainerOptions<D>::Members() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ICreateSharedPackageContainerOptions)->get_Members(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainerMember>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_ICreateSharedPackageContainerOptions<D>::ForceAppShutdown() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ICreateSharedPackageContainerOptions)->get_ForceAppShutdown(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_ICreateSharedPackageContainerOptions<D>::ForceAppShutdown(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ICreateSharedPackageContainerOptions)->put_ForceAppShutdown(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainerCreationCollisionOptions) consume_Windows_Management_Deployment_ICreateSharedPackageContainerOptions<D>::CreateCollisionOption() const
    {
        winrt::Windows::Management::Deployment::SharedPackageContainerCreationCollisionOptions value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ICreateSharedPackageContainerOptions)->get_CreateCollisionOption(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_ICreateSharedPackageContainerOptions<D>::CreateCollisionOption(winrt::Windows::Management::Deployment::SharedPackageContainerCreationCollisionOptions const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ICreateSharedPackageContainerOptions)->put_CreateCollisionOption(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainer) consume_Windows_Management_Deployment_ICreateSharedPackageContainerResult<D>::Container() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ICreateSharedPackageContainerResult)->get_Container(&value));
        return winrt::Windows::Management::Deployment::SharedPackageContainer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus) consume_Windows_Management_Deployment_ICreateSharedPackageContainerResult<D>::Status() const
    {
        winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ICreateSharedPackageContainerResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_Management_Deployment_ICreateSharedPackageContainerResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ICreateSharedPackageContainerResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IDeleteSharedPackageContainerOptions<D>::ForceAppShutdown() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerOptions)->get_ForceAppShutdown(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IDeleteSharedPackageContainerOptions<D>::ForceAppShutdown(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerOptions)->put_ForceAppShutdown(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IDeleteSharedPackageContainerOptions<D>::AllUsers() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerOptions)->get_AllUsers(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IDeleteSharedPackageContainerOptions<D>::AllUsers(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerOptions)->put_AllUsers(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus) consume_Windows_Management_Deployment_IDeleteSharedPackageContainerResult<D>::Status() const
    {
        winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_Management_Deployment_IDeleteSharedPackageContainerResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_IDeploymentResult<D>::ErrorText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeploymentResult)->get_ErrorText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Management_Deployment_IDeploymentResult<D>::ActivityId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeploymentResult)->get_ActivityId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_Management_Deployment_IDeploymentResult<D>::ExtendedErrorCode() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeploymentResult)->get_ExtendedErrorCode(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IDeploymentResult2<D>::IsRegistered() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IDeploymentResult2)->get_IsRegistered(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_IFindSharedPackageContainerOptions<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IFindSharedPackageContainerOptions)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IFindSharedPackageContainerOptions<D>::Name(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IFindSharedPackageContainerOptions)->put_Name(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_IFindSharedPackageContainerOptions<D>::PackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IFindSharedPackageContainerOptions)->get_PackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IFindSharedPackageContainerOptions<D>::PackageFamilyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IFindSharedPackageContainerOptions)->put_PackageFamilyName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Management_Deployment_IPackageAllUserProvisioningOptions<D>::OptionalPackageFamilyNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageAllUserProvisioningOptions)->get_OptionalPackageFamilyNames(&value));
        return winrt::Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Management_Deployment_IPackageAllUserProvisioningOptions<D>::ProjectionOrderPackageFamilyNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageAllUserProvisioningOptions)->get_ProjectionOrderPackageFamilyNames(&value));
        return winrt::Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager<D>::AddPackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->AddPackageAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager<D>::UpdatePackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->UpdatePackageAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager<D>::RemovePackageAsync(param::hstring const& packageFullName) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->RemovePackageAsync(*(void**)(&packageFullName), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager<D>::StagePackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->StagePackageAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager<D>::RegisterPackageAsync(winrt::Windows::Foundation::Uri const& manifestUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->RegisterPackageAsync(*(void**)(&manifestUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager<D>::FindPackages() const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->FindPackages(&packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager<D>::FindPackagesForUser(param::hstring const& userSecurityId) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->FindPackagesByUserSecurityId(*(void**)(&userSecurityId), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager<D>::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->FindPackagesByNamePublisher(*(void**)(&packageName), *(void**)(&packagePublisher), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->FindPackagesByUserSecurityIdNamePublisher(*(void**)(&userSecurityId), *(void**)(&packageName), *(void**)(&packagePublisher), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageUserInformation>) consume_Windows_Management_Deployment_IPackageManager<D>::FindUsers(param::hstring const& packageFullName) const
    {
        void* users{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->FindUsers(*(void**)(&packageFullName), &users));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageUserInformation>{ users, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IPackageManager<D>::SetPackageState(param::hstring const& packageFullName, winrt::Windows::Management::Deployment::PackageState const& packageState) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->SetPackageState(*(void**)(&packageFullName), static_cast<int32_t>(packageState)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Package) consume_Windows_Management_Deployment_IPackageManager<D>::FindPackage(param::hstring const& packageFullName) const
    {
        void* packageInformation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->FindPackageByPackageFullName(*(void**)(&packageFullName), &packageInformation));
        return winrt::Windows::ApplicationModel::Package{ packageInformation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager<D>::CleanupPackageForUserAsync(param::hstring const& packageName, param::hstring const& userSecurityId) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->CleanupPackageForUserAsync(*(void**)(&packageName), *(void**)(&userSecurityId), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager<D>::FindPackages(param::hstring const& packageFamilyName) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->FindPackagesByPackageFamilyName(*(void**)(&packageFamilyName), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->FindPackagesByUserSecurityIdPackageFamilyName(*(void**)(&userSecurityId), *(void**)(&packageFamilyName), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Package) consume_Windows_Management_Deployment_IPackageManager<D>::FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const
    {
        void* packageInformation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager)->FindPackageByUserSecurityIdPackageFullName(*(void**)(&userSecurityId), *(void**)(&packageFullName), &packageInformation));
        return winrt::Windows::ApplicationModel::Package{ packageInformation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager10<D>::ProvisionPackageForAllUsersAsync(param::hstring const& mainPackageFamilyName, winrt::Windows::Management::Deployment::PackageAllUserProvisioningOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager10)->ProvisionPackageForAllUsersWithOptionsAsync(*(void**)(&mainPackageFamilyName), *(void**)(&options), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager2<D>::RemovePackageAsync(param::hstring const& packageFullName, winrt::Windows::Management::Deployment::RemovalOptions const& removalOptions) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->RemovePackageWithOptionsAsync(*(void**)(&packageFullName), static_cast<uint32_t>(removalOptions), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager2<D>::StagePackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->StagePackageWithOptionsAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager2<D>::RegisterPackageByFullNameAsync(param::hstring const& mainPackageFullName, param::async_iterable<hstring> const& dependencyPackageFullNames, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->RegisterPackageByFullNameAsync(*(void**)(&mainPackageFullName), *(void**)(&dependencyPackageFullNames), static_cast<uint32_t>(deploymentOptions), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesWithPackageTypes(winrt::Windows::Management::Deployment::PackageTypes const& packageTypes) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->FindPackagesWithPackageTypes(static_cast<uint32_t>(packageTypes), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, winrt::Windows::Management::Deployment::PackageTypes const& packageTypes) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->FindPackagesByUserSecurityIdWithPackageTypes(*(void**)(&userSecurityId), static_cast<uint32_t>(packageTypes), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesWithPackageTypes(param::hstring const& packageName, param::hstring const& packagePublisher, winrt::Windows::Management::Deployment::PackageTypes const& packageTypes) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->FindPackagesByNamePublisherWithPackageTypes(*(void**)(&packageName), *(void**)(&packagePublisher), static_cast<uint32_t>(packageTypes), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher, winrt::Windows::Management::Deployment::PackageTypes const& packageTypes) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(*(void**)(&userSecurityId), *(void**)(&packageName), *(void**)(&packagePublisher), static_cast<uint32_t>(packageTypes), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesWithPackageTypes(param::hstring const& packageFamilyName, winrt::Windows::Management::Deployment::PackageTypes const& packageTypes) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->FindPackagesByPackageFamilyNameWithPackageTypes(*(void**)(&packageFamilyName), static_cast<uint32_t>(packageTypes), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageFamilyName, winrt::Windows::Management::Deployment::PackageTypes const& packageTypes) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(*(void**)(&userSecurityId), *(void**)(&packageFamilyName), static_cast<uint32_t>(packageTypes), &packageCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager2<D>::StageUserDataAsync(param::hstring const& packageFullName) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager2)->StageUserDataAsync(*(void**)(&packageFullName), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>) consume_Windows_Management_Deployment_IPackageManager3<D>::AddPackageVolumeAsync(param::hstring const& packageStorePath) const
    {
        void* packageVolume{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->AddPackageVolumeAsync(*(void**)(&packageStorePath), &packageVolume));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>{ packageVolume, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager3<D>::AddPackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->AddPackageToVolumeAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), *(void**)(&targetVolume), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IPackageManager3<D>::ClearPackageStatus(param::hstring const& packageFullName, winrt::Windows::Management::Deployment::PackageStatus const& status) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->ClearPackageStatus(*(void**)(&packageFullName), static_cast<uint32_t>(status)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager3<D>::RegisterPackageAsync(winrt::Windows::Foundation::Uri const& manifestUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, winrt::Windows::Management::Deployment::PackageVolume const& appDataVolume) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->RegisterPackageWithAppDataVolumeAsync(*(void**)(&manifestUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), *(void**)(&appDataVolume), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::PackageVolume) consume_Windows_Management_Deployment_IPackageManager3<D>::FindPackageVolume(param::hstring const& volumeName) const
    {
        void* volume{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->FindPackageVolumeByName(*(void**)(&volumeName), &volume));
        return winrt::Windows::Management::Deployment::PackageVolume{ volume, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>) consume_Windows_Management_Deployment_IPackageManager3<D>::FindPackageVolumes() const
    {
        void* volumeCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->FindPackageVolumes(&volumeCollection));
        return winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>{ volumeCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::PackageVolume) consume_Windows_Management_Deployment_IPackageManager3<D>::GetDefaultPackageVolume() const
    {
        void* volume{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->GetDefaultPackageVolume(&volume));
        return winrt::Windows::Management::Deployment::PackageVolume{ volume, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager3<D>::MovePackageToVolumeAsync(param::hstring const& packageFullName, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->MovePackageToVolumeAsync(*(void**)(&packageFullName), static_cast<uint32_t>(deploymentOptions), *(void**)(&targetVolume), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager3<D>::RemovePackageVolumeAsync(winrt::Windows::Management::Deployment::PackageVolume const& volume) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->RemovePackageVolumeAsync(*(void**)(&volume), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IPackageManager3<D>::SetDefaultPackageVolume(winrt::Windows::Management::Deployment::PackageVolume const& volume) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->SetDefaultPackageVolume(*(void**)(&volume)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IPackageManager3<D>::SetPackageStatus(param::hstring const& packageFullName, winrt::Windows::Management::Deployment::PackageStatus const& status) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->SetPackageStatus(*(void**)(&packageFullName), static_cast<uint32_t>(status)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager3<D>::SetPackageVolumeOfflineAsync(winrt::Windows::Management::Deployment::PackageVolume const& packageVolume) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->SetPackageVolumeOfflineAsync(*(void**)(&packageVolume), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager3<D>::SetPackageVolumeOnlineAsync(winrt::Windows::Management::Deployment::PackageVolume const& packageVolume) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->SetPackageVolumeOnlineAsync(*(void**)(&packageVolume), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager3<D>::StagePackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->StagePackageToVolumeAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), *(void**)(&targetVolume), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager3<D>::StageUserDataAsync(param::hstring const& packageFullName, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager3)->StageUserDataWithOptionsAsync(*(void**)(&packageFullName), static_cast<uint32_t>(deploymentOptions), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Deployment::PackageVolume>>) consume_Windows_Management_Deployment_IPackageManager4<D>::GetPackageVolumesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager4)->GetPackageVolumesAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Deployment::PackageVolume>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager5<D>::AddPackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<winrt::Windows::Foundation::Uri> const& externalPackageUris) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager5)->AddPackageToVolumeAndOptionalPackagesAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), *(void**)(&targetVolume), *(void**)(&optionalPackageFamilyNames), *(void**)(&externalPackageUris), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager5<D>::StagePackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<winrt::Windows::Foundation::Uri> const& externalPackageUris) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager5)->StagePackageToVolumeAndOptionalPackagesAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), *(void**)(&targetVolume), *(void**)(&optionalPackageFamilyNames), *(void**)(&externalPackageUris), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager5<D>::RegisterPackageByFamilyNameAsync(param::hstring const& mainPackageFamilyName, param::async_iterable<hstring> const& dependencyPackageFamilyNames, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, winrt::Windows::Management::Deployment::PackageVolume const& appDataVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager5)->RegisterPackageByFamilyNameAndOptionalPackagesAsync(*(void**)(&mainPackageFamilyName), *(void**)(&dependencyPackageFamilyNames), static_cast<uint32_t>(deploymentOptions), *(void**)(&appDataVolume), *(void**)(&optionalPackageFamilyNames), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::PackageManagerDebugSettings) consume_Windows_Management_Deployment_IPackageManager5<D>::DebugSettings() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager5)->get_DebugSettings(&value));
        return winrt::Windows::Management::Deployment::PackageManagerDebugSettings{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager6<D>::ProvisionPackageForAllUsersAsync(param::hstring const& packageFamilyName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager6)->ProvisionPackageForAllUsersAsync(*(void**)(&packageFamilyName), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager6<D>::AddPackageByAppInstallerFileAsync(winrt::Windows::Foundation::Uri const& appInstallerFileUri, winrt::Windows::Management::Deployment::AddPackageByAppInstallerOptions const& options, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager6)->AddPackageByAppInstallerFileAsync(*(void**)(&appInstallerFileUri), static_cast<uint32_t>(options), *(void**)(&targetVolume), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager6<D>::RequestAddPackageByAppInstallerFileAsync(winrt::Windows::Foundation::Uri const& appInstallerFileUri, winrt::Windows::Management::Deployment::AddPackageByAppInstallerOptions const& options, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager6)->RequestAddPackageByAppInstallerFileAsync(*(void**)(&appInstallerFileUri), static_cast<uint32_t>(options), *(void**)(&targetVolume), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager6<D>::AddPackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& options, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<winrt::Windows::Foundation::Uri> const& packageUrisToInstall, param::async_iterable<winrt::Windows::Foundation::Uri> const& relatedPackageUris) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager6)->AddPackageToVolumeAndRelatedSetAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(options), *(void**)(&targetVolume), *(void**)(&optionalPackageFamilyNames), *(void**)(&packageUrisToInstall), *(void**)(&relatedPackageUris), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager6<D>::StagePackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& options, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<winrt::Windows::Foundation::Uri> const& packageUrisToInstall, param::async_iterable<winrt::Windows::Foundation::Uri> const& relatedPackageUris) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager6)->StagePackageToVolumeAndRelatedSetAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(options), *(void**)(&targetVolume), *(void**)(&optionalPackageFamilyNames), *(void**)(&packageUrisToInstall), *(void**)(&relatedPackageUris), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager6<D>::RequestAddPackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<winrt::Windows::Foundation::Uri> const& relatedPackageUris) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager6)->RequestAddPackageAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), *(void**)(&targetVolume), *(void**)(&optionalPackageFamilyNames), *(void**)(&relatedPackageUris), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager7<D>::RequestAddPackageAsync(winrt::Windows::Foundation::Uri const& packageUri, param::async_iterable<winrt::Windows::Foundation::Uri> const& dependencyPackageUris, winrt::Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, winrt::Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<winrt::Windows::Foundation::Uri> const& relatedPackageUris, param::async_iterable<winrt::Windows::Foundation::Uri> const& packageUrisToInstall) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager7)->RequestAddPackageAndRelatedSetAsync(*(void**)(&packageUri), *(void**)(&dependencyPackageUris), static_cast<uint32_t>(deploymentOptions), *(void**)(&targetVolume), *(void**)(&optionalPackageFamilyNames), *(void**)(&relatedPackageUris), *(void**)(&packageUrisToInstall), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager8<D>::DeprovisionPackageForAllUsersAsync(param::hstring const& packageFamilyName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager8)->DeprovisionPackageForAllUsersAsync(*(void**)(&packageFamilyName), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageManager9<D>::FindProvisionedPackages() const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager9)->FindProvisionedPackages(&packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager9<D>::AddPackageByUriAsync(winrt::Windows::Foundation::Uri const& packageUri, winrt::Windows::Management::Deployment::AddPackageOptions const& options) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager9)->AddPackageByUriAsync(*(void**)(&packageUri), *(void**)(&options), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager9<D>::StagePackageByUriAsync(winrt::Windows::Foundation::Uri const& packageUri, winrt::Windows::Management::Deployment::StagePackageOptions const& options) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager9)->StagePackageByUriAsync(*(void**)(&packageUri), *(void**)(&options), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager9<D>::RegisterPackageByUriAsync(winrt::Windows::Foundation::Uri const& manifestUri, winrt::Windows::Management::Deployment::RegisterPackageOptions const& options) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager9)->RegisterPackageByUriAsync(*(void**)(&manifestUri), *(void**)(&options), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>) consume_Windows_Management_Deployment_IPackageManager9<D>::RegisterPackagesByFullNameAsync(param::async_iterable<hstring> const& packageFullNames, winrt::Windows::Management::Deployment::RegisterPackageOptions const& options) const
    {
        void* deploymentOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager9)->RegisterPackagesByFullNameAsync(*(void**)(&packageFullNames), *(void**)(&options), &deploymentOperation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>{ deploymentOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IPackageManager9<D>::SetPackageStubPreference(param::hstring const& packageFamilyName, winrt::Windows::Management::Deployment::PackageStubPreference const& useStub) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager9)->SetPackageStubPreference(*(void**)(&packageFamilyName), static_cast<int32_t>(useStub)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::PackageStubPreference) consume_Windows_Management_Deployment_IPackageManager9<D>::GetPackageStubPreference(param::hstring const& packageFamilyName) const
    {
        winrt::Windows::Management::Deployment::PackageStubPreference value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManager9)->GetPackageStubPreference(*(void**)(&packageFamilyName), reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Management_Deployment_IPackageManagerDebugSettings<D>::SetContentGroupStateAsync(winrt::Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, winrt::Windows::ApplicationModel::PackageContentGroupState const& state) const
    {
        void* action{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManagerDebugSettings)->SetContentGroupStateAsync(*(void**)(&package), *(void**)(&contentGroupName), static_cast<int32_t>(state), &action));
        return winrt::Windows::Foundation::IAsyncAction{ action, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Management_Deployment_IPackageManagerDebugSettings<D>::SetContentGroupStateAsync(winrt::Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, winrt::Windows::ApplicationModel::PackageContentGroupState const& state, double completionPercentage) const
    {
        void* action{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageManagerDebugSettings)->SetContentGroupStateWithPercentageAsync(*(void**)(&package), *(void**)(&contentGroupName), static_cast<int32_t>(state), completionPercentage, &action));
        return winrt::Windows::Foundation::IAsyncAction{ action, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_IPackageUserInformation<D>::UserSecurityId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageUserInformation)->get_UserSecurityId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::PackageInstallState) consume_Windows_Management_Deployment_IPackageUserInformation<D>::InstallState() const
    {
        winrt::Windows::Management::Deployment::PackageInstallState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageUserInformation)->get_InstallState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IPackageVolume<D>::IsOffline() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->get_IsOffline(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IPackageVolume<D>::IsSystemVolume() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->get_IsSystemVolume(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_IPackageVolume<D>::MountPoint() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->get_MountPoint(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_IPackageVolume<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_IPackageVolume<D>::PackageStorePath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->get_PackageStorePath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IPackageVolume<D>::SupportsHardLinks() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->get_SupportsHardLinks(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackages() const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackages(&packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByNamePublisher(*(void**)(&packageName), *(void**)(&packagePublisher), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackages(param::hstring const& packageFamilyName) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByPackageFamilyName(*(void**)(&packageFamilyName), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesWithPackageTypes(winrt::Windows::Management::Deployment::PackageTypes const& packageTypes) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesWithPackageTypes(static_cast<uint32_t>(packageTypes), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesWithPackageTypes(winrt::Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByNamePublisherWithPackagesTypes(static_cast<uint32_t>(packageTypes), *(void**)(&packageName), *(void**)(&packagePublisher), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesWithPackageTypes(winrt::Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByPackageFamilyNameWithPackageTypes(static_cast<uint32_t>(packageTypes), *(void**)(&packageFamilyName), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackage(param::hstring const& packageFullName) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackageByPackageFullName(*(void**)(&packageFullName), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUser(param::hstring const& userSecurityId) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityId(*(void**)(&userSecurityId), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdNamePublisher(*(void**)(&userSecurityId), *(void**)(&packageName), *(void**)(&packagePublisher), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdPackageFamilyName(*(void**)(&userSecurityId), *(void**)(&packageFamilyName), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, winrt::Windows::Management::Deployment::PackageTypes const& packageTypes) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdWithPackageTypes(*(void**)(&userSecurityId), static_cast<uint32_t>(packageTypes), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, winrt::Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(*(void**)(&userSecurityId), static_cast<uint32_t>(packageTypes), *(void**)(&packageName), *(void**)(&packagePublisher), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, winrt::Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(*(void**)(&userSecurityId), static_cast<uint32_t>(packageTypes), *(void**)(&packageFamilyName), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>) consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const
    {
        void* packageCollection{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume)->FindPackageByUserSecurityIdPackageFullName(*(void**)(&userSecurityId), *(void**)(&packageFullName), &packageCollection));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>{ packageCollection, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IPackageVolume2<D>::IsFullTrustPackageSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume2)->get_IsFullTrustPackageSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IPackageVolume2<D>::IsAppxInstallSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume2)->get_IsAppxInstallSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<uint64_t>) consume_Windows_Management_Deployment_IPackageVolume2<D>::GetAvailableSpaceAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IPackageVolume2)->GetAvailableSpaceAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<uint64_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::DependencyPackageUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_DependencyPackageUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::PackageVolume) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::AppDataVolume() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_AppDataVolume(&value));
        return winrt::Windows::Management::Deployment::PackageVolume{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::AppDataVolume(winrt::Windows::Management::Deployment::PackageVolume const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_AppDataVolume(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::OptionalPackageFamilyNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_OptionalPackageFamilyNames(&value));
        return winrt::Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::ExternalLocationUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_ExternalLocationUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::ExternalLocationUri(winrt::Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_ExternalLocationUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::DeveloperMode() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_DeveloperMode(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::DeveloperMode(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_DeveloperMode(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::ForceAppShutdown() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_ForceAppShutdown(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::ForceAppShutdown(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_ForceAppShutdown(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::ForceTargetAppShutdown() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_ForceTargetAppShutdown(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::ForceTargetAppShutdown(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_ForceTargetAppShutdown(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::ForceUpdateFromAnyVersion() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_ForceUpdateFromAnyVersion(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::ForceUpdateFromAnyVersion(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_ForceUpdateFromAnyVersion(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::InstallAllResources() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_InstallAllResources(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::InstallAllResources(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_InstallAllResources(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::StageInPlace() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_StageInPlace(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::StageInPlace(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_StageInPlace(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::AllowUnsigned() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_AllowUnsigned(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::AllowUnsigned(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_AllowUnsigned(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::DeferRegistrationWhenPackagesAreInUse() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->get_DeferRegistrationWhenPackagesAreInUse(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IRegisterPackageOptions<D>::DeferRegistrationWhenPackagesAreInUse(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions)->put_DeferRegistrationWhenPackagesAreInUse(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::Uri, hstring>) consume_Windows_Management_Deployment_IRegisterPackageOptions2<D>::ExpectedDigests() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IRegisterPackageOptions2)->get_ExpectedDigests(&value));
        return winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::Uri, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_ISharedPackageContainer<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainer)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_ISharedPackageContainer<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainer)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainerMember>) consume_Windows_Management_Deployment_ISharedPackageContainer<D>::GetMembers() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainer)->GetMembers(&result));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainerMember>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::UpdateSharedPackageContainerResult) consume_Windows_Management_Deployment_ISharedPackageContainer<D>::RemovePackageFamily(param::hstring const& packageFamilyName, winrt::Windows::Management::Deployment::UpdateSharedPackageContainerOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainer)->RemovePackageFamily(*(void**)(&packageFamilyName), *(void**)(&options), &result));
        return winrt::Windows::Management::Deployment::UpdateSharedPackageContainerResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::UpdateSharedPackageContainerResult) consume_Windows_Management_Deployment_ISharedPackageContainer<D>::ResetData() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainer)->ResetData(&result));
        return winrt::Windows::Management::Deployment::UpdateSharedPackageContainerResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::CreateSharedPackageContainerResult) consume_Windows_Management_Deployment_ISharedPackageContainerManager<D>::CreateContainer(param::hstring const& name, winrt::Windows::Management::Deployment::CreateSharedPackageContainerOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerManager)->CreateContainer(*(void**)(&name), *(void**)(&options), &result));
        return winrt::Windows::Management::Deployment::CreateSharedPackageContainerResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::DeleteSharedPackageContainerResult) consume_Windows_Management_Deployment_ISharedPackageContainerManager<D>::DeleteContainer(param::hstring const& id, winrt::Windows::Management::Deployment::DeleteSharedPackageContainerOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerManager)->DeleteContainer(*(void**)(&id), *(void**)(&options), &result));
        return winrt::Windows::Management::Deployment::DeleteSharedPackageContainerResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainer) consume_Windows_Management_Deployment_ISharedPackageContainerManager<D>::GetContainer(param::hstring const& id) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerManager)->GetContainer(*(void**)(&id), &result));
        return winrt::Windows::Management::Deployment::SharedPackageContainer{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainer>) consume_Windows_Management_Deployment_ISharedPackageContainerManager<D>::FindContainers() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerManager)->FindContainers(&result));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainer>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainer>) consume_Windows_Management_Deployment_ISharedPackageContainerManager<D>::FindContainers(winrt::Windows::Management::Deployment::FindSharedPackageContainerOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerManager)->FindContainersWithOptions(*(void**)(&options), &result));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainer>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainerManager) consume_Windows_Management_Deployment_ISharedPackageContainerManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerManagerStatics)->GetDefault(&result));
        return winrt::Windows::Management::Deployment::SharedPackageContainerManager{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainerManager) consume_Windows_Management_Deployment_ISharedPackageContainerManagerStatics<D>::GetForUser(param::hstring const& userSid) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerManagerStatics)->GetForUser(*(void**)(&userSid), &result));
        return winrt::Windows::Management::Deployment::SharedPackageContainerManager{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainerManager) consume_Windows_Management_Deployment_ISharedPackageContainerManagerStatics<D>::GetForProvisioning() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerManagerStatics)->GetForProvisioning(&result));
        return winrt::Windows::Management::Deployment::SharedPackageContainerManager{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Management_Deployment_ISharedPackageContainerMember<D>::PackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerMember)->get_PackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainerMember) consume_Windows_Management_Deployment_ISharedPackageContainerMemberFactory<D>::CreateInstance(param::hstring const& packageFamilyName) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::ISharedPackageContainerMemberFactory)->CreateInstance(*(void**)(&packageFamilyName), &value));
        return winrt::Windows::Management::Deployment::SharedPackageContainerMember{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IStagePackageOptions<D>::DependencyPackageUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_DependencyPackageUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::PackageVolume) consume_Windows_Management_Deployment_IStagePackageOptions<D>::TargetVolume() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_TargetVolume(&value));
        return winrt::Windows::Management::Deployment::PackageVolume{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IStagePackageOptions<D>::TargetVolume(winrt::Windows::Management::Deployment::PackageVolume const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->put_TargetVolume(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Management_Deployment_IStagePackageOptions<D>::OptionalPackageFamilyNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_OptionalPackageFamilyNames(&value));
        return winrt::Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IStagePackageOptions<D>::OptionalPackageUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_OptionalPackageUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>) consume_Windows_Management_Deployment_IStagePackageOptions<D>::RelatedPackageUris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_RelatedPackageUris(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) consume_Windows_Management_Deployment_IStagePackageOptions<D>::ExternalLocationUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_ExternalLocationUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IStagePackageOptions<D>::ExternalLocationUri(winrt::Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->put_ExternalLocationUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::StubPackageOption) consume_Windows_Management_Deployment_IStagePackageOptions<D>::StubPackageOption() const
    {
        winrt::Windows::Management::Deployment::StubPackageOption value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_StubPackageOption(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IStagePackageOptions<D>::StubPackageOption(winrt::Windows::Management::Deployment::StubPackageOption const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->put_StubPackageOption(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IStagePackageOptions<D>::DeveloperMode() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_DeveloperMode(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IStagePackageOptions<D>::DeveloperMode(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->put_DeveloperMode(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IStagePackageOptions<D>::ForceUpdateFromAnyVersion() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_ForceUpdateFromAnyVersion(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IStagePackageOptions<D>::ForceUpdateFromAnyVersion(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->put_ForceUpdateFromAnyVersion(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IStagePackageOptions<D>::InstallAllResources() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_InstallAllResources(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IStagePackageOptions<D>::InstallAllResources(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->put_InstallAllResources(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IStagePackageOptions<D>::RequiredContentGroupOnly() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_RequiredContentGroupOnly(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IStagePackageOptions<D>::RequiredContentGroupOnly(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->put_RequiredContentGroupOnly(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IStagePackageOptions<D>::StageInPlace() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_StageInPlace(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IStagePackageOptions<D>::StageInPlace(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->put_StageInPlace(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IStagePackageOptions<D>::AllowUnsigned() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->get_AllowUnsigned(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IStagePackageOptions<D>::AllowUnsigned(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions)->put_AllowUnsigned(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::Uri, hstring>) consume_Windows_Management_Deployment_IStagePackageOptions2<D>::ExpectedDigests() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IStagePackageOptions2)->get_ExpectedDigests(&value));
        return winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::Uri, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IUpdateSharedPackageContainerOptions<D>::ForceAppShutdown() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerOptions)->get_ForceAppShutdown(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IUpdateSharedPackageContainerOptions<D>::ForceAppShutdown(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerOptions)->put_ForceAppShutdown(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Management_Deployment_IUpdateSharedPackageContainerOptions<D>::RequirePackagesPresent() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerOptions)->get_RequirePackagesPresent(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Management_Deployment_IUpdateSharedPackageContainerOptions<D>::RequirePackagesPresent(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerOptions)->put_RequirePackagesPresent(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus) consume_Windows_Management_Deployment_IUpdateSharedPackageContainerResult<D>::Status() const
    {
        winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_Management_Deployment_IUpdateSharedPackageContainerResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IAddPackageOptions> : produce_base<D, winrt::Windows::Management::Deployment::IAddPackageOptions>
    {
        int32_t __stdcall get_DependencyPackageUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().DependencyPackageUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetVolume(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::PackageVolume>(this->shim().TargetVolume());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetVolume(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetVolume(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OptionalPackageFamilyNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<hstring>>(this->shim().OptionalPackageFamilyNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OptionalPackageUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().OptionalPackageUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RelatedPackageUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().RelatedPackageUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExternalLocationUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().ExternalLocationUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ExternalLocationUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExternalLocationUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StubPackageOption(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::StubPackageOption>(this->shim().StubPackageOption());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StubPackageOption(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StubPackageOption(*reinterpret_cast<winrt::Windows::Management::Deployment::StubPackageOption const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeveloperMode(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DeveloperMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DeveloperMode(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeveloperMode(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceAppShutdown(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceAppShutdown());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceAppShutdown(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceAppShutdown(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceTargetAppShutdown(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceTargetAppShutdown());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceTargetAppShutdown(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceTargetAppShutdown(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceUpdateFromAnyVersion(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceUpdateFromAnyVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceUpdateFromAnyVersion(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceUpdateFromAnyVersion(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstallAllResources(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().InstallAllResources());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InstallAllResources(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InstallAllResources(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequiredContentGroupOnly(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequiredContentGroupOnly());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequiredContentGroupOnly(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequiredContentGroupOnly(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RetainFilesOnFailure(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RetainFilesOnFailure());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RetainFilesOnFailure(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RetainFilesOnFailure(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StageInPlace(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().StageInPlace());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StageInPlace(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StageInPlace(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowUnsigned(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowUnsigned());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowUnsigned(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowUnsigned(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeferRegistrationWhenPackagesAreInUse(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DeferRegistrationWhenPackagesAreInUse());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DeferRegistrationWhenPackagesAreInUse(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeferRegistrationWhenPackagesAreInUse(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IAddPackageOptions2> : produce_base<D, winrt::Windows::Management::Deployment::IAddPackageOptions2>
    {
        int32_t __stdcall get_ExpectedDigests(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::Uri, hstring>>(this->shim().ExpectedDigests());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LimitToExistingPackages(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().LimitToExistingPackages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LimitToExistingPackages(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LimitToExistingPackages(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IAppInstallerManager> : produce_base<D, winrt::Windows::Management::Deployment::IAppInstallerManager>
    {
        int32_t __stdcall SetAutoUpdateSettings(void* packageFamilyName, void* appInstallerInfo) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAutoUpdateSettings(*reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<winrt::Windows::Management::Deployment::AutoUpdateSettingsOptions const*>(&appInstallerInfo));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearAutoUpdateSettings(void* packageFamilyName) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAutoUpdateSettings(*reinterpret_cast<hstring const*>(&packageFamilyName));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PauseAutoUpdatesUntil(void* packageFamilyName, int64_t dateTime) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PauseAutoUpdatesUntil(*reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&dateTime));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IAppInstallerManagerStatics> : produce_base<D, winrt::Windows::Management::Deployment::IAppInstallerManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::AppInstallerManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetForSystem(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::AppInstallerManager>(this->shim().GetForSystem());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions> : produce_base<D, winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions>
    {
        int32_t __stdcall get_Version(struct struct_Windows_ApplicationModel_PackageVersion* value) noexcept final try
        {
            zero_abi<winrt::Windows::ApplicationModel::PackageVersion>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::PackageVersion>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Version(struct struct_Windows_ApplicationModel_PackageVersion value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Version(*reinterpret_cast<winrt::Windows::ApplicationModel::PackageVersion const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppInstallerUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().AppInstallerUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AppInstallerUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppInstallerUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OnLaunch(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().OnLaunch());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_OnLaunch(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnLaunch(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HoursBetweenUpdateChecks(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().HoursBetweenUpdateChecks());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HoursBetweenUpdateChecks(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HoursBetweenUpdateChecks(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShowPrompt(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowPrompt());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ShowPrompt(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowPrompt(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateBlocksActivation(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().UpdateBlocksActivation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UpdateBlocksActivation(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateBlocksActivation(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutomaticBackgroundTask(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutomaticBackgroundTask());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AutomaticBackgroundTask(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutomaticBackgroundTask(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceUpdateFromAnyVersion(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceUpdateFromAnyVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceUpdateFromAnyVersion(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceUpdateFromAnyVersion(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsAutoRepairEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAutoRepairEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsAutoRepairEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAutoRepairEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().UpdateUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RepairUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().RepairUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DependencyPackageUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().DependencyPackageUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OptionalPackageUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().OptionalPackageUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptionsStatics> : produce_base<D, winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptionsStatics>
    {
        int32_t __stdcall CreateFromAppInstallerInfo(void* appInstallerInfo, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::AutoUpdateSettingsOptions>(this->shim().CreateFromAppInstallerInfo(*reinterpret_cast<winrt::Windows::ApplicationModel::AppInstallerInfo const*>(&appInstallerInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::ICreateSharedPackageContainerOptions> : produce_base<D, winrt::Windows::Management::Deployment::ICreateSharedPackageContainerOptions>
    {
        int32_t __stdcall get_Members(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainerMember>>(this->shim().Members());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceAppShutdown(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceAppShutdown());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceAppShutdown(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceAppShutdown(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CreateCollisionOption(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainerCreationCollisionOptions>(this->shim().CreateCollisionOption());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CreateCollisionOption(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateCollisionOption(*reinterpret_cast<winrt::Windows::Management::Deployment::SharedPackageContainerCreationCollisionOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::ICreateSharedPackageContainerResult> : produce_base<D, winrt::Windows::Management::Deployment::ICreateSharedPackageContainerResult>
    {
        int32_t __stdcall get_Container(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainer>(this->shim().Container());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerOptions> : produce_base<D, winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerOptions>
    {
        int32_t __stdcall get_ForceAppShutdown(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceAppShutdown());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceAppShutdown(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceAppShutdown(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllUsers(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllUsers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllUsers(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllUsers(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerResult> : produce_base<D, winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IDeploymentResult> : produce_base<D, winrt::Windows::Management::Deployment::IDeploymentResult>
    {
        int32_t __stdcall get_ErrorText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ErrorText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActivityId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedErrorCode(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IDeploymentResult2> : produce_base<D, winrt::Windows::Management::Deployment::IDeploymentResult2>
    {
        int32_t __stdcall get_IsRegistered(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRegistered());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IFindSharedPackageContainerOptions> : produce_base<D, winrt::Windows::Management::Deployment::IFindSharedPackageContainerOptions>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Name(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PackageFamilyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageAllUserProvisioningOptions> : produce_base<D, winrt::Windows::Management::Deployment::IPackageAllUserProvisioningOptions>
    {
        int32_t __stdcall get_OptionalPackageFamilyNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<hstring>>(this->shim().OptionalPackageFamilyNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProjectionOrderPackageFamilyNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<hstring>>(this->shim().ProjectionOrderPackageFamilyNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager>
    {
        int32_t __stdcall AddPackageAsync(void* packageUri, void* dependencyPackageUris, uint32_t deploymentOptions, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdatePackageAsync(void* packageUri, void* dependencyPackageUris, uint32_t deploymentOptions, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().UpdatePackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemovePackageAsync(void* packageFullName, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RemovePackageAsync(*reinterpret_cast<hstring const*>(&packageFullName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StagePackageAsync(void* packageUri, void* dependencyPackageUris, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterPackageAsync(void* manifestUri, void* dependencyPackageUris, uint32_t deploymentOptions, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&manifestUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackages(void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityId(void* userSecurityId, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByNamePublisher(void* packageName, void* packagePublisher, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdNamePublisher(void* userSecurityId, void* packageName, void* packagePublisher, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindUsers(void* packageFullName, void** users) noexcept final try
        {
            clear_abi(users);
            typename D::abi_guard guard(this->shim());
            *users = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageUserInformation>>(this->shim().FindUsers(*reinterpret_cast<hstring const*>(&packageFullName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPackageState(void* packageFullName, int32_t packageState) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPackageState(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageState const*>(&packageState));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackageByPackageFullName(void* packageFullName, void** packageInformation) noexcept final try
        {
            clear_abi(packageInformation);
            typename D::abi_guard guard(this->shim());
            *packageInformation = detach_from<winrt::Windows::ApplicationModel::Package>(this->shim().FindPackage(*reinterpret_cast<hstring const*>(&packageFullName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CleanupPackageForUserAsync(void* packageName, void* userSecurityId, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().CleanupPackageForUserAsync(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&userSecurityId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByPackageFamilyName(void* packageFamilyName, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdPackageFamilyName(void* userSecurityId, void* packageFamilyName, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackageByUserSecurityIdPackageFullName(void* userSecurityId, void* packageFullName, void** packageInformation) noexcept final try
        {
            clear_abi(packageInformation);
            typename D::abi_guard guard(this->shim());
            *packageInformation = detach_from<winrt::Windows::ApplicationModel::Package>(this->shim().FindPackageForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFullName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager10> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager10>
    {
        int32_t __stdcall ProvisionPackageForAllUsersWithOptionsAsync(void* mainPackageFamilyName, void* options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().ProvisionPackageForAllUsersAsync(*reinterpret_cast<hstring const*>(&mainPackageFamilyName), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageAllUserProvisioningOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager2> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager2>
    {
        int32_t __stdcall RemovePackageWithOptionsAsync(void* packageFullName, uint32_t removalOptions, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RemovePackageAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<winrt::Windows::Management::Deployment::RemovalOptions const*>(&removalOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StagePackageWithOptionsAsync(void* packageUri, void* dependencyPackageUris, uint32_t deploymentOptions, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterPackageByFullNameAsync(void* mainPackageFullName, void* dependencyPackageFullNames, uint32_t deploymentOptions, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackageByFullNameAsync(*reinterpret_cast<hstring const*>(&mainPackageFullName), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&dependencyPackageFullNames), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesWithPackageTypes(uint32_t packageTypes, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdWithPackageTypes(void* userSecurityId, uint32_t packageTypes, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByNamePublisherWithPackageTypes(void* packageName, void* packagePublisher, uint32_t packageTypes, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(void* userSecurityId, void* packageName, void* packagePublisher, uint32_t packageTypes, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(void* packageFamilyName, uint32_t packageTypes, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(void* userSecurityId, void* packageFamilyName, uint32_t packageTypes, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StageUserDataAsync(void* packageFullName, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().StageUserDataAsync(*reinterpret_cast<hstring const*>(&packageFullName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager3> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager3>
    {
        int32_t __stdcall AddPackageVolumeAsync(void* packageStorePath, void** packageVolume) noexcept final try
        {
            clear_abi(packageVolume);
            typename D::abi_guard guard(this->shim());
            *packageVolume = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>(this->shim().AddPackageVolumeAsync(*reinterpret_cast<hstring const*>(&packageStorePath)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddPackageToVolumeAsync(void* packageUri, void* dependencyPackageUris, uint32_t deploymentOptions, void* targetVolume, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearPackageStatus(void* packageFullName, uint32_t status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearPackageStatus(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageStatus const*>(&status));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterPackageWithAppDataVolumeAsync(void* manifestUri, void* dependencyPackageUris, uint32_t deploymentOptions, void* appDataVolume, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&manifestUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&appDataVolume)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackageVolumeByName(void* volumeName, void** volume) noexcept final try
        {
            clear_abi(volume);
            typename D::abi_guard guard(this->shim());
            *volume = detach_from<winrt::Windows::Management::Deployment::PackageVolume>(this->shim().FindPackageVolume(*reinterpret_cast<hstring const*>(&volumeName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackageVolumes(void** volumeCollection) noexcept final try
        {
            clear_abi(volumeCollection);
            typename D::abi_guard guard(this->shim());
            *volumeCollection = detach_from<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>>(this->shim().FindPackageVolumes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDefaultPackageVolume(void** volume) noexcept final try
        {
            clear_abi(volume);
            typename D::abi_guard guard(this->shim());
            *volume = detach_from<winrt::Windows::Management::Deployment::PackageVolume>(this->shim().GetDefaultPackageVolume());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall MovePackageToVolumeAsync(void* packageFullName, uint32_t deploymentOptions, void* targetVolume, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().MovePackageToVolumeAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemovePackageVolumeAsync(void* volume, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RemovePackageVolumeAsync(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&volume)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetDefaultPackageVolume(void* volume) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultPackageVolume(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&volume));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPackageStatus(void* packageFullName, uint32_t status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPackageStatus(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageStatus const*>(&status));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPackageVolumeOfflineAsync(void* packageVolume, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().SetPackageVolumeOfflineAsync(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&packageVolume)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPackageVolumeOnlineAsync(void* packageVolume, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().SetPackageVolumeOnlineAsync(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&packageVolume)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StagePackageToVolumeAsync(void* packageUri, void* dependencyPackageUris, uint32_t deploymentOptions, void* targetVolume, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StageUserDataWithOptionsAsync(void* packageFullName, uint32_t deploymentOptions, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().StageUserDataAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager4> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager4>
    {
        int32_t __stdcall GetPackageVolumesAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Management::Deployment::PackageVolume>>>(this->shim().GetPackageVolumesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager5> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager5>
    {
        int32_t __stdcall AddPackageToVolumeAndOptionalPackagesAsync(void* packageUri, void* dependencyPackageUris, uint32_t deploymentOptions, void* targetVolume, void* optionalPackageFamilyNames, void* externalPackageUris, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&externalPackageUris)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StagePackageToVolumeAndOptionalPackagesAsync(void* packageUri, void* dependencyPackageUris, uint32_t deploymentOptions, void* targetVolume, void* optionalPackageFamilyNames, void* externalPackageUris, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&externalPackageUris)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterPackageByFamilyNameAndOptionalPackagesAsync(void* mainPackageFamilyName, void* dependencyPackageFamilyNames, uint32_t deploymentOptions, void* appDataVolume, void* optionalPackageFamilyNames, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackageByFamilyNameAsync(*reinterpret_cast<hstring const*>(&mainPackageFamilyName), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&dependencyPackageFamilyNames), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&appDataVolume), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DebugSettings(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::PackageManagerDebugSettings>(this->shim().DebugSettings());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager6> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager6>
    {
        int32_t __stdcall ProvisionPackageForAllUsersAsync(void* packageFamilyName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().ProvisionPackageForAllUsersAsync(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddPackageByAppInstallerFileAsync(void* appInstallerFileUri, uint32_t options, void* targetVolume, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageByAppInstallerFileAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&appInstallerFileUri), *reinterpret_cast<winrt::Windows::Management::Deployment::AddPackageByAppInstallerOptions const*>(&options), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAddPackageByAppInstallerFileAsync(void* appInstallerFileUri, uint32_t options, void* targetVolume, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RequestAddPackageByAppInstallerFileAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&appInstallerFileUri), *reinterpret_cast<winrt::Windows::Management::Deployment::AddPackageByAppInstallerOptions const*>(&options), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddPackageToVolumeAndRelatedSetAsync(void* packageUri, void* dependencyPackageUris, uint32_t options, void* targetVolume, void* optionalPackageFamilyNames, void* packageUrisToInstall, void* relatedPackageUris, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&options), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&packageUrisToInstall), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&relatedPackageUris)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StagePackageToVolumeAndRelatedSetAsync(void* packageUri, void* dependencyPackageUris, uint32_t options, void* targetVolume, void* optionalPackageFamilyNames, void* packageUrisToInstall, void* relatedPackageUris, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&options), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&packageUrisToInstall), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&relatedPackageUris)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAddPackageAsync(void* packageUri, void* dependencyPackageUris, uint32_t deploymentOptions, void* targetVolume, void* optionalPackageFamilyNames, void* relatedPackageUris, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RequestAddPackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&relatedPackageUris)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager7> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager7>
    {
        int32_t __stdcall RequestAddPackageAndRelatedSetAsync(void* packageUri, void* dependencyPackageUris, uint32_t deploymentOptions, void* targetVolume, void* optionalPackageFamilyNames, void* relatedPackageUris, void* packageUrisToInstall, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RequestAddPackageAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<winrt::Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&relatedPackageUris), *reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri> const*>(&packageUrisToInstall)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager8> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager8>
    {
        int32_t __stdcall DeprovisionPackageForAllUsersAsync(void* packageFamilyName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().DeprovisionPackageForAllUsersAsync(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManager9> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManager9>
    {
        int32_t __stdcall FindProvisionedPackages(void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindProvisionedPackages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddPackageByUriAsync(void* packageUri, void* options, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageByUriAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Management::Deployment::AddPackageOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StagePackageByUriAsync(void* packageUri, void* options, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageByUriAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<winrt::Windows::Management::Deployment::StagePackageOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterPackageByUriAsync(void* manifestUri, void* options, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackageByUriAsync(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&manifestUri), *reinterpret_cast<winrt::Windows::Management::Deployment::RegisterPackageOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterPackagesByFullNameAsync(void* packageFullNames, void* options, void** deploymentOperation) noexcept final try
        {
            clear_abi(deploymentOperation);
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult, winrt::Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackagesByFullNameAsync(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<hstring> const*>(&packageFullNames), *reinterpret_cast<winrt::Windows::Management::Deployment::RegisterPackageOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetPackageStubPreference(void* packageFamilyName, int32_t useStub) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPackageStubPreference(*reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageStubPreference const*>(&useStub));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPackageStubPreference(void* packageFamilyName, int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::PackageStubPreference>(this->shim().GetPackageStubPreference(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageManagerDebugSettings> : produce_base<D, winrt::Windows::Management::Deployment::IPackageManagerDebugSettings>
    {
        int32_t __stdcall SetContentGroupStateAsync(void* package, void* contentGroupName, int32_t state, void** action) noexcept final try
        {
            clear_abi(action);
            typename D::abi_guard guard(this->shim());
            *action = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetContentGroupStateAsync(*reinterpret_cast<winrt::Windows::ApplicationModel::Package const*>(&package), *reinterpret_cast<hstring const*>(&contentGroupName), *reinterpret_cast<winrt::Windows::ApplicationModel::PackageContentGroupState const*>(&state)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetContentGroupStateWithPercentageAsync(void* package, void* contentGroupName, int32_t state, double completionPercentage, void** action) noexcept final try
        {
            clear_abi(action);
            typename D::abi_guard guard(this->shim());
            *action = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetContentGroupStateAsync(*reinterpret_cast<winrt::Windows::ApplicationModel::Package const*>(&package), *reinterpret_cast<hstring const*>(&contentGroupName), *reinterpret_cast<winrt::Windows::ApplicationModel::PackageContentGroupState const*>(&state), completionPercentage));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageUserInformation> : produce_base<D, winrt::Windows::Management::Deployment::IPackageUserInformation>
    {
        int32_t __stdcall get_UserSecurityId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserSecurityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstallState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::PackageInstallState>(this->shim().InstallState());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageVolume> : produce_base<D, winrt::Windows::Management::Deployment::IPackageVolume>
    {
        int32_t __stdcall get_IsOffline(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOffline());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSystemVolume(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSystemVolume());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MountPoint(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MountPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PackageStorePath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageStorePath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportsHardLinks(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SupportsHardLinks());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackages(void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByNamePublisher(void* packageName, void* packagePublisher, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByPackageFamilyName(void* packageFamilyName, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesWithPackageTypes(uint32_t packageTypes, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByNamePublisherWithPackagesTypes(uint32_t packageTypes, void* packageName, void* packagePublisher, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(uint32_t packageTypes, void* packageFamilyName, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackageByPackageFullName(void* packageFullName, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackage(*reinterpret_cast<hstring const*>(&packageFullName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityId(void* userSecurityId, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdNamePublisher(void* userSecurityId, void* packageName, void* packagePublisher, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdPackageFamilyName(void* userSecurityId, void* packageFamilyName, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdWithPackageTypes(void* userSecurityId, uint32_t packageTypes, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(void* userSecurityId, uint32_t packageTypes, void* packageName, void* packagePublisher, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(void* userSecurityId, uint32_t packageTypes, void* packageFamilyName, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<winrt::Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindPackageByUserSecurityIdPackageFullName(void* userSecurityId, void* packageFullName, void** packageCollection) noexcept final try
        {
            clear_abi(packageCollection);
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::Package>>(this->shim().FindPackageForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFullName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IPackageVolume2> : produce_base<D, winrt::Windows::Management::Deployment::IPackageVolume2>
    {
        int32_t __stdcall get_IsFullTrustPackageSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFullTrustPackageSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsAppxInstallSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAppxInstallSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAvailableSpaceAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<uint64_t>>(this->shim().GetAvailableSpaceAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IRegisterPackageOptions> : produce_base<D, winrt::Windows::Management::Deployment::IRegisterPackageOptions>
    {
        int32_t __stdcall get_DependencyPackageUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().DependencyPackageUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppDataVolume(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::PackageVolume>(this->shim().AppDataVolume());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AppDataVolume(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppDataVolume(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OptionalPackageFamilyNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<hstring>>(this->shim().OptionalPackageFamilyNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExternalLocationUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().ExternalLocationUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ExternalLocationUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExternalLocationUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeveloperMode(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DeveloperMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DeveloperMode(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeveloperMode(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceAppShutdown(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceAppShutdown());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceAppShutdown(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceAppShutdown(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceTargetAppShutdown(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceTargetAppShutdown());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceTargetAppShutdown(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceTargetAppShutdown(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceUpdateFromAnyVersion(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceUpdateFromAnyVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceUpdateFromAnyVersion(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceUpdateFromAnyVersion(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstallAllResources(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().InstallAllResources());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InstallAllResources(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InstallAllResources(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StageInPlace(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().StageInPlace());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StageInPlace(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StageInPlace(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowUnsigned(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowUnsigned());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowUnsigned(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowUnsigned(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeferRegistrationWhenPackagesAreInUse(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DeferRegistrationWhenPackagesAreInUse());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DeferRegistrationWhenPackagesAreInUse(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeferRegistrationWhenPackagesAreInUse(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IRegisterPackageOptions2> : produce_base<D, winrt::Windows::Management::Deployment::IRegisterPackageOptions2>
    {
        int32_t __stdcall get_ExpectedDigests(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::Uri, hstring>>(this->shim().ExpectedDigests());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::ISharedPackageContainer> : produce_base<D, winrt::Windows::Management::Deployment::ISharedPackageContainer>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMembers(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainerMember>>(this->shim().GetMembers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemovePackageFamily(void* packageFamilyName, void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::UpdateSharedPackageContainerResult>(this->shim().RemovePackageFamily(*reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<winrt::Windows::Management::Deployment::UpdateSharedPackageContainerOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ResetData(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::UpdateSharedPackageContainerResult>(this->shim().ResetData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::ISharedPackageContainerManager> : produce_base<D, winrt::Windows::Management::Deployment::ISharedPackageContainerManager>
    {
        int32_t __stdcall CreateContainer(void* name, void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::CreateSharedPackageContainerResult>(this->shim().CreateContainer(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<winrt::Windows::Management::Deployment::CreateSharedPackageContainerOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteContainer(void* id, void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::DeleteSharedPackageContainerResult>(this->shim().DeleteContainer(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<winrt::Windows::Management::Deployment::DeleteSharedPackageContainerOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetContainer(void* id, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainer>(this->shim().GetContainer(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindContainers(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainer>>(this->shim().FindContainers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindContainersWithOptions(void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Deployment::SharedPackageContainer>>(this->shim().FindContainers(*reinterpret_cast<winrt::Windows::Management::Deployment::FindSharedPackageContainerOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::ISharedPackageContainerManagerStatics> : produce_base<D, winrt::Windows::Management::Deployment::ISharedPackageContainerManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainerManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetForUser(void* userSid, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainerManager>(this->shim().GetForUser(*reinterpret_cast<hstring const*>(&userSid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetForProvisioning(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainerManager>(this->shim().GetForProvisioning());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::ISharedPackageContainerMember> : produce_base<D, winrt::Windows::Management::Deployment::ISharedPackageContainerMember>
    {
        int32_t __stdcall get_PackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::ISharedPackageContainerMemberFactory> : produce_base<D, winrt::Windows::Management::Deployment::ISharedPackageContainerMemberFactory>
    {
        int32_t __stdcall CreateInstance(void* packageFamilyName, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainerMember>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IStagePackageOptions> : produce_base<D, winrt::Windows::Management::Deployment::IStagePackageOptions>
    {
        int32_t __stdcall get_DependencyPackageUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().DependencyPackageUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetVolume(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::PackageVolume>(this->shim().TargetVolume());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TargetVolume(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetVolume(*reinterpret_cast<winrt::Windows::Management::Deployment::PackageVolume const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OptionalPackageFamilyNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<hstring>>(this->shim().OptionalPackageFamilyNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OptionalPackageUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().OptionalPackageUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RelatedPackageUris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>(this->shim().RelatedPackageUris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExternalLocationUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().ExternalLocationUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ExternalLocationUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExternalLocationUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StubPackageOption(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::StubPackageOption>(this->shim().StubPackageOption());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StubPackageOption(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StubPackageOption(*reinterpret_cast<winrt::Windows::Management::Deployment::StubPackageOption const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeveloperMode(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DeveloperMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DeveloperMode(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeveloperMode(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ForceUpdateFromAnyVersion(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceUpdateFromAnyVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceUpdateFromAnyVersion(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceUpdateFromAnyVersion(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstallAllResources(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().InstallAllResources());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InstallAllResources(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InstallAllResources(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequiredContentGroupOnly(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequiredContentGroupOnly());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequiredContentGroupOnly(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequiredContentGroupOnly(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StageInPlace(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().StageInPlace());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StageInPlace(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StageInPlace(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowUnsigned(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowUnsigned());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowUnsigned(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowUnsigned(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IStagePackageOptions2> : produce_base<D, winrt::Windows::Management::Deployment::IStagePackageOptions2>
    {
        int32_t __stdcall get_ExpectedDigests(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMap<winrt::Windows::Foundation::Uri, hstring>>(this->shim().ExpectedDigests());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerOptions> : produce_base<D, winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerOptions>
    {
        int32_t __stdcall get_ForceAppShutdown(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ForceAppShutdown());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ForceAppShutdown(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForceAppShutdown(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequirePackagesPresent(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequirePackagesPresent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequirePackagesPresent(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequirePackagesPresent(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerResult> : produce_base<D, winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Deployment::SharedPackageContainerOperationStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Management::Deployment
{
    constexpr auto operator|(AddPackageByAppInstallerOptions const left, AddPackageByAppInstallerOptions const right) noexcept
    {
        return static_cast<AddPackageByAppInstallerOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(AddPackageByAppInstallerOptions& left, AddPackageByAppInstallerOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(AddPackageByAppInstallerOptions const left, AddPackageByAppInstallerOptions const right) noexcept
    {
        return static_cast<AddPackageByAppInstallerOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(AddPackageByAppInstallerOptions& left, AddPackageByAppInstallerOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(AddPackageByAppInstallerOptions const value) noexcept
    {
        return static_cast<AddPackageByAppInstallerOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(AddPackageByAppInstallerOptions const left, AddPackageByAppInstallerOptions const right) noexcept
    {
        return static_cast<AddPackageByAppInstallerOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(AddPackageByAppInstallerOptions& left, AddPackageByAppInstallerOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(DeploymentOptions const left, DeploymentOptions const right) noexcept
    {
        return static_cast<DeploymentOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(DeploymentOptions& left, DeploymentOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(DeploymentOptions const left, DeploymentOptions const right) noexcept
    {
        return static_cast<DeploymentOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(DeploymentOptions& left, DeploymentOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(DeploymentOptions const value) noexcept
    {
        return static_cast<DeploymentOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(DeploymentOptions const left, DeploymentOptions const right) noexcept
    {
        return static_cast<DeploymentOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(DeploymentOptions& left, DeploymentOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(PackageStatus const left, PackageStatus const right) noexcept
    {
        return static_cast<PackageStatus>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(PackageStatus& left, PackageStatus const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(PackageStatus const left, PackageStatus const right) noexcept
    {
        return static_cast<PackageStatus>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(PackageStatus& left, PackageStatus const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(PackageStatus const value) noexcept
    {
        return static_cast<PackageStatus>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(PackageStatus const left, PackageStatus const right) noexcept
    {
        return static_cast<PackageStatus>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(PackageStatus& left, PackageStatus const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(PackageTypes const left, PackageTypes const right) noexcept
    {
        return static_cast<PackageTypes>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(PackageTypes& left, PackageTypes const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(PackageTypes const left, PackageTypes const right) noexcept
    {
        return static_cast<PackageTypes>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(PackageTypes& left, PackageTypes const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(PackageTypes const value) noexcept
    {
        return static_cast<PackageTypes>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(PackageTypes const left, PackageTypes const right) noexcept
    {
        return static_cast<PackageTypes>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(PackageTypes& left, PackageTypes const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(RemovalOptions const left, RemovalOptions const right) noexcept
    {
        return static_cast<RemovalOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(RemovalOptions& left, RemovalOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(RemovalOptions const left, RemovalOptions const right) noexcept
    {
        return static_cast<RemovalOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(RemovalOptions& left, RemovalOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(RemovalOptions const value) noexcept
    {
        return static_cast<RemovalOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(RemovalOptions const left, RemovalOptions const right) noexcept
    {
        return static_cast<RemovalOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(RemovalOptions& left, RemovalOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline AddPackageOptions::AddPackageOptions() :
        AddPackageOptions(impl::call_factory_cast<AddPackageOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), AddPackageOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AddPackageOptions>(); }))
    {
    }
    inline auto AppInstallerManager::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::Management::Deployment::AppInstallerManager(*)(IAppInstallerManagerStatics const&), AppInstallerManager, IAppInstallerManagerStatics>([](IAppInstallerManagerStatics const& f) { return f.GetDefault(); });
    }
    inline auto AppInstallerManager::GetForSystem()
    {
        return impl::call_factory_cast<winrt::Windows::Management::Deployment::AppInstallerManager(*)(IAppInstallerManagerStatics const&), AppInstallerManager, IAppInstallerManagerStatics>([](IAppInstallerManagerStatics const& f) { return f.GetForSystem(); });
    }
    inline AutoUpdateSettingsOptions::AutoUpdateSettingsOptions() :
        AutoUpdateSettingsOptions(impl::call_factory_cast<AutoUpdateSettingsOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), AutoUpdateSettingsOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AutoUpdateSettingsOptions>(); }))
    {
    }
    inline auto AutoUpdateSettingsOptions::CreateFromAppInstallerInfo(winrt::Windows::ApplicationModel::AppInstallerInfo const& appInstallerInfo)
    {
        return impl::call_factory<AutoUpdateSettingsOptions, IAutoUpdateSettingsOptionsStatics>([&](IAutoUpdateSettingsOptionsStatics const& f) { return f.CreateFromAppInstallerInfo(appInstallerInfo); });
    }
    inline CreateSharedPackageContainerOptions::CreateSharedPackageContainerOptions() :
        CreateSharedPackageContainerOptions(impl::call_factory_cast<CreateSharedPackageContainerOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), CreateSharedPackageContainerOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CreateSharedPackageContainerOptions>(); }))
    {
    }
    inline DeleteSharedPackageContainerOptions::DeleteSharedPackageContainerOptions() :
        DeleteSharedPackageContainerOptions(impl::call_factory_cast<DeleteSharedPackageContainerOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), DeleteSharedPackageContainerOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<DeleteSharedPackageContainerOptions>(); }))
    {
    }
    inline FindSharedPackageContainerOptions::FindSharedPackageContainerOptions() :
        FindSharedPackageContainerOptions(impl::call_factory_cast<FindSharedPackageContainerOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), FindSharedPackageContainerOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<FindSharedPackageContainerOptions>(); }))
    {
    }
    inline PackageAllUserProvisioningOptions::PackageAllUserProvisioningOptions() :
        PackageAllUserProvisioningOptions(impl::call_factory_cast<PackageAllUserProvisioningOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), PackageAllUserProvisioningOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PackageAllUserProvisioningOptions>(); }))
    {
    }
    inline PackageManager::PackageManager() :
        PackageManager(impl::call_factory_cast<PackageManager(*)(winrt::Windows::Foundation::IActivationFactory const&), PackageManager>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PackageManager>(); }))
    {
    }
    inline RegisterPackageOptions::RegisterPackageOptions() :
        RegisterPackageOptions(impl::call_factory_cast<RegisterPackageOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), RegisterPackageOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<RegisterPackageOptions>(); }))
    {
    }
    inline auto SharedPackageContainerManager::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::Management::Deployment::SharedPackageContainerManager(*)(ISharedPackageContainerManagerStatics const&), SharedPackageContainerManager, ISharedPackageContainerManagerStatics>([](ISharedPackageContainerManagerStatics const& f) { return f.GetDefault(); });
    }
    inline auto SharedPackageContainerManager::GetForUser(param::hstring const& userSid)
    {
        return impl::call_factory<SharedPackageContainerManager, ISharedPackageContainerManagerStatics>([&](ISharedPackageContainerManagerStatics const& f) { return f.GetForUser(userSid); });
    }
    inline auto SharedPackageContainerManager::GetForProvisioning()
    {
        return impl::call_factory_cast<winrt::Windows::Management::Deployment::SharedPackageContainerManager(*)(ISharedPackageContainerManagerStatics const&), SharedPackageContainerManager, ISharedPackageContainerManagerStatics>([](ISharedPackageContainerManagerStatics const& f) { return f.GetForProvisioning(); });
    }
    inline SharedPackageContainerMember::SharedPackageContainerMember(param::hstring const& packageFamilyName) :
        SharedPackageContainerMember(impl::call_factory<SharedPackageContainerMember, ISharedPackageContainerMemberFactory>([&](ISharedPackageContainerMemberFactory const& f) { return f.CreateInstance(packageFamilyName); }))
    {
    }
    inline StagePackageOptions::StagePackageOptions() :
        StagePackageOptions(impl::call_factory_cast<StagePackageOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), StagePackageOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<StagePackageOptions>(); }))
    {
    }
    inline UpdateSharedPackageContainerOptions::UpdateSharedPackageContainerOptions() :
        UpdateSharedPackageContainerOptions(impl::call_factory_cast<UpdateSharedPackageContainerOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), UpdateSharedPackageContainerOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<UpdateSharedPackageContainerOptions>(); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Management::Deployment::IAddPackageOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IAddPackageOptions2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IAppInstallerManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IAppInstallerManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IAutoUpdateSettingsOptionsStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::ICreateSharedPackageContainerOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::ICreateSharedPackageContainerResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IDeleteSharedPackageContainerResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IDeploymentResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IDeploymentResult2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IFindSharedPackageContainerOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageAllUserProvisioningOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager10> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager6> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager7> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager8> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager9> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageManagerDebugSettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageUserInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageVolume> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IPackageVolume2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IRegisterPackageOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IRegisterPackageOptions2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::ISharedPackageContainer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::ISharedPackageContainerManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::ISharedPackageContainerManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::ISharedPackageContainerMember> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::ISharedPackageContainerMemberFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IStagePackageOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IStagePackageOptions2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::IUpdateSharedPackageContainerResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::AddPackageOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::AppInstallerManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::AutoUpdateSettingsOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::CreateSharedPackageContainerOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::CreateSharedPackageContainerResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::DeleteSharedPackageContainerOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::DeleteSharedPackageContainerResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::DeploymentResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::FindSharedPackageContainerOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::PackageAllUserProvisioningOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::PackageManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::PackageManagerDebugSettings> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::PackageUserInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::PackageVolume> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::RegisterPackageOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::SharedPackageContainer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::SharedPackageContainerManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::SharedPackageContainerMember> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::StagePackageOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::UpdateSharedPackageContainerOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Deployment::UpdateSharedPackageContainerResult> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
