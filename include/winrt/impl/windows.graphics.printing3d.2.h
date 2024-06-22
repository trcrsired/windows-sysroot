// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Graphics_Printing3D_2_H
#define WINRT_Windows_Graphics_Printing3D_2_H
#include "winrt/impl/windows.storage.streams.2.h"
#include "winrt/impl/windows.graphics.printing3d.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing3D
{
    struct Print3DTaskSourceRequestedHandler : winrt::Windows::Foundation::IUnknown
    {
        Print3DTaskSourceRequestedHandler(std::nullptr_t = nullptr) noexcept {}
        Print3DTaskSourceRequestedHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> Print3DTaskSourceRequestedHandler(L lambda);
        template <typename F> Print3DTaskSourceRequestedHandler(F* function);
        template <typename O, typename M> Print3DTaskSourceRequestedHandler(O* object, M method);
        template <typename O, typename M> Print3DTaskSourceRequestedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> Print3DTaskSourceRequestedHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs const& args) const;
    };
    struct Printing3DBufferDescription
    {
        winrt::Windows::Graphics::Printing3D::Printing3DBufferFormat Format;
        uint32_t Stride;
    };
    inline bool operator==(Printing3DBufferDescription const& left, Printing3DBufferDescription const& right) noexcept
    {
        return left.Format == right.Format && left.Stride == right.Stride;
    }
    inline bool operator!=(Printing3DBufferDescription const& left, Printing3DBufferDescription const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) Print3DManager : winrt::Windows::Graphics::Printing3D::IPrint3DManager
    {
        Print3DManager(std::nullptr_t) noexcept {}
        Print3DManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
        static auto ShowPrintUIAsync();
    };
    struct __declspec(empty_bases) Print3DTask : winrt::Windows::Graphics::Printing3D::IPrint3DTask
    {
        Print3DTask(std::nullptr_t) noexcept {}
        Print3DTask(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTask(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Print3DTaskCompletedEventArgs : winrt::Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs
    {
        Print3DTaskCompletedEventArgs(std::nullptr_t) noexcept {}
        Print3DTaskCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Print3DTaskRequest : winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequest
    {
        Print3DTaskRequest(std::nullptr_t) noexcept {}
        Print3DTaskRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Print3DTaskRequestedEventArgs : winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs
    {
        Print3DTaskRequestedEventArgs(std::nullptr_t) noexcept {}
        Print3DTaskRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Print3DTaskSourceChangedEventArgs : winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs
    {
        Print3DTaskSourceChangedEventArgs(std::nullptr_t) noexcept {}
        Print3DTaskSourceChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Print3DTaskSourceRequestedArgs : winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs
    {
        Print3DTaskSourceRequestedArgs(std::nullptr_t) noexcept {}
        Print3DTaskSourceRequestedArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Printing3D3MFPackage : winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage,
        impl::require<Printing3D3MFPackage, winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage2>
    {
        Printing3D3MFPackage(std::nullptr_t) noexcept {}
        Printing3D3MFPackage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage(ptr, take_ownership_from_abi) {}
        Printing3D3MFPackage();
        static auto LoadAsync(winrt::Windows::Storage::Streams::IRandomAccessStream const& value);
    };
    struct __declspec(empty_bases) Printing3DBaseMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterial
    {
        Printing3DBaseMaterial(std::nullptr_t) noexcept {}
        Printing3DBaseMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterial(ptr, take_ownership_from_abi) {}
        Printing3DBaseMaterial();
        [[nodiscard]] static auto Abs();
        [[nodiscard]] static auto Pla();
    };
    struct __declspec(empty_bases) Printing3DBaseMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup
    {
        Printing3DBaseMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DBaseMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DBaseMaterialGroup(uint32_t MaterialGroupId);
    };
    struct __declspec(empty_bases) Printing3DColorMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial,
        impl::require<Printing3DColorMaterial, winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>
    {
        Printing3DColorMaterial(std::nullptr_t) noexcept {}
        Printing3DColorMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial(ptr, take_ownership_from_abi) {}
        Printing3DColorMaterial();
    };
    struct __declspec(empty_bases) Printing3DColorMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup
    {
        Printing3DColorMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DColorMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DColorMaterialGroup(uint32_t MaterialGroupId);
    };
    struct __declspec(empty_bases) Printing3DComponent : winrt::Windows::Graphics::Printing3D::IPrinting3DComponent
    {
        Printing3DComponent(std::nullptr_t) noexcept {}
        Printing3DComponent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DComponent(ptr, take_ownership_from_abi) {}
        Printing3DComponent();
    };
    struct __declspec(empty_bases) Printing3DComponentWithMatrix : winrt::Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix
    {
        Printing3DComponentWithMatrix(std::nullptr_t) noexcept {}
        Printing3DComponentWithMatrix(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix(ptr, take_ownership_from_abi) {}
        Printing3DComponentWithMatrix();
    };
    struct __declspec(empty_bases) Printing3DCompositeMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial
    {
        Printing3DCompositeMaterial(std::nullptr_t) noexcept {}
        Printing3DCompositeMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial(ptr, take_ownership_from_abi) {}
        Printing3DCompositeMaterial();
    };
    struct __declspec(empty_bases) Printing3DCompositeMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup,
        impl::require<Printing3DCompositeMaterialGroup, winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>
    {
        Printing3DCompositeMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DCompositeMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DCompositeMaterialGroup(uint32_t MaterialGroupId);
    };
    struct __declspec(empty_bases) Printing3DFaceReductionOptions : winrt::Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions
    {
        Printing3DFaceReductionOptions(std::nullptr_t) noexcept {}
        Printing3DFaceReductionOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions(ptr, take_ownership_from_abi) {}
        Printing3DFaceReductionOptions();
    };
    struct __declspec(empty_bases) Printing3DMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DMaterial
    {
        Printing3DMaterial(std::nullptr_t) noexcept {}
        Printing3DMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMaterial(ptr, take_ownership_from_abi) {}
        Printing3DMaterial();
    };
    struct __declspec(empty_bases) Printing3DMesh : winrt::Windows::Graphics::Printing3D::IPrinting3DMesh
    {
        Printing3DMesh(std::nullptr_t) noexcept {}
        Printing3DMesh(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMesh(ptr, take_ownership_from_abi) {}
        Printing3DMesh();
    };
    struct __declspec(empty_bases) Printing3DMeshVerificationResult : winrt::Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult
    {
        Printing3DMeshVerificationResult(std::nullptr_t) noexcept {}
        Printing3DMeshVerificationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Printing3DModel : winrt::Windows::Graphics::Printing3D::IPrinting3DModel,
        impl::require<Printing3DModel, winrt::Windows::Graphics::Printing3D::IPrinting3DModel2>
    {
        Printing3DModel(std::nullptr_t) noexcept {}
        Printing3DModel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DModel(ptr, take_ownership_from_abi) {}
        Printing3DModel();
    };
    struct __declspec(empty_bases) Printing3DModelTexture : winrt::Windows::Graphics::Printing3D::IPrinting3DModelTexture
    {
        Printing3DModelTexture(std::nullptr_t) noexcept {}
        Printing3DModelTexture(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DModelTexture(ptr, take_ownership_from_abi) {}
        Printing3DModelTexture();
    };
    struct __declspec(empty_bases) Printing3DMultiplePropertyMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial
    {
        Printing3DMultiplePropertyMaterial(std::nullptr_t) noexcept {}
        Printing3DMultiplePropertyMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial(ptr, take_ownership_from_abi) {}
        Printing3DMultiplePropertyMaterial();
    };
    struct __declspec(empty_bases) Printing3DMultiplePropertyMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup
    {
        Printing3DMultiplePropertyMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DMultiplePropertyMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DMultiplePropertyMaterialGroup(uint32_t MaterialGroupId);
    };
    struct __declspec(empty_bases) Printing3DTexture2CoordMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial
    {
        Printing3DTexture2CoordMaterial(std::nullptr_t) noexcept {}
        Printing3DTexture2CoordMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial(ptr, take_ownership_from_abi) {}
        Printing3DTexture2CoordMaterial();
    };
    struct __declspec(empty_bases) Printing3DTexture2CoordMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup,
        impl::require<Printing3DTexture2CoordMaterialGroup, winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>
    {
        Printing3DTexture2CoordMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DTexture2CoordMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DTexture2CoordMaterialGroup(uint32_t MaterialGroupId);
    };
    struct __declspec(empty_bases) Printing3DTextureResource : winrt::Windows::Graphics::Printing3D::IPrinting3DTextureResource
    {
        Printing3DTextureResource(std::nullptr_t) noexcept {}
        Printing3DTextureResource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DTextureResource(ptr, take_ownership_from_abi) {}
        Printing3DTextureResource();
    };
}
#endif
