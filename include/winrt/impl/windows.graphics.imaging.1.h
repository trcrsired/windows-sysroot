// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Graphics_Imaging_1_H
#define WINRT_Windows_Graphics_Imaging_1_H
#include "winrt/impl/windows.foundation.0.h"
#include "winrt/impl/windows.graphics.imaging.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct __declspec(empty_bases) IBitmapBuffer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapBuffer>,
        impl::require<winrt::Windows::Graphics::Imaging::IBitmapBuffer, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        IBitmapBuffer(std::nullptr_t = nullptr) noexcept {}
        IBitmapBuffer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapCodecInformation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapCodecInformation>
    {
        IBitmapCodecInformation(std::nullptr_t = nullptr) noexcept {}
        IBitmapCodecInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapDecoder :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapDecoder>
    {
        IBitmapDecoder(std::nullptr_t = nullptr) noexcept {}
        IBitmapDecoder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapDecoderStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapDecoderStatics>
    {
        IBitmapDecoderStatics(std::nullptr_t = nullptr) noexcept {}
        IBitmapDecoderStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapDecoderStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapDecoderStatics2>
    {
        IBitmapDecoderStatics2(std::nullptr_t = nullptr) noexcept {}
        IBitmapDecoderStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapEncoder :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoder>
    {
        IBitmapEncoder(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapEncoderStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoderStatics>
    {
        IBitmapEncoderStatics(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoderStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapEncoderStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoderStatics2>
    {
        IBitmapEncoderStatics2(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoderStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapEncoderWithSoftwareBitmap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoderWithSoftwareBitmap>
    {
        IBitmapEncoderWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoderWithSoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapFrame :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapFrame>
    {
        IBitmapFrame(std::nullptr_t = nullptr) noexcept {}
        IBitmapFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapFrameWithSoftwareBitmap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapFrameWithSoftwareBitmap>,
        impl::require<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap, winrt::Windows::Graphics::Imaging::IBitmapFrame>
    {
        IBitmapFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        IBitmapFrameWithSoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapProperties>,
        impl::require<winrt::Windows::Graphics::Imaging::IBitmapProperties, winrt::Windows::Graphics::Imaging::IBitmapPropertiesView>
    {
        IBitmapProperties(std::nullptr_t = nullptr) noexcept {}
        IBitmapProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapPropertiesView :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapPropertiesView>
    {
        IBitmapPropertiesView(std::nullptr_t = nullptr) noexcept {}
        IBitmapPropertiesView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapTransform :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapTransform>
    {
        IBitmapTransform(std::nullptr_t = nullptr) noexcept {}
        IBitmapTransform(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapTypedValue :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapTypedValue>
    {
        IBitmapTypedValue(std::nullptr_t = nullptr) noexcept {}
        IBitmapTypedValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBitmapTypedValueFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapTypedValueFactory>
    {
        IBitmapTypedValueFactory(std::nullptr_t = nullptr) noexcept {}
        IBitmapTypedValueFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPixelDataProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPixelDataProvider>
    {
        IPixelDataProvider(std::nullptr_t = nullptr) noexcept {}
        IPixelDataProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISoftwareBitmap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISoftwareBitmap>,
        impl::require<winrt::Windows::Graphics::Imaging::ISoftwareBitmap, winrt::Windows::Foundation::IClosable>
    {
        ISoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        ISoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISoftwareBitmapFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISoftwareBitmapFactory>
    {
        ISoftwareBitmapFactory(std::nullptr_t = nullptr) noexcept {}
        ISoftwareBitmapFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISoftwareBitmapStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISoftwareBitmapStatics>
    {
        ISoftwareBitmapStatics(std::nullptr_t = nullptr) noexcept {}
        ISoftwareBitmapStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
