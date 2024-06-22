// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_Streaming_Adaptive_2_H
#define WINRT_Windows_Media_Streaming_Adaptive_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.media.core.1.h"
#include "winrt/impl/windows.storage.streams.1.h"
#include "winrt/impl/windows.web.http.1.h"
#include "winrt/impl/windows.media.streaming.adaptive.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Streaming::Adaptive
{
    struct __declspec(empty_bases) AdaptiveMediaSource : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource,
        impl::require<AdaptiveMediaSource, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3, winrt::Windows::Foundation::IClosable>
    {
        AdaptiveMediaSource(std::nullptr_t) noexcept {}
        AdaptiveMediaSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource(ptr, take_ownership_from_abi) {}
        static auto IsContentTypeSupported(param::hstring const& contentType);
        static auto CreateFromUriAsync(winrt::Windows::Foundation::Uri const& uri);
        static auto CreateFromUriAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::Web::Http::HttpClient const& httpClient);
        static auto CreateFromStreamAsync(winrt::Windows::Storage::Streams::IInputStream const& stream, winrt::Windows::Foundation::Uri const& uri, param::hstring const& contentType);
        static auto CreateFromStreamAsync(winrt::Windows::Storage::Streams::IInputStream const& stream, winrt::Windows::Foundation::Uri const& uri, param::hstring const& contentType, winrt::Windows::Web::Http::HttpClient const& httpClient);
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceAdvancedSettings : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings
    {
        AdaptiveMediaSourceAdvancedSettings(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceAdvancedSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceCorrelatedTimes : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes
    {
        AdaptiveMediaSourceCorrelatedTimes(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceCorrelatedTimes(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceCreationResult : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult,
        impl::require<AdaptiveMediaSourceCreationResult, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2>
    {
        AdaptiveMediaSourceCreationResult(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceCreationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDiagnosticAvailableEventArgs : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs,
        impl::require<AdaptiveMediaSourceDiagnosticAvailableEventArgs, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs2, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs3>
    {
        AdaptiveMediaSourceDiagnosticAvailableEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDiagnosticAvailableEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDiagnostics : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics
    {
        AdaptiveMediaSourceDiagnostics(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDiagnostics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadBitrateChangedEventArgs : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs,
        impl::require<AdaptiveMediaSourceDownloadBitrateChangedEventArgs, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2>
    {
        AdaptiveMediaSourceDownloadBitrateChangedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadBitrateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadCompletedEventArgs : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs,
        impl::require<AdaptiveMediaSourceDownloadCompletedEventArgs, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs3>
    {
        AdaptiveMediaSourceDownloadCompletedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadFailedEventArgs : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs,
        impl::require<AdaptiveMediaSourceDownloadFailedEventArgs, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs3>
    {
        AdaptiveMediaSourceDownloadFailedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadRequestedDeferral : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral
    {
        AdaptiveMediaSourceDownloadRequestedDeferral(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadRequestedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadRequestedEventArgs : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs,
        impl::require<AdaptiveMediaSourceDownloadRequestedEventArgs, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs3>
    {
        AdaptiveMediaSourceDownloadRequestedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadResult : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult,
        impl::require<AdaptiveMediaSourceDownloadResult, winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2>
    {
        AdaptiveMediaSourceDownloadResult(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourceDownloadStatistics : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics
    {
        AdaptiveMediaSourceDownloadStatistics(std::nullptr_t) noexcept {}
        AdaptiveMediaSourceDownloadStatistics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) AdaptiveMediaSourcePlaybackBitrateChangedEventArgs : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
    {
        AdaptiveMediaSourcePlaybackBitrateChangedEventArgs(std::nullptr_t) noexcept {}
        AdaptiveMediaSourcePlaybackBitrateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
