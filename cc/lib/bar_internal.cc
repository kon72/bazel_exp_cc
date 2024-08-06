#include "cc/lib/bar_internal.h"

#include <string>

#include "cc/lib/foo.h"

extern "C" void BarInternal(void* ctx) {
  reinterpret_cast<std::string*>(ctx)->append("BarInternal { ");
  Foo(ctx);
  reinterpret_cast<std::string*>(ctx)->append(" }");
}
