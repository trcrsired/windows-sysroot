// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_LockScreen_H
#define WINRT_Windows_ApplicationModel_LockScreen_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/windows.applicationmodel.h"
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.foundation.collections.2.h"
#include "winrt/impl/windows.storage.streams.2.h"
#include "winrt/impl/windows.applicationmodel.lockscreen.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>::RequestUnlock() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost)->RequestUnlock());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>::Unlocking(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost, winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost)->add_Unlocking(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>::Unlocking_revoker consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>::Unlocking(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost, winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Unlocking_revoker>(this, Unlocking(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_LockScreen_ILockApplicationHost<D>::Unlocking(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost)->remove_Unlocking(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost) consume_Windows_ApplicationModel_LockScreen_ILockApplicationHostStatics<D>::GetForCurrentView() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics)->GetForCurrentView(&result));
        return winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IRandomAccessStream) consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::Logo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge)->get_Logo(&value));
        return winrt::Windows::Storage::Streams::IRandomAccessStream{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IRandomAccessStream) consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::Glyph() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge)->get_Glyph(&value));
        return winrt::Windows::Storage::Streams::IRandomAccessStream{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<uint32_t>) consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::Number() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge)->get_Number(&value));
        return winrt::Windows::Foundation::IReference<uint32_t>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::AutomationName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge)->get_AutomationName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_LockScreen_ILockScreenBadge<D>::LaunchApp() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge)->LaunchApp());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::LockScreenImageChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->add_LockScreenImageChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::LockScreenImageChanged_revoker consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::LockScreenImageChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, LockScreenImageChanged_revoker>(this, LockScreenImageChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::LockScreenImageChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->remove_LockScreenImageChanged(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IRandomAccessStream) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::LockScreenImage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->get_LockScreenImage(&value));
        return winrt::Windows::Storage::Streams::IRandomAccessStream{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::BadgesChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->add_BadgesChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::BadgesChanged_revoker consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::BadgesChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, BadgesChanged_revoker>(this, BadgesChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::BadgesChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->remove_BadgesChanged(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::LockScreen::LockScreenBadge>) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::Badges() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->get_Badges(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::LockScreen::LockScreenBadge>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::DetailTextChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->add_DetailTextChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::DetailTextChanged_revoker consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::DetailTextChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, DetailTextChanged_revoker>(this, DetailTextChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::DetailTextChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->remove_DetailTextChanged(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::DetailText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->get_DetailText(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::AlarmIconChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->add_AlarmIconChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::AlarmIconChanged_revoker consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::AlarmIconChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, AlarmIconChanged_revoker>(this, AlarmIconChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::AlarmIconChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->remove_AlarmIconChanged(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IRandomAccessStream) consume_Windows_ApplicationModel_LockScreen_ILockScreenInfo<D>::AlarmIcon() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo)->get_AlarmIcon(&value));
        return winrt::Windows::Storage::Streams::IRandomAccessStream{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral)->Complete());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral) consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs<D>::GetDeferral() const
    {
        void* deferral{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs)->GetDeferral(&deferral));
        return winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral{ deferral, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) consume_Windows_ApplicationModel_LockScreen_ILockScreenUnlockingEventArgs<D>::Deadline() const
    {
        winrt::Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs)->get_Deadline(put_abi(value)));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost> : produce_base<D, winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost>
    {
        int32_t __stdcall RequestUnlock() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestUnlock();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Unlocking(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Unlocking(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost, winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Unlocking(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unlocking(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics> : produce_base<D, winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics>
    {
        int32_t __stdcall GetForCurrentView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge> : produce_base<D, winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge>
    {
        int32_t __stdcall get_Logo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IRandomAccessStream>(this->shim().Logo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Glyph(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IRandomAccessStream>(this->shim().Glyph());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Number(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<uint32_t>>(this->shim().Number());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutomationName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AutomationName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchApp() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LaunchApp();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo> : produce_base<D, winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo>
    {
        int32_t __stdcall add_LockScreenImageChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().LockScreenImageChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_LockScreenImageChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LockScreenImageChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_LockScreenImage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IRandomAccessStream>(this->shim().LockScreenImage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_BadgesChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().BadgesChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_BadgesChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BadgesChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Badges(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::LockScreen::LockScreenBadge>>(this->shim().Badges());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_DetailTextChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().DetailTextChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_DetailTextChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DetailTextChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_DetailText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().DetailText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_AlarmIconChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AlarmIconChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AlarmIconChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlarmIconChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_AlarmIcon(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Storage::Streams::IRandomAccessStream>(this->shim().AlarmIcon());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral> : produce_base<D, winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral>
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
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs>
    {
        int32_t __stdcall GetDeferral(void** deferral) noexcept final try
        {
            clear_abi(deferral);
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Deadline(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().Deadline());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::LockScreen
{
    inline auto LockApplicationHost::GetForCurrentView()
    {
        return impl::call_factory_cast<winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost(*)(ILockApplicationHostStatics const&), LockApplicationHost, ILockApplicationHostStatics>([](ILockApplicationHostStatics const& f) { return f.GetForCurrentView(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHost> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockApplicationHostStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockScreenBadge> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockScreenInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::ILockScreenUnlockingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockApplicationHost> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockScreenBadge> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockScreenInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LockScreen::LockScreenUnlockingEventArgs> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
