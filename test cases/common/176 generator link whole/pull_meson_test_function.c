#include "export.h"
#include "meson_test_function.h"

int DLL_PUBLIC function_puller() {
    return meson_test_function();
}
