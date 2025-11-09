#include <cassert>
#include "../include/example.h"

int main() {
    assert(example::add(2,3) == 5);
    assert(example::add(-1,1) == 0);
    return 0;
}
