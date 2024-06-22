// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Web_Syndication_2_H
#define WINRT_Windows_Web_Syndication_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.security.credentials.1.h"
#include "winrt/impl/windows.web.syndication.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::Syndication
{
    struct RetrievalProgress
    {
        uint32_t BytesRetrieved;
        uint32_t TotalBytesToRetrieve;
    };
    inline bool operator==(RetrievalProgress const& left, RetrievalProgress const& right) noexcept
    {
        return left.BytesRetrieved == right.BytesRetrieved && left.TotalBytesToRetrieve == right.TotalBytesToRetrieve;
    }
    inline bool operator!=(RetrievalProgress const& left, RetrievalProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct TransferProgress
    {
        uint32_t BytesSent;
        uint32_t TotalBytesToSend;
        uint32_t BytesRetrieved;
        uint32_t TotalBytesToRetrieve;
    };
    inline bool operator==(TransferProgress const& left, TransferProgress const& right) noexcept
    {
        return left.BytesSent == right.BytesSent && left.TotalBytesToSend == right.TotalBytesToSend && left.BytesRetrieved == right.BytesRetrieved && left.TotalBytesToRetrieve == right.TotalBytesToRetrieve;
    }
    inline bool operator!=(TransferProgress const& left, TransferProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) SyndicationAttribute : winrt::Windows::Web::Syndication::ISyndicationAttribute
    {
        SyndicationAttribute(std::nullptr_t) noexcept {}
        SyndicationAttribute(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationAttribute(ptr, take_ownership_from_abi) {}
        SyndicationAttribute();
        SyndicationAttribute(param::hstring const& attributeName, param::hstring const& attributeNamespace, param::hstring const& attributeValue);
    };
    struct __declspec(empty_bases) SyndicationCategory : winrt::Windows::Web::Syndication::ISyndicationCategory
    {
        SyndicationCategory(std::nullptr_t) noexcept {}
        SyndicationCategory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationCategory(ptr, take_ownership_from_abi) {}
        SyndicationCategory();
        explicit SyndicationCategory(param::hstring const& term);
        SyndicationCategory(param::hstring const& term, param::hstring const& scheme, param::hstring const& label);
    };
    struct __declspec(empty_bases) SyndicationClient : winrt::Windows::Web::Syndication::ISyndicationClient
    {
        SyndicationClient(std::nullptr_t) noexcept {}
        SyndicationClient(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationClient(ptr, take_ownership_from_abi) {}
        SyndicationClient();
        explicit SyndicationClient(winrt::Windows::Security::Credentials::PasswordCredential const& serverCredential);
    };
    struct __declspec(empty_bases) SyndicationContent : winrt::Windows::Web::Syndication::ISyndicationContent
    {
        SyndicationContent(std::nullptr_t) noexcept {}
        SyndicationContent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationContent(ptr, take_ownership_from_abi) {}
        SyndicationContent();
        SyndicationContent(param::hstring const& text, winrt::Windows::Web::Syndication::SyndicationTextType const& type);
        explicit SyndicationContent(winrt::Windows::Foundation::Uri const& sourceUri);
    };
    struct SyndicationError
    {
        SyndicationError() = delete;
        static auto GetStatus(int32_t hresult);
    };
    struct __declspec(empty_bases) SyndicationFeed : winrt::Windows::Web::Syndication::ISyndicationFeed
    {
        SyndicationFeed(std::nullptr_t) noexcept {}
        SyndicationFeed(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationFeed(ptr, take_ownership_from_abi) {}
        SyndicationFeed();
        SyndicationFeed(param::hstring const& title, param::hstring const& subtitle, winrt::Windows::Foundation::Uri const& uri);
    };
    struct __declspec(empty_bases) SyndicationGenerator : winrt::Windows::Web::Syndication::ISyndicationGenerator,
        impl::require<SyndicationGenerator, winrt::Windows::Web::Syndication::ISyndicationNode>
    {
        SyndicationGenerator(std::nullptr_t) noexcept {}
        SyndicationGenerator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationGenerator(ptr, take_ownership_from_abi) {}
        SyndicationGenerator();
        explicit SyndicationGenerator(param::hstring const& text);
    };
    struct __declspec(empty_bases) SyndicationItem : winrt::Windows::Web::Syndication::ISyndicationItem
    {
        SyndicationItem(std::nullptr_t) noexcept {}
        SyndicationItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationItem(ptr, take_ownership_from_abi) {}
        SyndicationItem();
        SyndicationItem(param::hstring const& title, winrt::Windows::Web::Syndication::SyndicationContent const& content, winrt::Windows::Foundation::Uri const& uri);
    };
    struct __declspec(empty_bases) SyndicationLink : winrt::Windows::Web::Syndication::ISyndicationLink
    {
        SyndicationLink(std::nullptr_t) noexcept {}
        SyndicationLink(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationLink(ptr, take_ownership_from_abi) {}
        SyndicationLink();
        explicit SyndicationLink(winrt::Windows::Foundation::Uri const& uri);
        SyndicationLink(winrt::Windows::Foundation::Uri const& uri, param::hstring const& relationship, param::hstring const& title, param::hstring const& mediaType, uint32_t length);
    };
    struct __declspec(empty_bases) SyndicationNode : winrt::Windows::Web::Syndication::ISyndicationNode
    {
        SyndicationNode(std::nullptr_t) noexcept {}
        SyndicationNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationNode(ptr, take_ownership_from_abi) {}
        SyndicationNode();
        SyndicationNode(param::hstring const& nodeName, param::hstring const& nodeNamespace, param::hstring const& nodeValue);
    };
    struct __declspec(empty_bases) SyndicationPerson : winrt::Windows::Web::Syndication::ISyndicationPerson
    {
        SyndicationPerson(std::nullptr_t) noexcept {}
        SyndicationPerson(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationPerson(ptr, take_ownership_from_abi) {}
        SyndicationPerson();
        explicit SyndicationPerson(param::hstring const& name);
        SyndicationPerson(param::hstring const& name, param::hstring const& email, winrt::Windows::Foundation::Uri const& uri);
    };
    struct __declspec(empty_bases) SyndicationText : winrt::Windows::Web::Syndication::ISyndicationText
    {
        SyndicationText(std::nullptr_t) noexcept {}
        SyndicationText(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Syndication::ISyndicationText(ptr, take_ownership_from_abi) {}
        SyndicationText();
        explicit SyndicationText(param::hstring const& text);
        SyndicationText(param::hstring const& text, winrt::Windows::Web::Syndication::SyndicationTextType const& type);
    };
}
#endif
