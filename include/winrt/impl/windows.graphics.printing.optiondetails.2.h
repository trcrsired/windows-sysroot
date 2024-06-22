// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Graphics_Printing_OptionDetails_2_H
#define WINRT_Windows_Graphics_Printing_OptionDetails_2_H
#include "winrt/impl/windows.graphics.printing.1.h"
#include "winrt/impl/windows.graphics.printing.optiondetails.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::OptionDetails
{
    struct __declspec(empty_bases) PrintBindingOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintBindingOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails>
    {
        PrintBindingOptionDetails(std::nullptr_t) noexcept {}
        PrintBindingOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintBorderingOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintBorderingOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails>
    {
        PrintBorderingOptionDetails(std::nullptr_t) noexcept {}
        PrintBorderingOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintCollationOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCollationOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails>
    {
        PrintCollationOptionDetails(std::nullptr_t) noexcept {}
        PrintCollationOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintColorModeOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintColorModeOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails>
    {
        PrintColorModeOptionDetails(std::nullptr_t) noexcept {}
        PrintColorModeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintCopiesOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCopiesOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails>
    {
        PrintCopiesOptionDetails(std::nullptr_t) noexcept {}
        PrintCopiesOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintCustomItemDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails
    {
        PrintCustomItemDetails(std::nullptr_t) noexcept {}
        PrintCustomItemDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintCustomItemListOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCustomItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3>
    {
        PrintCustomItemListOptionDetails(std::nullptr_t) noexcept {}
        PrintCustomItemListOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
        using impl::consume_t<PrintCustomItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>::AddItem;
        using impl::consume_t<PrintCustomItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2>::AddItem;
    };
    struct __declspec(empty_bases) PrintCustomTextOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCustomTextOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2>
    {
        PrintCustomTextOptionDetails(std::nullptr_t) noexcept {}
        PrintCustomTextOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintCustomToggleOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintCustomToggleOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails>
    {
        PrintCustomToggleOptionDetails(std::nullptr_t) noexcept {}
        PrintCustomToggleOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintDuplexOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintDuplexOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails>
    {
        PrintDuplexOptionDetails(std::nullptr_t) noexcept {}
        PrintDuplexOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintHolePunchOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintHolePunchOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails>
    {
        PrintHolePunchOptionDetails(std::nullptr_t) noexcept {}
        PrintHolePunchOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintMediaSizeOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintMediaSizeOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails>
    {
        PrintMediaSizeOptionDetails(std::nullptr_t) noexcept {}
        PrintMediaSizeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintMediaTypeOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintMediaTypeOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails>
    {
        PrintMediaTypeOptionDetails(std::nullptr_t) noexcept {}
        PrintMediaTypeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintOrientationOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintOrientationOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails>
    {
        PrintOrientationOptionDetails(std::nullptr_t) noexcept {}
        PrintOrientationOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintPageRangeOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintPageRangeOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails>
    {
        PrintPageRangeOptionDetails(std::nullptr_t) noexcept {}
        PrintPageRangeOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintQualityOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintQualityOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails>
    {
        PrintQualityOptionDetails(std::nullptr_t) noexcept {}
        PrintQualityOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintStapleOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails,
        impl::require<PrintStapleOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, winrt::Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails>
    {
        PrintStapleOptionDetails(std::nullptr_t) noexcept {}
        PrintStapleOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintTaskOptionChangedEventArgs : winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs
    {
        PrintTaskOptionChangedEventArgs(std::nullptr_t) noexcept {}
        PrintTaskOptionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PrintTaskOptionDetails : winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails,
        impl::require<PrintTaskOptionDetails, winrt::Windows::Graphics::Printing::IPrintTaskOptionsCore, winrt::Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration, winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2>
    {
        PrintTaskOptionDetails(std::nullptr_t) noexcept {}
        PrintTaskOptionDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails(ptr, take_ownership_from_abi) {}
        static auto GetFromPrintTaskOptions(winrt::Windows::Graphics::Printing::PrintTaskOptions const& printTaskOptions);
    };
}
#endif
