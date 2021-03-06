/*
 *
 * Tencent is pleased to support the open source community by making
 * Hippy available.
 *
 * Copyright (C) 2019 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef CORE_NAPI_NATIVE_SOURCE_CODE_H_
#define CORE_NAPI_NATIVE_SOURCE_CODE_H_

#include <stddef.h>
#include <stdint.h>

#include <string>

namespace hippy {

struct NativeSourceCode {
  const uint8_t* data_;
  size_t length_;  // strlen(data_)
};

const NativeSourceCode GetNativeSourceCode(const std::string& filename);

}  // namespace hippy

#endif  // CORE_NAPI_NATIVE_SOURCE_CODE_H_
