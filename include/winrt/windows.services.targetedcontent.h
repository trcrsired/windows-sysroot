// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Services_TargetedContent_H
#define WINRT_Windows_Services_TargetedContent_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.foundation.collections.2.h"
#include "winrt/impl/windows.storage.streams.2.h"
#include "winrt/impl/windows.services.targetedcontent.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Services_TargetedContent_ITargetedContentAction<D>::InvokeAsync() const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentAction)->InvokeAsync(&asyncAction));
        return winrt::Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) consume_Windows_Services_TargetedContent_ITargetedContentAvailabilityChangedEventArgs<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs)->GetDeferral(&value));
        return winrt::Windows::Foundation::Deferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) consume_Windows_Services_TargetedContent_ITargetedContentChangedEventArgs<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs)->GetDeferral(&value));
        return winrt::Windows::Foundation::Deferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Services_TargetedContent_ITargetedContentChangedEventArgs<D>::HasPreviousContentExpired() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs)->get_HasPreviousContentExpired(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentCollection)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::ReportInteraction(winrt::Windows::Services::TargetedContent::TargetedContentInteraction const& interaction) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentCollection)->ReportInteraction(static_cast<int32_t>(interaction)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::ReportCustomInteraction(param::hstring const& customInteractionName) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentCollection)->ReportCustomInteraction(*(void**)(&customInteractionName)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Path() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentCollection)->get_Path(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Services::TargetedContent::TargetedContentValue>) consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentCollection)->get_Properties(&value));
        return winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Services::TargetedContent::TargetedContentValue>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentCollection>) consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Collections() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentCollection)->get_Collections(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentCollection>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentItem>) consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Items() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentCollection)->get_Items(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentItem>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentContainer)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::Timestamp() const
    {
        winrt::Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentContainer)->get_Timestamp(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentAvailability) consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::Availability() const
    {
        winrt::Windows::Services::TargetedContent::TargetedContentAvailability value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentContainer)->get_Availability(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentCollection) consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::Content() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentContainer)->get_Content(&value));
        return winrt::Windows::Services::TargetedContent::TargetedContentCollection{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentObject) consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::SelectSingleObject(param::hstring const& path) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentContainer)->SelectSingleObject(*(void**)(&path), &value));
        return winrt::Windows::Services::TargetedContent::TargetedContentObject{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::TargetedContent::TargetedContentContainer>) consume_Windows_Services_TargetedContent_ITargetedContentContainerStatics<D>::GetAsync(param::hstring const& contentId) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentContainerStatics)->GetAsync(*(void**)(&contentId), &asyncOperation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::TargetedContent::TargetedContentContainer>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Services_TargetedContent_ITargetedContentImage<D>::Height() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentImage)->get_Height(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(uint32_t) consume_Windows_Services_TargetedContent_ITargetedContentImage<D>::Width() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentImage)->get_Width(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::Path() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentItem)->get_Path(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::ReportInteraction(winrt::Windows::Services::TargetedContent::TargetedContentInteraction const& interaction) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentItem)->ReportInteraction(static_cast<int32_t>(interaction)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::ReportCustomInteraction(param::hstring const& customInteractionName) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentItem)->ReportCustomInteraction(*(void**)(&customInteractionName)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentItemState) consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::State() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentItem)->get_State(&value));
        return winrt::Windows::Services::TargetedContent::TargetedContentItemState{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Services::TargetedContent::TargetedContentValue>) consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentItem)->get_Properties(&value));
        return winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Services::TargetedContent::TargetedContentValue>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentCollection>) consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::Collections() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentItem)->get_Collections(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentCollection>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Services_TargetedContent_ITargetedContentItemState<D>::ShouldDisplay() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentItemState)->get_ShouldDisplay(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentAppInstallationState) consume_Windows_Services_TargetedContent_ITargetedContentItemState<D>::AppInstallationState() const
    {
        winrt::Windows::Services::TargetedContent::TargetedContentAppInstallationState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentItemState)->get_AppInstallationState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentObjectKind) consume_Windows_Services_TargetedContent_ITargetedContentObject<D>::ObjectKind() const
    {
        winrt::Windows::Services::TargetedContent::TargetedContentObjectKind value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentObject)->get_ObjectKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentCollection) consume_Windows_Services_TargetedContent_ITargetedContentObject<D>::Collection() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentObject)->get_Collection(&value));
        return winrt::Windows::Services::TargetedContent::TargetedContentCollection{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentItem) consume_Windows_Services_TargetedContent_ITargetedContentObject<D>::Item() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentObject)->get_Item(&value));
        return winrt::Windows::Services::TargetedContent::TargetedContentItem{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentValue) consume_Windows_Services_TargetedContent_ITargetedContentObject<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentObject)->get_Value(&value));
        return winrt::Windows::Services::TargetedContent::TargetedContentValue{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Deferral) consume_Windows_Services_TargetedContent_ITargetedContentStateChangedEventArgs<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs)->GetDeferral(&value));
        return winrt::Windows::Foundation::Deferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscription)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::TargetedContent::TargetedContentContainer>) consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::GetContentContainerAsync() const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscription)->GetContentContainerAsync(&asyncOperation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::TargetedContent::TargetedContentContainer>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::ContentChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::TargetedContent::TargetedContentSubscription, winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const& handler) const
    {
        winrt::event_token cookie{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscription)->add_ContentChanged(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::ContentChanged_revoker consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::ContentChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::TargetedContent::TargetedContentSubscription, winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ContentChanged_revoker>(this, ContentChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::ContentChanged(winrt::event_token const& cookie) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscription)->remove_ContentChanged(impl::bind_in(cookie));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::AvailabilityChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::TargetedContent::TargetedContentSubscription, winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const& handler) const
    {
        winrt::event_token cookie{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscription)->add_AvailabilityChanged(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::AvailabilityChanged_revoker consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::AvailabilityChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::TargetedContent::TargetedContentSubscription, winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, AvailabilityChanged_revoker>(this, AvailabilityChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::AvailabilityChanged(winrt::event_token const& cookie) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscription)->remove_AvailabilityChanged(impl::bind_in(cookie));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::StateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::TargetedContent::TargetedContentSubscription, winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const& handler) const
    {
        winrt::event_token cookie{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscription)->add_StateChanged(*(void**)(&handler), put_abi(cookie)));
        return cookie;
    }
    template <typename D> typename consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::StateChanged_revoker consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::StateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::TargetedContent::TargetedContentSubscription, winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, StateChanged_revoker>(this, StateChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::StateChanged(winrt::event_token const& cookie) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscription)->remove_StateChanged(impl::bind_in(cookie));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::SubscriptionId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->get_SubscriptionId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::AllowPartialContentAvailability() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->get_AllowPartialContentAvailability(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::AllowPartialContentAvailability(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->put_AllowPartialContentAvailability(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMap<hstring, hstring>) consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::CloudQueryParameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->get_CloudQueryParameters(&value));
        return winrt::Windows::Foundation::Collections::IMap<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::LocalFilters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->get_LocalFilters(&value));
        return winrt::Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::Update() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->Update());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::TargetedContent::TargetedContentSubscription>) consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionStatics<D>::GetAsync(param::hstring const& subscriptionId) const
    {
        void* asyncOperation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics)->GetAsync(*(void**)(&subscriptionId), &asyncOperation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::TargetedContent::TargetedContentSubscription>{ asyncOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions) consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionStatics<D>::GetOptions(param::hstring const& subscriptionId) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics)->GetOptions(*(void**)(&subscriptionId), &value));
        return winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentValueKind) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::ValueKind() const
    {
        winrt::Windows::Services::TargetedContent::TargetedContentValueKind value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_ValueKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Path() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Path(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::String() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_String(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Uri) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Uri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Number() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Number(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Boolean() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Boolean(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentFile) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::File() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_File(&value));
        return winrt::Windows::Services::TargetedContent::TargetedContentFile{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentImage) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::ImageFile() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_ImageFile(&value));
        return winrt::Windows::Services::TargetedContent::TargetedContentImage{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Services::TargetedContent::TargetedContentAction) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Action() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Action(&value));
        return winrt::Windows::Services::TargetedContent::TargetedContentAction{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Strings() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Strings(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Uris() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Uris(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<double>) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Numbers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Numbers(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<double>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<bool>) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Booleans() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Booleans(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<bool>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentFile>) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Files() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Files(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentFile>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentImage>) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::ImageFiles() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_ImageFiles(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentImage>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentAction>) consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Actions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Services::TargetedContent::ITargetedContentValue)->get_Actions(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentAction>{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentAction> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentAction>
    {
        int32_t __stdcall InvokeAsync(void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().InvokeAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
    {
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
    {
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HasPreviousContentExpired(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasPreviousContentExpired());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentCollection> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentCollection>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportInteraction(int32_t interaction) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportInteraction(*reinterpret_cast<winrt::Windows::Services::TargetedContent::TargetedContentInteraction const*>(&interaction));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportCustomInteraction(void* customInteractionName) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCustomInteraction(*reinterpret_cast<hstring const*>(&customInteractionName));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Path(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Services::TargetedContent::TargetedContentValue>>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Collections(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentCollection>>(this->shim().Collections());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Items(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentItem>>(this->shim().Items());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentContainer> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentContainer>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Timestamp(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().Timestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Availability(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentAvailability>(this->shim().Availability());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Content(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentCollection>(this->shim().Content());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SelectSingleObject(void* path, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentObject>(this->shim().SelectSingleObject(*reinterpret_cast<hstring const*>(&path)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentContainerStatics> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentContainerStatics>
    {
        int32_t __stdcall GetAsync(void* contentId, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::TargetedContent::TargetedContentContainer>>(this->shim().GetAsync(*reinterpret_cast<hstring const*>(&contentId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentImage> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentImage>
    {
        int32_t __stdcall get_Height(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Height());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Width(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Width());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentItem> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentItem>
    {
        int32_t __stdcall get_Path(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportInteraction(int32_t interaction) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportInteraction(*reinterpret_cast<winrt::Windows::Services::TargetedContent::TargetedContentInteraction const*>(&interaction));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportCustomInteraction(void* customInteractionName) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCustomInteraction(*reinterpret_cast<hstring const*>(&customInteractionName));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_State(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentItemState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Services::TargetedContent::TargetedContentValue>>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Collections(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentCollection>>(this->shim().Collections());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentItemState> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentItemState>
    {
        int32_t __stdcall get_ShouldDisplay(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShouldDisplay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppInstallationState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentAppInstallationState>(this->shim().AppInstallationState());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentObject> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentObject>
    {
        int32_t __stdcall get_ObjectKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentObjectKind>(this->shim().ObjectKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Collection(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentCollection>(this->shim().Collection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Item(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentItem>(this->shim().Item());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentValue>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
    {
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentSubscription> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentSubscription>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetContentContainerAsync(void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::TargetedContent::TargetedContentContainer>>(this->shim().GetContentContainerAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_ContentChanged(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().ContentChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::TargetedContent::TargetedContentSubscription, winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ContentChanged(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentChanged(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
        int32_t __stdcall add_AvailabilityChanged(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().AvailabilityChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::TargetedContent::TargetedContentSubscription, winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AvailabilityChanged(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailabilityChanged(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
        int32_t __stdcall add_StateChanged(void* handler, winrt::event_token* cookie) noexcept final try
        {
            zero_abi<winrt::event_token>(cookie);
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<winrt::event_token>(this->shim().StateChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::TargetedContent::TargetedContentSubscription, winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_StateChanged(winrt::event_token cookie) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<winrt::event_token const*>(&cookie));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
    {
        int32_t __stdcall get_SubscriptionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SubscriptionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowPartialContentAvailability(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowPartialContentAvailability());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowPartialContentAvailability(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowPartialContentAvailability(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CloudQueryParameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().CloudQueryParameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LocalFilters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<hstring>>(this->shim().LocalFilters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Update() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
    {
        int32_t __stdcall GetAsync(void* subscriptionId, void** asyncOperation) noexcept final try
        {
            clear_abi(asyncOperation);
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Services::TargetedContent::TargetedContentSubscription>>(this->shim().GetAsync(*reinterpret_cast<hstring const*>(&subscriptionId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetOptions(void* subscriptionId, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>(this->shim().GetOptions(*reinterpret_cast<hstring const*>(&subscriptionId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Services::TargetedContent::ITargetedContentValue> : produce_base<D, winrt::Windows::Services::TargetedContent::ITargetedContentValue>
    {
        int32_t __stdcall get_ValueKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentValueKind>(this->shim().ValueKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Path(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_String(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().String());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Number(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Number());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Boolean(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Boolean());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_File(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentFile>(this->shim().File());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImageFile(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentImage>(this->shim().ImageFile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Action(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Services::TargetedContent::TargetedContentAction>(this->shim().Action());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Strings(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Strings());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uris(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>>(this->shim().Uris());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Numbers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<double>>(this->shim().Numbers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Booleans(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<bool>>(this->shim().Booleans());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Files(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentFile>>(this->shim().Files());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImageFiles(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentImage>>(this->shim().ImageFiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Actions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Services::TargetedContent::TargetedContentAction>>(this->shim().Actions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Services::TargetedContent
{
    inline auto TargetedContentContainer::GetAsync(param::hstring const& contentId)
    {
        return impl::call_factory<TargetedContentContainer, ITargetedContentContainerStatics>([&](ITargetedContentContainerStatics const& f) { return f.GetAsync(contentId); });
    }
    inline auto TargetedContentSubscription::GetAsync(param::hstring const& subscriptionId)
    {
        return impl::call_factory<TargetedContentSubscription, ITargetedContentSubscriptionStatics>([&](ITargetedContentSubscriptionStatics const& f) { return f.GetAsync(subscriptionId); });
    }
    inline auto TargetedContentSubscription::GetOptions(param::hstring const& subscriptionId)
    {
        return impl::call_factory<TargetedContentSubscription, ITargetedContentSubscriptionStatics>([&](ITargetedContentSubscriptionStatics const& f) { return f.GetOptions(subscriptionId); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentAction> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentContainer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentContainerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentImage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentItemState> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentObject> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentSubscription> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentValue> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentAction> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentCollection> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentContainer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentFile> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentImage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentItemState> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentObject> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentSubscription> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentValue> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
