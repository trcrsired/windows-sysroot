// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Background_H
#define WINRT_Windows_ApplicationModel_Background_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/windows.applicationmodel.h"
#include "winrt/impl/windows.applicationmodel.activation.2.h"
#include "winrt/impl/windows.applicationmodel.calls.background.2.h"
#include "winrt/impl/windows.devices.bluetooth.2.h"
#include "winrt/impl/windows.devices.bluetooth.advertisement.2.h"
#include "winrt/impl/windows.devices.bluetooth.background.2.h"
#include "winrt/impl/windows.devices.bluetooth.genericattributeprofile.2.h"
#include "winrt/impl/windows.devices.geolocation.2.h"
#include "winrt/impl/windows.devices.sensors.2.h"
#include "winrt/impl/windows.devices.smartcards.2.h"
#include "winrt/impl/windows.devices.sms.2.h"
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.foundation.collections.2.h"
#include "winrt/impl/windows.networking.2.h"
#include "winrt/impl/windows.networking.sockets.2.h"
#include "winrt/impl/windows.storage.2.h"
#include "winrt/impl/windows.storage.provider.2.h"
#include "winrt/impl/windows.system.2.h"
#include "winrt/impl/windows.ui.notifications.2.h"
#include "winrt/impl/windows.applicationmodel.background.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Sensors::ActivityType>) consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>::SubscribedActivities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IActivitySensorTrigger)->get_SubscribedActivities(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Sensors::ActivityType>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>::ReportInterval() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IActivitySensorTrigger)->get_ReportInterval(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Sensors::ActivityType>) consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>::SupportedActivities() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IActivitySensorTrigger)->get_SupportedActivities(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Sensors::ActivityType>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IActivitySensorTrigger<D>::MinimumReportInterval() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IActivitySensorTrigger)->get_MinimumReportInterval(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::ActivitySensorTrigger) consume_Windows_ApplicationModel_Background_IActivitySensorTriggerFactory<D>::Create(uint32_t reportIntervalInMilliseconds) const
    {
        void* activityTrigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IActivitySensorTriggerFactory)->Create(reportIntervalInMilliseconds, &activityTrigger));
        return winrt::Windows::ApplicationModel::Background::ActivitySensorTrigger{ activityTrigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus>) consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics<D>::RequestAccessAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics)->RequestAccessAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::AlarmAccessStatus) consume_Windows_ApplicationModel_Background_IAlarmApplicationManagerStatics<D>::GetAccessStatus() const
    {
        winrt::Windows::ApplicationModel::Background::AlarmAccessStatus status{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics)->GetAccessStatus(reinterpret_cast<int32_t*>(&status)));
        return status;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger<D>::ProviderInfo(winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTrigger)->put_ProviderInfo(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo) consume_Windows_ApplicationModel_Background_IAppBroadcastTrigger<D>::ProviderInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTrigger)->get_ProviderInfo(&value));
        return winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::AppBroadcastTrigger) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerFactory<D>::CreateAppBroadcastTrigger(param::hstring const& providerKey) const
    {
        void* broadcastTrigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory)->CreateAppBroadcastTrigger(*(void**)(&providerKey), &broadcastTrigger));
        return winrt::Windows::ApplicationModel::Background::AppBroadcastTrigger{ broadcastTrigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::DisplayNameResource(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_DisplayNameResource(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::DisplayNameResource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_DisplayNameResource(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::LogoResource(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_LogoResource(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::LogoResource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_LogoResource(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::VideoKeyFrameInterval(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_VideoKeyFrameInterval(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::VideoKeyFrameInterval() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_VideoKeyFrameInterval(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoBitrate(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_MaxVideoBitrate(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoBitrate() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_MaxVideoBitrate(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoWidth(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_MaxVideoWidth(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoWidth() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_MaxVideoWidth(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoHeight(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->put_MaxVideoHeight(value));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IAppBroadcastTriggerProviderInfo<D>::MaxVideoHeight() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo)->get_MaxVideoHeight(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult>) consume_Windows_ApplicationModel_Background_IApplicationTrigger<D>::RequestAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IApplicationTrigger)->RequestAsync(&result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult>) consume_Windows_ApplicationModel_Background_IApplicationTrigger<D>::RequestAsync(winrt::Windows::Foundation::Collections::ValueSet const& arguments) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IApplicationTrigger)->RequestAsyncWithArguments(*(void**)(&arguments), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::ValueSet) consume_Windows_ApplicationModel_Background_IApplicationTriggerDetails<D>::Arguments() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IApplicationTriggerDetails)->get_Arguments(&value));
        return winrt::Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::RequestAccessAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->RequestAccessAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::RequestAccessAsync(param::hstring const& applicationId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->RequestAccessForApplicationAsync(*(void**)(&applicationId), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::RemoveAccess() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->RemoveAccess());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::RemoveAccess(param::hstring const& applicationId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->RemoveAccessForApplication(*(void**)(&applicationId)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::GetAccessStatus() const
    {
        winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus status{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->GetAccessStatus(reinterpret_cast<int32_t*>(&status)));
        return status;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics<D>::GetAccessStatus(param::hstring const& applicationId) const
    {
        winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus status{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics)->GetAccessStatusForApplication(*(void**)(&applicationId), reinterpret_cast<int32_t*>(&status)));
        return status;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics2<D>::RequestAccessKindAsync(winrt::Windows::ApplicationModel::Background::BackgroundAccessRequestKind const& requestedAccess, param::hstring const& reason) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2)->RequestAccessKindAsync(static_cast<int32_t>(requestedAccess), *(void**)(&reason), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics3<D>::RequestAccessKindForModernStandbyAsync(winrt::Windows::ApplicationModel::Background::BackgroundAccessRequestKind const& requestedAccess, param::hstring const& reason) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3)->RequestAccessKindForModernStandbyAsync(static_cast<int32_t>(requestedAccess), *(void**)(&reason), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics3<D>::GetAccessStatusForModernStandby() const
    {
        winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3)->GetAccessStatusForModernStandby(reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus) consume_Windows_ApplicationModel_Background_IBackgroundExecutionManagerStatics3<D>::GetAccessStatusForModernStandby(param::hstring const& applicationId) const
    {
        winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3)->GetAccessStatusForModernStandbyForApplication(*(void**)(&applicationId), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTask<D>::Run(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance const& taskInstance) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTask)->Run(*(void**)(&taskInstance)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::TaskEntryPoint(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->put_TaskEntryPoint(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::TaskEntryPoint() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->get_TaskEntryPoint(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::SetTrigger(winrt::Windows::ApplicationModel::Background::IBackgroundTrigger const& trigger) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->SetTrigger(*(void**)(&trigger)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::AddCondition(winrt::Windows::ApplicationModel::Background::IBackgroundCondition const& condition) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->AddCondition(*(void**)(&condition)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::Name(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->put_Name(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder<D>::Register() const
    {
        void* task{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder)->Register(&task));
        return winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration{ task, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2<D>::CancelOnConditionLoss(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder2)->put_CancelOnConditionLoss(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder2<D>::CancelOnConditionLoss() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder2)->get_CancelOnConditionLoss(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3<D>::IsNetworkRequested(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder3)->put_IsNetworkRequested(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder3<D>::IsNetworkRequested() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder3)->get_IsNetworkRequested(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4<D>::TaskGroup() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder4)->get_TaskGroup(&value));
        return winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder4<D>::TaskGroup(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder4)->put_TaskGroup(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskBuilder5<D>::SetTaskEntryPointClsid(winrt::guid const& TaskEntryPoint) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder5)->SetTaskEntryPointClsid(impl::bind_in(TaskEntryPoint)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs<D>::InstanceId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs)->get_InstanceId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskCompletedEventArgs<D>::CheckResult() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs)->CheckResult());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskDeferral)->Complete());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::InstanceId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_InstanceId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Task() const
    {
        void* task{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_Task(&task));
        return winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration{ task, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Progress() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_Progress(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Progress(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance)->put_Progress(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::TriggerDetails() const
    {
        void* triggerDetails{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_TriggerDetails(&triggerDetails));
        return winrt::Windows::Foundation::IInspectable{ triggerDetails, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Canceled(winrt::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const
    {
        winrt::event_token cookie{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance)->add_Canceled(*(void**)(&cancelHandler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Canceled_revoker consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Canceled(auto_revoke_t, winrt::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const& cancelHandler) const
    {
        return impl::make_event_revoker<D, Canceled_revoker>(this, Canceled(cancelHandler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::Canceled(winrt::event_token const& cookie) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance)->remove_Canceled(impl::bind_in(cookie));
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::SuspendedCount() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance)->get_SuspendedCount(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundTaskDeferral) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance<D>::GetDeferral() const
    {
        void* deferral{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance)->GetDeferral(&deferral));
        return winrt::Windows::ApplicationModel::Background::BackgroundTaskDeferral{ deferral, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance2<D>::GetThrottleCount(winrt::Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter const& counter) const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance2)->GetThrottleCount(static_cast<int32_t>(counter), &value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::System::User) consume_Windows_ApplicationModel_Background_IBackgroundTaskInstance4<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance4)->get_User(&value));
        return winrt::Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs<D>::InstanceId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs)->get_InstanceId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IBackgroundTaskProgressEventArgs<D>::Progress() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs)->get_Progress(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::TaskId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->get_TaskId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Progress(winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const
    {
        winrt::event_token cookie{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->add_Progress(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Progress_revoker consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Progress(auto_revoke_t, winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, Progress_revoker>(this, Progress(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Progress(winrt::event_token const& cookie) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->remove_Progress(impl::bind_in(cookie));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Completed(winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const
    {
        winrt::event_token cookie{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->add_Completed(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Completed_revoker consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Completed(auto_revoke_t, winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, Completed_revoker>(this, Completed(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Completed(winrt::event_token const& cookie) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->remove_Completed(impl::bind_in(cookie));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration<D>::Unregister(bool cancelTask) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration)->Unregister(cancelTask));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::IBackgroundTrigger) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration2<D>::Trigger() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration2)->get_Trigger(&value));
        return winrt::Windows::ApplicationModel::Background::IBackgroundTrigger{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistration3<D>::TaskGroup() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration3)->get_TaskGroup(&value));
        return winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::BackgroundActivated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->add_BackgroundActivated(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::BackgroundActivated_revoker consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::BackgroundActivated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, BackgroundActivated_revoker>(this, BackgroundActivated(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::BackgroundActivated(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->remove_BackgroundActivated(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<winrt::guid, winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration>) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroup<D>::AllTasks() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup)->get_AllTasks(&value));
        return winrt::Windows::Foundation::Collections::IMapView<winrt::guid, winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory<D>::Create(param::hstring const& id) const
    {
        void* group{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory)->Create(*(void**)(&id), &group));
        return winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup{ group, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationGroupFactory<D>::CreateWithName(param::hstring const& id, param::hstring const& name) const
    {
        void* group{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory)->CreateWithName(*(void**)(&id), *(void**)(&name), &group));
        return winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup{ group, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<winrt::guid, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration>) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics<D>::AllTasks() const
    {
        void* tasks{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics)->get_AllTasks(&tasks));
        return winrt::Windows::Foundation::Collections::IMapView<winrt::guid, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration>{ tasks, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2<D>::AllTaskGroups() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2)->get_AllTaskGroups(&value));
        return winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup) consume_Windows_ApplicationModel_Background_IBackgroundTaskRegistrationStatics2<D>::GetTaskGroup(param::hstring const& groupId) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2)->GetTaskGroup(*(void**)(&groupId), &value));
        return winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::BackgroundWorkCostValue) consume_Windows_ApplicationModel_Background_IBackgroundWorkCostStatics<D>::CurrentBackgroundWorkCost() const
    {
        winrt::Windows::ApplicationModel::Background::BackgroundWorkCostValue value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBackgroundWorkCostStatics)->get_CurrentBackgroundWorkCost(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger<D>::Advertisement() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger)->get_Advertisement(&value));
        return winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<int16_t>) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>::PreferredTransmitPowerLevelInDBm() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2)->get_PreferredTransmitPowerLevelInDBm(&value));
        return winrt::Windows::Foundation::IReference<int16_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>::PreferredTransmitPowerLevelInDBm(winrt::Windows::Foundation::IReference<int16_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2)->put_PreferredTransmitPowerLevelInDBm(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>::UseExtendedFormat() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2)->get_UseExtendedFormat(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>::UseExtendedFormat(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2)->put_UseExtendedFormat(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>::IsAnonymous() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2)->get_IsAnonymous(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>::IsAnonymous(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2)->put_IsAnonymous(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>::IncludeTransmitPowerLevel() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2)->get_IncludeTransmitPowerLevel(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementPublisherTrigger2<D>::IncludeTransmitPowerLevel(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2)->put_IncludeTransmitPowerLevel(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::MinSamplingInterval() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_MinSamplingInterval(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::MaxSamplingInterval() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_MaxSamplingInterval(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::MinOutOfRangeTimeout() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_MinOutOfRangeTimeout(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::MaxOutOfRangeTimeout() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_MaxOutOfRangeTimeout(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::SignalStrengthFilter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_SignalStrengthFilter(&value));
        return winrt::Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::SignalStrengthFilter(winrt::Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->put_SignalStrengthFilter(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::AdvertisementFilter() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->get_AdvertisementFilter(&value));
        return winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger<D>::AdvertisementFilter(winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger)->put_AdvertisementFilter(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger2<D>::AllowExtendedAdvertisements() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2)->get_AllowExtendedAdvertisements(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IBluetoothLEAdvertisementWatcherTrigger2<D>::AllowExtendedAdvertisements(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2)->put_AllowExtendedAdvertisements(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Provider::CachedFileTarget) consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails<D>::UpdateTarget() const
    {
        winrt::Windows::Storage::Provider::CachedFileTarget value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails)->get_UpdateTarget(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Provider::FileUpdateRequest) consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails<D>::UpdateRequest() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails)->get_UpdateRequest(&value));
        return winrt::Windows::Storage::Provider::FileUpdateRequest{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_ICachedFileUpdaterTriggerDetails<D>::CanRequestUserInput() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails)->get_CanRequestUserInput(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_ApplicationModel_Background_IContentPrefetchTrigger<D>::WaitInterval() const
    {
        winrt::Windows::Foundation::TimeSpan waitInterval{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IContentPrefetchTrigger)->get_WaitInterval(put_abi(waitInterval)));
        return waitInterval;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::ContentPrefetchTrigger) consume_Windows_ApplicationModel_Background_IContentPrefetchTriggerFactory<D>::Create(winrt::Windows::Foundation::TimeSpan const& waitInterval) const
    {
        void* trigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory)->Create(impl::bind_in(waitInterval), &trigger));
        return winrt::Windows::ApplicationModel::Background::ContentPrefetchTrigger{ trigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_ICustomSystemEventTrigger<D>::TriggerId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ICustomSystemEventTrigger)->get_TriggerId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence) consume_Windows_ApplicationModel_Background_ICustomSystemEventTrigger<D>::Recurrence() const
    {
        winrt::Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ICustomSystemEventTrigger)->get_Recurrence(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::CustomSystemEventTrigger) consume_Windows_ApplicationModel_Background_ICustomSystemEventTriggerFactory<D>::Create(param::hstring const& triggerId, winrt::Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence const& recurrence) const
    {
        void* trigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory)->Create(*(void**)(&triggerId), static_cast<int32_t>(recurrence), &trigger));
        return winrt::Windows::ApplicationModel::Background::CustomSystemEventTrigger{ trigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>::CanMaintainConnection() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger)->get_CanMaintainConnection(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>::MaintainConnection() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger)->get_MaintainConnection(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTrigger<D>::MaintainConnection(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger)->put_MaintainConnection(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>) consume_Windows_ApplicationModel_Background_IDeviceConnectionChangeTriggerStatics<D>::FromIdAsync(param::hstring const& deviceId) const
    {
        void* deviceChangeTrigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics)->FromIdAsync(*(void**)(&deviceId), &deviceChangeTrigger));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>{ deviceChangeTrigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger<D>::TriggerQualifier() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger)->get_TriggerQualifier(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTrigger<D>::OneShot() const
    {
        bool oneShot{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger)->get_OneShot(&oneShot));
        return oneShot;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger) consume_Windows_ApplicationModel_Background_IDeviceManufacturerNotificationTriggerFactory<D>::Create(param::hstring const& triggerQualifier, bool oneShot) const
    {
        void* trigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory)->Create(*(void**)(&triggerQualifier), oneShot, &trigger));
        return winrt::Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger{ trigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>) consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger<D>::RequestAsync(param::hstring const& deviceId, winrt::Windows::Foundation::TimeSpan const& expectedDuration) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceServicingTrigger)->RequestAsyncSimple(*(void**)(&deviceId), impl::bind_in(expectedDuration), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>) consume_Windows_ApplicationModel_Background_IDeviceServicingTrigger<D>::RequestAsync(param::hstring const& deviceId, winrt::Windows::Foundation::TimeSpan const& expectedDuration, param::hstring const& arguments) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceServicingTrigger)->RequestAsyncWithArguments(*(void**)(&deviceId), impl::bind_in(expectedDuration), *(void**)(&arguments), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>) consume_Windows_ApplicationModel_Background_IDeviceUseTrigger<D>::RequestAsync(param::hstring const& deviceId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceUseTrigger)->RequestAsyncSimple(*(void**)(&deviceId), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>) consume_Windows_ApplicationModel_Background_IDeviceUseTrigger<D>::RequestAsync(param::hstring const& deviceId, param::hstring const& arguments) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IDeviceUseTrigger)->RequestAsyncWithArguments(*(void**)(&deviceId), *(void**)(&arguments), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic) consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger<D>::Characteristic() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger)->get_Characteristic(&value));
        return winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode) consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTrigger2<D>::EventTriggeringMode() const
    {
        winrt::Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2)->get_EventTriggeringMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger) consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory<D>::Create(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic) const
    {
        void* gattCharacteristicNotificationTrigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory)->Create(*(void**)(&characteristic), &gattCharacteristicNotificationTrigger));
        return winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger{ gattCharacteristicNotificationTrigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger) consume_Windows_ApplicationModel_Background_IGattCharacteristicNotificationTriggerFactory2<D>::Create(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, winrt::Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const& eventTriggeringMode) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2)->CreateWithEventTriggeringMode(*(void**)(&characteristic), static_cast<int32_t>(eventTriggeringMode), &result));
        return winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>::TriggerId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattServiceProviderTrigger)->get_TriggerId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService) consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>::Service() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattServiceProviderTrigger)->get_Service(&value));
        return winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>::AdvertisingParameters(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattServiceProviderTrigger)->put_AdvertisingParameters(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters) consume_Windows_ApplicationModel_Background_IGattServiceProviderTrigger<D>::AdvertisingParameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattServiceProviderTrigger)->get_AdvertisingParameters(&value));
        return winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::GattServiceProviderTrigger) consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult<D>::Trigger() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult)->get_Trigger(&value));
        return winrt::Windows::ApplicationModel::Background::GattServiceProviderTrigger{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::BluetoothError) consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerResult<D>::Error() const
    {
        winrt::Windows::Devices::Bluetooth::BluetoothError value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult)->get_Error(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>) consume_Windows_ApplicationModel_Background_IGattServiceProviderTriggerStatics<D>::CreateAsync(param::hstring const& triggerId, winrt::guid const& serviceUuid) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics)->CreateAsync(*(void**)(&triggerId), impl::bind_in(serviceUuid), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Geolocation::VisitMonitoringScope) consume_Windows_ApplicationModel_Background_IGeovisitTrigger<D>::MonitoringScope() const
    {
        winrt::Windows::Devices::Geolocation::VisitMonitoringScope value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGeovisitTrigger)->get_MonitoringScope(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IGeovisitTrigger<D>::MonitoringScope(winrt::Windows::Devices::Geolocation::VisitMonitoringScope const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IGeovisitTrigger)->put_MonitoringScope(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::LocationTriggerType) consume_Windows_ApplicationModel_Background_ILocationTrigger<D>::TriggerType() const
    {
        winrt::Windows::ApplicationModel::Background::LocationTriggerType triggerType{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ILocationTrigger)->get_TriggerType(reinterpret_cast<int32_t*>(&triggerType)));
        return triggerType;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::LocationTrigger) consume_Windows_ApplicationModel_Background_ILocationTriggerFactory<D>::Create(winrt::Windows::ApplicationModel::Background::LocationTriggerType const& triggerType) const
    {
        void* locationTrigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ILocationTriggerFactory)->Create(static_cast<int32_t>(triggerType), &locationTrigger));
        return winrt::Windows::ApplicationModel::Background::LocationTrigger{ locationTrigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_IMaintenanceTrigger<D>::FreshnessTime() const
    {
        uint32_t freshnessTime{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IMaintenanceTrigger)->get_FreshnessTime(&freshnessTime));
        return freshnessTime;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IMaintenanceTrigger<D>::OneShot() const
    {
        bool oneShot{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IMaintenanceTrigger)->get_OneShot(&oneShot));
        return oneShot;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::MaintenanceTrigger) consume_Windows_ApplicationModel_Background_IMaintenanceTriggerFactory<D>::Create(uint32_t freshnessTime, bool oneShot) const
    {
        void* trigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IMaintenanceTriggerFactory)->Create(freshnessTime, oneShot, &trigger));
        return winrt::Windows::ApplicationModel::Background::MaintenanceTrigger{ trigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult>) consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger<D>::RequestAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IMediaProcessingTrigger)->RequestAsync(&result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult>) consume_Windows_ApplicationModel_Background_IMediaProcessingTrigger<D>::RequestAsync(winrt::Windows::Foundation::Collections::ValueSet const& arguments) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IMediaProcessingTrigger)->RequestAsyncWithArguments(*(void**)(&arguments), &result));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTrigger<D>::NetworkAccountId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger)->get_NetworkAccountId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger) consume_Windows_ApplicationModel_Background_INetworkOperatorNotificationTriggerFactory<D>::Create(param::hstring const& networkAccountId) const
    {
        void* trigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory)->Create(*(void**)(&networkAccountId), &trigger));
        return winrt::Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger{ trigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IPhoneTrigger<D>::OneShot() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IPhoneTrigger)->get_OneShot(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType) consume_Windows_ApplicationModel_Background_IPhoneTrigger<D>::TriggerType() const
    {
        winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IPhoneTrigger)->get_TriggerType(reinterpret_cast<int32_t*>(&result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::PhoneTrigger) consume_Windows_ApplicationModel_Background_IPhoneTriggerFactory<D>::Create(winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType const& type, bool oneShot) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IPhoneTriggerFactory)->Create(static_cast<int32_t>(type), oneShot, &result));
        return winrt::Windows::ApplicationModel::Background::PhoneTrigger{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::PushNotificationTrigger) consume_Windows_ApplicationModel_Background_IPushNotificationTriggerFactory<D>::Create(param::hstring const& applicationId) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IPushNotificationTriggerFactory)->Create(*(void**)(&applicationId), &value));
        return winrt::Windows::ApplicationModel::Background::PushNotificationTrigger{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation) consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::InboundConnection() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_InboundConnection(&value));
        return winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation) consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::OutboundConnection() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_OutboundConnection(&value));
        return winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::AllowMultipleConnections() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_AllowMultipleConnections(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::AllowMultipleConnections(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->put_AllowMultipleConnections(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::Sockets::SocketProtectionLevel) consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::ProtectionLevel() const
    {
        winrt::Windows::Networking::Sockets::SocketProtectionLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_ProtectionLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::ProtectionLevel(winrt::Windows::Networking::Sockets::SocketProtectionLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->put_ProtectionLevel(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Networking::HostName) consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::RemoteHostName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->get_RemoteHostName(&value));
        return winrt::Windows::Networking::HostName{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Background_IRfcommConnectionTrigger<D>::RemoteHostName(winrt::Windows::Networking::HostName const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger)->put_RemoteHostName(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::SensorDataThresholdTrigger) consume_Windows_ApplicationModel_Background_ISensorDataThresholdTriggerFactory<D>::Create(winrt::Windows::Devices::Sensors::ISensorDataThreshold const& threshold) const
    {
        void* trigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory)->Create(*(void**)(&threshold), &trigger));
        return winrt::Windows::ApplicationModel::Background::SensorDataThresholdTrigger{ trigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::SmartCards::SmartCardTriggerType) consume_Windows_ApplicationModel_Background_ISmartCardTrigger<D>::TriggerType() const
    {
        winrt::Windows::Devices::SmartCards::SmartCardTriggerType triggerType{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISmartCardTrigger)->get_TriggerType(reinterpret_cast<int32_t*>(&triggerType)));
        return triggerType;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::SmartCardTrigger) consume_Windows_ApplicationModel_Background_ISmartCardTriggerFactory<D>::Create(winrt::Windows::Devices::SmartCards::SmartCardTriggerType const& triggerType) const
    {
        void* trigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISmartCardTriggerFactory)->Create(static_cast<int32_t>(triggerType), &trigger));
        return winrt::Windows::ApplicationModel::Background::SmartCardTrigger{ trigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::SmsMessageReceivedTrigger) consume_Windows_ApplicationModel_Background_ISmsMessageReceivedTriggerFactory<D>::Create(winrt::Windows::Devices::Sms::SmsFilterRules const& filterRules) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory)->Create(*(void**)(&filterRules), &value));
        return winrt::Windows::ApplicationModel::Background::SmsMessageReceivedTrigger{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_ISocketActivityTrigger<D>::IsWakeFromLowPowerSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISocketActivityTrigger)->get_IsWakeFromLowPowerSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger) consume_Windows_ApplicationModel_Background_IStorageLibraryChangeTrackerTriggerFactory<D>::Create(winrt::Windows::Storage::StorageLibraryChangeTracker const& tracker) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory)->Create(*(void**)(&tracker), &result));
        return winrt::Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger) consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics<D>::Create(winrt::Windows::Storage::StorageLibrary const& storageLibrary) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics)->Create(*(void**)(&storageLibrary), &result));
        return winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger) consume_Windows_ApplicationModel_Background_IStorageLibraryContentChangedTriggerStatics<D>::CreateFromLibraries(param::iterable<winrt::Windows::Storage::StorageLibrary> const& storageLibraries) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics)->CreateFromLibraries(*(void**)(&storageLibraries), &result));
        return winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::SystemConditionType) consume_Windows_ApplicationModel_Background_ISystemCondition<D>::ConditionType() const
    {
        winrt::Windows::ApplicationModel::Background::SystemConditionType conditionType{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISystemCondition)->get_ConditionType(reinterpret_cast<int32_t*>(&conditionType)));
        return conditionType;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::SystemCondition) consume_Windows_ApplicationModel_Background_ISystemConditionFactory<D>::Create(winrt::Windows::ApplicationModel::Background::SystemConditionType const& conditionType) const
    {
        void* condition{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISystemConditionFactory)->Create(static_cast<int32_t>(conditionType), &condition));
        return winrt::Windows::ApplicationModel::Background::SystemCondition{ condition, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_ISystemTrigger<D>::OneShot() const
    {
        bool oneShot{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISystemTrigger)->get_OneShot(&oneShot));
        return oneShot;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::SystemTriggerType) consume_Windows_ApplicationModel_Background_ISystemTrigger<D>::TriggerType() const
    {
        winrt::Windows::ApplicationModel::Background::SystemTriggerType triggerType{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISystemTrigger)->get_TriggerType(reinterpret_cast<int32_t*>(&triggerType)));
        return triggerType;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::SystemTrigger) consume_Windows_ApplicationModel_Background_ISystemTriggerFactory<D>::Create(winrt::Windows::ApplicationModel::Background::SystemTriggerType const& triggerType, bool oneShot) const
    {
        void* trigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ISystemTriggerFactory)->Create(static_cast<int32_t>(triggerType), oneShot, &trigger));
        return winrt::Windows::ApplicationModel::Background::SystemTrigger{ trigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_ApplicationModel_Background_ITimeTrigger<D>::FreshnessTime() const
    {
        uint32_t freshnessTime{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ITimeTrigger)->get_FreshnessTime(&freshnessTime));
        return freshnessTime;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Background_ITimeTrigger<D>::OneShot() const
    {
        bool oneShot{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ITimeTrigger)->get_OneShot(&oneShot));
        return oneShot;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::TimeTrigger) consume_Windows_ApplicationModel_Background_ITimeTriggerFactory<D>::Create(uint32_t freshnessTime, bool oneShot) const
    {
        void* trigger{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::ITimeTriggerFactory)->Create(freshnessTime, oneShot, &trigger));
        return winrt::Windows::ApplicationModel::Background::TimeTrigger{ trigger, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::ToastNotificationActionTrigger) consume_Windows_ApplicationModel_Background_IToastNotificationActionTriggerFactory<D>::Create(param::hstring const& applicationId) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory)->Create(*(void**)(&applicationId), &value));
        return winrt::Windows::ApplicationModel::Background::ToastNotificationActionTrigger{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger) consume_Windows_ApplicationModel_Background_IToastNotificationHistoryChangedTriggerFactory<D>::Create(param::hstring const& applicationId) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory)->Create(*(void**)(&applicationId), &value));
        return winrt::Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Background::UserNotificationChangedTrigger) consume_Windows_ApplicationModel_Background_IUserNotificationChangedTriggerFactory<D>::Create(winrt::Windows::UI::Notifications::NotificationKinds const& notificationKinds) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory)->Create(static_cast<uint32_t>(notificationKinds), &value));
        return winrt::Windows::ApplicationModel::Background::UserNotificationChangedTrigger{ value, take_ownership_from_abi };
    }
    template <typename H> struct delegate<winrt::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler, H> final : implements_delegate<winrt::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, int32_t reason) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance const*>(&sender), *reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskCancellationReason const*>(&reason));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler, H> final : implements_delegate<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* args) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration const*>(&sender), *reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler, H> final : implements_delegate<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* sender, void* args) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration const*>(&sender), *reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IActivitySensorTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IActivitySensorTrigger>
    {
        int32_t __stdcall get_SubscribedActivities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Sensors::ActivityType>>(this->shim().SubscribedActivities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ReportInterval(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ReportInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedActivities(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Sensors::ActivityType>>(this->shim().SupportedActivities());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinimumReportInterval(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MinimumReportInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IActivitySensorTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IActivitySensorTriggerFactory>
    {
        int32_t __stdcall Create(uint32_t reportIntervalInMilliseconds, void** activityTrigger) noexcept final try
        {
            clear_abi(activityTrigger);
            typename D::abi_guard guard(this->shim());
            *activityTrigger = detach_from<winrt::Windows::ApplicationModel::Background::ActivitySensorTrigger>(this->shim().Create(reportIntervalInMilliseconds));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics> : produce_base<D, winrt::Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics>
    {
        int32_t __stdcall RequestAccessAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAccessStatus(int32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus>(this->shim().GetAccessStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IAppBroadcastTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IAppBroadcastTrigger>
    {
        int32_t __stdcall put_ProviderInfo(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProviderInfo(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProviderInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo>(this->shim().ProviderInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory>
    {
        int32_t __stdcall CreateAppBroadcastTrigger(void* providerKey, void** broadcastTrigger) noexcept final try
        {
            clear_abi(broadcastTrigger);
            typename D::abi_guard guard(this->shim());
            *broadcastTrigger = detach_from<winrt::Windows::ApplicationModel::Background::AppBroadcastTrigger>(this->shim().CreateAppBroadcastTrigger(*reinterpret_cast<hstring const*>(&providerKey)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo> : produce_base<D, winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo>
    {
        int32_t __stdcall put_DisplayNameResource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayNameResource(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayNameResource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayNameResource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LogoResource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogoResource(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LogoResource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LogoResource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_VideoKeyFrameInterval(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoKeyFrameInterval(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VideoKeyFrameInterval(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().VideoKeyFrameInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxVideoBitrate(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxVideoBitrate(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxVideoBitrate(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxVideoBitrate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxVideoWidth(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxVideoWidth(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxVideoWidth(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxVideoWidth());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxVideoHeight(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxVideoHeight(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxVideoHeight(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxVideoHeight());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IApplicationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IApplicationTrigger>
    {
        int32_t __stdcall RequestAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult>>(this->shim().RequestAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAsyncWithArguments(void* arguments, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::ApplicationTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<winrt::Windows::Foundation::Collections::ValueSet const*>(&arguments)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IApplicationTriggerDetails> : produce_base<D, winrt::Windows::ApplicationModel::Background::IApplicationTriggerDetails>
    {
        int32_t __stdcall get_Arguments(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::ValueSet>(this->shim().Arguments());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger>
    {
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundCondition> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundCondition>
    {
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics>
    {
        int32_t __stdcall RequestAccessAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>>(this->shim().RequestAccessAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAccessForApplicationAsync(void* applicationId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>>(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&applicationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAccess() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAccess();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveAccessForApplication(void* applicationId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAccess(*reinterpret_cast<hstring const*>(&applicationId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAccessStatus(int32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>(this->shim().GetAccessStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAccessStatusForApplication(void* applicationId, int32_t* status) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>(this->shim().GetAccessStatus(*reinterpret_cast<hstring const*>(&applicationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2>
    {
        int32_t __stdcall RequestAccessKindAsync(int32_t requestedAccess, void* reason, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestAccessKindAsync(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundAccessRequestKind const*>(&requestedAccess), *reinterpret_cast<hstring const*>(&reason)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3>
    {
        int32_t __stdcall RequestAccessKindForModernStandbyAsync(int32_t requestedAccess, void* reason, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestAccessKindForModernStandbyAsync(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundAccessRequestKind const*>(&requestedAccess), *reinterpret_cast<hstring const*>(&reason)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAccessStatusForModernStandby(int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>(this->shim().GetAccessStatusForModernStandby());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAccessStatusForModernStandbyForApplication(void* applicationId, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>(this->shim().GetAccessStatusForModernStandby(*reinterpret_cast<hstring const*>(&applicationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTask> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTask>
    {
        int32_t __stdcall Run(void* taskInstance) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Run(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance const*>(&taskInstance));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder>
    {
        int32_t __stdcall put_TaskEntryPoint(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TaskEntryPoint(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TaskEntryPoint(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TaskEntryPoint());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetTrigger(void* trigger) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTrigger(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::IBackgroundTrigger const*>(&trigger));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddCondition(void* condition) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddCondition(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::IBackgroundCondition const*>(&condition));
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
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Register(void** task) noexcept final try
        {
            clear_abi(task);
            typename D::abi_guard guard(this->shim());
            *task = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration>(this->shim().Register());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder2> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder2>
    {
        int32_t __stdcall put_CancelOnConditionLoss(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelOnConditionLoss(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CancelOnConditionLoss(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CancelOnConditionLoss());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder3> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder3>
    {
        int32_t __stdcall put_IsNetworkRequested(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsNetworkRequested(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsNetworkRequested(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsNetworkRequested());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder4> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder4>
    {
        int32_t __stdcall get_TaskGroup(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().TaskGroup());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TaskGroup(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TaskGroup(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder5> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder5>
    {
        int32_t __stdcall SetTaskEntryPointClsid(winrt::guid TaskEntryPoint) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTaskEntryPointClsid(*reinterpret_cast<winrt::guid const*>(&TaskEntryPoint));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs>
    {
        int32_t __stdcall get_InstanceId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().InstanceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CheckResult() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckResult();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskDeferral> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance>
    {
        int32_t __stdcall get_InstanceId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().InstanceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Task(void** task) noexcept final try
        {
            clear_abi(task);
            typename D::abi_guard guard(this->shim());
            *task = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration>(this->shim().Task());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Progress(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Progress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Progress(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Progress(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TriggerDetails(void** triggerDetails) noexcept final try
        {
            clear_abi(triggerDetails);
            typename D::abi_guard guard(this->shim());
            *triggerDetails = detach_from<winrt::Windows::Foundation::IInspectable>(this->shim().TriggerDetails());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Canceled(void* cancelHandler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().Canceled(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskCanceledEventHandler const*>(&cancelHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Canceled(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Canceled(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
        int32_t __stdcall get_SuspendedCount(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SuspendedCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** deferral) noexcept final try
        {
            clear_abi(deferral);
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundTaskDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance2> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance2>
    {
        int32_t __stdcall GetThrottleCount(int32_t counter, uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().GetThrottleCount(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskThrottleCounter const*>(&counter)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance4> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance4>
    {
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs>
    {
        int32_t __stdcall get_InstanceId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().InstanceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Progress(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Progress());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration>
    {
        int32_t __stdcall get_TaskId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().TaskId());
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
        int32_t __stdcall add_Progress(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().Progress(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Progress(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Progress(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
        int32_t __stdcall add_Completed(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().Completed(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Completed(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
        int32_t __stdcall Unregister(bool cancelTask) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unregister(cancelTask);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration2> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration2>
    {
        int32_t __stdcall get_Trigger(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::IBackgroundTrigger>(this->shim().Trigger());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration3> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration3>
    {
        int32_t __stdcall get_TaskGroup(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().TaskGroup());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
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
        int32_t __stdcall add_BackgroundActivated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BackgroundActivated(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup, winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BackgroundActivated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundActivated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_AllTasks(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMapView<winrt::guid, winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration>>(this->shim().AllTasks());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory>
    {
        int32_t __stdcall Create(void* id, void** group) noexcept final try
        {
            clear_abi(group);
            typename D::abi_guard guard(this->shim());
            *group = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().Create(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithName(void* id, void* name, void** group) noexcept final try
        {
            clear_abi(group);
            typename D::abi_guard guard(this->shim());
            *group = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().CreateWithName(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics>
    {
        int32_t __stdcall get_AllTasks(void** tasks) noexcept final try
        {
            clear_abi(tasks);
            typename D::abi_guard guard(this->shim());
            *tasks = detach_from<winrt::Windows::Foundation::Collections::IMapView<winrt::guid, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration>>(this->shim().AllTasks());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2>
    {
        int32_t __stdcall get_AllTaskGroups(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>>(this->shim().AllTaskGroups());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetTaskGroup(void* groupId, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(this->shim().GetTaskGroup(*reinterpret_cast<hstring const*>(&groupId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundTrigger>
    {
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBackgroundWorkCostStatics> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBackgroundWorkCostStatics>
    {
        int32_t __stdcall get_CurrentBackgroundWorkCost(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::BackgroundWorkCostValue>(this->shim().CurrentBackgroundWorkCost());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger>
    {
        int32_t __stdcall get_Advertisement(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement>(this->shim().Advertisement());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2>
    {
        int32_t __stdcall get_PreferredTransmitPowerLevelInDBm(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<int16_t>>(this->shim().PreferredTransmitPowerLevelInDBm());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PreferredTransmitPowerLevelInDBm(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreferredTransmitPowerLevelInDBm(*reinterpret_cast<winrt::Windows::Foundation::IReference<int16_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UseExtendedFormat(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().UseExtendedFormat());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UseExtendedFormat(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseExtendedFormat(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsAnonymous(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAnonymous());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsAnonymous(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAnonymous(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IncludeTransmitPowerLevel(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IncludeTransmitPowerLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IncludeTransmitPowerLevel(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeTransmitPowerLevel(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger>
    {
        int32_t __stdcall get_MinSamplingInterval(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().MinSamplingInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxSamplingInterval(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().MaxSamplingInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MinOutOfRangeTimeout(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().MinOutOfRangeTimeout());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxOutOfRangeTimeout(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().MaxOutOfRangeTimeout());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SignalStrengthFilter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>(this->shim().SignalStrengthFilter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SignalStrengthFilter(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignalStrengthFilter(*reinterpret_cast<winrt::Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdvertisementFilter(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter>(this->shim().AdvertisementFilter());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AdvertisementFilter(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvertisementFilter(*reinterpret_cast<winrt::Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2> : produce_base<D, winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2>
    {
        int32_t __stdcall get_AllowExtendedAdvertisements(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowExtendedAdvertisements());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowExtendedAdvertisements(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowExtendedAdvertisements(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails> : produce_base<D, winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails>
    {
        int32_t __stdcall get_UpdateTarget(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Provider::CachedFileTarget>(this->shim().UpdateTarget());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateRequest(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Provider::FileUpdateRequest>(this->shim().UpdateRequest());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanRequestUserInput(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanRequestUserInput());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IChatMessageNotificationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IChatMessageNotificationTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IContactStoreNotificationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IContactStoreNotificationTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IContentPrefetchTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IContentPrefetchTrigger>
    {
        int32_t __stdcall get_WaitInterval(int64_t* waitInterval) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(waitInterval);
            typename D::abi_guard guard(this->shim());
            *waitInterval = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().WaitInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory>
    {
        int32_t __stdcall Create(int64_t waitInterval, void** trigger) noexcept final try
        {
            clear_abi(trigger);
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<winrt::Windows::ApplicationModel::Background::ContentPrefetchTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&waitInterval)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ICustomSystemEventTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ICustomSystemEventTrigger>
    {
        int32_t __stdcall get_TriggerId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TriggerId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Recurrence(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence>(this->shim().Recurrence());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory>
    {
        int32_t __stdcall Create(void* triggerId, int32_t recurrence, void** trigger) noexcept final try
        {
            clear_abi(trigger);
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<winrt::Windows::ApplicationModel::Background::CustomSystemEventTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&triggerId), *reinterpret_cast<winrt::Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence const*>(&recurrence)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger>
    {
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CanMaintainConnection(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanMaintainConnection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaintainConnection(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().MaintainConnection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaintainConnection(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaintainConnection(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics> : produce_base<D, winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics>
    {
        int32_t __stdcall FromIdAsync(void* deviceId, void** deviceChangeTrigger) noexcept final try
        {
            clear_abi(deviceChangeTrigger);
            typename D::abi_guard guard(this->shim());
            *deviceChangeTrigger = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger>
    {
        int32_t __stdcall get_TriggerQualifier(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TriggerQualifier());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OneShot(bool* oneShot) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *oneShot = detach_from<bool>(this->shim().OneShot());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory>
    {
        int32_t __stdcall Create(void* triggerQualifier, bool oneShot, void** trigger) noexcept final try
        {
            clear_abi(trigger);
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<winrt::Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&triggerQualifier), oneShot));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IDeviceServicingTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IDeviceServicingTrigger>
    {
        int32_t __stdcall RequestAsyncSimple(void* deviceId, int64_t expectedDuration, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&expectedDuration)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAsyncWithArguments(void* deviceId, int64_t expectedDuration, void* arguments, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&expectedDuration), *reinterpret_cast<hstring const*>(&arguments)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IDeviceUseTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IDeviceUseTrigger>
    {
        int32_t __stdcall RequestAsyncSimple(void* deviceId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAsyncWithArguments(void* deviceId, void* arguments, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::DeviceTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<hstring const*>(&arguments)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IDeviceWatcherTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IDeviceWatcherTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger>
    {
        int32_t __stdcall get_Characteristic(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic>(this->shim().Characteristic());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2> : produce_base<D, winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2>
    {
        int32_t __stdcall get_EventTriggeringMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode>(this->shim().EventTriggeringMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory>
    {
        int32_t __stdcall Create(void* characteristic, void** gattCharacteristicNotificationTrigger) noexcept final try
        {
            clear_abi(gattCharacteristicNotificationTrigger);
            typename D::abi_guard guard(this->shim());
            *gattCharacteristicNotificationTrigger = detach_from<winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const*>(&characteristic)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2> : produce_base<D, winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2>
    {
        int32_t __stdcall CreateWithEventTriggeringMode(void* characteristic, int32_t eventTriggeringMode, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const*>(&characteristic), *reinterpret_cast<winrt::Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const*>(&eventTriggeringMode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IGattServiceProviderTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IGattServiceProviderTrigger>
    {
        int32_t __stdcall get_TriggerId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TriggerId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Service(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattLocalService>(this->shim().Service());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AdvertisingParameters(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvertisingParameters(*reinterpret_cast<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdvertisingParameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattServiceProviderAdvertisingParameters>(this->shim().AdvertisingParameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult> : produce_base<D, winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult>
    {
        int32_t __stdcall get_Trigger(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::GattServiceProviderTrigger>(this->shim().Trigger());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Error(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::BluetoothError>(this->shim().Error());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics> : produce_base<D, winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics>
    {
        int32_t __stdcall CreateAsync(void* triggerId, winrt::guid serviceUuid, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::GattServiceProviderTriggerResult>>(this->shim().CreateAsync(*reinterpret_cast<hstring const*>(&triggerId), *reinterpret_cast<winrt::guid const*>(&serviceUuid)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IGeovisitTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IGeovisitTrigger>
    {
        int32_t __stdcall get_MonitoringScope(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Geolocation::VisitMonitoringScope>(this->shim().MonitoringScope());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MonitoringScope(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MonitoringScope(*reinterpret_cast<winrt::Windows::Devices::Geolocation::VisitMonitoringScope const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ILocationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ILocationTrigger>
    {
        int32_t __stdcall get_TriggerType(int32_t* triggerType) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *triggerType = detach_from<winrt::Windows::ApplicationModel::Background::LocationTriggerType>(this->shim().TriggerType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ILocationTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::ILocationTriggerFactory>
    {
        int32_t __stdcall Create(int32_t triggerType, void** locationTrigger) noexcept final try
        {
            clear_abi(locationTrigger);
            typename D::abi_guard guard(this->shim());
            *locationTrigger = detach_from<winrt::Windows::ApplicationModel::Background::LocationTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::LocationTriggerType const*>(&triggerType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IMaintenanceTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IMaintenanceTrigger>
    {
        int32_t __stdcall get_FreshnessTime(uint32_t* freshnessTime) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *freshnessTime = detach_from<uint32_t>(this->shim().FreshnessTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OneShot(bool* oneShot) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *oneShot = detach_from<bool>(this->shim().OneShot());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IMaintenanceTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IMaintenanceTriggerFactory>
    {
        int32_t __stdcall Create(uint32_t freshnessTime, bool oneShot, void** trigger) noexcept final try
        {
            clear_abi(trigger);
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<winrt::Windows::ApplicationModel::Background::MaintenanceTrigger>(this->shim().Create(freshnessTime, oneShot));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IMediaProcessingTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IMediaProcessingTrigger>
    {
        int32_t __stdcall RequestAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult>>(this->shim().RequestAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestAsyncWithArguments(void* arguments, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::MediaProcessingTriggerResult>>(this->shim().RequestAsync(*reinterpret_cast<winrt::Windows::Foundation::Collections::ValueSet const*>(&arguments)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger>
    {
        int32_t __stdcall get_NetworkAccountId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NetworkAccountId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory>
    {
        int32_t __stdcall Create(void* networkAccountId, void** trigger) noexcept final try
        {
            clear_abi(trigger);
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<winrt::Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&networkAccountId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IPhoneTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IPhoneTrigger>
    {
        int32_t __stdcall get_OneShot(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().OneShot());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TriggerType(int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType>(this->shim().TriggerType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IPhoneTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IPhoneTriggerFactory>
    {
        int32_t __stdcall Create(int32_t type, bool oneShot, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Background::PhoneTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType const*>(&type), oneShot));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IPushNotificationTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IPushNotificationTriggerFactory>
    {
        int32_t __stdcall Create(void* applicationId, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::PushNotificationTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&applicationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger>
    {
        int32_t __stdcall get_InboundConnection(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::Background::RfcommInboundConnectionInformation>(this->shim().InboundConnection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OutboundConnection(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Bluetooth::Background::RfcommOutboundConnectionInformation>(this->shim().OutboundConnection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowMultipleConnections(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowMultipleConnections());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowMultipleConnections(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowMultipleConnections(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtectionLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Sockets::SocketProtectionLevel>(this->shim().ProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProtectionLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionLevel(*reinterpret_cast<winrt::Windows::Networking::Sockets::SocketProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RemoteHostName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::HostName>(this->shim().RemoteHostName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RemoteHostName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteHostName(*reinterpret_cast<winrt::Windows::Networking::HostName const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory>
    {
        int32_t __stdcall Create(void* threshold, void** trigger) noexcept final try
        {
            clear_abi(trigger);
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<winrt::Windows::ApplicationModel::Background::SensorDataThresholdTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::Devices::Sensors::ISensorDataThreshold const*>(&threshold)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISmartCardTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISmartCardTrigger>
    {
        int32_t __stdcall get_TriggerType(int32_t* triggerType) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *triggerType = detach_from<winrt::Windows::Devices::SmartCards::SmartCardTriggerType>(this->shim().TriggerType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISmartCardTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISmartCardTriggerFactory>
    {
        int32_t __stdcall Create(int32_t triggerType, void** trigger) noexcept final try
        {
            clear_abi(trigger);
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<winrt::Windows::ApplicationModel::Background::SmartCardTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::Devices::SmartCards::SmartCardTriggerType const*>(&triggerType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory>
    {
        int32_t __stdcall Create(void* filterRules, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::SmsMessageReceivedTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::Devices::Sms::SmsFilterRules const*>(&filterRules)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISocketActivityTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISocketActivityTrigger>
    {
        int32_t __stdcall get_IsWakeFromLowPowerSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWakeFromLowPowerSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory>
    {
        int32_t __stdcall Create(void* tracker, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::Storage::StorageLibraryChangeTracker const*>(&tracker)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger>
    {
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics> : produce_base<D, winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics>
    {
        int32_t __stdcall Create(void* storageLibrary, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::Storage::StorageLibrary const*>(&storageLibrary)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromLibraries(void* storageLibraries, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger>(this->shim().CreateFromLibraries(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Storage::StorageLibrary> const*>(&storageLibraries)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISystemCondition> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISystemCondition>
    {
        int32_t __stdcall get_ConditionType(int32_t* conditionType) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *conditionType = detach_from<winrt::Windows::ApplicationModel::Background::SystemConditionType>(this->shim().ConditionType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISystemConditionFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISystemConditionFactory>
    {
        int32_t __stdcall Create(int32_t conditionType, void** condition) noexcept final try
        {
            clear_abi(condition);
            typename D::abi_guard guard(this->shim());
            *condition = detach_from<winrt::Windows::ApplicationModel::Background::SystemCondition>(this->shim().Create(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::SystemConditionType const*>(&conditionType)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISystemTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISystemTrigger>
    {
        int32_t __stdcall get_OneShot(bool* oneShot) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *oneShot = detach_from<bool>(this->shim().OneShot());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TriggerType(int32_t* triggerType) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *triggerType = detach_from<winrt::Windows::ApplicationModel::Background::SystemTriggerType>(this->shim().TriggerType());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ISystemTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::ISystemTriggerFactory>
    {
        int32_t __stdcall Create(int32_t triggerType, bool oneShot, void** trigger) noexcept final try
        {
            clear_abi(trigger);
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<winrt::Windows::ApplicationModel::Background::SystemTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::ApplicationModel::Background::SystemTriggerType const*>(&triggerType), oneShot));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ITimeTrigger> : produce_base<D, winrt::Windows::ApplicationModel::Background::ITimeTrigger>
    {
        int32_t __stdcall get_FreshnessTime(uint32_t* freshnessTime) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *freshnessTime = detach_from<uint32_t>(this->shim().FreshnessTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OneShot(bool* oneShot) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *oneShot = detach_from<bool>(this->shim().OneShot());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::ITimeTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::ITimeTriggerFactory>
    {
        int32_t __stdcall Create(uint32_t freshnessTime, bool oneShot, void** trigger) noexcept final try
        {
            clear_abi(trigger);
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<winrt::Windows::ApplicationModel::Background::TimeTrigger>(this->shim().Create(freshnessTime, oneShot));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory>
    {
        int32_t __stdcall Create(void* applicationId, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::ToastNotificationActionTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&applicationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory>
    {
        int32_t __stdcall Create(void* applicationId, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger>(this->shim().Create(*reinterpret_cast<hstring const*>(&applicationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory> : produce_base<D, winrt::Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory>
    {
        int32_t __stdcall Create(uint32_t notificationKinds, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::Background::UserNotificationChangedTrigger>(this->shim().Create(*reinterpret_cast<winrt::Windows::UI::Notifications::NotificationKinds const*>(&notificationKinds)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Background
{
    inline ActivitySensorTrigger::ActivitySensorTrigger(uint32_t reportIntervalInMilliseconds) :
        ActivitySensorTrigger(impl::call_factory<ActivitySensorTrigger, IActivitySensorTriggerFactory>([&](IActivitySensorTriggerFactory const& f) { return f.Create(reportIntervalInMilliseconds); }))
    {
    }
    inline auto AlarmApplicationManager::RequestAccessAsync()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus>(*)(IAlarmApplicationManagerStatics const&), AlarmApplicationManager, IAlarmApplicationManagerStatics>([](IAlarmApplicationManagerStatics const& f) { return f.RequestAccessAsync(); });
    }
    inline auto AlarmApplicationManager::GetAccessStatus()
    {
        return impl::call_factory_cast<winrt::Windows::ApplicationModel::Background::AlarmAccessStatus(*)(IAlarmApplicationManagerStatics const&), AlarmApplicationManager, IAlarmApplicationManagerStatics>([](IAlarmApplicationManagerStatics const& f) { return f.GetAccessStatus(); });
    }
    inline AppBroadcastTrigger::AppBroadcastTrigger(param::hstring const& providerKey) :
        AppBroadcastTrigger(impl::call_factory<AppBroadcastTrigger, IAppBroadcastTriggerFactory>([&](IAppBroadcastTriggerFactory const& f) { return f.CreateAppBroadcastTrigger(providerKey); }))
    {
    }
    inline ApplicationTrigger::ApplicationTrigger() :
        ApplicationTrigger(impl::call_factory_cast<ApplicationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), ApplicationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ApplicationTrigger>(); }))
    {
    }
    inline AppointmentStoreNotificationTrigger::AppointmentStoreNotificationTrigger() :
        AppointmentStoreNotificationTrigger(impl::call_factory_cast<AppointmentStoreNotificationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), AppointmentStoreNotificationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AppointmentStoreNotificationTrigger>(); }))
    {
    }
    inline auto BackgroundExecutionManager::RequestAccessAsync()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus>(*)(IBackgroundExecutionManagerStatics const&), BackgroundExecutionManager, IBackgroundExecutionManagerStatics>([](IBackgroundExecutionManagerStatics const& f) { return f.RequestAccessAsync(); });
    }
    inline auto BackgroundExecutionManager::RequestAccessAsync(param::hstring const& applicationId)
    {
        return impl::call_factory<BackgroundExecutionManager, IBackgroundExecutionManagerStatics>([&](IBackgroundExecutionManagerStatics const& f) { return f.RequestAccessAsync(applicationId); });
    }
    inline auto BackgroundExecutionManager::RemoveAccess()
    {
        impl::call_factory_cast<void(*)(IBackgroundExecutionManagerStatics const&), BackgroundExecutionManager, IBackgroundExecutionManagerStatics>([](IBackgroundExecutionManagerStatics const& f) { return f.RemoveAccess(); });
    }
    inline auto BackgroundExecutionManager::RemoveAccess(param::hstring const& applicationId)
    {
        impl::call_factory<BackgroundExecutionManager, IBackgroundExecutionManagerStatics>([&](IBackgroundExecutionManagerStatics const& f) { return f.RemoveAccess(applicationId); });
    }
    inline auto BackgroundExecutionManager::GetAccessStatus()
    {
        return impl::call_factory_cast<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus(*)(IBackgroundExecutionManagerStatics const&), BackgroundExecutionManager, IBackgroundExecutionManagerStatics>([](IBackgroundExecutionManagerStatics const& f) { return f.GetAccessStatus(); });
    }
    inline auto BackgroundExecutionManager::GetAccessStatus(param::hstring const& applicationId)
    {
        return impl::call_factory<BackgroundExecutionManager, IBackgroundExecutionManagerStatics>([&](IBackgroundExecutionManagerStatics const& f) { return f.GetAccessStatus(applicationId); });
    }
    inline auto BackgroundExecutionManager::RequestAccessKindAsync(winrt::Windows::ApplicationModel::Background::BackgroundAccessRequestKind const& requestedAccess, param::hstring const& reason)
    {
        return impl::call_factory<BackgroundExecutionManager, IBackgroundExecutionManagerStatics2>([&](IBackgroundExecutionManagerStatics2 const& f) { return f.RequestAccessKindAsync(requestedAccess, reason); });
    }
    inline auto BackgroundExecutionManager::RequestAccessKindForModernStandbyAsync(winrt::Windows::ApplicationModel::Background::BackgroundAccessRequestKind const& requestedAccess, param::hstring const& reason)
    {
        return impl::call_factory<BackgroundExecutionManager, IBackgroundExecutionManagerStatics3>([&](IBackgroundExecutionManagerStatics3 const& f) { return f.RequestAccessKindForModernStandbyAsync(requestedAccess, reason); });
    }
    inline auto BackgroundExecutionManager::GetAccessStatusForModernStandby()
    {
        return impl::call_factory_cast<winrt::Windows::ApplicationModel::Background::BackgroundAccessStatus(*)(IBackgroundExecutionManagerStatics3 const&), BackgroundExecutionManager, IBackgroundExecutionManagerStatics3>([](IBackgroundExecutionManagerStatics3 const& f) { return f.GetAccessStatusForModernStandby(); });
    }
    inline auto BackgroundExecutionManager::GetAccessStatusForModernStandby(param::hstring const& applicationId)
    {
        return impl::call_factory<BackgroundExecutionManager, IBackgroundExecutionManagerStatics3>([&](IBackgroundExecutionManagerStatics3 const& f) { return f.GetAccessStatusForModernStandby(applicationId); });
    }
    inline BackgroundTaskBuilder::BackgroundTaskBuilder() :
        BackgroundTaskBuilder(impl::call_factory_cast<BackgroundTaskBuilder(*)(winrt::Windows::Foundation::IActivationFactory const&), BackgroundTaskBuilder>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<BackgroundTaskBuilder>(); }))
    {
    }
    inline auto BackgroundTaskRegistration::AllTasks()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IMapView<winrt::guid, winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration>(*)(IBackgroundTaskRegistrationStatics const&), BackgroundTaskRegistration, IBackgroundTaskRegistrationStatics>([](IBackgroundTaskRegistrationStatics const& f) { return f.AllTasks(); });
    }
    inline auto BackgroundTaskRegistration::AllTaskGroups()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup>(*)(IBackgroundTaskRegistrationStatics2 const&), BackgroundTaskRegistration, IBackgroundTaskRegistrationStatics2>([](IBackgroundTaskRegistrationStatics2 const& f) { return f.AllTaskGroups(); });
    }
    inline auto BackgroundTaskRegistration::GetTaskGroup(param::hstring const& groupId)
    {
        return impl::call_factory<BackgroundTaskRegistration, IBackgroundTaskRegistrationStatics2>([&](IBackgroundTaskRegistrationStatics2 const& f) { return f.GetTaskGroup(groupId); });
    }
    inline BackgroundTaskRegistrationGroup::BackgroundTaskRegistrationGroup(param::hstring const& id) :
        BackgroundTaskRegistrationGroup(impl::call_factory<BackgroundTaskRegistrationGroup, IBackgroundTaskRegistrationGroupFactory>([&](IBackgroundTaskRegistrationGroupFactory const& f) { return f.Create(id); }))
    {
    }
    inline BackgroundTaskRegistrationGroup::BackgroundTaskRegistrationGroup(param::hstring const& id, param::hstring const& name) :
        BackgroundTaskRegistrationGroup(impl::call_factory<BackgroundTaskRegistrationGroup, IBackgroundTaskRegistrationGroupFactory>([&](IBackgroundTaskRegistrationGroupFactory const& f) { return f.CreateWithName(id, name); }))
    {
    }
    inline auto BackgroundWorkCost::CurrentBackgroundWorkCost()
    {
        return impl::call_factory_cast<winrt::Windows::ApplicationModel::Background::BackgroundWorkCostValue(*)(IBackgroundWorkCostStatics const&), BackgroundWorkCost, IBackgroundWorkCostStatics>([](IBackgroundWorkCostStatics const& f) { return f.CurrentBackgroundWorkCost(); });
    }
    inline BluetoothLEAdvertisementPublisherTrigger::BluetoothLEAdvertisementPublisherTrigger() :
        BluetoothLEAdvertisementPublisherTrigger(impl::call_factory_cast<BluetoothLEAdvertisementPublisherTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), BluetoothLEAdvertisementPublisherTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<BluetoothLEAdvertisementPublisherTrigger>(); }))
    {
    }
    inline BluetoothLEAdvertisementWatcherTrigger::BluetoothLEAdvertisementWatcherTrigger() :
        BluetoothLEAdvertisementWatcherTrigger(impl::call_factory_cast<BluetoothLEAdvertisementWatcherTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), BluetoothLEAdvertisementWatcherTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<BluetoothLEAdvertisementWatcherTrigger>(); }))
    {
    }
    inline CachedFileUpdaterTrigger::CachedFileUpdaterTrigger() :
        CachedFileUpdaterTrigger(impl::call_factory_cast<CachedFileUpdaterTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), CachedFileUpdaterTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CachedFileUpdaterTrigger>(); }))
    {
    }
    inline ChatMessageNotificationTrigger::ChatMessageNotificationTrigger() :
        ChatMessageNotificationTrigger(impl::call_factory_cast<ChatMessageNotificationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), ChatMessageNotificationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ChatMessageNotificationTrigger>(); }))
    {
    }
    inline ChatMessageReceivedNotificationTrigger::ChatMessageReceivedNotificationTrigger() :
        ChatMessageReceivedNotificationTrigger(impl::call_factory_cast<ChatMessageReceivedNotificationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), ChatMessageReceivedNotificationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ChatMessageReceivedNotificationTrigger>(); }))
    {
    }
    inline CommunicationBlockingAppSetAsActiveTrigger::CommunicationBlockingAppSetAsActiveTrigger() :
        CommunicationBlockingAppSetAsActiveTrigger(impl::call_factory_cast<CommunicationBlockingAppSetAsActiveTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), CommunicationBlockingAppSetAsActiveTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<CommunicationBlockingAppSetAsActiveTrigger>(); }))
    {
    }
    inline ContactStoreNotificationTrigger::ContactStoreNotificationTrigger() :
        ContactStoreNotificationTrigger(impl::call_factory_cast<ContactStoreNotificationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), ContactStoreNotificationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ContactStoreNotificationTrigger>(); }))
    {
    }
    inline ContentPrefetchTrigger::ContentPrefetchTrigger() :
        ContentPrefetchTrigger(impl::call_factory_cast<ContentPrefetchTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), ContentPrefetchTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ContentPrefetchTrigger>(); }))
    {
    }
    inline ContentPrefetchTrigger::ContentPrefetchTrigger(winrt::Windows::Foundation::TimeSpan const& waitInterval) :
        ContentPrefetchTrigger(impl::call_factory<ContentPrefetchTrigger, IContentPrefetchTriggerFactory>([&](IContentPrefetchTriggerFactory const& f) { return f.Create(waitInterval); }))
    {
    }
    inline ConversationalAgentTrigger::ConversationalAgentTrigger() :
        ConversationalAgentTrigger(impl::call_factory_cast<ConversationalAgentTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), ConversationalAgentTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ConversationalAgentTrigger>(); }))
    {
    }
    inline CustomSystemEventTrigger::CustomSystemEventTrigger(param::hstring const& triggerId, winrt::Windows::ApplicationModel::Background::CustomSystemEventTriggerRecurrence const& recurrence) :
        CustomSystemEventTrigger(impl::call_factory<CustomSystemEventTrigger, ICustomSystemEventTriggerFactory>([&](ICustomSystemEventTriggerFactory const& f) { return f.Create(triggerId, recurrence); }))
    {
    }
    inline auto DeviceConnectionChangeTrigger::FromIdAsync(param::hstring const& deviceId)
    {
        return impl::call_factory<DeviceConnectionChangeTrigger, IDeviceConnectionChangeTriggerStatics>([&](IDeviceConnectionChangeTriggerStatics const& f) { return f.FromIdAsync(deviceId); });
    }
    inline DeviceManufacturerNotificationTrigger::DeviceManufacturerNotificationTrigger(param::hstring const& triggerQualifier, bool oneShot) :
        DeviceManufacturerNotificationTrigger(impl::call_factory<DeviceManufacturerNotificationTrigger, IDeviceManufacturerNotificationTriggerFactory>([&](IDeviceManufacturerNotificationTriggerFactory const& f) { return f.Create(triggerQualifier, oneShot); }))
    {
    }
    inline DeviceServicingTrigger::DeviceServicingTrigger() :
        DeviceServicingTrigger(impl::call_factory_cast<DeviceServicingTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), DeviceServicingTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<DeviceServicingTrigger>(); }))
    {
    }
    inline DeviceUseTrigger::DeviceUseTrigger() :
        DeviceUseTrigger(impl::call_factory_cast<DeviceUseTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), DeviceUseTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<DeviceUseTrigger>(); }))
    {
    }
    inline EmailStoreNotificationTrigger::EmailStoreNotificationTrigger() :
        EmailStoreNotificationTrigger(impl::call_factory_cast<EmailStoreNotificationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), EmailStoreNotificationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<EmailStoreNotificationTrigger>(); }))
    {
    }
    inline GattCharacteristicNotificationTrigger::GattCharacteristicNotificationTrigger(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic) :
        GattCharacteristicNotificationTrigger(impl::call_factory<GattCharacteristicNotificationTrigger, IGattCharacteristicNotificationTriggerFactory>([&](IGattCharacteristicNotificationTriggerFactory const& f) { return f.Create(characteristic); }))
    {
    }
    inline GattCharacteristicNotificationTrigger::GattCharacteristicNotificationTrigger(winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::GattCharacteristic const& characteristic, winrt::Windows::Devices::Bluetooth::Background::BluetoothEventTriggeringMode const& eventTriggeringMode) :
        GattCharacteristicNotificationTrigger(impl::call_factory<GattCharacteristicNotificationTrigger, IGattCharacteristicNotificationTriggerFactory2>([&](IGattCharacteristicNotificationTriggerFactory2 const& f) { return f.Create(characteristic, eventTriggeringMode); }))
    {
    }
    inline auto GattServiceProviderTrigger::CreateAsync(param::hstring const& triggerId, winrt::guid const& serviceUuid)
    {
        return impl::call_factory<GattServiceProviderTrigger, IGattServiceProviderTriggerStatics>([&](IGattServiceProviderTriggerStatics const& f) { return f.CreateAsync(triggerId, serviceUuid); });
    }
    inline GeovisitTrigger::GeovisitTrigger() :
        GeovisitTrigger(impl::call_factory_cast<GeovisitTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), GeovisitTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GeovisitTrigger>(); }))
    {
    }
    inline LocationTrigger::LocationTrigger(winrt::Windows::ApplicationModel::Background::LocationTriggerType const& triggerType) :
        LocationTrigger(impl::call_factory<LocationTrigger, ILocationTriggerFactory>([&](ILocationTriggerFactory const& f) { return f.Create(triggerType); }))
    {
    }
    inline MaintenanceTrigger::MaintenanceTrigger(uint32_t freshnessTime, bool oneShot) :
        MaintenanceTrigger(impl::call_factory<MaintenanceTrigger, IMaintenanceTriggerFactory>([&](IMaintenanceTriggerFactory const& f) { return f.Create(freshnessTime, oneShot); }))
    {
    }
    inline MediaProcessingTrigger::MediaProcessingTrigger() :
        MediaProcessingTrigger(impl::call_factory_cast<MediaProcessingTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), MediaProcessingTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<MediaProcessingTrigger>(); }))
    {
    }
    inline MobileBroadbandDeviceServiceNotificationTrigger::MobileBroadbandDeviceServiceNotificationTrigger() :
        MobileBroadbandDeviceServiceNotificationTrigger(impl::call_factory_cast<MobileBroadbandDeviceServiceNotificationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), MobileBroadbandDeviceServiceNotificationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<MobileBroadbandDeviceServiceNotificationTrigger>(); }))
    {
    }
    inline MobileBroadbandPcoDataChangeTrigger::MobileBroadbandPcoDataChangeTrigger() :
        MobileBroadbandPcoDataChangeTrigger(impl::call_factory_cast<MobileBroadbandPcoDataChangeTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), MobileBroadbandPcoDataChangeTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<MobileBroadbandPcoDataChangeTrigger>(); }))
    {
    }
    inline MobileBroadbandPinLockStateChangeTrigger::MobileBroadbandPinLockStateChangeTrigger() :
        MobileBroadbandPinLockStateChangeTrigger(impl::call_factory_cast<MobileBroadbandPinLockStateChangeTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), MobileBroadbandPinLockStateChangeTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<MobileBroadbandPinLockStateChangeTrigger>(); }))
    {
    }
    inline MobileBroadbandRadioStateChangeTrigger::MobileBroadbandRadioStateChangeTrigger() :
        MobileBroadbandRadioStateChangeTrigger(impl::call_factory_cast<MobileBroadbandRadioStateChangeTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), MobileBroadbandRadioStateChangeTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<MobileBroadbandRadioStateChangeTrigger>(); }))
    {
    }
    inline MobileBroadbandRegistrationStateChangeTrigger::MobileBroadbandRegistrationStateChangeTrigger() :
        MobileBroadbandRegistrationStateChangeTrigger(impl::call_factory_cast<MobileBroadbandRegistrationStateChangeTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), MobileBroadbandRegistrationStateChangeTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<MobileBroadbandRegistrationStateChangeTrigger>(); }))
    {
    }
    inline NetworkOperatorDataUsageTrigger::NetworkOperatorDataUsageTrigger() :
        NetworkOperatorDataUsageTrigger(impl::call_factory_cast<NetworkOperatorDataUsageTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), NetworkOperatorDataUsageTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<NetworkOperatorDataUsageTrigger>(); }))
    {
    }
    inline NetworkOperatorHotspotAuthenticationTrigger::NetworkOperatorHotspotAuthenticationTrigger() :
        NetworkOperatorHotspotAuthenticationTrigger(impl::call_factory_cast<NetworkOperatorHotspotAuthenticationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), NetworkOperatorHotspotAuthenticationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<NetworkOperatorHotspotAuthenticationTrigger>(); }))
    {
    }
    inline NetworkOperatorNotificationTrigger::NetworkOperatorNotificationTrigger(param::hstring const& networkAccountId) :
        NetworkOperatorNotificationTrigger(impl::call_factory<NetworkOperatorNotificationTrigger, INetworkOperatorNotificationTriggerFactory>([&](INetworkOperatorNotificationTriggerFactory const& f) { return f.Create(networkAccountId); }))
    {
    }
    inline PaymentAppCanMakePaymentTrigger::PaymentAppCanMakePaymentTrigger() :
        PaymentAppCanMakePaymentTrigger(impl::call_factory_cast<PaymentAppCanMakePaymentTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), PaymentAppCanMakePaymentTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PaymentAppCanMakePaymentTrigger>(); }))
    {
    }
    inline PhoneTrigger::PhoneTrigger(winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType const& type, bool oneShot) :
        PhoneTrigger(impl::call_factory<PhoneTrigger, IPhoneTriggerFactory>([&](IPhoneTriggerFactory const& f) { return f.Create(type, oneShot); }))
    {
    }
    inline PushNotificationTrigger::PushNotificationTrigger() :
        PushNotificationTrigger(impl::call_factory_cast<PushNotificationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), PushNotificationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PushNotificationTrigger>(); }))
    {
    }
    inline PushNotificationTrigger::PushNotificationTrigger(param::hstring const& applicationId) :
        PushNotificationTrigger(impl::call_factory<PushNotificationTrigger, IPushNotificationTriggerFactory>([&](IPushNotificationTriggerFactory const& f) { return f.Create(applicationId); }))
    {
    }
    inline RcsEndUserMessageAvailableTrigger::RcsEndUserMessageAvailableTrigger() :
        RcsEndUserMessageAvailableTrigger(impl::call_factory_cast<RcsEndUserMessageAvailableTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), RcsEndUserMessageAvailableTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<RcsEndUserMessageAvailableTrigger>(); }))
    {
    }
    inline RfcommConnectionTrigger::RfcommConnectionTrigger() :
        RfcommConnectionTrigger(impl::call_factory_cast<RfcommConnectionTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), RfcommConnectionTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<RfcommConnectionTrigger>(); }))
    {
    }
    inline SecondaryAuthenticationFactorAuthenticationTrigger::SecondaryAuthenticationFactorAuthenticationTrigger() :
        SecondaryAuthenticationFactorAuthenticationTrigger(impl::call_factory_cast<SecondaryAuthenticationFactorAuthenticationTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), SecondaryAuthenticationFactorAuthenticationTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SecondaryAuthenticationFactorAuthenticationTrigger>(); }))
    {
    }
    inline SensorDataThresholdTrigger::SensorDataThresholdTrigger(winrt::Windows::Devices::Sensors::ISensorDataThreshold const& threshold) :
        SensorDataThresholdTrigger(impl::call_factory<SensorDataThresholdTrigger, ISensorDataThresholdTriggerFactory>([&](ISensorDataThresholdTriggerFactory const& f) { return f.Create(threshold); }))
    {
    }
    inline SmartCardTrigger::SmartCardTrigger(winrt::Windows::Devices::SmartCards::SmartCardTriggerType const& triggerType) :
        SmartCardTrigger(impl::call_factory<SmartCardTrigger, ISmartCardTriggerFactory>([&](ISmartCardTriggerFactory const& f) { return f.Create(triggerType); }))
    {
    }
    inline SmsMessageReceivedTrigger::SmsMessageReceivedTrigger(winrt::Windows::Devices::Sms::SmsFilterRules const& filterRules) :
        SmsMessageReceivedTrigger(impl::call_factory<SmsMessageReceivedTrigger, ISmsMessageReceivedTriggerFactory>([&](ISmsMessageReceivedTriggerFactory const& f) { return f.Create(filterRules); }))
    {
    }
    inline SocketActivityTrigger::SocketActivityTrigger() :
        SocketActivityTrigger(impl::call_factory_cast<SocketActivityTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), SocketActivityTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SocketActivityTrigger>(); }))
    {
    }
    inline StorageLibraryChangeTrackerTrigger::StorageLibraryChangeTrackerTrigger(winrt::Windows::Storage::StorageLibraryChangeTracker const& tracker) :
        StorageLibraryChangeTrackerTrigger(impl::call_factory<StorageLibraryChangeTrackerTrigger, IStorageLibraryChangeTrackerTriggerFactory>([&](IStorageLibraryChangeTrackerTriggerFactory const& f) { return f.Create(tracker); }))
    {
    }
    inline auto StorageLibraryContentChangedTrigger::Create(winrt::Windows::Storage::StorageLibrary const& storageLibrary)
    {
        return impl::call_factory<StorageLibraryContentChangedTrigger, IStorageLibraryContentChangedTriggerStatics>([&](IStorageLibraryContentChangedTriggerStatics const& f) { return f.Create(storageLibrary); });
    }
    inline auto StorageLibraryContentChangedTrigger::CreateFromLibraries(param::iterable<winrt::Windows::Storage::StorageLibrary> const& storageLibraries)
    {
        return impl::call_factory<StorageLibraryContentChangedTrigger, IStorageLibraryContentChangedTriggerStatics>([&](IStorageLibraryContentChangedTriggerStatics const& f) { return f.CreateFromLibraries(storageLibraries); });
    }
    inline SystemCondition::SystemCondition(winrt::Windows::ApplicationModel::Background::SystemConditionType const& conditionType) :
        SystemCondition(impl::call_factory<SystemCondition, ISystemConditionFactory>([&](ISystemConditionFactory const& f) { return f.Create(conditionType); }))
    {
    }
    inline SystemTrigger::SystemTrigger(winrt::Windows::ApplicationModel::Background::SystemTriggerType const& triggerType, bool oneShot) :
        SystemTrigger(impl::call_factory<SystemTrigger, ISystemTriggerFactory>([&](ISystemTriggerFactory const& f) { return f.Create(triggerType, oneShot); }))
    {
    }
    inline TetheringEntitlementCheckTrigger::TetheringEntitlementCheckTrigger() :
        TetheringEntitlementCheckTrigger(impl::call_factory_cast<TetheringEntitlementCheckTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), TetheringEntitlementCheckTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<TetheringEntitlementCheckTrigger>(); }))
    {
    }
    inline TimeTrigger::TimeTrigger(uint32_t freshnessTime, bool oneShot) :
        TimeTrigger(impl::call_factory<TimeTrigger, ITimeTriggerFactory>([&](ITimeTriggerFactory const& f) { return f.Create(freshnessTime, oneShot); }))
    {
    }
    inline ToastNotificationActionTrigger::ToastNotificationActionTrigger() :
        ToastNotificationActionTrigger(impl::call_factory_cast<ToastNotificationActionTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), ToastNotificationActionTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ToastNotificationActionTrigger>(); }))
    {
    }
    inline ToastNotificationActionTrigger::ToastNotificationActionTrigger(param::hstring const& applicationId) :
        ToastNotificationActionTrigger(impl::call_factory<ToastNotificationActionTrigger, IToastNotificationActionTriggerFactory>([&](IToastNotificationActionTriggerFactory const& f) { return f.Create(applicationId); }))
    {
    }
    inline ToastNotificationHistoryChangedTrigger::ToastNotificationHistoryChangedTrigger() :
        ToastNotificationHistoryChangedTrigger(impl::call_factory_cast<ToastNotificationHistoryChangedTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), ToastNotificationHistoryChangedTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ToastNotificationHistoryChangedTrigger>(); }))
    {
    }
    inline ToastNotificationHistoryChangedTrigger::ToastNotificationHistoryChangedTrigger(param::hstring const& applicationId) :
        ToastNotificationHistoryChangedTrigger(impl::call_factory<ToastNotificationHistoryChangedTrigger, IToastNotificationHistoryChangedTriggerFactory>([&](IToastNotificationHistoryChangedTriggerFactory const& f) { return f.Create(applicationId); }))
    {
    }
    inline UserNotificationChangedTrigger::UserNotificationChangedTrigger(winrt::Windows::UI::Notifications::NotificationKinds const& notificationKinds) :
        UserNotificationChangedTrigger(impl::call_factory<UserNotificationChangedTrigger, IUserNotificationChangedTriggerFactory>([&](IUserNotificationChangedTriggerFactory const& f) { return f.Create(notificationKinds); }))
    {
    }
    inline WiFiOnDemandHotspotConnectTrigger::WiFiOnDemandHotspotConnectTrigger() :
        WiFiOnDemandHotspotConnectTrigger(impl::call_factory_cast<WiFiOnDemandHotspotConnectTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), WiFiOnDemandHotspotConnectTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<WiFiOnDemandHotspotConnectTrigger>(); }))
    {
    }
    inline WiFiOnDemandHotspotUpdateMetadataTrigger::WiFiOnDemandHotspotUpdateMetadataTrigger() :
        WiFiOnDemandHotspotUpdateMetadataTrigger(impl::call_factory_cast<WiFiOnDemandHotspotUpdateMetadataTrigger(*)(winrt::Windows::Foundation::IActivationFactory const&), WiFiOnDemandHotspotUpdateMetadataTrigger>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<WiFiOnDemandHotspotUpdateMetadataTrigger>(); }))
    {
    }
    template <typename L> BackgroundTaskCanceledEventHandler::BackgroundTaskCanceledEventHandler(L handler) :
        BackgroundTaskCanceledEventHandler(impl::make_delegate<BackgroundTaskCanceledEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> BackgroundTaskCanceledEventHandler::BackgroundTaskCanceledEventHandler(F* handler) :
        BackgroundTaskCanceledEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> BackgroundTaskCanceledEventHandler::BackgroundTaskCanceledEventHandler(O* object, M method) :
        BackgroundTaskCanceledEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> BackgroundTaskCanceledEventHandler::BackgroundTaskCanceledEventHandler(com_ptr<O>&& object, M method) :
        BackgroundTaskCanceledEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> BackgroundTaskCanceledEventHandler::BackgroundTaskCanceledEventHandler(weak_ref<O>&& object, M method) :
        BackgroundTaskCanceledEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto BackgroundTaskCanceledEventHandler::operator()(winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance const& sender, winrt::Windows::ApplicationModel::Background::BackgroundTaskCancellationReason const& reason) const
    {
        check_hresult((*(impl::abi_t<BackgroundTaskCanceledEventHandler>**)this)->Invoke(*(void**)(&sender), static_cast<int32_t>(reason)));
    }
    template <typename L> BackgroundTaskCompletedEventHandler::BackgroundTaskCompletedEventHandler(L handler) :
        BackgroundTaskCompletedEventHandler(impl::make_delegate<BackgroundTaskCompletedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> BackgroundTaskCompletedEventHandler::BackgroundTaskCompletedEventHandler(F* handler) :
        BackgroundTaskCompletedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> BackgroundTaskCompletedEventHandler::BackgroundTaskCompletedEventHandler(O* object, M method) :
        BackgroundTaskCompletedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> BackgroundTaskCompletedEventHandler::BackgroundTaskCompletedEventHandler(com_ptr<O>&& object, M method) :
        BackgroundTaskCompletedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> BackgroundTaskCompletedEventHandler::BackgroundTaskCompletedEventHandler(weak_ref<O>&& object, M method) :
        BackgroundTaskCompletedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto BackgroundTaskCompletedEventHandler::operator()(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration const& sender, winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs const& args) const
    {
        check_hresult((*(impl::abi_t<BackgroundTaskCompletedEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&args)));
    }
    template <typename L> BackgroundTaskProgressEventHandler::BackgroundTaskProgressEventHandler(L handler) :
        BackgroundTaskProgressEventHandler(impl::make_delegate<BackgroundTaskProgressEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> BackgroundTaskProgressEventHandler::BackgroundTaskProgressEventHandler(F* handler) :
        BackgroundTaskProgressEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> BackgroundTaskProgressEventHandler::BackgroundTaskProgressEventHandler(O* object, M method) :
        BackgroundTaskProgressEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> BackgroundTaskProgressEventHandler::BackgroundTaskProgressEventHandler(com_ptr<O>&& object, M method) :
        BackgroundTaskProgressEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> BackgroundTaskProgressEventHandler::BackgroundTaskProgressEventHandler(weak_ref<O>&& object, M method) :
        BackgroundTaskProgressEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto BackgroundTaskProgressEventHandler::operator()(winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration const& sender, winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs const& args) const
    {
        check_hresult((*(impl::abi_t<BackgroundTaskProgressEventHandler>**)this)->Invoke(*(void**)(&sender), *(void**)(&args)));
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IActivitySensorTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IActivitySensorTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IAlarmApplicationManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IAppBroadcastTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IAppBroadcastTriggerProviderInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IApplicationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IApplicationTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IAppointmentStoreNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundCondition> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundExecutionManagerStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTask> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskBuilder5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskCompletedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskInstance4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskProgressEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistration3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroup> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationGroupFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTaskRegistrationStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBackgroundWorkCostStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementPublisherTrigger2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IBluetoothLEAdvertisementWatcherTrigger2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ICachedFileUpdaterTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IChatMessageNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IChatMessageReceivedNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ICommunicationBlockingAppSetAsActiveTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IContactStoreNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IContentPrefetchTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IContentPrefetchTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ICustomSystemEventTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ICustomSystemEventTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceConnectionChangeTriggerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceManufacturerNotificationTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceServicingTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceUseTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IDeviceWatcherTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTrigger2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattCharacteristicNotificationTriggerFactory2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattServiceProviderTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IGattServiceProviderTriggerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IGeovisitTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ILocationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ILocationTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IMaintenanceTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IMaintenanceTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IMediaProcessingTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::INetworkOperatorHotspotAuthenticationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::INetworkOperatorNotificationTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IPhoneTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IPhoneTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IPushNotificationTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IRcsEndUserMessageAvailableTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IRfcommConnectionTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISecondaryAuthenticationFactorAuthenticationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISensorDataThresholdTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISmartCardTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISmartCardTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISmsMessageReceivedTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISocketActivityTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IStorageLibraryChangeTrackerTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IStorageLibraryContentChangedTriggerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISystemCondition> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISystemConditionFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISystemTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ISystemTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ITimeTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ITimeTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IToastNotificationActionTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IToastNotificationHistoryChangedTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::IUserNotificationChangedTriggerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ActivitySensorTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::AlarmApplicationManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::AppBroadcastTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::AppBroadcastTriggerProviderInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ApplicationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ApplicationTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::AppointmentStoreNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundExecutionManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskBuilder> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskCompletedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskProgressEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundTaskRegistrationGroup> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BackgroundWorkCost> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementPublisherTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::BluetoothLEAdvertisementWatcherTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::CachedFileUpdaterTriggerDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ChatMessageNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ChatMessageReceivedNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::CommunicationBlockingAppSetAsActiveTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ContactStoreNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ContentPrefetchTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ConversationalAgentTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::CustomSystemEventTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceConnectionChangeTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceManufacturerNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceServicingTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceUseTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::DeviceWatcherTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::EmailStoreNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::GattCharacteristicNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::GattServiceProviderTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::GattServiceProviderTriggerResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::GeovisitTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::LocationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::MaintenanceTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::MediaProcessingTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandDeviceServiceNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandPcoDataChangeTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandPinLockStateChangeTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandRadioStateChangeTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::MobileBroadbandRegistrationStateChangeTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::NetworkOperatorDataUsageTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::NetworkOperatorHotspotAuthenticationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::NetworkOperatorNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::PaymentAppCanMakePaymentTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::PhoneTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::PushNotificationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::RcsEndUserMessageAvailableTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::RfcommConnectionTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::SecondaryAuthenticationFactorAuthenticationTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::SensorDataThresholdTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::SmartCardTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::SmsMessageReceivedTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::SocketActivityTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::StorageLibraryChangeTrackerTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::StorageLibraryContentChangedTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::SystemCondition> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::SystemTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::TetheringEntitlementCheckTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::TimeTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ToastNotificationActionTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::ToastNotificationHistoryChangedTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::UserNotificationChangedTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::WiFiOnDemandHotspotConnectTrigger> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Background::WiFiOnDemandHotspotUpdateMetadataTrigger> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
