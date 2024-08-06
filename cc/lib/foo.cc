#include "cc/lib/foo.h"

#include <string>

#include "cc/lib/foo_internal.h"

extern "C" void Foo(void* ctx) {
  reinterpret_cast<std::string*>(ctx)->append("Foo { ");
  FooInternal(ctx);
  reinterpret_cast<std::string*>(ctx)->append(" }");
}
