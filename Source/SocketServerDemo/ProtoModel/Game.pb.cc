// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Game.proto

#include "Game.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace ProtoModel {
constexpr ActorTransform::ActorTransform(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : vectorx_(0)
  , vectory_(0)
  , vectorz_(0)
  , rotatoryaw_(0)
  , rotatorroll_(0)
  , rotatorpitch_(0){}
struct ActorTransformDefaultTypeInternal {
  constexpr ActorTransformDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ActorTransformDefaultTypeInternal() {}
  union {
    ActorTransform _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ActorTransformDefaultTypeInternal _ActorTransform_default_instance_;
}  // namespace ProtoModel
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Game_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Game_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Game_2eproto = nullptr;

const uint32_t TableStruct_Game_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ProtoModel::ActorTransform, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ProtoModel::ActorTransform, vectorx_),
  PROTOBUF_FIELD_OFFSET(::ProtoModel::ActorTransform, vectory_),
  PROTOBUF_FIELD_OFFSET(::ProtoModel::ActorTransform, vectorz_),
  PROTOBUF_FIELD_OFFSET(::ProtoModel::ActorTransform, rotatoryaw_),
  PROTOBUF_FIELD_OFFSET(::ProtoModel::ActorTransform, rotatorroll_),
  PROTOBUF_FIELD_OFFSET(::ProtoModel::ActorTransform, rotatorpitch_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::ProtoModel::ActorTransform)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ProtoModel::_ActorTransform_default_instance_),
};

const char descriptor_table_protodef_Game_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nGame.proto\022\nProtoModel\"\202\001\n\016ActorTransf"
  "orm\022\017\n\007VectorX\030\001 \001(\002\022\017\n\007VectorY\030\002 \001(\002\022\017\n"
  "\007VectorZ\030\003 \001(\002\022\022\n\nRotatorYaw\030\004 \001(\002\022\023\n\013Ro"
  "tatorRoll\030\005 \001(\002\022\024\n\014RotatorPitch\030\006 \001(\002B\013B"
  "\tGameProtob\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Game_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Game_2eproto = {
  false, false, 178, descriptor_table_protodef_Game_2eproto, "Game.proto", 
  &descriptor_table_Game_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_Game_2eproto::offsets,
  file_level_metadata_Game_2eproto, file_level_enum_descriptors_Game_2eproto, file_level_service_descriptors_Game_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_Game_2eproto_getter() {
  return &descriptor_table_Game_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_Game_2eproto(&descriptor_table_Game_2eproto);
namespace ProtoModel {

// ===================================================================

class ActorTransform::_Internal {
 public:
};

ActorTransform::ActorTransform(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:ProtoModel.ActorTransform)
}
ActorTransform::ActorTransform(const ActorTransform& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&vectorx_, &from.vectorx_,
    static_cast<size_t>(reinterpret_cast<char*>(&rotatorpitch_) -
    reinterpret_cast<char*>(&vectorx_)) + sizeof(rotatorpitch_));
  // @@protoc_insertion_point(copy_constructor:ProtoModel.ActorTransform)
}

inline void ActorTransform::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&vectorx_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&rotatorpitch_) -
    reinterpret_cast<char*>(&vectorx_)) + sizeof(rotatorpitch_));
}

