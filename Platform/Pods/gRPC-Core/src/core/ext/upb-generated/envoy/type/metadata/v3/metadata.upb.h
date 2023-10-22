/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/metadata/v3/metadata.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_METADATA_V3_METADATA_PROTO_UPB_H_
#define ENVOY_TYPE_METADATA_V3_METADATA_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_type_metadata_v3_MetadataKey;
struct envoy_type_metadata_v3_MetadataKey_PathSegment;
struct envoy_type_metadata_v3_MetadataKind;
struct envoy_type_metadata_v3_MetadataKind_Request;
struct envoy_type_metadata_v3_MetadataKind_Route;
struct envoy_type_metadata_v3_MetadataKind_Cluster;
struct envoy_type_metadata_v3_MetadataKind_Host;
typedef struct envoy_type_metadata_v3_MetadataKey envoy_type_metadata_v3_MetadataKey;
typedef struct envoy_type_metadata_v3_MetadataKey_PathSegment envoy_type_metadata_v3_MetadataKey_PathSegment;
typedef struct envoy_type_metadata_v3_MetadataKind envoy_type_metadata_v3_MetadataKind;
typedef struct envoy_type_metadata_v3_MetadataKind_Request envoy_type_metadata_v3_MetadataKind_Request;
typedef struct envoy_type_metadata_v3_MetadataKind_Route envoy_type_metadata_v3_MetadataKind_Route;
typedef struct envoy_type_metadata_v3_MetadataKind_Cluster envoy_type_metadata_v3_MetadataKind_Cluster;
typedef struct envoy_type_metadata_v3_MetadataKind_Host envoy_type_metadata_v3_MetadataKind_Host;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKey_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKey_PathSegment_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_Request_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_Route_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_Cluster_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_Host_msginit;


/* envoy.type.metadata.v3.MetadataKey */

