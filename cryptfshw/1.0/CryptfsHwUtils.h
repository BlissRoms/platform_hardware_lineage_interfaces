/*
 * Copyright (C) 2019 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <cstddef>

namespace vendor {
namespace qti {
namespace hardware {
namespace cryptfshw {
namespace V1_0 {
namespace implementation {

void* secure_memset(void* v, int c, size_t n);
size_t memscpy(void* dst, size_t dst_size, const void* src, size_t src_size);

}  // namespace implementation
}  // namespace V1_0
}  // namespace cryptfshw
}  // namespace hardware
}  // namespace qti
}  // namespace vendor
