#include "dfl/dfl.hpp"

using namespace dfl;

extern "C" void app_main(void) {
    gen::range(10)
    >>= pipe::transform([](int i){ return i + 1; })
    >>= sink::printf("%d\n");
}