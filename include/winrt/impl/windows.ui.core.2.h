// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Core_2_H
#define WINRT_Windows_UI_Core_2_H
#include "winrt/impl/windows.foundation.2.h"
#include "winrt/impl/windows.ui.composition.2.h"
#include "winrt/impl/windows.ui.core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core
{
    struct DispatchedHandler : winrt::Windows::Foundation::IUnknown
    {
        DispatchedHandler(std::nullptr_t = nullptr) noexcept {}
        DispatchedHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DispatchedHandler(L lambda);
        template <typename F> DispatchedHandler(F* function);
        template <typename O, typename M> DispatchedHandler(O* object, M method);
        template <typename O, typename M> DispatchedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DispatchedHandler(weak_ref<O>&& object, M method);
        auto operator()() const;
    };
    struct IdleDispatchedHandler : winrt::Windows::Foundation::IUnknown
    {
        IdleDispatchedHandler(std::nullptr_t = nullptr) noexcept {}
        IdleDispatchedHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> IdleDispatchedHandler(L lambda);
        template <typename F> IdleDispatchedHandler(F* function);
        template <typename O, typename M> IdleDispatchedHandler(O* object, M method);
        template <typename O, typename M> IdleDispatchedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> IdleDispatchedHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::UI::Core::IdleDispatchedHandlerArgs const& e) const;
    };
    struct CorePhysicalKeyStatus
    {
        uint32_t RepeatCount;
        uint32_t ScanCode;
        bool IsExtendedKey;
        bool IsMenuKeyDown;
        bool WasKeyDown;
        bool IsKeyReleased;
    };
    inline bool operator==(CorePhysicalKeyStatus const& left, CorePhysicalKeyStatus const& right) noexcept
    {
        return left.RepeatCount == right.RepeatCount && left.ScanCode == right.ScanCode && left.IsExtendedKey == right.IsExtendedKey && left.IsMenuKeyDown == right.IsMenuKeyDown && left.WasKeyDown == right.WasKeyDown && left.IsKeyReleased == right.IsKeyReleased;
    }
    inline bool operator!=(CorePhysicalKeyStatus const& left, CorePhysicalKeyStatus const& right) noexcept
    {
        return !(left == right);
    }
    struct CoreProximityEvaluation
    {
        int32_t Score;
        winrt::Windows::Foundation::Point AdjustedPoint;
    };
    inline bool operator==(CoreProximityEvaluation const& left, CoreProximityEvaluation const& right) noexcept
    {
        return left.Score == right.Score && left.AdjustedPoint == right.AdjustedPoint;
    }
    inline bool operator!=(CoreProximityEvaluation const& left, CoreProximityEvaluation const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) AcceleratorKeyEventArgs : winrt::Windows::UI::Core::IAcceleratorKeyEventArgs,
        impl::require<AcceleratorKeyEventArgs, winrt::Windows::UI::Core::IAcceleratorKeyEventArgs2>
    {
        AcceleratorKeyEventArgs(std::nullptr_t) noexcept {}
        AcceleratorKeyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IAcceleratorKeyEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AutomationProviderRequestedEventArgs : winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs
    {
        AutomationProviderRequestedEventArgs(std::nullptr_t) noexcept {}
        AutomationProviderRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IAutomationProviderRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BackRequestedEventArgs : winrt::Windows::UI::Core::IBackRequestedEventArgs
    {
        BackRequestedEventArgs(std::nullptr_t) noexcept {}
        BackRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IBackRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CharacterReceivedEventArgs : winrt::Windows::UI::Core::ICharacterReceivedEventArgs
    {
        CharacterReceivedEventArgs(std::nullptr_t) noexcept {}
        CharacterReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICharacterReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ClosestInteractiveBoundsRequestedEventArgs : winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs
    {
        ClosestInteractiveBoundsRequestedEventArgs(std::nullptr_t) noexcept {}
        ClosestInteractiveBoundsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IClosestInteractiveBoundsRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreAcceleratorKeys : winrt::Windows::UI::Core::ICoreAcceleratorKeys
    {
        CoreAcceleratorKeys(std::nullptr_t) noexcept {}
        CoreAcceleratorKeys(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreAcceleratorKeys(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreComponentInputSource : winrt::Windows::UI::Core::ICoreInputSourceBase,
        impl::require<CoreComponentInputSource, winrt::Windows::UI::Core::ICorePointerInputSource, winrt::Windows::UI::Core::ICoreKeyboardInputSource, winrt::Windows::UI::Core::ICoreComponentFocusable, winrt::Windows::UI::Core::ICoreTouchHitTesting, winrt::Windows::UI::Core::ICoreClosestInteractiveBoundsRequested, winrt::Windows::UI::Core::ICoreKeyboardInputSource2, winrt::Windows::UI::Core::ICorePointerInputSource2>
    {
        CoreComponentInputSource(std::nullptr_t) noexcept {}
        CoreComponentInputSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreInputSourceBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreCursor : winrt::Windows::UI::Core::ICoreCursor
    {
        CoreCursor(std::nullptr_t) noexcept {}
        CoreCursor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreCursor(ptr, take_ownership_from_abi) {}
        CoreCursor(winrt::Windows::UI::Core::CoreCursorType const& type, uint32_t id);
    };
    struct __declspec(empty_bases) CoreDispatcher : winrt::Windows::UI::Core::ICoreDispatcher,
        impl::require<CoreDispatcher, winrt::Windows::UI::Core::ICoreDispatcherWithTaskPriority, winrt::Windows::UI::Core::ICoreDispatcher2>
    {
        CoreDispatcher(std::nullptr_t) noexcept {}
        CoreDispatcher(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreDispatcher(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreIndependentInputSource : winrt::Windows::UI::Core::ICoreInputSourceBase,
        impl::require<CoreIndependentInputSource, winrt::Windows::UI::Core::ICorePointerInputSource, winrt::Windows::UI::Core::ICorePointerInputSource2, winrt::Windows::UI::Core::ICorePointerRedirector>
    {
        CoreIndependentInputSource(std::nullptr_t) noexcept {}
        CoreIndependentInputSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreInputSourceBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreIndependentInputSourceController : winrt::Windows::UI::Core::ICoreIndependentInputSourceController,
        impl::require<CoreIndependentInputSourceController, winrt::Windows::Foundation::IClosable>
    {
        CoreIndependentInputSourceController(std::nullptr_t) noexcept {}
        CoreIndependentInputSourceController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreIndependentInputSourceController(ptr, take_ownership_from_abi) {}
        static auto CreateForVisual(winrt::Windows::UI::Composition::Visual const& visual);
        static auto CreateForIVisualElement(winrt::Windows::UI::Composition::IVisualElement const& visualElement);
    };
    struct __declspec(empty_bases) CoreWindow : winrt::Windows::UI::Core::ICoreWindow,
        impl::require<CoreWindow, winrt::Windows::UI::Core::ICoreWindow2, winrt::Windows::UI::Core::ICorePointerRedirector, winrt::Windows::UI::Core::ICoreWindow3, winrt::Windows::UI::Core::ICoreWindow4, winrt::Windows::UI::Core::ICoreWindow5, winrt::Windows::UI::Core::ICoreWindowWithContext>
    {
        CoreWindow(std::nullptr_t) noexcept {}
        CoreWindow(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreWindow(ptr, take_ownership_from_abi) {}
        using winrt::Windows::UI::Core::ICoreWindow::PointerPosition;
        using impl::consume_t<CoreWindow, winrt::Windows::UI::Core::ICoreWindow2>::PointerPosition;
        static auto GetForCurrentThread();
    };
    struct __declspec(empty_bases) CoreWindowDialog : winrt::Windows::UI::Core::ICoreWindowDialog
    {
        CoreWindowDialog(std::nullptr_t) noexcept {}
        CoreWindowDialog(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreWindowDialog(ptr, take_ownership_from_abi) {}
        CoreWindowDialog();
        explicit CoreWindowDialog(param::hstring const& title);
    };
    struct __declspec(empty_bases) CoreWindowEventArgs : winrt::Windows::UI::Core::ICoreWindowEventArgs
    {
        CoreWindowEventArgs(std::nullptr_t) noexcept {}
        CoreWindowEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreWindowEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreWindowFlyout : winrt::Windows::UI::Core::ICoreWindowFlyout
    {
        CoreWindowFlyout(std::nullptr_t) noexcept {}
        CoreWindowFlyout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreWindowFlyout(ptr, take_ownership_from_abi) {}
        explicit CoreWindowFlyout(winrt::Windows::Foundation::Point const& position);
        CoreWindowFlyout(winrt::Windows::Foundation::Point const& position, param::hstring const& title);
    };
    struct __declspec(empty_bases) CoreWindowPopupShowingEventArgs : winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs
    {
        CoreWindowPopupShowingEventArgs(std::nullptr_t) noexcept {}
        CoreWindowPopupShowingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreWindowPopupShowingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CoreWindowResizeManager : winrt::Windows::UI::Core::ICoreWindowResizeManager,
        impl::require<CoreWindowResizeManager, winrt::Windows::UI::Core::ICoreWindowResizeManagerLayoutCapability>
    {
        CoreWindowResizeManager(std::nullptr_t) noexcept {}
        CoreWindowResizeManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ICoreWindowResizeManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) IdleDispatchedHandlerArgs : winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs
    {
        IdleDispatchedHandlerArgs(std::nullptr_t) noexcept {}
        IdleDispatchedHandlerArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IIdleDispatchedHandlerArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InputEnabledEventArgs : winrt::Windows::UI::Core::IInputEnabledEventArgs
    {
        InputEnabledEventArgs(std::nullptr_t) noexcept {}
        InputEnabledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IInputEnabledEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) KeyEventArgs : winrt::Windows::UI::Core::IKeyEventArgs,
        impl::require<KeyEventArgs, winrt::Windows::UI::Core::IKeyEventArgs2>
    {
        KeyEventArgs(std::nullptr_t) noexcept {}
        KeyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IKeyEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PointerEventArgs : winrt::Windows::UI::Core::IPointerEventArgs
    {
        PointerEventArgs(std::nullptr_t) noexcept {}
        PointerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IPointerEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SystemNavigationManager : winrt::Windows::UI::Core::ISystemNavigationManager,
        impl::require<SystemNavigationManager, winrt::Windows::UI::Core::ISystemNavigationManager2>
    {
        SystemNavigationManager(std::nullptr_t) noexcept {}
        SystemNavigationManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ISystemNavigationManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) TouchHitTestingEventArgs : winrt::Windows::UI::Core::ITouchHitTestingEventArgs
    {
        TouchHitTestingEventArgs(std::nullptr_t) noexcept {}
        TouchHitTestingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::ITouchHitTestingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VisibilityChangedEventArgs : winrt::Windows::UI::Core::IVisibilityChangedEventArgs
    {
        VisibilityChangedEventArgs(std::nullptr_t) noexcept {}
        VisibilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IVisibilityChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WindowActivatedEventArgs : winrt::Windows::UI::Core::IWindowActivatedEventArgs
    {
        WindowActivatedEventArgs(std::nullptr_t) noexcept {}
        WindowActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IWindowActivatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WindowSizeChangedEventArgs : winrt::Windows::UI::Core::IWindowSizeChangedEventArgs
    {
        WindowSizeChangedEventArgs(std::nullptr_t) noexcept {}
        WindowSizeChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Core::IWindowSizeChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
