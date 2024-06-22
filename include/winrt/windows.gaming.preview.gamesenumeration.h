// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Gaming_Preview_GamesEnumeration_H
#define WINRT_Windows_Gaming_Preview_GamesEnumeration_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/impl/windows.applicationmodel.2.h"
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.foundation.collections.2.h"
#include "winrt/impl/windows.storage.2.h"
#include "winrt/impl/windows.gaming.preview.gamesenumeration.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::AppDisplayInfo) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::DisplayInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->get_DisplayInfo(&value));
        return winrt::Windows::ApplicationModel::AppDisplayInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::LaunchAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->LaunchAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListCategory) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::Category() const
    {
        winrt::Windows::Gaming::Preview::GamesEnumeration::GameListCategory value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->get_Category(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Foundation::IInspectable>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->get_Properties(&value));
        return winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>::SetCategoryAsync(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListCategory const& value) const
    {
        void* action{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry)->SetCategoryAsync(static_cast<int32_t>(value), &action));
        return winrt::Windows::Foundation::IAsyncAction{ action, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>::LaunchableState() const
    {
        winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2)->get_LaunchableState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::IStorageFile) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>::LauncherExecutable() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2)->get_LauncherExecutable(&value));
        return winrt::Windows::Storage::IStorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>::LaunchParameters() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2)->get_LaunchParameters(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>::SetLauncherExecutableFileAsync(winrt::Windows::Storage::IStorageFile const& executableFile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2)->SetLauncherExecutableFileAsync(*(void**)(&executableFile), &operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>::SetLauncherExecutableFileAsync(winrt::Windows::Storage::IStorageFile const& executableFile, param::hstring const& launchParams) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2)->SetLauncherExecutableFileWithParamsAsync(*(void**)(&executableFile), *(void**)(&launchParams), &operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>::TitleId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2)->get_TitleId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>::SetTitleIdAsync(param::hstring const& id) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2)->SetTitleIdAsync(*(void**)(&id), &operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>::GameModeConfiguration() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2)->get_GameModeConfiguration(&value));
        return winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::FindAllAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->FindAllAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::FindAllAsync(param::hstring const& packageFamilyName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->FindAllAsyncPackageFamilyName(*(void**)(&packageFamilyName), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameAdded(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->add_GameAdded(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameAdded_revoker consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameAdded(auto_revoke_t, winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, GameAdded_revoker>(this, GameAdded(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->remove_GameAdded(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameRemoved(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->add_GameRemoved(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameRemoved_revoker consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameRemoved(auto_revoke_t, winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, GameRemoved_revoker>(this, GameRemoved(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->remove_GameRemoved(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameUpdated(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->add_GameUpdated(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameUpdated_revoker consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameUpdated(auto_revoke_t, winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const
    {
        return impl::make_event_revoker<D, GameUpdated_revoker>(this, GameUpdated(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>::GameUpdated(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics)->remove_GameUpdated(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2<D>::MergeEntriesAsync(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& left, winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& right) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2)->MergeEntriesAsync(*(void**)(&left), *(void**)(&right), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2<D>::UnmergeEntryAsync(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& mergedEntry) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2)->UnmergeEntryAsync(*(void**)(&mergedEntry), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::IsEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->get_IsEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::IsEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->put_IsEnabled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::RelatedProcessNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->get_RelatedProcessNames(&value));
        return winrt::Windows::Foundation::Collections::IVector<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<int32_t>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::PercentGpuTimeAllocatedToGame() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->get_PercentGpuTimeAllocatedToGame(&value));
        return winrt::Windows::Foundation::IReference<int32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::PercentGpuTimeAllocatedToGame(winrt::Windows::Foundation::IReference<int32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->put_PercentGpuTimeAllocatedToGame(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<int32_t>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::PercentGpuMemoryAllocatedToGame() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->get_PercentGpuMemoryAllocatedToGame(&value));
        return winrt::Windows::Foundation::IReference<int32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::PercentGpuMemoryAllocatedToGame(winrt::Windows::Foundation::IReference<int32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->put_PercentGpuMemoryAllocatedToGame(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<int32_t>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::PercentGpuMemoryAllocatedToSystemCompositor() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->get_PercentGpuMemoryAllocatedToSystemCompositor(&value));
        return winrt::Windows::Foundation::IReference<int32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::PercentGpuMemoryAllocatedToSystemCompositor(winrt::Windows::Foundation::IReference<int32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->put_PercentGpuMemoryAllocatedToSystemCompositor(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<int32_t>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::MaxCpuCount() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->get_MaxCpuCount(&value));
        return winrt::Windows::Foundation::IReference<int32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::MaxCpuCount(winrt::Windows::Foundation::IReference<int32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->put_MaxCpuCount(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<int32_t>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::CpuExclusivityMaskLow() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->get_CpuExclusivityMaskLow(&value));
        return winrt::Windows::Foundation::IReference<int32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::CpuExclusivityMaskLow(winrt::Windows::Foundation::IReference<int32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->put_CpuExclusivityMaskLow(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<int32_t>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::CpuExclusivityMaskHigh() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->get_CpuExclusivityMaskHigh(&value));
        return winrt::Windows::Foundation::IReference<int32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::CpuExclusivityMaskHigh(winrt::Windows::Foundation::IReference<int32_t> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->put_CpuExclusivityMaskHigh(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::AffinitizeToExclusiveCpus() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->get_AffinitizeToExclusiveCpus(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::AffinitizeToExclusiveCpus(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->put_AffinitizeToExclusiveCpus(value));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>::SaveAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration)->SaveAsync(&operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration<D>::GamingRelatedProcessNames() const
    {
        void* processNames{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration)->get_GamingRelatedProcessNames(&processNames));
        return winrt::Windows::Foundation::Collections::IVector<hstring>{ processNames, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration<D>::SaveAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration)->SaveAsync(&operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration) consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics<D>::GetDefault() const
    {
        void* userConfiguration{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics)->GetDefault(&userConfiguration));
        return winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration{ userConfiguration, take_ownership_from_abi };
    }
    template <typename H> struct delegate<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler, H> final : implements_delegate<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* game) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const*>(&game));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename H> struct delegate<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler, H> final : implements_delegate<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* identifier) noexcept final try
        {
            (*this)(*reinterpret_cast<hstring const*>(&identifier));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry> : produce_base<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
    {
        int32_t __stdcall get_DisplayInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::AppDisplayInfo>(this->shim().DisplayInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().LaunchAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Category(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListCategory>(this->shim().Category());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Foundation::IInspectable>>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetCategoryAsync(int32_t value, void** action) noexcept final try
        {
            clear_abi(action);
            typename D::abi_guard guard(this->shim());
            *action = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetCategoryAsync(*reinterpret_cast<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListCategory const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2> : produce_base<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>
    {
        int32_t __stdcall get_LaunchableState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState>(this->shim().LaunchableState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LauncherExecutable(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::IStorageFile>(this->shim().LauncherExecutable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LaunchParameters(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LaunchParameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLauncherExecutableFileAsync(void* executableFile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetLauncherExecutableFileAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&executableFile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetLauncherExecutableFileWithParamsAsync(void* executableFile, void* launchParams, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetLauncherExecutableFileAsync(*reinterpret_cast<winrt::Windows::Storage::IStorageFile const*>(&executableFile), *reinterpret_cast<hstring const*>(&launchParams)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TitleId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TitleId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetTitleIdAsync(void* id, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SetTitleIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GameModeConfiguration(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>(this->shim().GameModeConfiguration());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> : produce_base<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>
    {
        int32_t __stdcall FindAllAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>>(this->shim().FindAllAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindAllAsyncPackageFamilyName(void* packageFamilyName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>>(this->shim().FindAllAsync(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_GameAdded(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().GameAdded(*reinterpret_cast<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_GameAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_GameRemoved(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().GameRemoved(*reinterpret_cast<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_GameRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_GameUpdated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().GameUpdated(*reinterpret_cast<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_GameUpdated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameUpdated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2> : produce_base<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>
    {
        int32_t __stdcall MergeEntriesAsync(void* left, void* right, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>(this->shim().MergeEntriesAsync(*reinterpret_cast<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const*>(&left), *reinterpret_cast<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const*>(&right)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnmergeEntryAsync(void* mergedEntry, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>>(this->shim().UnmergeEntryAsync(*reinterpret_cast<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const*>(&mergedEntry)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration> : produce_base<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>
    {
        int32_t __stdcall get_IsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RelatedProcessNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<hstring>>(this->shim().RelatedProcessNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PercentGpuTimeAllocatedToGame(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<int32_t>>(this->shim().PercentGpuTimeAllocatedToGame());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PercentGpuTimeAllocatedToGame(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PercentGpuTimeAllocatedToGame(*reinterpret_cast<winrt::Windows::Foundation::IReference<int32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PercentGpuMemoryAllocatedToGame(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<int32_t>>(this->shim().PercentGpuMemoryAllocatedToGame());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PercentGpuMemoryAllocatedToGame(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PercentGpuMemoryAllocatedToGame(*reinterpret_cast<winrt::Windows::Foundation::IReference<int32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PercentGpuMemoryAllocatedToSystemCompositor(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<int32_t>>(this->shim().PercentGpuMemoryAllocatedToSystemCompositor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PercentGpuMemoryAllocatedToSystemCompositor(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PercentGpuMemoryAllocatedToSystemCompositor(*reinterpret_cast<winrt::Windows::Foundation::IReference<int32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxCpuCount(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<int32_t>>(this->shim().MaxCpuCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxCpuCount(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxCpuCount(*reinterpret_cast<winrt::Windows::Foundation::IReference<int32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CpuExclusivityMaskLow(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<int32_t>>(this->shim().CpuExclusivityMaskLow());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CpuExclusivityMaskLow(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CpuExclusivityMaskLow(*reinterpret_cast<winrt::Windows::Foundation::IReference<int32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CpuExclusivityMaskHigh(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<int32_t>>(this->shim().CpuExclusivityMaskHigh());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CpuExclusivityMaskHigh(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CpuExclusivityMaskHigh(*reinterpret_cast<winrt::Windows::Foundation::IReference<int32_t> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AffinitizeToExclusiveCpus(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AffinitizeToExclusiveCpus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AffinitizeToExclusiveCpus(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AffinitizeToExclusiveCpus(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SaveAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration> : produce_base<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>
    {
        int32_t __stdcall get_GamingRelatedProcessNames(void** processNames) noexcept final try
        {
            clear_abi(processNames);
            typename D::abi_guard guard(this->shim());
            *processNames = detach_from<winrt::Windows::Foundation::Collections::IVector<hstring>>(this->shim().GamingRelatedProcessNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SaveAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics> : produce_base<D, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>
    {
        int32_t __stdcall GetDefault(void** userConfiguration) noexcept final try
        {
            clear_abi(userConfiguration);
            typename D::abi_guard guard(this->shim());
            *userConfiguration = detach_from<winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Preview::GamesEnumeration
{
    inline auto GameList::FindAllAsync()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>(*)(IGameListStatics const&), GameList, IGameListStatics>([](IGameListStatics const& f) { return f.FindAllAsync(); });
    }
    inline auto GameList::FindAllAsync(param::hstring const& packageFamilyName)
    {
        return impl::call_factory<GameList, IGameListStatics>([&](IGameListStatics const& f) { return f.FindAllAsync(packageFamilyName); });
    }
    inline auto GameList::GameAdded(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler)
    {
        return impl::call_factory<GameList, IGameListStatics>([&](IGameListStatics const& f) { return f.GameAdded(handler); });
    }
    inline GameList::GameAdded_revoker GameList::GameAdded(auto_revoke_t, winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler)
    {
        auto f = get_activation_factory<GameList, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>();
        return { f, f.GameAdded(handler) };
    }
    inline auto GameList::GameAdded(winrt::event_token const& token)
    {
        impl::call_factory<GameList, IGameListStatics>([&](IGameListStatics const& f) { return f.GameAdded(token); });
    }
    inline auto GameList::GameRemoved(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler)
    {
        return impl::call_factory<GameList, IGameListStatics>([&](IGameListStatics const& f) { return f.GameRemoved(handler); });
    }
    inline GameList::GameRemoved_revoker GameList::GameRemoved(auto_revoke_t, winrt::Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler)
    {
        auto f = get_activation_factory<GameList, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>();
        return { f, f.GameRemoved(handler) };
    }
    inline auto GameList::GameRemoved(winrt::event_token const& token)
    {
        impl::call_factory<GameList, IGameListStatics>([&](IGameListStatics const& f) { return f.GameRemoved(token); });
    }
    inline auto GameList::GameUpdated(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler)
    {
        return impl::call_factory<GameList, IGameListStatics>([&](IGameListStatics const& f) { return f.GameUpdated(handler); });
    }
    inline GameList::GameUpdated_revoker GameList::GameUpdated(auto_revoke_t, winrt::Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler)
    {
        auto f = get_activation_factory<GameList, winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>();
        return { f, f.GameUpdated(handler) };
    }
    inline auto GameList::GameUpdated(winrt::event_token const& token)
    {
        impl::call_factory<GameList, IGameListStatics>([&](IGameListStatics const& f) { return f.GameUpdated(token); });
    }
    inline auto GameList::MergeEntriesAsync(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& left, winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& right)
    {
        return impl::call_factory<GameList, IGameListStatics2>([&](IGameListStatics2 const& f) { return f.MergeEntriesAsync(left, right); });
    }
    inline auto GameList::UnmergeEntryAsync(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& mergedEntry)
    {
        return impl::call_factory<GameList, IGameListStatics2>([&](IGameListStatics2 const& f) { return f.UnmergeEntryAsync(mergedEntry); });
    }
    inline auto GameModeUserConfiguration::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration(*)(IGameModeUserConfigurationStatics const&), GameModeUserConfiguration, IGameModeUserConfigurationStatics>([](IGameModeUserConfigurationStatics const& f) { return f.GetDefault(); });
    }
    template <typename L> GameListChangedEventHandler::GameListChangedEventHandler(L handler) :
        GameListChangedEventHandler(impl::make_delegate<GameListChangedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> GameListChangedEventHandler::GameListChangedEventHandler(F* handler) :
        GameListChangedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> GameListChangedEventHandler::GameListChangedEventHandler(O* object, M method) :
        GameListChangedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> GameListChangedEventHandler::GameListChangedEventHandler(com_ptr<O>&& object, M method) :
        GameListChangedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> GameListChangedEventHandler::GameListChangedEventHandler(weak_ref<O>&& object, M method) :
        GameListChangedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto GameListChangedEventHandler::operator()(winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& game) const
    {
        check_hresult((*(impl::abi_t<GameListChangedEventHandler>**)this)->Invoke(*(void**)(&game)));
    }
    template <typename L> GameListRemovedEventHandler::GameListRemovedEventHandler(L handler) :
        GameListRemovedEventHandler(impl::make_delegate<GameListRemovedEventHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> GameListRemovedEventHandler::GameListRemovedEventHandler(F* handler) :
        GameListRemovedEventHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> GameListRemovedEventHandler::GameListRemovedEventHandler(O* object, M method) :
        GameListRemovedEventHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> GameListRemovedEventHandler::GameListRemovedEventHandler(com_ptr<O>&& object, M method) :
        GameListRemovedEventHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> GameListRemovedEventHandler::GameListRemovedEventHandler(weak_ref<O>&& object, M method) :
        GameListRemovedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto GameListRemovedEventHandler::operator()(param::hstring const& identifier) const
    {
        check_hresult((*(impl::abi_t<GameListRemovedEventHandler>**)this)->Invoke(*(void**)(&identifier)));
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::GameList> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::GameListEntry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
