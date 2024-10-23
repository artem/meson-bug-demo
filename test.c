#include <meow.h>

#if __has_include(<private.h>)
#include <private.h>
#endif

#ifdef MEOW
# error oops
#endif


int main() {
    return meow();
}
