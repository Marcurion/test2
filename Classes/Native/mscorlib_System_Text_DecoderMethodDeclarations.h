#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t916;
// System.Text.DecoderFallback
struct DecoderFallback_t1248;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1249;
// System.Byte[]
struct ByteU5BU5D_t108;
// System.Char[]
struct CharU5BU5D_t305;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m7127 (Decoder_t916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m7128 (Decoder_t916 * __this, DecoderFallback_t1248 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t1249 * Decoder_get_FallbackBuffer_m7129 (Decoder_t916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
