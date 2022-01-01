/*
* Brian R Taylor
* brian.taylor@bolderflight.com
* 
* Copyright (c) 2022 Bolder Flight Systems Inc
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the “Software”), to
* deal in the Software without restriction, including without limitation the
* rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
* sell copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
*/

#ifndef SRC_UBX_LOG_H_
#define SRC_UBX_LOG_H_

#include <cstdint>
#include <cstddef>
#include "ubx_defs.h"  // NOLINT

namespace bfs {

/* UBX-LOG IDs */
static constexpr uint8_t UBX_LOG_CREATE_ID_ = 0x07;
static constexpr uint8_t UBX_LOG_ERASE_ID_ = 0x03;
static constexpr uint8_t UBX_LOG_FINDTIME_ID_ = 0x0e;
static constexpr uint8_t UBX_LOG_INFO_ID_ = 0x08;
static constexpr uint8_t UBX_LOG_RETRIEVE_ID_ = 0x09;
static constexpr uint8_t UBX_LOG_RETRIEVEPOS_ID_ = 0x0b;
static constexpr uint8_t UBX_LOG_RETRIEVEPOSEXTRA_ID_ = 0x0f;
static constexpr uint8_t UBX_LOG_RETRIEVESTRING_ID_ = 0x0d;
static constexpr uint8_t UBX_LOG_STRING_ID_ = 0x04;

}  // namespace bfs

#endif  // SRC_UBX_LOG_H_
