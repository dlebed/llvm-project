//===---- Instrumentor/UnreachableRT.c - An example Instrumentor use -----===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
//
//===----------------------------------------------------------------------===//

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

extern "C" {
void __unreachable_pre_unreachable(int64_t ID) { 
  printf("Hit unreachable #%" PRId64 "\n", ID);
  exit(1);
}
}
