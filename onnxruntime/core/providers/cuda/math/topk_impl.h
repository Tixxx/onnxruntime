// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include <stdint.h>
#include "core/providers/cuda/shared_inc/cuda_utils.h"
#include "core/common/common.h"

namespace onnxruntime {
namespace cuda {

template <typename T>
Status TopKImpl(const T* input_x, T* output_v, int64_t* output_i, const int64_t* elem_nums, int64_t size, int64_t axis, int64_t K, int64_t largest, int64_t sorted);

}  // namespace cuda
}  // namespace onnxruntime