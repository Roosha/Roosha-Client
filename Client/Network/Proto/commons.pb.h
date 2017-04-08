// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: commons.proto

#ifndef PROTOBUF_commons_2eproto__INCLUDED
#define PROTOBUF_commons_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace roosha {
class AuthenticationToken;
class AuthenticationTokenDefaultTypeInternal;
extern AuthenticationTokenDefaultTypeInternal _AuthenticationToken_default_instance_;
class Credentials;
class CredentialsDefaultTypeInternal;
extern CredentialsDefaultTypeInternal _Credentials_default_instance_;
class Void;
class VoidDefaultTypeInternal;
extern VoidDefaultTypeInternal _Void_default_instance_;
}  // namespace roosha

namespace roosha {

namespace protobuf_commons_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_commons_2eproto

// ===================================================================

class Void : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:roosha.Void) */ {
 public:
  Void();
  virtual ~Void();

  Void(const Void& from);

  inline Void& operator=(const Void& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Void& default_instance();

  static inline const Void* internal_default_instance() {
    return reinterpret_cast<const Void*>(
               &_Void_default_instance_);
  }

  void Swap(Void* other);

  // implements Message ----------------------------------------------

  inline Void* New() const PROTOBUF_FINAL { return New(NULL); }

  Void* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Void& from);
  void MergeFrom(const Void& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Void* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:roosha.Void)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend struct  protobuf_commons_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Credentials : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:roosha.Credentials) */ {
 public:
  Credentials();
  virtual ~Credentials();

  Credentials(const Credentials& from);

  inline Credentials& operator=(const Credentials& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Credentials& default_instance();

  static inline const Credentials* internal_default_instance() {
    return reinterpret_cast<const Credentials*>(
               &_Credentials_default_instance_);
  }

  void Swap(Credentials* other);

  // implements Message ----------------------------------------------

  inline Credentials* New() const PROTOBUF_FINAL { return New(NULL); }

  Credentials* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Credentials& from);
  void MergeFrom(const Credentials& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Credentials* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string login = 1;
  void clear_login();
  static const int kLoginFieldNumber = 1;
  const ::std::string& login() const;
  void set_login(const ::std::string& value);
  #if LANG_CXX11
  void set_login(::std::string&& value);
  #endif
  void set_login(const char* value);
  void set_login(const char* value, size_t size);
  ::std::string* mutable_login();
  ::std::string* release_login();
  void set_allocated_login(::std::string* login);

  // string passwordHash = 2;
  void clear_passwordhash();
  static const int kPasswordHashFieldNumber = 2;
  const ::std::string& passwordhash() const;
  void set_passwordhash(const ::std::string& value);
  #if LANG_CXX11
  void set_passwordhash(::std::string&& value);
  #endif
  void set_passwordhash(const char* value);
  void set_passwordhash(const char* value, size_t size);
  ::std::string* mutable_passwordhash();
  ::std::string* release_passwordhash();
  void set_allocated_passwordhash(::std::string* passwordhash);

  // optional string macAddress = 3;
  void clear_macaddress();
  static const int kMacAddressFieldNumber = 3;
  const ::std::string& macaddress() const;
  void set_macaddress(const ::std::string& value);
  void set_macaddress(const char* value);
  void set_macaddress(const char* value, size_t size);
  ::std::string* mutable_macaddress();
  ::std::string* release_macaddress();
  void set_allocated_macaddress(::std::string* macaddress);

  // @@protoc_insertion_point(class_scope:roosha.Credentials)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr login_;
  ::google::protobuf::internal::ArenaStringPtr passwordhash_;
  ::google::protobuf::internal::ArenaStringPtr macaddress_;
  mutable int _cached_size_;
  friend struct  protobuf_commons_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class AuthenticationToken : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:roosha.AuthenticationToken) */ {
 public:
  AuthenticationToken();
  virtual ~AuthenticationToken();

  AuthenticationToken(const AuthenticationToken& from);

  inline AuthenticationToken& operator=(const AuthenticationToken& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AuthenticationToken& default_instance();

  static inline const AuthenticationToken* internal_default_instance() {
    return reinterpret_cast<const AuthenticationToken*>(
               &_AuthenticationToken_default_instance_);
  }

  void Swap(AuthenticationToken* other);

  // implements Message ----------------------------------------------

  inline AuthenticationToken* New() const PROTOBUF_FINAL { return New(NULL); }

  AuthenticationToken* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AuthenticationToken& from);
  void MergeFrom(const AuthenticationToken& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(AuthenticationToken* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string token = 1;
  void clear_token();
  static const int kTokenFieldNumber = 1;
  const ::std::string& token() const;
  void set_token(const ::std::string& value);
  #if LANG_CXX11
  void set_token(::std::string&& value);
  #endif
  void set_token(const char* value);
  void set_token(const char* value, size_t size);
  ::std::string* mutable_token();
  ::std::string* release_token();
  void set_allocated_token(::std::string* token);

  // optional int32 machineId = 2;
  void clear_machineid();
  static const int kMachineIdFieldNumber = 2;
  ::google::protobuf::int32 machineid() const;
  void set_machineid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:roosha.AuthenticationToken)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr token_;
  ::google::protobuf::int32 machineid_;
  mutable int _cached_size_;
  friend struct  protobuf_commons_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Void

// -------------------------------------------------------------------

// Credentials

// string login = 1;
inline void Credentials::clear_login() {
  login_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Credentials::login() const {
  // @@protoc_insertion_point(field_get:roosha.Credentials.login)
  return login_.GetNoArena();
}
inline void Credentials::set_login(const ::std::string& value) {
  
  login_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:roosha.Credentials.login)
}
#if LANG_CXX11
inline void Credentials::set_login(::std::string&& value) {
  
  login_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:roosha.Credentials.login)
}
#endif
inline void Credentials::set_login(const char* value) {
  
  login_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:roosha.Credentials.login)
}
inline void Credentials::set_login(const char* value, size_t size) {
  
  login_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:roosha.Credentials.login)
}
inline ::std::string* Credentials::mutable_login() {
  
  // @@protoc_insertion_point(field_mutable:roosha.Credentials.login)
  return login_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Credentials::release_login() {
  // @@protoc_insertion_point(field_release:roosha.Credentials.login)
  
  return login_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Credentials::set_allocated_login(::std::string* login) {
  if (login != NULL) {
    
  } else {
    
  }
  login_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), login);
  // @@protoc_insertion_point(field_set_allocated:roosha.Credentials.login)
}

