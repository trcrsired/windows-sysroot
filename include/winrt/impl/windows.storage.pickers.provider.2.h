// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Storage_Pickers_Provider_2_H
#define WINRT_Windows_Storage_Pickers_Provider_2_H
#include "winrt/impl/windows.storage.pickers.provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Pickers::Provider
{
    struct __declspec(empty_bases) FileOpenPickerUI : winrt::Windows::Storage::Pickers::Provider::IFileOpenPickerUI
    {
        FileOpenPickerUI(std::nullptr_t) noexcept {}
        FileOpenPickerUI(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Pickers::Provider::IFileOpenPickerUI(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileRemovedEventArgs : winrt::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs
    {
        FileRemovedEventArgs(std::nullptr_t) noexcept {}
        FileRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Pickers::Provider::IFileRemovedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FileSavePickerUI : winrt::Windows::Storage::Pickers::Provider::IFileSavePickerUI
    {
        FileSavePickerUI(std::nullptr_t) noexcept {}
        FileSavePickerUI(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Pickers::Provider::IFileSavePickerUI(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PickerClosingDeferral : winrt::Windows::Storage::Pickers::Provider::IPickerClosingDeferral
    {
        PickerClosingDeferral(std::nullptr_t) noexcept {}
        PickerClosingDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Pickers::Provider::IPickerClosingDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PickerClosingEventArgs : winrt::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs
    {
        PickerClosingEventArgs(std::nullptr_t) noexcept {}
        PickerClosingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Pickers::Provider::IPickerClosingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PickerClosingOperation : winrt::Windows::Storage::Pickers::Provider::IPickerClosingOperation
    {
        PickerClosingOperation(std::nullptr_t) noexcept {}
        PickerClosingOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Pickers::Provider::IPickerClosingOperation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetFileRequest : winrt::Windows::Storage::Pickers::Provider::ITargetFileRequest
    {
        TargetFileRequest(std::nullptr_t) noexcept {}
        TargetFileRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Pickers::Provider::ITargetFileRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetFileRequestDeferral : winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral
    {
        TargetFileRequestDeferral(std::nullptr_t) noexcept {}
        TargetFileRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TargetFileRequestedEventArgs : winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs
    {
        TargetFileRequestedEventArgs(std::nullptr_t) noexcept {}
        TargetFileRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
