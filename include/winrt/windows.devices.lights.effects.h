// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Lights_Effects_H
#define WINRT_Windows_Devices_Lights_Effects_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/windows.devices.lights.h"
#include "winrt/impl/windows.devices.lights.2.h"
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.foundation.collections.2.h"
#include "winrt/impl/windows.graphics.imaging.2.h"
#include "winrt/impl/windows.ui.2.h"
#include "winrt/impl/windows.devices.lights.effects.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::Duration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::Duration(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->put_Duration(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::StartDelay() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->get_StartDelay(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::StartDelay(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->put_StartDelay(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::UpdateInterval() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->get_UpdateInterval(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::UpdateInterval(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->put_UpdateInterval(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Size) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::SuggestedBitmapSize() const
    {
        winrt::Windows::Foundation::Size value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->get_SuggestedBitmapSize(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::BitmapRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect, winrt::Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->add_BitmapRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::BitmapRequested_revoker consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::BitmapRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect, winrt::Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, BitmapRequested_revoker>(this, BitmapRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffect<D>::BitmapRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect)->remove_BitmapRequested(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapEffectFactory<D>::CreateInstance(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapRequestedEventArgs<D>::SinceStarted() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs)->get_SinceStarted(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBitmapRequestedEventArgs<D>::UpdateBitmap(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs)->UpdateBitmap(*(void**)(&bitmap)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Color) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::Color() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_Color(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::Color(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_Color(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::AttackDuration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_AttackDuration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::AttackDuration(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_AttackDuration(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::SustainDuration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_SustainDuration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::SustainDuration(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_SustainDuration(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::DecayDuration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_DecayDuration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::DecayDuration(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_DecayDuration(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::RepetitionDelay() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_RepetitionDelay(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::RepetitionDelay(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_RepetitionDelay(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::StartDelay() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_StartDelay(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::StartDelay(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_StartDelay(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::Occurrences() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_Occurrences(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::Occurrences(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_Occurrences(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::RepetitionMode() const
    {
        winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->get_RepetitionMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffect<D>::RepetitionMode(winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect)->put_RepetitionMode(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArrayBlinkEffect) consume_Windows_Devices_Lights_Effects_ILampArrayBlinkEffectFactory<D>::CreateInstance(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return winrt::Windows::Devices::Lights::Effects::LampArrayBlinkEffect{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Color) consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::Color() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->get_Color(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::Color(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->put_Color(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::RampDuration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->get_RampDuration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::RampDuration(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->put_RampDuration(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::StartDelay() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->get_StartDelay(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::StartDelay(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->put_StartDelay(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior) consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::CompletionBehavior() const
    {
        winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->get_CompletionBehavior(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffect<D>::CompletionBehavior(winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect)->put_CompletionBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArrayColorRampEffect) consume_Windows_Devices_Lights_Effects_ILampArrayColorRampEffectFactory<D>::CreateInstance(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return winrt::Windows::Devices::Lights::Effects::LampArrayColorRampEffect{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::Duration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::Duration(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->put_Duration(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateInterval() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->get_UpdateInterval(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateInterval(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->put_UpdateInterval(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect, winrt::Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->add_UpdateRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateRequested_revoker consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect, winrt::Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, UpdateRequested_revoker>(this, UpdateRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffect<D>::UpdateRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect)->remove_UpdateRequested(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect) consume_Windows_Devices_Lights_Effects_ILampArrayCustomEffectFactory<D>::CreateInstance(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Devices_Lights_Effects_ILampArrayEffect<D>::ZIndex() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffect)->get_ZIndex(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffect<D>::ZIndex(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffect)->put_ZIndex(value));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Append(winrt::Windows::Devices::Lights::Effects::ILampArrayEffect const& effect) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->Append(*(void**)(&effect)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::OverrideZIndex(int32_t zIndex) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->OverrideZIndex(zIndex));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->Start());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->Stop());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Pause() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->Pause());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArrayEffectStartMode) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::EffectStartMode() const
    {
        winrt::Windows::Devices::Lights::Effects::LampArrayEffectStartMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->get_EffectStartMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::EffectStartMode(winrt::Windows::Devices::Lights::Effects::LampArrayEffectStartMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->put_EffectStartMode(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Occurrences() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->get_Occurrences(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::Occurrences(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->put_Occurrences(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::RepetitionMode() const
    {
        winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->get_RepetitionMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylist<D>::RepetitionMode(winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist)->put_RepetitionMode(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylistStatics<D>::StartAll(param::iterable<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics)->StartAll(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylistStatics<D>::StopAll(param::iterable<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics)->StopAll(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayEffectPlaylistStatics<D>::PauseAll(param::iterable<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics)->PauseAll(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Color) consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::Color() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect)->get_Color(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::Color(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect)->put_Color(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::Duration() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect)->get_Duration(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::Duration(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect)->put_Duration(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::StartDelay() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect)->get_StartDelay(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::StartDelay(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect)->put_StartDelay(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior) consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::CompletionBehavior() const
    {
        winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect)->get_CompletionBehavior(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArraySolidEffect<D>::CompletionBehavior(winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect)->put_CompletionBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Devices::Lights::Effects::LampArraySolidEffect) consume_Windows_Devices_Lights_Effects_ILampArraySolidEffectFactory<D>::CreateInstance(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory)->CreateInstance(*(void**)(&lampArray), lampIndexes.size(), get_abi(lampIndexes), &value));
        return winrt::Windows::Devices::Lights::Effects::LampArraySolidEffect{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SinceStarted() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->get_SinceStarted(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SetColor(winrt::Windows::UI::Color const& desiredColor) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->SetColor(impl::bind_in(desiredColor)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SetColorForIndex(int32_t lampIndex, winrt::Windows::UI::Color const& desiredColor) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->SetColorForIndex(lampIndex, impl::bind_in(desiredColor)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SetSingleColorForIndices(winrt::Windows::UI::Color const& desiredColor, array_view<int32_t const> lampIndexes) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->SetSingleColorForIndices(impl::bind_in(desiredColor), lampIndexes.size(), get_abi(lampIndexes)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Devices_Lights_Effects_ILampArrayUpdateRequestedEventArgs<D>::SetColorsForIndices(array_view<winrt::Windows::UI::Color const> desiredColors, array_view<int32_t const> lampIndexes) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs)->SetColorsForIndices(desiredColors.size(), get_abi(desiredColors), lampIndexes.size(), get_abi(lampIndexes)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect>
    {
        int32_t __stdcall get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Duration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartDelay(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().StartDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDelay(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateInterval(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().UpdateInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UpdateInterval(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateInterval(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SuggestedBitmapSize(winrt::Windows::Foundation::Size* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::Size>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Size>(this->shim().SuggestedBitmapSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_BitmapRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BitmapRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect, winrt::Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BitmapRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BitmapRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs>
    {
        int32_t __stdcall get_SinceStarted(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().SinceStarted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateBitmap(void* bitmap) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateBitmap(*reinterpret_cast<winrt::Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect>
    {
        int32_t __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().Color());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AttackDuration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().AttackDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AttackDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AttackDuration(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SustainDuration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().SustainDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SustainDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SustainDuration(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DecayDuration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().DecayDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DecayDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecayDuration(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RepetitionDelay(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().RepetitionDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RepetitionDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RepetitionDelay(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartDelay(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().StartDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDelay(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Occurrences(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Occurrences());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Occurrences(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RepetitionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode>(this->shim().RepetitionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RepetitionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RepetitionMode(*reinterpret_cast<winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArrayBlinkEffect>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect>
    {
        int32_t __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().Color());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RampDuration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().RampDuration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RampDuration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RampDuration(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartDelay(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().StartDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDelay(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CompletionBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior>(this->shim().CompletionBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CompletionBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompletionBehavior(*reinterpret_cast<winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArrayColorRampEffect>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect>
    {
        int32_t __stdcall get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Duration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateInterval(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().UpdateInterval());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UpdateInterval(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateInterval(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_UpdateRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UpdateRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect, winrt::Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UpdateRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayEffect> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        int32_t __stdcall get_ZIndex(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ZIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ZIndex(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist>
    {
        int32_t __stdcall Append(void* effect) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<winrt::Windows::Devices::Lights::Effects::ILampArrayEffect const*>(&effect));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OverrideZIndex(int32_t zIndex) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverrideZIndex(zIndex);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Pause() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EffectStartMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArrayEffectStartMode>(this->shim().EffectStartMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_EffectStartMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EffectStartMode(*reinterpret_cast<winrt::Windows::Devices::Lights::Effects::LampArrayEffectStartMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Occurrences(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Occurrences());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Occurrences(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RepetitionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode>(this->shim().RepetitionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RepetitionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RepetitionMode(*reinterpret_cast<winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics>
    {
        int32_t __stdcall StartAll(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAll(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StopAll(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAll(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PauseAll(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PauseAll(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect>
    {
        int32_t __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().Color());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Duration(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().Duration());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Duration(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartDelay(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().StartDelay());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartDelay(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDelay(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CompletionBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior>(this->shim().CompletionBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CompletionBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompletionBehavior(*reinterpret_cast<winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory>
    {
        int32_t __stdcall CreateInstance(void* lampArray, uint32_t __lampIndexesSize, int32_t* lampIndexes, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Devices::Lights::Effects::LampArraySolidEffect>(this->shim().CreateInstance(*reinterpret_cast<winrt::Windows::Devices::Lights::LampArray const*>(&lampArray), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs> : produce_base<D, winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs>
    {
        int32_t __stdcall get_SinceStarted(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().SinceStarted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetColor(struct struct_Windows_UI_Color desiredColor) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColor(*reinterpret_cast<winrt::Windows::UI::Color const*>(&desiredColor));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetColorForIndex(int32_t lampIndex, struct struct_Windows_UI_Color desiredColor) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColorForIndex(lampIndex, *reinterpret_cast<winrt::Windows::UI::Color const*>(&desiredColor));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetSingleColorForIndices(struct struct_Windows_UI_Color desiredColor, uint32_t __lampIndexesSize, int32_t* lampIndexes) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSingleColorForIndices(*reinterpret_cast<winrt::Windows::UI::Color const*>(&desiredColor), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetColorsForIndices(uint32_t __desiredColorsSize, struct struct_Windows_UI_Color* desiredColors, uint32_t __lampIndexesSize, int32_t* lampIndexes) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColorsForIndices(array_view<winrt::Windows::UI::Color const>(reinterpret_cast<winrt::Windows::UI::Color const *>(desiredColors), reinterpret_cast<winrt::Windows::UI::Color const *>(desiredColors) + __desiredColorsSize), array_view<int32_t const>(reinterpret_cast<int32_t const *>(lampIndexes), reinterpret_cast<int32_t const *>(lampIndexes) + __lampIndexesSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Devices::Lights::Effects
{
    inline LampArrayBitmapEffect::LampArrayBitmapEffect(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArrayBitmapEffect(impl::call_factory<LampArrayBitmapEffect, ILampArrayBitmapEffectFactory>([&](ILampArrayBitmapEffectFactory const& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
    inline LampArrayBlinkEffect::LampArrayBlinkEffect(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArrayBlinkEffect(impl::call_factory<LampArrayBlinkEffect, ILampArrayBlinkEffectFactory>([&](ILampArrayBlinkEffectFactory const& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
    inline LampArrayColorRampEffect::LampArrayColorRampEffect(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArrayColorRampEffect(impl::call_factory<LampArrayColorRampEffect, ILampArrayColorRampEffectFactory>([&](ILampArrayColorRampEffectFactory const& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
    inline LampArrayCustomEffect::LampArrayCustomEffect(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArrayCustomEffect(impl::call_factory<LampArrayCustomEffect, ILampArrayCustomEffectFactory>([&](ILampArrayCustomEffectFactory const& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
    inline LampArrayEffectPlaylist::LampArrayEffectPlaylist() :
        LampArrayEffectPlaylist(impl::call_factory_cast<LampArrayEffectPlaylist(*)(winrt::Windows::Foundation::IActivationFactory const&), LampArrayEffectPlaylist>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<LampArrayEffectPlaylist>(); }))
    {
    }
    inline auto LampArrayEffectPlaylist::StartAll(param::iterable<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value)
    {
        impl::call_factory<LampArrayEffectPlaylist, ILampArrayEffectPlaylistStatics>([&](ILampArrayEffectPlaylistStatics const& f) { return f.StartAll(value); });
    }
    inline auto LampArrayEffectPlaylist::StopAll(param::iterable<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value)
    {
        impl::call_factory<LampArrayEffectPlaylist, ILampArrayEffectPlaylistStatics>([&](ILampArrayEffectPlaylistStatics const& f) { return f.StopAll(value); });
    }
    inline auto LampArrayEffectPlaylist::PauseAll(param::iterable<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> const& value)
    {
        impl::call_factory<LampArrayEffectPlaylist, ILampArrayEffectPlaylistStatics>([&](ILampArrayEffectPlaylistStatics const& f) { return f.PauseAll(value); });
    }
    inline LampArraySolidEffect::LampArraySolidEffect(winrt::Windows::Devices::Lights::LampArray const& lampArray, array_view<int32_t const> lampIndexes) :
        LampArraySolidEffect(impl::call_factory<LampArraySolidEffect, ILampArraySolidEffectFactory>([&](ILampArraySolidEffectFactory const& f) { return f.CreateInstance(lampArray, lampIndexes); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapEffectFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBitmapRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayBlinkEffectFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayColorRampEffectFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayCustomEffectFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylist> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayEffectPlaylistStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArraySolidEffectFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::ILampArrayUpdateRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayBlinkEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayColorRampEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArraySolidEffect> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
