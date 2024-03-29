// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

class TestMsgDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TestMsg> _instance;
} _TestMsg_default_instance_;
static void InitDefaultsTestMsg_test_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_TestMsg_default_instance_;
    new (ptr) ::TestMsg();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::TestMsg::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TestMsg_test_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTestMsg_test_2eproto}, {}};

void InitDefaults_test_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_TestMsg_test_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_test_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_test_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_test_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_test_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TestMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::TestMsg, id_),
  PROTOBUF_FIELD_OFFSET(::TestMsg, name_),
  PROTOBUF_FIELD_OFFSET(::TestMsg, dis_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::TestMsg)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_TestMsg_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_test_2eproto = {
  {}, AddDescriptors_test_2eproto, "test.proto", schemas,
  file_default_instances, TableStruct_test_2eproto::offsets,
  file_level_metadata_test_2eproto, 1, file_level_enum_descriptors_test_2eproto, file_level_service_descriptors_test_2eproto,
};

const char descriptor_table_protodef_test_2eproto[] =
  "\n\ntest.proto\"0\n\007TestMsg\022\n\n\002id\030\001 \001(\005\022\014\n\004n"
  "ame\030\002 \001(\t\022\013\n\003dis\030\003 \001(\tb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_test_2eproto = {
  false, InitDefaults_test_2eproto, 
  descriptor_table_protodef_test_2eproto,
  "test.proto", &assign_descriptors_table_test_2eproto, 70,
};

void AddDescriptors_test_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_test_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_test_2eproto = []() { AddDescriptors_test_2eproto(); return true; }();

// ===================================================================

void TestMsg::InitAsDefaultInstance() {
}
class TestMsg::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestMsg::kIdFieldNumber;
const int TestMsg::kNameFieldNumber;
const int TestMsg::kDisFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestMsg::TestMsg()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:TestMsg)
}
TestMsg::TestMsg(const TestMsg& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  dis_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.dis().size() > 0) {
    dis_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dis_);
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:TestMsg)
}

void TestMsg::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_TestMsg_test_2eproto.base);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dis_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
}

TestMsg::~TestMsg() {
  // @@protoc_insertion_point(destructor:TestMsg)
  SharedDtor();
}

void TestMsg::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dis_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void TestMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TestMsg& TestMsg::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_TestMsg_test_2eproto.base);
  return *internal_default_instance();
}


void TestMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:TestMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dis_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* TestMsg::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<TestMsg*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 id = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_id(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // string name = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("TestMsg.name");
        object = msg->mutable_name();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string dis = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("TestMsg.dis");
        object = msg->mutable_dis();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool TestMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:TestMsg)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "TestMsg.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string dis = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dis()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->dis().data(), static_cast<int>(this->dis().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "TestMsg.dis"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:TestMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:TestMsg)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void TestMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:TestMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "TestMsg.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // string dis = 3;
  if (this->dis().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dis().data(), static_cast<int>(this->dis().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "TestMsg.dis");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->dis(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:TestMsg)
}

::google::protobuf::uint8* TestMsg::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:TestMsg)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "TestMsg.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // string dis = 3;
  if (this->dis().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dis().data(), static_cast<int>(this->dis().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "TestMsg.dis");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->dis(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TestMsg)
  return target;
}

size_t TestMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TestMsg)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string dis = 3;
  if (this->dis().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->dis());
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestMsg::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:TestMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const TestMsg* source =
      ::google::protobuf::DynamicCastToGenerated<TestMsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:TestMsg)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:TestMsg)
    MergeFrom(*source);
  }
}

void TestMsg::MergeFrom(const TestMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:TestMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.dis().size() > 0) {

    dis_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dis_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
}

void TestMsg::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:TestMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMsg::CopyFrom(const TestMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TestMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMsg::IsInitialized() const {
  return true;
}

void TestMsg::Swap(TestMsg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestMsg::InternalSwap(TestMsg* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  dis_.Swap(&other->dis_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
}

::google::protobuf::Metadata TestMsg::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_test_2eproto);
  return ::file_level_metadata_test_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::TestMsg* Arena::CreateMaybeMessage< ::TestMsg >(Arena* arena) {
  return Arena::CreateInternal< ::TestMsg >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
