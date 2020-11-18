#include "opie_cfg.h"
#include "opie.h"

VOIDRET opiehashlen FUNCTION((algorithm, in, out, n), int algorithm AND VOIDPTR in AND VOIDPTR out AND int n);
int opieinsecure FUNCTION_NOARGS;
int opienewseed FUNCTION((seed), char *seed);
int opieunlock FUNCTION_NOARGS;
VOIDRET opieversion FUNCTION_NOARGS;

static char *algnames[] = { NULL, NULL, NULL, "SHA-1", "MD4", "MD5" };
static char *algids[] = { NULL, NULL, NULL, "sha1", "md4", "md5" };