// string passwordHash = 2;
inline void Credentials::clear_passwordhash() {
  passwordhash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Credentials::passwordhash() const {
  // @@protoc_insertion_point(field_get:roosha.Credentials.passwordHash)
  return passwordhash_.GetNoArena();
}
inline void Credentials::set_passwordhash(const ::std::string& value) {
  
  passwordhash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:roosha.Credentials.passwordHash)
}
#if LANG_CXX11
inline void Credentials::set_passwordhash(::std::string&& value) {
  
  passwordhash_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:roosha.Credentials.passwordHash)
}
#endif
inline void Credentials::set_passwordhash(const char* value) {
  
  passwordhash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:roosha.Credentials.passwordHash)
}
inline void Credentials::set_passwordhash(const char* value, size_t size) {
  
  passwordhash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:roosha.Credentials.passwordHash)
}
inline ::std::string* Credentials::mutable_passwordhash() {
  
  // @@protoc_insertion_point(field_mutable:roosha.Credentials.passwordHash)
  return passwordhash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Credentials::release_passwordhash() {
  // @@protoc_insertion_point(field_release:roosha.Credentials.passwordHash)
  
  return passwordhash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Credentials::set_allocated_passwordhash(::std::string* passwordhash) {
  if (passwordhash != NULL) {
    
  } else {
    
  }
  passwordhash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), passwordhash);
  // @@protoc_insertion_point(field_set_allocated:roosha.Credentials.passwordHash)
}

// optional string macAddress = 3;
inline void Credentials::clear_macaddress() {
  macaddress_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Credentials::macaddress() const {
  // @@protoc_insertion_point(field_get:roosha.Credentials.macAddress)
  return macaddress_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Credentials::set_macaddress(const ::std::string& value) {
  
  macaddress_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:roosha.Credentials.macAddress)
}
inline void Credentials::set_macaddress(const char* value) {
  
  macaddress_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:roosha.Credentials.macAddress)
}
inline void Credentials::set_macaddress(const char* value, size_t size) {
  
  macaddress_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:roosha.Credentials.macAddress)
}
inline ::std::string* Credentials::mutable_macaddress() {
  
  // @@protoc_insertion_point(field_mutable:roosha.Credentials.macAddress)
  return macaddress_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Credentials::release_macaddress() {
  // @@protoc_insertion_point(field_release:roosha.Credentials.macAddress)
  
  return macaddress_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Credentials::set_allocated_macaddress(::std::string* macaddress) {
  if (macaddress != NULL) {
    
  } else {
    
  }
  macaddress_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), macaddress);
  // @@protoc_insertion_point(field_set_allocated:roosha.Credentials.macAddress)
}

// -------------------------------------------------------------------

// AuthenticationToken

// string token = 1;
inline void AuthenticationToken::clear_token() {
  token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AuthenticationToken::token() const {
  // @@protoc_insertion_point(field_get:roosha.AuthenticationToken.token)
  return token_.GetNoArena();
}
inline void AuthenticationToken::set_token(const ::std::string& value) {
  
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:roosha.AuthenticationToken.token)
}
#if LANG_CXX11
inline void AuthenticationToken::set_token(::std::string&& value) {
  
  token_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:roosha.AuthenticationToken.token)
}
#endif
inline void AuthenticationToken::set_token(const char* value) {
  
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:roosha.AuthenticationToken.token)
}
inline void AuthenticationToken::set_token(const char* value, size_t size) {
  
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:roosha.AuthenticationToken.token)
}
inline ::std::string* AuthenticationToken::mutable_token() {
  
  // @@protoc_insertion_point(field_mutable:roosha.AuthenticationToken.token)
  return token_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuthenticationToken::release_token() {
  // @@protoc_insertion_point(field_release:roosha.AuthenticationToken.token)
  
  return token_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthenticationToken::set_allocated_token(::std::string* token) {
  if (token != NULL) {
    
  } else {
    
  }
  token_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), token);
  // @@protoc_insertion_point(field_set_allocated:roosha.AuthenticationToken.token)
}

// optional int32 machineId = 2;
inline void AuthenticationToken::clear_machineid() {
  machineid_ = 0;
}
inline ::google::protobuf::int32 AuthenticationToken::machineid() const {
  // @@protoc_insertion_point(field_get:roosha.AuthenticationToken.machineId)
  return machineid_;
}
inline void AuthenticationToken::set_machineid(::google::protobuf::int32 value) {
  
  machineid_ = value;
  // @@protoc_insertion_point(field_set:roosha.AuthenticationToken.machineId)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace roosha

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_commons_2eproto__INCLUDED
