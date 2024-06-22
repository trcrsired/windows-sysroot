// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Documents_2_H
#define WINRT_Windows_UI_Xaml_Documents_2_H
#include "winrt/impl/windows.foundation.collections.1.h"
#include "winrt/impl/windows.ui.composition.1.h"
#include "winrt/impl/windows.ui.xaml.1.h"
#include "winrt/impl/windows.ui.xaml.documents.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Documents
{
    struct TextRange
    {
        int32_t StartIndex;
        int32_t Length;
    };
    inline bool operator==(TextRange const& left, TextRange const& right) noexcept
    {
        return left.StartIndex == right.StartIndex && left.Length == right.Length;
    }
    inline bool operator!=(TextRange const& left, TextRange const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) Block : winrt::Windows::UI::Xaml::Documents::IBlock,
        impl::base<Block, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Block, winrt::Windows::UI::Xaml::Documents::IBlock2, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Block(std::nullptr_t) noexcept {}
        Block(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IBlock(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto TextAlignmentProperty();
        [[nodiscard]] static auto LineHeightProperty();
        [[nodiscard]] static auto LineStackingStrategyProperty();
        [[nodiscard]] static auto MarginProperty();
        [[nodiscard]] static auto HorizontalTextAlignmentProperty();
    };
    struct __declspec(empty_bases) BlockCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Documents::Block>
    {
        BlockCollection(std::nullptr_t) noexcept {}
        BlockCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Documents::Block>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Bold : winrt::Windows::UI::Xaml::Documents::IBold,
        impl::base<Bold, winrt::Windows::UI::Xaml::Documents::Span, winrt::Windows::UI::Xaml::Documents::Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Bold, winrt::Windows::UI::Xaml::Documents::ISpan, winrt::Windows::UI::Xaml::Documents::IInline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Bold(std::nullptr_t) noexcept {}
        Bold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IBold(ptr, take_ownership_from_abi) {}
        Bold();
    };
    struct __declspec(empty_bases) ContactContentLinkProvider : winrt::Windows::UI::Xaml::Documents::IContactContentLinkProvider,
        impl::base<ContactContentLinkProvider, winrt::Windows::UI::Xaml::Documents::ContentLinkProvider, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ContactContentLinkProvider, winrt::Windows::UI::Xaml::Documents::IContentLinkProvider, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ContactContentLinkProvider(std::nullptr_t) noexcept {}
        ContactContentLinkProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IContactContentLinkProvider(ptr, take_ownership_from_abi) {}
        ContactContentLinkProvider();
    };
    struct __declspec(empty_bases) ContentLink : winrt::Windows::UI::Xaml::Documents::IContentLink,
        impl::base<ContentLink, winrt::Windows::UI::Xaml::Documents::Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ContentLink, winrt::Windows::UI::Xaml::Documents::IInline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ContentLink(std::nullptr_t) noexcept {}
        ContentLink(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IContentLink(ptr, take_ownership_from_abi) {}
        ContentLink();
        [[nodiscard]] static auto BackgroundProperty();
        [[nodiscard]] static auto CursorProperty();
        [[nodiscard]] static auto XYFocusLeftProperty();
        [[nodiscard]] static auto XYFocusRightProperty();
        [[nodiscard]] static auto XYFocusUpProperty();
        [[nodiscard]] static auto XYFocusDownProperty();
        [[nodiscard]] static auto ElementSoundModeProperty();
        [[nodiscard]] static auto FocusStateProperty();
        [[nodiscard]] static auto XYFocusUpNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusDownNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusLeftNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusRightNavigationStrategyProperty();
        [[nodiscard]] static auto IsTabStopProperty();
        [[nodiscard]] static auto TabIndexProperty();
    };
    struct __declspec(empty_bases) ContentLinkInvokedEventArgs : winrt::Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs
    {
        ContentLinkInvokedEventArgs(std::nullptr_t) noexcept {}
        ContentLinkInvokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IContentLinkInvokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentLinkProvider : winrt::Windows::UI::Xaml::Documents::IContentLinkProvider,
        impl::base<ContentLinkProvider, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<ContentLinkProvider, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        ContentLinkProvider(std::nullptr_t) noexcept {}
        ContentLinkProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IContentLinkProvider(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContentLinkProviderCollection : winrt::Windows::UI::Xaml::Documents::IContentLinkProviderCollection,
        impl::require<ContentLinkProviderCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Xaml::Documents::ContentLinkProvider>, winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Documents::ContentLinkProvider>>
    {
        ContentLinkProviderCollection(std::nullptr_t) noexcept {}
        ContentLinkProviderCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IContentLinkProviderCollection(ptr, take_ownership_from_abi) {}
        ContentLinkProviderCollection();
    };
    struct __declspec(empty_bases) Glyphs : winrt::Windows::UI::Xaml::Documents::IGlyphs,
        impl::base<Glyphs, winrt::Windows::UI::Xaml::FrameworkElement, winrt::Windows::UI::Xaml::UIElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Glyphs, winrt::Windows::UI::Xaml::Documents::IGlyphs2, winrt::Windows::UI::Xaml::IFrameworkElement, winrt::Windows::UI::Xaml::IFrameworkElement2, winrt::Windows::UI::Xaml::IFrameworkElement3, winrt::Windows::UI::Xaml::IFrameworkElement4, winrt::Windows::UI::Xaml::IFrameworkElement6, winrt::Windows::UI::Xaml::IFrameworkElement7, winrt::Windows::UI::Xaml::IFrameworkElementProtected7, winrt::Windows::UI::Xaml::IFrameworkElementOverrides, winrt::Windows::UI::Xaml::IFrameworkElementOverrides2, winrt::Windows::UI::Xaml::IUIElement, winrt::Windows::UI::Xaml::IUIElement2, winrt::Windows::UI::Xaml::IUIElement3, winrt::Windows::UI::Xaml::IUIElement4, winrt::Windows::UI::Xaml::IUIElement5, winrt::Windows::UI::Xaml::IUIElement7, winrt::Windows::UI::Xaml::IUIElement8, winrt::Windows::UI::Xaml::IUIElement9, winrt::Windows::UI::Xaml::IUIElement10, winrt::Windows::UI::Xaml::IUIElementOverrides, winrt::Windows::UI::Xaml::IUIElementOverrides7, winrt::Windows::UI::Xaml::IUIElementOverrides8, winrt::Windows::UI::Xaml::IUIElementOverrides9, winrt::Windows::UI::Composition::IAnimationObject, winrt::Windows::UI::Composition::IVisualElement, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Glyphs(std::nullptr_t) noexcept {}
        Glyphs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IGlyphs(ptr, take_ownership_from_abi) {}
        Glyphs();
        [[nodiscard]] static auto UnicodeStringProperty();
        [[nodiscard]] static auto IndicesProperty();
        [[nodiscard]] static auto FontUriProperty();
        [[nodiscard]] static auto StyleSimulationsProperty();
        [[nodiscard]] static auto FontRenderingEmSizeProperty();
        [[nodiscard]] static auto OriginXProperty();
        [[nodiscard]] static auto OriginYProperty();
        [[nodiscard]] static auto FillProperty();
        [[nodiscard]] static auto IsColorFontEnabledProperty();
        [[nodiscard]] static auto ColorFontPaletteIndexProperty();
    };
    struct __declspec(empty_bases) Hyperlink : winrt::Windows::UI::Xaml::Documents::IHyperlink,
        impl::base<Hyperlink, winrt::Windows::UI::Xaml::Documents::Span, winrt::Windows::UI::Xaml::Documents::Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Hyperlink, winrt::Windows::UI::Xaml::Documents::IHyperlink2, winrt::Windows::UI::Xaml::Documents::IHyperlink3, winrt::Windows::UI::Xaml::Documents::IHyperlink4, winrt::Windows::UI::Xaml::Documents::IHyperlink5, winrt::Windows::UI::Xaml::Documents::ISpan, winrt::Windows::UI::Xaml::Documents::IInline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Hyperlink(std::nullptr_t) noexcept {}
        Hyperlink(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IHyperlink(ptr, take_ownership_from_abi) {}
        Hyperlink();
        [[nodiscard]] static auto NavigateUriProperty();
        [[nodiscard]] static auto UnderlineStyleProperty();
        [[nodiscard]] static auto XYFocusLeftProperty();
        [[nodiscard]] static auto XYFocusRightProperty();
        [[nodiscard]] static auto XYFocusUpProperty();
        [[nodiscard]] static auto XYFocusDownProperty();
        [[nodiscard]] static auto ElementSoundModeProperty();
        [[nodiscard]] static auto FocusStateProperty();
        [[nodiscard]] static auto XYFocusUpNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusDownNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusLeftNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusRightNavigationStrategyProperty();
        [[nodiscard]] static auto IsTabStopProperty();
        [[nodiscard]] static auto TabIndexProperty();
    };
    struct __declspec(empty_bases) HyperlinkClickEventArgs : winrt::Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs,
        impl::base<HyperlinkClickEventArgs, winrt::Windows::UI::Xaml::RoutedEventArgs>,
        impl::require<HyperlinkClickEventArgs, winrt::Windows::UI::Xaml::IRoutedEventArgs>
    {
        HyperlinkClickEventArgs(std::nullptr_t) noexcept {}
        HyperlinkClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Inline : winrt::Windows::UI::Xaml::Documents::IInline,
        impl::base<Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Inline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Inline(std::nullptr_t) noexcept {}
        Inline(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IInline(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InlineCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Documents::Inline>
    {
        InlineCollection(std::nullptr_t) noexcept {}
        InlineCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Documents::Inline>(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) InlineUIContainer : winrt::Windows::UI::Xaml::Documents::IInlineUIContainer,
        impl::base<InlineUIContainer, winrt::Windows::UI::Xaml::Documents::Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<InlineUIContainer, winrt::Windows::UI::Xaml::Documents::IInline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        InlineUIContainer(std::nullptr_t) noexcept {}
        InlineUIContainer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IInlineUIContainer(ptr, take_ownership_from_abi) {}
        InlineUIContainer();
    };
    struct __declspec(empty_bases) Italic : winrt::Windows::UI::Xaml::Documents::IItalic,
        impl::base<Italic, winrt::Windows::UI::Xaml::Documents::Span, winrt::Windows::UI::Xaml::Documents::Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Italic, winrt::Windows::UI::Xaml::Documents::ISpan, winrt::Windows::UI::Xaml::Documents::IInline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Italic(std::nullptr_t) noexcept {}
        Italic(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IItalic(ptr, take_ownership_from_abi) {}
        Italic();
    };
    struct __declspec(empty_bases) LineBreak : winrt::Windows::UI::Xaml::Documents::ILineBreak,
        impl::base<LineBreak, winrt::Windows::UI::Xaml::Documents::Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<LineBreak, winrt::Windows::UI::Xaml::Documents::IInline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        LineBreak(std::nullptr_t) noexcept {}
        LineBreak(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::ILineBreak(ptr, take_ownership_from_abi) {}
        LineBreak();
    };
    struct __declspec(empty_bases) Paragraph : winrt::Windows::UI::Xaml::Documents::IParagraph,
        impl::base<Paragraph, winrt::Windows::UI::Xaml::Documents::Block, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Paragraph, winrt::Windows::UI::Xaml::Documents::IBlock, winrt::Windows::UI::Xaml::Documents::IBlock2, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Paragraph(std::nullptr_t) noexcept {}
        Paragraph(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IParagraph(ptr, take_ownership_from_abi) {}
        Paragraph();
        [[nodiscard]] static auto TextIndentProperty();
    };
    struct __declspec(empty_bases) PlaceContentLinkProvider : winrt::Windows::UI::Xaml::Documents::IPlaceContentLinkProvider,
        impl::base<PlaceContentLinkProvider, winrt::Windows::UI::Xaml::Documents::ContentLinkProvider, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PlaceContentLinkProvider, winrt::Windows::UI::Xaml::Documents::IContentLinkProvider, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PlaceContentLinkProvider(std::nullptr_t) noexcept {}
        PlaceContentLinkProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IPlaceContentLinkProvider(ptr, take_ownership_from_abi) {}
        PlaceContentLinkProvider();
    };
    struct __declspec(empty_bases) Run : winrt::Windows::UI::Xaml::Documents::IRun,
        impl::base<Run, winrt::Windows::UI::Xaml::Documents::Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Run, winrt::Windows::UI::Xaml::Documents::IInline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Run(std::nullptr_t) noexcept {}
        Run(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IRun(ptr, take_ownership_from_abi) {}
        Run();
        [[nodiscard]] static auto FlowDirectionProperty();
    };
    struct __declspec(empty_bases) Span : winrt::Windows::UI::Xaml::Documents::ISpan,
        impl::base<Span, winrt::Windows::UI::Xaml::Documents::Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Span, winrt::Windows::UI::Xaml::Documents::IInline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Span(std::nullptr_t) noexcept {}
        Span(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::ISpan(ptr, take_ownership_from_abi) {}
        Span();
    };
    struct __declspec(empty_bases) TextElement : winrt::Windows::UI::Xaml::Documents::ITextElement,
        impl::base<TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TextElement(std::nullptr_t) noexcept {}
        TextElement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::ITextElement(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto FontSizeProperty();
        [[nodiscard]] static auto FontFamilyProperty();
        [[nodiscard]] static auto FontWeightProperty();
        [[nodiscard]] static auto FontStyleProperty();
        [[nodiscard]] static auto FontStretchProperty();
        [[nodiscard]] static auto CharacterSpacingProperty();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto LanguageProperty();
        [[nodiscard]] static auto IsTextScaleFactorEnabledProperty();
        [[nodiscard]] static auto AllowFocusOnInteractionProperty();
        [[nodiscard]] static auto AccessKeyProperty();
        [[nodiscard]] static auto ExitDisplayModeOnAccessKeyInvokedProperty();
        [[nodiscard]] static auto TextDecorationsProperty();
        [[nodiscard]] static auto IsAccessKeyScopeProperty();
        [[nodiscard]] static auto AccessKeyScopeOwnerProperty();
        [[nodiscard]] static auto KeyTipPlacementModeProperty();
        [[nodiscard]] static auto KeyTipHorizontalOffsetProperty();
        [[nodiscard]] static auto KeyTipVerticalOffsetProperty();
    };
    struct __declspec(empty_bases) TextHighlighter : winrt::Windows::UI::Xaml::Documents::ITextHighlighter
    {
        TextHighlighter(std::nullptr_t) noexcept {}
        TextHighlighter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::ITextHighlighter(ptr, take_ownership_from_abi) {}
        TextHighlighter();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto BackgroundProperty();
    };
    struct __declspec(empty_bases) TextHighlighterBase : winrt::Windows::UI::Xaml::Documents::ITextHighlighterBase,
        impl::base<TextHighlighterBase, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<TextHighlighterBase, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        TextHighlighterBase(std::nullptr_t) noexcept {}
        TextHighlighterBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::ITextHighlighterBase(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) TextPointer : winrt::Windows::UI::Xaml::Documents::ITextPointer
    {
        TextPointer(std::nullptr_t) noexcept {}
        TextPointer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::ITextPointer(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) Typography : winrt::Windows::UI::Xaml::Documents::ITypography
    {
        Typography(std::nullptr_t) noexcept {}
        Typography(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::ITypography(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AnnotationAlternatesProperty();
        static auto GetAnnotationAlternates(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetAnnotationAlternates(winrt::Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto EastAsianExpertFormsProperty();
        static auto GetEastAsianExpertForms(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetEastAsianExpertForms(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto EastAsianLanguageProperty();
        static auto GetEastAsianLanguage(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetEastAsianLanguage(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::FontEastAsianLanguage const& value);
        [[nodiscard]] static auto EastAsianWidthsProperty();
        static auto GetEastAsianWidths(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetEastAsianWidths(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::FontEastAsianWidths const& value);
        [[nodiscard]] static auto StandardLigaturesProperty();
        static auto GetStandardLigatures(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStandardLigatures(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto ContextualLigaturesProperty();
        static auto GetContextualLigatures(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetContextualLigatures(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto DiscretionaryLigaturesProperty();
        static auto GetDiscretionaryLigatures(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetDiscretionaryLigatures(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto HistoricalLigaturesProperty();
        static auto GetHistoricalLigatures(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetHistoricalLigatures(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StandardSwashesProperty();
        static auto GetStandardSwashes(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStandardSwashes(winrt::Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto ContextualSwashesProperty();
        static auto GetContextualSwashes(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetContextualSwashes(winrt::Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto ContextualAlternatesProperty();
        static auto GetContextualAlternates(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetContextualAlternates(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticAlternatesProperty();
        static auto GetStylisticAlternates(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticAlternates(winrt::Windows::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto StylisticSet1Property();
        static auto GetStylisticSet1(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet1(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet2Property();
        static auto GetStylisticSet2(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet2(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet3Property();
        static auto GetStylisticSet3(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet3(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet4Property();
        static auto GetStylisticSet4(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet4(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet5Property();
        static auto GetStylisticSet5(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet5(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet6Property();
        static auto GetStylisticSet6(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet6(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet7Property();
        static auto GetStylisticSet7(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet7(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet8Property();
        static auto GetStylisticSet8(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet8(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet9Property();
        static auto GetStylisticSet9(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet9(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet10Property();
        static auto GetStylisticSet10(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet10(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet11Property();
        static auto GetStylisticSet11(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet11(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet12Property();
        static auto GetStylisticSet12(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet12(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet13Property();
        static auto GetStylisticSet13(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet13(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet14Property();
        static auto GetStylisticSet14(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet14(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet15Property();
        static auto GetStylisticSet15(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet15(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet16Property();
        static auto GetStylisticSet16(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet16(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet17Property();
        static auto GetStylisticSet17(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet17(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet18Property();
        static auto GetStylisticSet18(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet18(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet19Property();
        static auto GetStylisticSet19(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet19(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet20Property();
        static auto GetStylisticSet20(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet20(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto CapitalsProperty();
        static auto GetCapitals(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetCapitals(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::FontCapitals const& value);
        [[nodiscard]] static auto CapitalSpacingProperty();
        static auto GetCapitalSpacing(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetCapitalSpacing(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto KerningProperty();
        static auto GetKerning(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetKerning(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto CaseSensitiveFormsProperty();
        static auto GetCaseSensitiveForms(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetCaseSensitiveForms(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto HistoricalFormsProperty();
        static auto GetHistoricalForms(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetHistoricalForms(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto FractionProperty();
        static auto GetFraction(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetFraction(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::FontFraction const& value);
        [[nodiscard]] static auto NumeralStyleProperty();
        static auto GetNumeralStyle(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetNumeralStyle(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::FontNumeralStyle const& value);
        [[nodiscard]] static auto NumeralAlignmentProperty();
        static auto GetNumeralAlignment(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetNumeralAlignment(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::FontNumeralAlignment const& value);
        [[nodiscard]] static auto SlashedZeroProperty();
        static auto GetSlashedZero(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetSlashedZero(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto MathematicalGreekProperty();
        static auto GetMathematicalGreek(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetMathematicalGreek(winrt::Windows::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto VariantsProperty();
        static auto GetVariants(winrt::Windows::UI::Xaml::DependencyObject const& element);
        static auto SetVariants(winrt::Windows::UI::Xaml::DependencyObject const& element, winrt::Windows::UI::Xaml::FontVariants const& value);
    };
    struct __declspec(empty_bases) Underline : winrt::Windows::UI::Xaml::Documents::IUnderline,
        impl::base<Underline, winrt::Windows::UI::Xaml::Documents::Span, winrt::Windows::UI::Xaml::Documents::Inline, winrt::Windows::UI::Xaml::Documents::TextElement, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Underline, winrt::Windows::UI::Xaml::Documents::ISpan, winrt::Windows::UI::Xaml::Documents::IInline, winrt::Windows::UI::Xaml::Documents::ITextElement, winrt::Windows::UI::Xaml::Documents::ITextElement2, winrt::Windows::UI::Xaml::Documents::ITextElement3, winrt::Windows::UI::Xaml::Documents::ITextElement4, winrt::Windows::UI::Xaml::Documents::ITextElement5, winrt::Windows::UI::Xaml::Documents::ITextElementOverrides, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Underline(std::nullptr_t) noexcept {}
        Underline(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Documents::IUnderline(ptr, take_ownership_from_abi) {}
        Underline();
    };
    template <typename D>
    class ITextElementOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using ITextElementOverrides = winrt::Windows::UI::Xaml::Documents::ITextElementOverrides;
        WINRT_IMPL_AUTO(void) OnDisconnectVisualChildren() const;
    };
}
#endif
