#include "cc/lib/foo_internal.h"

#include <string>

extern "C" void FooInternal(void* ctx) {
  reinterpret_cast<std::string*>(ctx)->append("FooInternal");
}
