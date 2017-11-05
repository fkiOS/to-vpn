// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import CocoaAsyncSocket;
@import Dispatch;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC5NEKit13AdapterSocket")
@interface AdapterSocket : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@property (nonatomic) BOOL _cancelled;
@property (nonatomic, readonly) BOOL isCancelled;
@property (nonatomic, readonly, copy) NSString * _Nonnull statusDescription;
- (nonnull instancetype)initWithObserve:(BOOL)observe OBJC_DESIGNATED_INITIALIZER;
/// Read data from the socket.
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
- (void)readData;
/// Send data to remote.
/// warning:
/// This should only be called after the last write is finished, i.e., <code>delegate?.didWriteData()</code> is called.
/// \param data Data to send.
///
- (void)writeWithData:(NSData * _Nonnull)data;
/// Disconnect the socket elegantly.
- (void)disconnectWithBecauseOf:(NSError * _Nullable)error;
/// Disconnect the socket immediately.
- (void)forceDisconnectWithBecauseOf:(NSError * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/// This adapter connects to remote directly.
SWIFT_CLASS("_TtC5NEKit13DirectAdapter")
@interface DirectAdapter : AdapterSocket
/// If this is set to <code>false</code>, then the IP address will be resolved by system.
@property (nonatomic) BOOL resolveHost;
- (nonnull instancetype)initWithObserve:(BOOL)observe OBJC_DESIGNATED_INITIALIZER;
@end


/// The socket which encapsulates the logic to handle connection to proxies.
SWIFT_CLASS("_TtC5NEKit11ProxySocket")
@interface ProxySocket : NSObject
@property (nonatomic, readonly) BOOL isCancelled;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// Begin reading and processing data from the socket.
- (void)openSocket;
/// Response to the <code>AdapterSocket</code> on the other side of the <code>Tunnel</code> which has succefully connected to the remote server.
/// \param adapter The <code>AdapterSocket</code>.
///
- (void)respondToAdapter:(AdapterSocket * _Nonnull)adapter;
/// Read data from the socket.
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
- (void)readData;
/// Send data to remote.
/// warning:
/// This should only be called after the last write is finished, i.e., <code>delegate?.didWriteData()</code> is called.
/// \param data Data to send.
///
- (void)writeWithData:(NSData * _Nonnull)data;
/// Disconnect the socket elegantly.
- (void)disconnectWithBecauseOf:(NSError * _Nullable)error;
/// Disconnect the socket immediately.
- (void)forceDisconnectWithBecauseOf:(NSError * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/// This class just forwards data directly.
/// note:
/// It is designed to work with tun2socks only.
SWIFT_CLASS("_TtC5NEKit17DirectProxySocket")
@interface DirectProxySocket : ProxySocket
@property (nonatomic, readonly, copy) NSString * _Nonnull readStatusDescription;
@property (nonatomic, readonly, copy) NSString * _Nonnull writeStatusDescription;
/// Begin reading and processing data from the socket.
/// note:
/// Since there is nothing to read and process before forwarding data, this just calls <code>delegate?.didReceiveRequest</code>.
- (void)openSocket;
/// Response to the <code>AdapterSocket</code> on the other side of the <code>Tunnel</code> which has succefully connected to the remote server.
/// \param adapter The <code>AdapterSocket</code>.
///
- (void)respondToAdapter:(AdapterSocket * _Nonnull)adapter;
@end

@class Tunnel;

/// The base proxy server class.
/// This proxy does not listen on any port.
SWIFT_CLASS("_TtC5NEKit11ProxyServer")
@interface ProxyServer : NSObject
/// The type of the proxy server.
/// This can be set to anything describing the proxy server.
@property (nonatomic, readonly, copy) NSString * _Nonnull type;
/// The description of proxy server.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@property (nonatomic, copy) NSArray<Tunnel *> * _Nonnull tunnels;
/// Start the proxy server.
///
/// throws:
/// The error occured when starting the proxy server.
- (BOOL)startAndReturnError:(NSError * _Nullable * _Nullable)error;
/// Stop the proxy server.
- (void)stop;
/// Delegate method when the proxy server accepts a new ProxySocket from local.
/// When implementing a concrete proxy server, e.g., HTTP proxy server, the server should listen on some port and then wrap the raw socket in a corresponding ProxySocket subclass, then call this method.
/// \param socket The accepted proxy socket.
///
- (void)didAcceptNewSocket:(ProxySocket * _Nonnull)socket;
/// Delegate method when a tunnel closed. The server will remote it internally.
/// \param tunnel The closed tunnel.
///
- (void)tunnelDidClose:(Tunnel * _Nonnull)tunnel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class GCDTCPSocket;
@class GCDAsyncSocket;

/// Proxy server which listens on some port by GCDAsyncSocket.
/// This shoule be the base class for any concrete implementation of proxy server (e.g., HTTP or SOCKS5) which needs to listen on some port.
SWIFT_CLASS("_TtC5NEKit14GCDProxyServer")
@interface GCDProxyServer : ProxyServer <GCDAsyncSocketDelegate>
/// Start the proxy server which creates a GCDAsyncSocket listening on specific port.
///
/// throws:
/// The error occured when starting the proxy server.
- (BOOL)startAndReturnError:(NSError * _Nullable * _Nullable)error;
/// Stop the proxy server.
- (void)stop;
/// Delegate method to handle the newly accepted GCDTCPSocket.
/// Only this method should be overrided in any concrete implementation of proxy server which listens on some port with GCDAsyncSocket.
/// \param socket The accepted socket.
///
- (void)handleNewGCDSocket:(GCDTCPSocket * _Nonnull)socket;
/// GCDAsyncSocket delegate callback.
/// warning:
/// Do not call this method. This should be marked private but have to be marked public since the <code>GCDAsyncSocketDelegate</code> is public.
/// \param sock The listening GCDAsyncSocket.
///
/// \param newSocket The accepted new GCDAsyncSocket.
///
- (void)socket:(GCDAsyncSocket * _Nonnull)sock didAcceptNewSocket:(GCDAsyncSocket * _Nonnull)newSocket;
- (dispatch_queue_t _Nullable)newSocketQueueForConnectionFromAddress:(NSData * _Nonnull)address onSocket:(GCDAsyncSocket * _Nonnull)sock SWIFT_WARN_UNUSED_RESULT;
@end


/// The HTTP proxy server.
SWIFT_CLASS("_TtC5NEKit18GCDHTTPProxyServer")
@interface GCDHTTPProxyServer : GCDProxyServer
/// Handle the new accepted socket as a HTTP proxy connection.
/// \param socket The accepted socket.
///
- (void)handleNewGCDSocket:(GCDTCPSocket * _Nonnull)socket;
@end



/// The SOCKS5 proxy server.
SWIFT_CLASS("_TtC5NEKit20GCDSOCKS5ProxyServer")
@interface GCDSOCKS5ProxyServer : GCDProxyServer
/// Handle the new accepted socket as a SOCKS5 proxy connection.
/// \param socket The accepted socket.
///
- (void)handleNewGCDSocket:(GCDTCPSocket * _Nonnull)socket;
@end


/// The TCP socket build upon <code>GCDAsyncSocket</code>.
/// warning:
/// This class is not thread-safe.
SWIFT_CLASS("_TtC5NEKit12GCDTCPSocket")
@interface GCDTCPSocket : NSObject <GCDAsyncSocketDelegate>
/// Initailize an instance with <code>GCDAsyncSocket</code>.
/// \param socket The socket object to work with. If this is <code>nil</code>, then a new <code>GCDAsyncSocket</code> instance is created.
///
- (nonnull instancetype)initWithSocket:(GCDAsyncSocket * _Nullable)socket OBJC_DESIGNATED_INITIALIZER;
/// If the socket is connected.
@property (nonatomic, readonly) BOOL isConnected;
/// Connect to remote host.
/// \param host Remote host.
///
/// \param port Remote port.
///
/// \param enableTLS Should TLS be enabled.
///
/// \param tlsSettings The settings of TLS.
///
///
/// throws:
/// The error occured when connecting to host.
- (BOOL)connectToHost:(NSString * _Nonnull)host port:(NSInteger)port enableTLS:(BOOL)enableTLS tlsSettings:(NSDictionary * _Nullable)tlsSettings error:(NSError * _Nullable * _Nullable)error;
/// Disconnect the socket.
/// The socket will disconnect elegantly after any queued writing data are successfully sent.
- (void)disconnect;
/// Disconnect the socket immediately.
- (void)forceDisconnect;
/// Send data to remote.
/// warning:
/// This should only be called after the last write is finished, i.e., <code>delegate?.didWriteData()</code> is called.
/// \param data Data to send.
///
- (void)writeWithData:(NSData * _Nonnull)data;
/// Read data from the socket.
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
- (void)readData;
/// Read specific length of data from the socket.
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
/// \param length The length of the data to read.
///
- (void)readDataToLength:(NSInteger)length;
/// Read data until a specific pattern (including the pattern).
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
/// \param data The pattern.
///
- (void)readDataToData:(NSData * _Nonnull)data;
/// Read data until a specific pattern (including the pattern).
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
/// \param data The pattern.
///
/// \param maxLength Ignored since <code>GCDAsyncSocket</code> does not support this. The max length of data to scan for the pattern.
///
- (void)readDataToData:(NSData * _Nonnull)data maxLength:(NSInteger)maxLength;
/// Send data to remote.
/// warning:
/// This should only be called after the last write is finished, i.e., <code>delegate?.didWriteData()</code> is called.
/// \param data Data to send.
///
/// \param timeout Operation timeout.
///
- (void)writeWithData:(NSData * _Nonnull)data withTimeout:(double)timeout;
/// Read specific length of data from the socket.
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
/// \param length The length of the data to read.
///
/// \param timeout Operation timeout.
///
- (void)readDataToLength:(NSInteger)length withTimeout:(double)timeout;
/// Read data until a specific pattern (including the pattern).
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
/// \param data The pattern.
///
/// \param timeout Operation timeout.
///
- (void)readDataToData:(NSData * _Nonnull)data withTimeout:(double)timeout;
/// Connect to remote host.
/// \param host Remote host.
///
/// \param port Remote port.
///
///
/// throws:
/// The error occured when connecting to host.
- (BOOL)connectToHost:(NSString * _Nonnull)host withPort:(NSInteger)port error:(NSError * _Nullable * _Nullable)error;
/// Secures the connection using SSL/TLS.
/// \param tlsSettings TLS settings, refer to documents of <code>GCDAsyncSocket</code> for detail.
///
- (void)startTLSWithSettings:(NSDictionary * _Null_unspecified)settings;
- (void)socket:(GCDAsyncSocket * _Nonnull)sock didWriteDataWithTag:(NSInteger)tag;
- (void)socket:(GCDAsyncSocket * _Nonnull)sock didReadData:(NSData * _Nonnull)data withTag:(NSInteger)tag;
- (void)socketDidDisconnect:(GCDAsyncSocket * _Nonnull)socket withError:(NSError * _Nullable)err;
- (void)socket:(GCDAsyncSocket * _Nonnull)sock didConnectToHost:(NSString * _Nonnull)host port:(uint16_t)port;
- (void)socketDidSecure:(GCDAsyncSocket * _Nonnull)sock;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/// This adapter connects to remote host through a HTTP proxy.
SWIFT_CLASS("_TtC5NEKit11HTTPAdapter")
@interface HTTPAdapter : AdapterSocket
/// The host domain of the HTTP proxy.
@property (nonatomic, readonly, copy) NSString * _Nonnull serverHost;
/// The port of the HTTP proxy.
@property (nonatomic, readonly) NSInteger serverPort;
/// Whether the connection to the proxy should be secured or not.
@property (nonatomic) BOOL secured;
- (nonnull instancetype)initWithObserve:(BOOL)observe SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC5NEKit15HTTPProxySocket")
@interface HTTPProxySocket : ProxySocket
/// The remote host to connect to.
@property (nonatomic, copy) NSString * _Null_unspecified destinationHost;
@property (nonatomic) BOOL isConnectCommand;
@property (nonatomic, readonly, copy) NSString * _Nonnull readStatusDescription;
@property (nonatomic, readonly, copy) NSString * _Nonnull writeStatusDescription;
/// Begin reading and processing data from the socket.
- (void)openSocket;
- (void)readData;
/// Response to the <code>AdapterSocket</code> on the other side of the <code>Tunnel</code> which has succefully connected to the remote server.
/// \param adapter The <code>AdapterSocket</code>.
///
- (void)respondToAdapter:(AdapterSocket * _Nonnull)adapter;
@end


/// The TCP socket build upon <code>NWTCPConnection</code>.
/// warning:
/// This class is not thread-safe.
SWIFT_CLASS("_TtC5NEKit11NWTCPSocket")
@interface NWTCPSocket : NSObject
/// If the socket is connected.
@property (nonatomic, readonly) BOOL isConnected;
/// Connect to remote host.
/// \param host Remote host.
///
/// \param port Remote port.
///
/// \param enableTLS Should TLS be enabled.
///
/// \param tlsSettings The settings of TLS.
///
///
/// throws:
/// Never throws.
- (BOOL)connectToHost:(NSString * _Nonnull)host port:(NSInteger)port enableTLS:(BOOL)enableTLS tlsSettings:(NSDictionary * _Nullable)tlsSettings error:(NSError * _Nullable * _Nullable)error;
/// Disconnect the socket.
/// The socket will disconnect elegantly after any queued writing data are successfully sent.
- (void)disconnect;
/// Disconnect the socket immediately.
- (void)forceDisconnect;
/// Send data to remote.
/// warning:
/// This should only be called after the last write is finished, i.e., <code>delegate?.didWriteData()</code> is called.
/// \param data Data to send.
///
- (void)writeWithData:(NSData * _Nonnull)data;
/// Read data from the socket.
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
- (void)readData;
/// Read specific length of data from the socket.
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
/// \param length The length of the data to read.
///
- (void)readDataToLength:(NSInteger)length;
/// Read data until a specific pattern (including the pattern).
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
/// \param data The pattern.
///
- (void)readDataToData:(NSData * _Nonnull)data;
/// Read data until a specific pattern (including the pattern).
/// warning:
/// This should only be called after the last read is finished, i.e., <code>delegate?.didReadData()</code> is called.
/// \param data The pattern.
///
/// \param maxLength The max length of data to scan for the pattern.
///
- (void)readDataToData:(NSData * _Nonnull)data maxLength:(NSInteger)maxLength;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// The wrapper for NWUDPSession.
/// note:
/// This class is thread-safe.
SWIFT_CLASS("_TtC5NEKit11NWUDPSocket")
@interface NWUDPSocket : NSObject
/// The time when the last activity happens.
/// Since UDP do not have a “close” semantic, this can be an indicator of timeout.
@property (nonatomic, copy) NSDate * _Nonnull lastActive;
/// Create a new UDP socket connecting to remote.
/// \param host The host.
///
/// \param port The port.
///
- (nullable instancetype)initWithHost:(NSString * _Nonnull)host port:(NSInteger)port timeout:(NSInteger)timeout OBJC_DESIGNATED_INITIALIZER;
/// Send data to remote.
/// \param data The data to send.
///
- (void)writeWithData:(NSData * _Nonnull)data;
- (void)disconnect;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




SWIFT_CLASS("_TtC5NEKit13RejectAdapter")
@interface RejectAdapter : AdapterSocket
@property (nonatomic, readonly) NSInteger delay;
- (nonnull instancetype)initWithDelay:(NSInteger)delay OBJC_DESIGNATED_INITIALIZER;
/// Disconnect the socket elegantly.
- (void)disconnectWithBecauseOf:(NSError * _Nullable)error;
/// Disconnect the socket immediately.
- (void)forceDisconnectWithBecauseOf:(NSError * _Nullable)error;
- (nonnull instancetype)initWithObserve:(BOOL)observe SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC5NEKit13SOCKS5Adapter")
@interface SOCKS5Adapter : AdapterSocket
@property (nonatomic, readonly, copy) NSString * _Nonnull serverHost;
@property (nonatomic, readonly) NSInteger serverPort;
@property (nonatomic, readonly, copy) NSData * _Nonnull helloData;
- (nonnull instancetype)initWithServerHost:(NSString * _Nonnull)serverHost serverPort:(NSInteger)serverPort OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithObserve:(BOOL)observe SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC5NEKit17SOCKS5ProxySocket")
@interface SOCKS5ProxySocket : ProxySocket
/// The remote host to connect to.
@property (nonatomic, copy) NSString * _Null_unspecified destinationHost;
@property (nonatomic, readonly, copy) NSString * _Nonnull readStatusDescription;
@property (nonatomic, readonly, copy) NSString * _Nonnull writeStatusDescription;
/// Begin reading and processing data from the socket.
- (void)openSocket;
/// Response to the <code>AdapterSocket</code> on the other side of the <code>Tunnel</code> which has succefully connected to the remote server.
/// \param adapter The <code>AdapterSocket</code>.
///
- (void)respondToAdapter:(AdapterSocket * _Nonnull)adapter;
@end


/// This adapter connects to remote host through a HTTP proxy with SSL.
SWIFT_CLASS("_TtC5NEKit17SecureHTTPAdapter")
@interface SecureHTTPAdapter : HTTPAdapter
@end


/// This adapter connects to remote through Shadowsocks proxy.
SWIFT_CLASS("_TtC5NEKit18ShadowsocksAdapter")
@interface ShadowsocksAdapter : AdapterSocket
@property (nonatomic, readonly, copy) NSString * _Nonnull host;
@property (nonatomic, readonly) NSInteger port;
- (void)writeWithData:(NSData * _Nonnull)data;
- (void)writeWithRawData:(NSData * _Nonnull)rawData;
- (void)inputWithData:(NSData * _Nonnull)data;
- (void)outputWithData:(NSData * _Nonnull)data;
- (void)becomeReadyToForward;
- (nonnull instancetype)initWithObserve:(BOOL)observe SWIFT_UNAVAILABLE;
@end


@interface ShadowsocksAdapter (SWIFT_EXTENSION(NEKit))
@end


@interface ShadowsocksAdapter (SWIFT_EXTENSION(NEKit))
@end


@interface ShadowsocksAdapter (SWIFT_EXTENSION(NEKit))
@end


/// This adpater selects the fastest proxy automatically from a set of proxies.
SWIFT_CLASS("_TtC5NEKit12SpeedAdapter")
@interface SpeedAdapter : AdapterSocket
@property (nonatomic) NSInteger connectingCount;
@property (nonatomic) NSInteger pendingCount;
- (void)disconnectWithBecauseOf:(NSError * _Nullable)error;
- (void)forceDisconnectWithBecauseOf:(NSError * _Nullable)error;
- (void)didConnectWithAdapterSocket:(AdapterSocket * _Nonnull)socket;
- (void)updateAdapterWithNewAdapter:(AdapterSocket * _Nonnull)newAdapter;
- (nonnull instancetype)initWithObserve:(BOOL)observe OBJC_DESIGNATED_INITIALIZER;
@end


/// The tunnel forwards data between local and remote.
SWIFT_CLASS("_TtC5NEKit6Tunnel")
@interface Tunnel : NSObject
/// The proxy socket.
@property (nonatomic, strong) ProxySocket * _Nonnull proxySocket;
/// The adapter socket connecting to remote.
@property (nonatomic, strong) AdapterSocket * _Nullable adapterSocket;
/// If the tunnel is closed, i.e., proxy socket and adapter socket are both disconnected.
@property (nonatomic, readonly) BOOL isClosed;
@property (nonatomic, readonly) BOOL isCancelled;
@property (nonatomic, readonly, copy) NSString * _Nonnull statusDescription;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)initWithProxySocket:(ProxySocket * _Nonnull)proxySocket OBJC_DESIGNATED_INITIALIZER;
/// Start running the tunnel.
- (void)openTunnel;
/// Close the tunnel elegantly.
- (void)close;
/// Close the tunnel immediately.
/// note:
/// This method is thread-safe.
- (void)forceClose;
- (void)didConnectWithAdapterSocket:(AdapterSocket * _Nonnull)adapterSocket;
- (void)updateAdapterWithNewAdapter:(AdapterSocket * _Nonnull)newAdapter;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

#pragma clang diagnostic pop
