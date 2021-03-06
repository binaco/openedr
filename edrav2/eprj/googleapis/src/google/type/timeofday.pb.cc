// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/timeofday.proto

#include "google/type/timeofday.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace google {
namespace type {
class TimeOfDayDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TimeOfDay> _instance;
} _TimeOfDay_default_instance_;
}  // namespace type
}  // namespace google
static void InitDefaultsscc_info_TimeOfDay_google_2ftype_2ftimeofday_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::type::_TimeOfDay_default_instance_;
    new (ptr) ::google::type::TimeOfDay();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::type::TimeOfDay::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TimeOfDay_google_2ftype_2ftimeofday_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_TimeOfDay_google_2ftype_2ftimeofday_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2ftype_2ftimeofday_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2ftype_2ftimeofday_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2ftype_2ftimeofday_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2ftype_2ftimeofday_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::type::TimeOfDay, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::type::TimeOfDay, hours_),
  PROTOBUF_FIELD_OFFSET(::google::type::TimeOfDay, minutes_),
  PROTOBUF_FIELD_OFFSET(::google::type::TimeOfDay, seconds_),
  PROTOBUF_FIELD_OFFSET(::google::type::TimeOfDay, nanos_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::type::TimeOfDay)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::type::_TimeOfDay_default_instance_),
};

const char descriptor_table_protodef_google_2ftype_2ftimeofday_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033google/type/timeofday.proto\022\013google.ty"
  "pe\"K\n\tTimeOfDay\022\r\n\005hours\030\001 \001(\005\022\017\n\007minute"
  "s\030\002 \001(\005\022\017\n\007seconds\030\003 \001(\005\022\r\n\005nanos\030\004 \001(\005B"
  "l\n\017com.google.typeB\016TimeOfDayProtoP\001Z>go"
  "ogle.golang.org/genproto/googleapis/type"
  "/timeofday;timeofday\370\001\001\242\002\003GTPb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2ftype_2ftimeofday_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2ftype_2ftimeofday_2eproto_sccs[1] = {
  &scc_info_TimeOfDay_google_2ftype_2ftimeofday_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2ftype_2ftimeofday_2eproto_once;
static bool descriptor_table_google_2ftype_2ftimeofday_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2ftimeofday_2eproto = {
  &descriptor_table_google_2ftype_2ftimeofday_2eproto_initialized, descriptor_table_protodef_google_2ftype_2ftimeofday_2eproto, "google/type/timeofday.proto", 237,
  &descriptor_table_google_2ftype_2ftimeofday_2eproto_once, descriptor_table_google_2ftype_2ftimeofday_2eproto_sccs, descriptor_table_google_2ftype_2ftimeofday_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_google_2ftype_2ftimeofday_2eproto::offsets,
  file_level_metadata_google_2ftype_2ftimeofday_2eproto, 1, file_level_enum_descriptors_google_2ftype_2ftimeofday_2eproto, file_level_service_descriptors_google_2ftype_2ftimeofday_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2ftype_2ftimeofday_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2ftype_2ftimeofday_2eproto), true);
namespace google {
namespace type {

// ===================================================================

void TimeOfDay::InitAsDefaultInstance() {
}
class TimeOfDay::_Internal {
 public:
};

TimeOfDay::TimeOfDay()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.type.TimeOfDay)
}
TimeOfDay::TimeOfDay(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.type.TimeOfDay)
}
TimeOfDay::TimeOfDay(const TimeOfDay& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&hours_, &from.hours_,
    static_cast<size_t>(reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&hours_)) + sizeof(nanos_));
  // @@protoc_insertion_point(copy_constructor:google.type.TimeOfDay)
}

void TimeOfDay::SharedCtor() {
  ::memset(&hours_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nanos_) -
      reinterpret_cast<char*>(&hours_)) + sizeof(nanos_));
}

TimeOfDay::~TimeOfDay() {
  // @@protoc_insertion_point(destructor:google.type.TimeOfDay)
  SharedDtor();
}

void TimeOfDay::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
}

void TimeOfDay::ArenaDtor(void* object) {
  TimeOfDay* _this = reinterpret_cast< TimeOfDay* >(object);
  (void)_this;
}
void TimeOfDay::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TimeOfDay::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TimeOfDay& TimeOfDay::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TimeOfDay_google_2ftype_2ftimeofday_2eproto.base);
  return *internal_default_instance();
}


void TimeOfDay::Clear() {
// @@protoc_insertion_point(message_clear_start:google.type.TimeOfDay)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&hours_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nanos_) -
      reinterpret_cast<char*>(&hours_)) + sizeof(nanos_));
  _internal_metadata_.Clear();
}

const char* TimeOfDay::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 hours = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          hours_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 minutes = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          minutes_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 seconds = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          seconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 nanos = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          nanos_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* TimeOfDay::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.type.TimeOfDay)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 hours = 1;
  if (this->hours() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_hours(), target);
  }

  // int32 minutes = 2;
  if (this->minutes() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_minutes(), target);
  }

  // int32 seconds = 3;
  if (this->seconds() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_seconds(), target);
  }

  // int32 nanos = 4;
  if (this->nanos() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_nanos(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.type.TimeOfDay)
  return target;
}

size_t TimeOfDay::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.type.TimeOfDay)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 hours = 1;
  if (this->hours() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_hours());
  }

  // int32 minutes = 2;
  if (this->minutes() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_minutes());
  }

  // int32 seconds = 3;
  if (this->seconds() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_seconds());
  }

  // int32 nanos = 4;
  if (this->nanos() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_nanos());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TimeOfDay::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.type.TimeOfDay)
  GOOGLE_DCHECK_NE(&from, this);
  const TimeOfDay* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TimeOfDay>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.type.TimeOfDay)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.type.TimeOfDay)
    MergeFrom(*source);
  }
}

void TimeOfDay::MergeFrom(const TimeOfDay& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.type.TimeOfDay)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.hours() != 0) {
    _internal_set_hours(from._internal_hours());
  }
  if (from.minutes() != 0) {
    _internal_set_minutes(from._internal_minutes());
  }
  if (from.seconds() != 0) {
    _internal_set_seconds(from._internal_seconds());
  }
  if (from.nanos() != 0) {
    _internal_set_nanos(from._internal_nanos());
  }
}

void TimeOfDay::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.type.TimeOfDay)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TimeOfDay::CopyFrom(const TimeOfDay& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.type.TimeOfDay)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TimeOfDay::IsInitialized() const {
  return true;
}

void TimeOfDay::InternalSwap(TimeOfDay* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(hours_, other->hours_);
  swap(minutes_, other->minutes_);
  swap(seconds_, other->seconds_);
  swap(nanos_, other->nanos_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TimeOfDay::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::type::TimeOfDay* Arena::CreateMaybeMessage< ::google::type::TimeOfDay >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::type::TimeOfDay >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
