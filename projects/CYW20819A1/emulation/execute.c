#include <frankenstein.h>
#include "common.h"
#include "queue.h"

void do_exit() {
   exit(0); 
}

void _start() {
    patch_code();
    idle_loop = do_exit;
    cont();
}
