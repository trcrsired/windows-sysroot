// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Networking_Sockets_2_H
#define WINRT_Windows_Networking_Sockets_2_H
#include "winrt/impl/windows.applicationmodel.background.1.h"
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.networking.1.h"
#include "winrt/impl/windows.storage.streams.1.h"
#include "winrt/impl/windows.networking.sockets.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    struct BandwidthStatistics
    {
        uint64_t OutboundBitsPerSecond;
        uint64_t InboundBitsPerSecond;
        uint64_t OutboundBitsPerSecondInstability;
        uint64_t InboundBitsPerSecondInstability;
        bool OutboundBandwidthPeaked;
        bool InboundBandwidthPeaked;
    };
    inline bool operator==(BandwidthStatistics const& left, BandwidthStatistics const& right) noexcept
    {
        return left.OutboundBitsPerSecond == right.OutboundBitsPerSecond && left.InboundBitsPerSecond == right.InboundBitsPerSecond && left.OutboundBitsPerSecondInstability == right.OutboundBitsPerSecondInstability && left.InboundBitsPerSecondInstability == right.InboundBitsPerSecondInstability && left.OutboundBandwidthPeaked == right.OutboundBandwidthPeaked && left.InboundBandwidthPeaked == right.InboundBandwidthPeaked;
    }
    inline bool operator!=(BandwidthStatistics const& left, BandwidthStatistics const& right) noexcept
    {
        return !(left == right);
    }
    struct RoundTripTimeStatistics
    {
        uint32_t Variance;
        uint32_t Max;
        uint32_t Min;
        uint32_t Sum;
    };
    inline bool operator==(RoundTripTimeStatistics const& left, RoundTripTimeStatistics const& right) noexcept
    {
        return left.Variance == right.Variance && left.Max == right.Max && left.Min == right.Min && left.Sum == right.Sum;
    }
    inline bool operator!=(RoundTripTimeStatistics const& left, RoundTripTimeStatistics const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) ControlChannelTrigger : winrt::Windows::Networking::Sockets::IControlChannelTrigger,
        impl::require<ControlChannelTrigger, winrt::Windows::Networking::Sockets::IControlChannelTrigger2>
    {
        ControlChannelTrigger(std::nullptr_t) noexcept {}
        ControlChannelTrigger(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IControlChannelTrigger(ptr, take_ownership_from_abi) {}
        ControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes);
        ControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes, winrt::Windows::Networking::Sockets::ControlChannelTriggerResourceType const& resourceRequestType);
    };
    struct __declspec(empty_bases) DatagramSocket : winrt::Windows::Networking::Sockets::IDatagramSocket,
        impl::require<DatagramSocket, winrt::Windows::Networking::Sockets::IDatagramSocket2, winrt::Windows::Networking::Sockets::IDatagramSocket3>
    {
        DatagramSocket(std::nullptr_t) noexcept {}
        DatagramSocket(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IDatagramSocket(ptr, take_ownership_from_abi) {}
        DatagramSocket();
        using winrt::Windows::Networking::Sockets::IDatagramSocket::BindServiceNameAsync;
        using impl::consume_t<DatagramSocket, winrt::Windows::Networking::Sockets::IDatagramSocket2>::BindServiceNameAsync;
        static auto GetEndpointPairsAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName);
        static auto GetEndpointPairsAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, winrt::Windows::Networking::HostNameSortOptions const& sortOptions);
    };
    struct __declspec(empty_bases) DatagramSocketControl : winrt::Windows::Networking::Sockets::IDatagramSocketControl,
        impl::require<DatagramSocketControl, winrt::Windows::Networking::Sockets::IDatagramSocketControl2, winrt::Windows::Networking::Sockets::IDatagramSocketControl3>
    {
        DatagramSocketControl(std::nullptr_t) noexcept {}
        DatagramSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IDatagramSocketControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DatagramSocketInformation : winrt::Windows::Networking::Sockets::IDatagramSocketInformation
    {
        DatagramSocketInformation(std::nullptr_t) noexcept {}
        DatagramSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IDatagramSocketInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DatagramSocketMessageReceivedEventArgs : winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs
    {
        DatagramSocketMessageReceivedEventArgs(std::nullptr_t) noexcept {}
        DatagramSocketMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MessageWebSocket : winrt::Windows::Networking::Sockets::IMessageWebSocket,
        impl::require<MessageWebSocket, winrt::Windows::Networking::Sockets::IMessageWebSocket2, winrt::Windows::Networking::Sockets::IMessageWebSocket3>
    {
        MessageWebSocket(std::nullptr_t) noexcept {}
        MessageWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IMessageWebSocket(ptr, take_ownership_from_abi) {}
        MessageWebSocket();
    };
    struct __declspec(empty_bases) MessageWebSocketControl : winrt::Windows::Networking::Sockets::IMessageWebSocketControl,
        impl::require<MessageWebSocketControl, winrt::Windows::Networking::Sockets::IWebSocketControl2, winrt::Windows::Networking::Sockets::IMessageWebSocketControl2>
    {
        MessageWebSocketControl(std::nullptr_t) noexcept {}
        MessageWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IMessageWebSocketControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MessageWebSocketInformation : winrt::Windows::Networking::Sockets::IWebSocketInformation,
        impl::require<MessageWebSocketInformation, winrt::Windows::Networking::Sockets::IWebSocketInformation2>
    {
        MessageWebSocketInformation(std::nullptr_t) noexcept {}
        MessageWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IWebSocketInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MessageWebSocketMessageReceivedEventArgs : winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs,
        impl::require<MessageWebSocketMessageReceivedEventArgs, winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2>
    {
        MessageWebSocketMessageReceivedEventArgs(std::nullptr_t) noexcept {}
        MessageWebSocketMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ServerMessageWebSocket : winrt::Windows::Networking::Sockets::IServerMessageWebSocket
    {
        ServerMessageWebSocket(std::nullptr_t) noexcept {}
        ServerMessageWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IServerMessageWebSocket(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ServerMessageWebSocketControl : winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl
    {
        ServerMessageWebSocketControl(std::nullptr_t) noexcept {}
        ServerMessageWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ServerMessageWebSocketInformation : winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation
    {
        ServerMessageWebSocketInformation(std::nullptr_t) noexcept {}
        ServerMessageWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ServerStreamWebSocket : winrt::Windows::Networking::Sockets::IServerStreamWebSocket
    {
        ServerStreamWebSocket(std::nullptr_t) noexcept {}
        ServerStreamWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IServerStreamWebSocket(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ServerStreamWebSocketInformation : winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation
    {
        ServerStreamWebSocketInformation(std::nullptr_t) noexcept {}
        ServerStreamWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SocketActivityContext : winrt::Windows::Networking::Sockets::ISocketActivityContext
    {
        SocketActivityContext(std::nullptr_t) noexcept {}
        SocketActivityContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::ISocketActivityContext(ptr, take_ownership_from_abi) {}
        explicit SocketActivityContext(winrt::Windows::Storage::Streams::IBuffer const& data);
    };
    struct __declspec(empty_bases) SocketActivityInformation : winrt::Windows::Networking::Sockets::ISocketActivityInformation
    {
        SocketActivityInformation(std::nullptr_t) noexcept {}
        SocketActivityInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::ISocketActivityInformation(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AllSockets();
    };
    struct __declspec(empty_bases) SocketActivityTriggerDetails : winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails
    {
        SocketActivityTriggerDetails(std::nullptr_t) noexcept {}
        SocketActivityTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct SocketError
    {
        SocketError() = delete;
        static auto GetStatus(int32_t hresult);
    };
    struct __declspec(empty_bases) StreamSocket : winrt::Windows::Networking::Sockets::IStreamSocket,
        impl::require<StreamSocket, winrt::Windows::Networking::Sockets::IStreamSocket2, winrt::Windows::Networking::Sockets::IStreamSocket3>
    {
        StreamSocket(std::nullptr_t) noexcept {}
        StreamSocket(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IStreamSocket(ptr, take_ownership_from_abi) {}
        StreamSocket();
        using winrt::Windows::Networking::Sockets::IStreamSocket::ConnectAsync;
        using impl::consume_t<StreamSocket, winrt::Windows::Networking::Sockets::IStreamSocket2>::ConnectAsync;
        static auto GetEndpointPairsAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName);
        static auto GetEndpointPairsAsync(winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, winrt::Windows::Networking::HostNameSortOptions const& sortOptions);
    };
    struct __declspec(empty_bases) StreamSocketControl : winrt::Windows::Networking::Sockets::IStreamSocketControl,
        impl::require<StreamSocketControl, winrt::Windows::Networking::Sockets::IStreamSocketControl2, winrt::Windows::Networking::Sockets::IStreamSocketControl3, winrt::Windows::Networking::Sockets::IStreamSocketControl4>
    {
        StreamSocketControl(std::nullptr_t) noexcept {}
        StreamSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IStreamSocketControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StreamSocketInformation : winrt::Windows::Networking::Sockets::IStreamSocketInformation,
        impl::require<StreamSocketInformation, winrt::Windows::Networking::Sockets::IStreamSocketInformation2>
    {
        StreamSocketInformation(std::nullptr_t) noexcept {}
        StreamSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IStreamSocketInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StreamSocketListener : winrt::Windows::Networking::Sockets::IStreamSocketListener,
        impl::require<StreamSocketListener, winrt::Windows::Networking::Sockets::IStreamSocketListener2, winrt::Windows::Networking::Sockets::IStreamSocketListener3>
    {
        StreamSocketListener(std::nullptr_t) noexcept {}
        StreamSocketListener(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IStreamSocketListener(ptr, take_ownership_from_abi) {}
        StreamSocketListener();
        using winrt::Windows::Networking::Sockets::IStreamSocketListener::BindServiceNameAsync;
        using impl::consume_t<StreamSocketListener, winrt::Windows::Networking::Sockets::IStreamSocketListener2>::BindServiceNameAsync;
    };
    struct __declspec(empty_bases) StreamSocketListenerConnectionReceivedEventArgs : winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs
    {
        StreamSocketListenerConnectionReceivedEventArgs(std::nullptr_t) noexcept {}
        StreamSocketListenerConnectionReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StreamSocketListenerControl : winrt::Windows::Networking::Sockets::IStreamSocketListenerControl,
        impl::require<StreamSocketListenerControl, winrt::Windows::Networking::Sockets::IStreamSocketListenerControl2>
    {
        StreamSocketListenerControl(std::nullptr_t) noexcept {}
        StreamSocketListenerControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IStreamSocketListenerControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StreamSocketListenerInformation : winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation
    {
        StreamSocketListenerInformation(std::nullptr_t) noexcept {}
        StreamSocketListenerInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StreamWebSocket : winrt::Windows::Networking::Sockets::IStreamWebSocket,
        impl::require<StreamWebSocket, winrt::Windows::Networking::Sockets::IStreamWebSocket2>
    {
        StreamWebSocket(std::nullptr_t) noexcept {}
        StreamWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IStreamWebSocket(ptr, take_ownership_from_abi) {}
        StreamWebSocket();
    };
    struct __declspec(empty_bases) StreamWebSocketControl : winrt::Windows::Networking::Sockets::IStreamWebSocketControl,
        impl::require<StreamWebSocketControl, winrt::Windows::Networking::Sockets::IWebSocketControl2, winrt::Windows::Networking::Sockets::IStreamWebSocketControl2>
    {
        StreamWebSocketControl(std::nullptr_t) noexcept {}
        StreamWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IStreamWebSocketControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) StreamWebSocketInformation : winrt::Windows::Networking::Sockets::IWebSocketInformation,
        impl::require<StreamWebSocketInformation, winrt::Windows::Networking::Sockets::IWebSocketInformation2>
    {
        StreamWebSocketInformation(std::nullptr_t) noexcept {}
        StreamWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IWebSocketInformation(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WebSocketClosedEventArgs : winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs
    {
        WebSocketClosedEventArgs(std::nullptr_t) noexcept {}
        WebSocketClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WebSocketError
    {
        WebSocketError() = delete;
        static auto GetStatus(int32_t hresult);
    };
    struct __declspec(empty_bases) WebSocketKeepAlive : winrt::Windows::ApplicationModel::Background::IBackgroundTask
    {
        WebSocketKeepAlive(std::nullptr_t) noexcept {}
        WebSocketKeepAlive(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Background::IBackgroundTask(ptr, take_ownership_from_abi) {}
        WebSocketKeepAlive();
    };
    struct __declspec(empty_bases) WebSocketServerCustomValidationRequestedEventArgs : winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs
    {
        WebSocketServerCustomValidationRequestedEventArgs(std::nullptr_t) noexcept {}
        WebSocketServerCustomValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