ActorTransform::~ActorTransform() {
  // @@protoc_insertion_point(destructor:ProtoModel.ActorTransform)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ActorTransform::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ActorTransform::ArenaDtor(void* object) {
  ActorTransform* _this = reinterpret_cast< ActorTransform* >(object);
  (void)_this;
}
void ActorTransform::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ActorTransform::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ActorTransform::Clear() {
// @@protoc_insertion_point(message_clear_start:ProtoModel.ActorTransform)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&vectorx_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rotatorpitch_) -
      reinterpret_cast<char*>(&vectorx_)) + sizeof(rotatorpitch_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ActorTransform::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float VectorX = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          vectorx_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float VectorY = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          vectory_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float VectorZ = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          vectorz_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float RotatorYaw = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 37)) {
          rotatoryaw_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float RotatorRoll = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 45)) {
          rotatorroll_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float RotatorPitch = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 53)) {
          rotatorpitch_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ActorTransform::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ProtoModel.ActorTransform)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // float VectorX = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_vectorx = this->_internal_vectorx();
  uint32_t raw_vectorx;
  memcpy(&raw_vectorx, &tmp_vectorx, sizeof(tmp_vectorx));
  if (raw_vectorx != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_vectorx(), target);
  }

  // float VectorY = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_vectory = this->_internal_vectory();
  uint32_t raw_vectory;
  memcpy(&raw_vectory, &tmp_vectory, sizeof(tmp_vectory));
  if (raw_vectory != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_vectory(), target);
  }

  // float VectorZ = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_vectorz = this->_internal_vectorz();
  uint32_t raw_vectorz;
  memcpy(&raw_vectorz, &tmp_vectorz, sizeof(tmp_vectorz));
  if (raw_vectorz != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_vectorz(), target);
  }

  // float RotatorYaw = 4;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_rotatoryaw = this->_internal_rotatoryaw();
  uint32_t raw_rotatoryaw;
  memcpy(&raw_rotatoryaw, &tmp_rotatoryaw, sizeof(tmp_rotatoryaw));
  if (raw_rotatoryaw != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_rotatoryaw(), target);
  }

  // float RotatorRoll = 5;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_rotatorroll = this->_internal_rotatorroll();
  uint32_t raw_rotatorroll;
  memcpy(&raw_rotatorroll, &tmp_rotatorroll, sizeof(tmp_rotatorroll));
  if (raw_rotatorroll != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_rotatorroll(), target);
  }

  // float RotatorPitch = 6;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_rotatorpitch = this->_internal_rotatorpitch();
  uint32_t raw_rotatorpitch;
  memcpy(&raw_rotatorpitch, &tmp_rotatorpitch, sizeof(tmp_rotatorpitch));
  if (raw_rotatorpitch != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(6, this->_internal_rotatorpitch(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoModel.ActorTransform)
  return target;
}

size_t ActorTransform::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ProtoModel.ActorTransform)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float VectorX = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_vectorx = this->_internal_vectorx();
  uint32_t raw_vectorx;
  memcpy(&raw_vectorx, &tmp_vectorx, sizeof(tmp_vectorx));
  if (raw_vectorx != 0) {
    total_size += 1 + 4;
  }

  // float VectorY = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_vectory = this->_internal_vectory();
  uint32_t raw_vectory;
  memcpy(&raw_vectory, &tmp_vectory, sizeof(tmp_vectory));
  if (raw_vectory != 0) {
    total_size += 1 + 4;
  }

  // float VectorZ = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_vectorz = this->_internal_vectorz();
  uint32_t raw_vectorz;
  memcpy(&raw_vectorz, &tmp_vectorz, sizeof(tmp_vectorz));
  if (raw_vectorz != 0) {
    total_size += 1 + 4;
  }

  // float RotatorYaw = 4;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_rotatoryaw = this->_internal_rotatoryaw();
  uint32_t raw_rotatoryaw;
  memcpy(&raw_rotatoryaw, &tmp_rotatoryaw, sizeof(tmp_rotatoryaw));
  if (raw_rotatoryaw != 0) {
    total_size += 1 + 4;
  }

  // float RotatorRoll = 5;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_rotatorroll = this->_internal_rotatorroll();
  uint32_t raw_rotatorroll;
  memcpy(&raw_rotatorroll, &tmp_rotatorroll, sizeof(tmp_rotatorroll));
  if (raw_rotatorroll != 0) {
    total_size += 1 + 4;
  }

  // float RotatorPitch = 6;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_rotatorpitch = this->_internal_rotatorpitch();
  uint32_t raw_rotatorpitch;
  memcpy(&raw_rotatorpitch, &tmp_rotatorpitch, sizeof(tmp_rotatorpitch));
  if (raw_rotatorpitch != 0) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ActorTransform::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ActorTransform::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ActorTransform::GetClassData() const { return &_class_data_; }

void ActorTransform::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ActorTransform *>(to)->MergeFrom(
      static_cast<const ActorTransform &>(from));
}


void ActorTransform::MergeFrom(const ActorTransform& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ProtoModel.ActorTransform)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_vectorx = from._internal_vectorx();
  uint32_t raw_vectorx;
  memcpy(&raw_vectorx, &tmp_vectorx, sizeof(tmp_vectorx));
  if (raw_vectorx != 0) {
    _internal_set_vectorx(from._internal_vectorx());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_vectory = from._internal_vectory();
  uint32_t raw_vectory;
  memcpy(&raw_vectory, &tmp_vectory, sizeof(tmp_vectory));
  if (raw_vectory != 0) {
    _internal_set_vectory(from._internal_vectory());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_vectorz = from._internal_vectorz();
  uint32_t raw_vectorz;
  memcpy(&raw_vectorz, &tmp_vectorz, sizeof(tmp_vectorz));
  if (raw_vectorz != 0) {
    _internal_set_vectorz(from._internal_vectorz());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_rotatoryaw = from._internal_rotatoryaw();
  uint32_t raw_rotatoryaw;
  memcpy(&raw_rotatoryaw, &tmp_rotatoryaw, sizeof(tmp_rotatoryaw));
  if (raw_rotatoryaw != 0) {
    _internal_set_rotatoryaw(from._internal_rotatoryaw());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_rotatorroll = from._internal_rotatorroll();
  uint32_t raw_rotatorroll;
  memcpy(&raw_rotatorroll, &tmp_rotatorroll, sizeof(tmp_rotatorroll));
  if (raw_rotatorroll != 0) {
    _internal_set_rotatorroll(from._internal_rotatorroll());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_rotatorpitch = from._internal_rotatorpitch();
  uint32_t raw_rotatorpitch;
  memcpy(&raw_rotatorpitch, &tmp_rotatorpitch, sizeof(tmp_rotatorpitch));
  if (raw_rotatorpitch != 0) {
    _internal_set_rotatorpitch(from._internal_rotatorpitch());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ActorTransform::CopyFrom(const ActorTransform& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ProtoModel.ActorTransform)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ActorTransform::IsInitialized() const {
  return true;
}

void ActorTransform::InternalSwap(ActorTransform* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ActorTransform, rotatorpitch_)
      + sizeof(ActorTransform::rotatorpitch_)
      - PROTOBUF_FIELD_OFFSET(ActorTransform, vectorx_)>(
          reinterpret_cast<char*>(&vectorx_),
          reinterpret_cast<char*>(&other->vectorx_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ActorTransform::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_Game_2eproto_getter, &descriptor_table_Game_2eproto_once,
      file_level_metadata_Game_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace ProtoModel
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ProtoModel::ActorTransform* Arena::CreateMaybeMessage< ::ProtoModel::ActorTransform >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ProtoModel::ActorTransform >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
