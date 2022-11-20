#include "dfl/dfl.hpp"

using namespace dfl;

extern "C" void app_main(void) {
  int64_t maxSeen = 0;

  gen::range(0,100,1)
  >>= pipe::filter(_greater_than(50))
  >>= rdir::fork(
    sink::max(maxSeen),
    sink::printf("%d\n"));

  printf("Max seen: %lld\n", maxSeen);
}
