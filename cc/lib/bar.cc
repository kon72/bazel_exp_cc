#include "cc/lib/bar.h"

#include <string>

#include "cc/lib/bar_internal.h"
#include "cc/lib/foo.h"

extern "C" void Bar(void* ctx) {
  reinterpret_cast<std::string*>(ctx)->append("Bar { ");
  BarInternal(ctx);
  reinterpret_cast<std::string*>(ctx)->append(" ");
  Foo(ctx);
  reinterpret_cast<std::string*>(ctx)->append(" }");
}