UPB_INLINE envoy_type_metadata_v3_MetadataKey *envoy_type_metadata_v3_MetadataKey_new(upb_arena *arena) {
  return (envoy_type_metadata_v3_MetadataKey *)_upb_msg_new(&envoy_type_metadata_v3_MetadataKey_msginit, arena);
}
UPB_INLINE envoy_type_metadata_v3_MetadataKey *envoy_type_metadata_v3_MetadataKey_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKey *ret = envoy_type_metadata_v3_MetadataKey_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKey_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_metadata_v3_MetadataKey *envoy_type_metadata_v3_MetadataKey_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKey *ret = envoy_type_metadata_v3_MetadataKey_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKey_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_metadata_v3_MetadataKey_serialize(const envoy_type_metadata_v3_MetadataKey *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_metadata_v3_MetadataKey_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_type_metadata_v3_MetadataKey_key(const envoy_type_metadata_v3_MetadataKey *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE bool envoy_type_metadata_v3_MetadataKey_has_path(const envoy_type_metadata_v3_MetadataKey *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const envoy_type_metadata_v3_MetadataKey_PathSegment* const* envoy_type_metadata_v3_MetadataKey_path(const envoy_type_metadata_v3_MetadataKey *msg, size_t *len) { return (const envoy_type_metadata_v3_MetadataKey_PathSegment* const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }

UPB_INLINE void envoy_type_metadata_v3_MetadataKey_set_key(envoy_type_metadata_v3_MetadataKey *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE envoy_type_metadata_v3_MetadataKey_PathSegment** envoy_type_metadata_v3_MetadataKey_mutable_path(envoy_type_metadata_v3_MetadataKey *msg, size_t *len) {
  return (envoy_type_metadata_v3_MetadataKey_PathSegment**)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE envoy_type_metadata_v3_MetadataKey_PathSegment** envoy_type_metadata_v3_MetadataKey_resize_path(envoy_type_metadata_v3_MetadataKey *msg, size_t len, upb_arena *arena) {
  return (envoy_type_metadata_v3_MetadataKey_PathSegment**)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_type_metadata_v3_MetadataKey_PathSegment* envoy_type_metadata_v3_MetadataKey_add_path(envoy_type_metadata_v3_MetadataKey *msg, upb_arena *arena) {
  struct envoy_type_metadata_v3_MetadataKey_PathSegment* sub = (struct envoy_type_metadata_v3_MetadataKey_PathSegment*)_upb_msg_new(&envoy_type_metadata_v3_MetadataKey_PathSegment_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(8, 16), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.type.metadata.v3.MetadataKey.PathSegment */

UPB_INLINE envoy_type_metadata_v3_MetadataKey_PathSegment *envoy_type_metadata_v3_MetadataKey_PathSegment_new(upb_arena *arena) {
  return (envoy_type_metadata_v3_MetadataKey_PathSegment *)_upb_msg_new(&envoy_type_metadata_v3_MetadataKey_PathSegment_msginit, arena);
}
UPB_INLINE envoy_type_metadata_v3_MetadataKey_PathSegment *envoy_type_metadata_v3_MetadataKey_PathSegment_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKey_PathSegment *ret = envoy_type_metadata_v3_MetadataKey_PathSegment_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKey_PathSegment_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_metadata_v3_MetadataKey_PathSegment *envoy_type_metadata_v3_MetadataKey_PathSegment_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKey_PathSegment *ret = envoy_type_metadata_v3_MetadataKey_PathSegment_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKey_PathSegment_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_metadata_v3_MetadataKey_PathSegment_serialize(const envoy_type_metadata_v3_MetadataKey_PathSegment *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_metadata_v3_MetadataKey_PathSegment_msginit, arena, len);
}

typedef enum {
  envoy_type_metadata_v3_MetadataKey_PathSegment_segment_key = 1,
  envoy_type_metadata_v3_MetadataKey_PathSegment_segment_NOT_SET = 0
} envoy_type_metadata_v3_MetadataKey_PathSegment_segment_oneofcases;
UPB_INLINE envoy_type_metadata_v3_MetadataKey_PathSegment_segment_oneofcases envoy_type_metadata_v3_MetadataKey_PathSegment_segment_case(const envoy_type_metadata_v3_MetadataKey_PathSegment* msg) { return (envoy_type_metadata_v3_MetadataKey_PathSegment_segment_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(8, 16), int32_t); }

UPB_INLINE bool envoy_type_metadata_v3_MetadataKey_PathSegment_has_key(const envoy_type_metadata_v3_MetadataKey_PathSegment *msg) { return _upb_getoneofcase(msg, UPB_SIZE(8, 16)) == 1; }
UPB_INLINE upb_strview envoy_type_metadata_v3_MetadataKey_PathSegment_key(const envoy_type_metadata_v3_MetadataKey_PathSegment *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 1, upb_strview_make("", strlen(""))); }

UPB_INLINE void envoy_type_metadata_v3_MetadataKey_PathSegment_set_key(envoy_type_metadata_v3_MetadataKey_PathSegment *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 1);
}

/* envoy.type.metadata.v3.MetadataKind */

UPB_INLINE envoy_type_metadata_v3_MetadataKind *envoy_type_metadata_v3_MetadataKind_new(upb_arena *arena) {
  return (envoy_type_metadata_v3_MetadataKind *)_upb_msg_new(&envoy_type_metadata_v3_MetadataKind_msginit, arena);
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind *envoy_type_metadata_v3_MetadataKind_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind *ret = envoy_type_metadata_v3_MetadataKind_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind *envoy_type_metadata_v3_MetadataKind_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind *ret = envoy_type_metadata_v3_MetadataKind_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_metadata_v3_MetadataKind_serialize(const envoy_type_metadata_v3_MetadataKind *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_metadata_v3_MetadataKind_msginit, arena, len);
}

typedef enum {
  envoy_type_metadata_v3_MetadataKind_kind_request = 1,
  envoy_type_metadata_v3_MetadataKind_kind_route = 2,
  envoy_type_metadata_v3_MetadataKind_kind_cluster = 3,
  envoy_type_metadata_v3_MetadataKind_kind_host = 4,
  envoy_type_metadata_v3_MetadataKind_kind_NOT_SET = 0
} envoy_type_metadata_v3_MetadataKind_kind_oneofcases;
UPB_INLINE envoy_type_metadata_v3_MetadataKind_kind_oneofcases envoy_type_metadata_v3_MetadataKind_kind_case(const envoy_type_metadata_v3_MetadataKind* msg) { return (envoy_type_metadata_v3_MetadataKind_kind_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(4, 8), int32_t); }

UPB_INLINE bool envoy_type_metadata_v3_MetadataKind_has_request(const envoy_type_metadata_v3_MetadataKind *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 1; }
UPB_INLINE const envoy_type_metadata_v3_MetadataKind_Request* envoy_type_metadata_v3_MetadataKind_request(const envoy_type_metadata_v3_MetadataKind *msg) { return UPB_READ_ONEOF(msg, const envoy_type_metadata_v3_MetadataKind_Request*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 1, NULL); }
UPB_INLINE bool envoy_type_metadata_v3_MetadataKind_has_route(const envoy_type_metadata_v3_MetadataKind *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 2; }
UPB_INLINE const envoy_type_metadata_v3_MetadataKind_Route* envoy_type_metadata_v3_MetadataKind_route(const envoy_type_metadata_v3_MetadataKind *msg) { return UPB_READ_ONEOF(msg, const envoy_type_metadata_v3_MetadataKind_Route*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 2, NULL); }
UPB_INLINE bool envoy_type_metadata_v3_MetadataKind_has_cluster(const envoy_type_metadata_v3_MetadataKind *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 3; }
UPB_INLINE const envoy_type_metadata_v3_MetadataKind_Cluster* envoy_type_metadata_v3_MetadataKind_cluster(const envoy_type_metadata_v3_MetadataKind *msg) { return UPB_READ_ONEOF(msg, const envoy_type_metadata_v3_MetadataKind_Cluster*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 3, NULL); }
UPB_INLINE bool envoy_type_metadata_v3_MetadataKind_has_host(const envoy_type_metadata_v3_MetadataKind *msg) { return _upb_getoneofcase(msg, UPB_SIZE(4, 8)) == 4; }
UPB_INLINE const envoy_type_metadata_v3_MetadataKind_Host* envoy_type_metadata_v3_MetadataKind_host(const envoy_type_metadata_v3_MetadataKind *msg) { return UPB_READ_ONEOF(msg, const envoy_type_metadata_v3_MetadataKind_Host*, UPB_SIZE(0, 0), UPB_SIZE(4, 8), 4, NULL); }

UPB_INLINE void envoy_type_metadata_v3_MetadataKind_set_request(envoy_type_metadata_v3_MetadataKind *msg, envoy_type_metadata_v3_MetadataKind_Request* value) {
  UPB_WRITE_ONEOF(msg, envoy_type_metadata_v3_MetadataKind_Request*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 1);
}
UPB_INLINE struct envoy_type_metadata_v3_MetadataKind_Request* envoy_type_metadata_v3_MetadataKind_mutable_request(envoy_type_metadata_v3_MetadataKind *msg, upb_arena *arena) {
  struct envoy_type_metadata_v3_MetadataKind_Request* sub = (struct envoy_type_metadata_v3_MetadataKind_Request*)envoy_type_metadata_v3_MetadataKind_request(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_metadata_v3_MetadataKind_Request*)_upb_msg_new(&envoy_type_metadata_v3_MetadataKind_Request_msginit, arena);
    if (!sub) return NULL;
    envoy_type_metadata_v3_MetadataKind_set_request(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_type_metadata_v3_MetadataKind_set_route(envoy_type_metadata_v3_MetadataKind *msg, envoy_type_metadata_v3_MetadataKind_Route* value) {
  UPB_WRITE_ONEOF(msg, envoy_type_metadata_v3_MetadataKind_Route*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 2);
}
UPB_INLINE struct envoy_type_metadata_v3_MetadataKind_Route* envoy_type_metadata_v3_MetadataKind_mutable_route(envoy_type_metadata_v3_MetadataKind *msg, upb_arena *arena) {
  struct envoy_type_metadata_v3_MetadataKind_Route* sub = (struct envoy_type_metadata_v3_MetadataKind_Route*)envoy_type_metadata_v3_MetadataKind_route(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_metadata_v3_MetadataKind_Route*)_upb_msg_new(&envoy_type_metadata_v3_MetadataKind_Route_msginit, arena);
    if (!sub) return NULL;
    envoy_type_metadata_v3_MetadataKind_set_route(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_type_metadata_v3_MetadataKind_set_cluster(envoy_type_metadata_v3_MetadataKind *msg, envoy_type_metadata_v3_MetadataKind_Cluster* value) {
  UPB_WRITE_ONEOF(msg, envoy_type_metadata_v3_MetadataKind_Cluster*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 3);
}
UPB_INLINE struct envoy_type_metadata_v3_MetadataKind_Cluster* envoy_type_metadata_v3_MetadataKind_mutable_cluster(envoy_type_metadata_v3_MetadataKind *msg, upb_arena *arena) {
  struct envoy_type_metadata_v3_MetadataKind_Cluster* sub = (struct envoy_type_metadata_v3_MetadataKind_Cluster*)envoy_type_metadata_v3_MetadataKind_cluster(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_metadata_v3_MetadataKind_Cluster*)_upb_msg_new(&envoy_type_metadata_v3_MetadataKind_Cluster_msginit, arena);
    if (!sub) return NULL;
    envoy_type_metadata_v3_MetadataKind_set_cluster(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_type_metadata_v3_MetadataKind_set_host(envoy_type_metadata_v3_MetadataKind *msg, envoy_type_metadata_v3_MetadataKind_Host* value) {
  UPB_WRITE_ONEOF(msg, envoy_type_metadata_v3_MetadataKind_Host*, UPB_SIZE(0, 0), value, UPB_SIZE(4, 8), 4);
}
UPB_INLINE struct envoy_type_metadata_v3_MetadataKind_Host* envoy_type_metadata_v3_MetadataKind_mutable_host(envoy_type_metadata_v3_MetadataKind *msg, upb_arena *arena) {
  struct envoy_type_metadata_v3_MetadataKind_Host* sub = (struct envoy_type_metadata_v3_MetadataKind_Host*)envoy_type_metadata_v3_MetadataKind_host(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_metadata_v3_MetadataKind_Host*)_upb_msg_new(&envoy_type_metadata_v3_MetadataKind_Host_msginit, arena);
    if (!sub) return NULL;
    envoy_type_metadata_v3_MetadataKind_set_host(msg, sub);
  }
  return sub;
}

/* envoy.type.metadata.v3.MetadataKind.Request */

UPB_INLINE envoy_type_metadata_v3_MetadataKind_Request *envoy_type_metadata_v3_MetadataKind_Request_new(upb_arena *arena) {
  return (envoy_type_metadata_v3_MetadataKind_Request *)_upb_msg_new(&envoy_type_metadata_v3_MetadataKind_Request_msginit, arena);
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind_Request *envoy_type_metadata_v3_MetadataKind_Request_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind_Request *ret = envoy_type_metadata_v3_MetadataKind_Request_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_Request_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind_Request *envoy_type_metadata_v3_MetadataKind_Request_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind_Request *ret = envoy_type_metadata_v3_MetadataKind_Request_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_Request_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_metadata_v3_MetadataKind_Request_serialize(const envoy_type_metadata_v3_MetadataKind_Request *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_metadata_v3_MetadataKind_Request_msginit, arena, len);
}



/* envoy.type.metadata.v3.MetadataKind.Route */

UPB_INLINE envoy_type_metadata_v3_MetadataKind_Route *envoy_type_metadata_v3_MetadataKind_Route_new(upb_arena *arena) {
  return (envoy_type_metadata_v3_MetadataKind_Route *)_upb_msg_new(&envoy_type_metadata_v3_MetadataKind_Route_msginit, arena);
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind_Route *envoy_type_metadata_v3_MetadataKind_Route_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind_Route *ret = envoy_type_metadata_v3_MetadataKind_Route_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_Route_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind_Route *envoy_type_metadata_v3_MetadataKind_Route_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind_Route *ret = envoy_type_metadata_v3_MetadataKind_Route_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_Route_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_metadata_v3_MetadataKind_Route_serialize(const envoy_type_metadata_v3_MetadataKind_Route *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_metadata_v3_MetadataKind_Route_msginit, arena, len);
}



/* envoy.type.metadata.v3.MetadataKind.Cluster */

UPB_INLINE envoy_type_metadata_v3_MetadataKind_Cluster *envoy_type_metadata_v3_MetadataKind_Cluster_new(upb_arena *arena) {
  return (envoy_type_metadata_v3_MetadataKind_Cluster *)_upb_msg_new(&envoy_type_metadata_v3_MetadataKind_Cluster_msginit, arena);
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind_Cluster *envoy_type_metadata_v3_MetadataKind_Cluster_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind_Cluster *ret = envoy_type_metadata_v3_MetadataKind_Cluster_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_Cluster_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind_Cluster *envoy_type_metadata_v3_MetadataKind_Cluster_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind_Cluster *ret = envoy_type_metadata_v3_MetadataKind_Cluster_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_Cluster_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_metadata_v3_MetadataKind_Cluster_serialize(const envoy_type_metadata_v3_MetadataKind_Cluster *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_metadata_v3_MetadataKind_Cluster_msginit, arena, len);
}



/* envoy.type.metadata.v3.MetadataKind.Host */

UPB_INLINE envoy_type_metadata_v3_MetadataKind_Host *envoy_type_metadata_v3_MetadataKind_Host_new(upb_arena *arena) {
  return (envoy_type_metadata_v3_MetadataKind_Host *)_upb_msg_new(&envoy_type_metadata_v3_MetadataKind_Host_msginit, arena);
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind_Host *envoy_type_metadata_v3_MetadataKind_Host_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind_Host *ret = envoy_type_metadata_v3_MetadataKind_Host_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_Host_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_metadata_v3_MetadataKind_Host *envoy_type_metadata_v3_MetadataKind_Host_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_metadata_v3_MetadataKind_Host *ret = envoy_type_metadata_v3_MetadataKind_Host_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_metadata_v3_MetadataKind_Host_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_metadata_v3_MetadataKind_Host_serialize(const envoy_type_metadata_v3_MetadataKind_Host *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_metadata_v3_MetadataKind_Host_msginit, arena, len);
}



extern const upb_msglayout_file envoy_type_metadata_v3_metadata_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_TYPE_METADATA_V3_METADATA_PROTO_UPB_H_ */
