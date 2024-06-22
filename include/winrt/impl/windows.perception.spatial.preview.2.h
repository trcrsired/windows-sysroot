// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Perception_Spatial_Preview_2_H
#define WINRT_Windows_Perception_Spatial_Preview_2_H
#include "winrt/impl/windows.foundation.numerics.1.h"
#include "winrt/impl/windows.perception.spatial.1.h"
#include "winrt/impl/windows.perception.spatial.preview.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview
{
    struct __declspec(empty_bases) SpatialGraphInteropFrameOfReferencePreview : winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropFrameOfReferencePreview
    {
        SpatialGraphInteropFrameOfReferencePreview(std::nullptr_t) noexcept {}
        SpatialGraphInteropFrameOfReferencePreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropFrameOfReferencePreview(ptr, take_ownership_from_abi) {}
    };
    struct SpatialGraphInteropPreview
    {
        SpatialGraphInteropPreview() = delete;
        static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId);
        static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId, winrt::Windows::Foundation::Numerics::float3 const& relativePosition);
        static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId, winrt::Windows::Foundation::Numerics::float3 const& relativePosition, winrt::Windows::Foundation::Numerics::quaternion const& relativeOrientation);
        static auto CreateLocatorForNode(winrt::guid const& nodeId);
        static auto TryCreateFrameOfReference(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem);
        static auto TryCreateFrameOfReference(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& relativePosition);
        static auto TryCreateFrameOfReference(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& relativePosition, winrt::Windows::Foundation::Numerics::quaternion const& relativeOrientation);
    };
}
#endif
