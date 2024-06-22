// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Globalization_DateTimeFormatting_2_H
#define WINRT_Windows_Globalization_DateTimeFormatting_2_H
#include "winrt/impl/windows.foundation.collections.1.h"
#include "winrt/impl/windows.globalization.datetimeformatting.1.h"
WINRT_EXPORT namespace winrt::Windows::Globalization::DateTimeFormatting
{
    struct __declspec(empty_bases) DateTimeFormatter : winrt::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter,
        impl::require<DateTimeFormatter, winrt::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>
    {
        DateTimeFormatter(std::nullptr_t) noexcept {}
        DateTimeFormatter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter(ptr, take_ownership_from_abi) {}
        explicit DateTimeFormatter(param::hstring const& formatTemplate);
        DateTimeFormatter(param::hstring const& formatTemplate, param::iterable<hstring> const& languages);
        DateTimeFormatter(param::hstring const& formatTemplate, param::iterable<hstring> const& languages, param::hstring const& geographicRegion, param::hstring const& calendar, param::hstring const& clock);
        DateTimeFormatter(winrt::Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, winrt::Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, winrt::Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, winrt::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat);
        DateTimeFormatter(winrt::Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, winrt::Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, winrt::Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat);
        DateTimeFormatter(winrt::Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, winrt::Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, winrt::Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, winrt::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat, winrt::Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, winrt::Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, winrt::Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat, param::iterable<hstring> const& languages);
        DateTimeFormatter(winrt::Windows::Globalization::DateTimeFormatting::YearFormat const& yearFormat, winrt::Windows::Globalization::DateTimeFormatting::MonthFormat const& monthFormat, winrt::Windows::Globalization::DateTimeFormatting::DayFormat const& dayFormat, winrt::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat const& dayOfWeekFormat, winrt::Windows::Globalization::DateTimeFormatting::HourFormat const& hourFormat, winrt::Windows::Globalization::DateTimeFormatting::MinuteFormat const& minuteFormat, winrt::Windows::Globalization::DateTimeFormatting::SecondFormat const& secondFormat, param::iterable<hstring> const& languages, param::hstring const& geographicRegion, param::hstring const& calendar, param::hstring const& clock);
        using winrt::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter::Format;
        using impl::consume_t<DateTimeFormatter, winrt::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2>::Format;
        [[nodiscard]] static auto LongDate();
        [[nodiscard]] static auto LongTime();
        [[nodiscard]] static auto ShortDate();
        [[nodiscard]] static auto ShortTime();
    };
}
#endif
