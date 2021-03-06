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

#include <test.h>
#include <unistd.h>
#include <errno.h>

int main(void) {
  TEST_START();

  TEST_ASSERT(rmdir("/tmp") == 0);

  TEST_ASSERT(rmdir("/tmp") == -1);
  TEST_ASSERT(errno == ENOENT);

  TEST_ASSERT(rmdir("/sbin") == -1);
  TEST_ASSERT(errno == ENOTEMPTY);

  TEST_CHECK();
  return 0;
}
