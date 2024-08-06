#include <iostream>
#include <string>

#include "cc/lib/bar.h"

int main() {
  std::string ctx;
  Bar(&ctx);
  std::cout << ctx << '\n';
  return 0;
}
