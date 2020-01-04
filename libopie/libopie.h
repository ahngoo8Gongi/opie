#include "opie_cfg.h"
#include "opie.h"

VOIDRET opiehashlen FUNCTION((algorithm, in, out, n), int algorithm AND VOIDPTR in AND VOIDPTR out AND int n);
int opieinsecure FUNCTION_NOARGS;
int opieunlock FUNCTION_NOARGS;
int opienewseed FUNCTION((seed), char *seed);
VOIDRET opieversion FUNCTION_NOARGS;
