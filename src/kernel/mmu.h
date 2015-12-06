/*
Copyright 2014 Akira Midorikawa

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _CYANURUS_MMU_H_
#define _CYANURUS_MMU_H_

#include "lib/type.h"
#include "process.h"

void mmu_init(void);
int mmu_destroy(pid_t pid);
int mmu_alloc(pid_t pid, uint32_t addr, size_t size);
pid_t mmu_set_ttb(pid_t pid);

// implemented in asm/lib.S
void mmu_enable(void);
void mmu_disable(void);

#endif