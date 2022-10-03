#include "dfl/dfl.hpp"

using namespace dfl;

extern "C" void app_main(void) {
    mod::take(100, gen::counter<int32_t>())
    >>= pipe::transform([](int i){ return i + 1; })
    >>= sink::printf("%d\n");
}
