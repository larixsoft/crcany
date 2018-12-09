#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#if defined(_MSC_VER)
#include <io.h>
#include <direct.h>
#else
#include <unistd.h>
#endif
#include "model.h"
#include "crc.h"
#ifdef BUILD_SUMX
// Define WORD_BIT and LONG_BIT for a non-POSIX-compliant limit.h. Also define
// similar constants SHRT_BIT and INTMAX_BIT.
#ifndef SHRT_BIT
#  if SHRT_MAX == 127
#    define SHRT_BIT 8
#  elif SHRT_MAX == 32767
#    define SHRT_BIT 16
#  elif SHRT_MAX == 2147483647
#    define SHRT_BIT 32
#  elif SHRT_MAX == 9223372036854775807
#    define SHRT_BIT 64
#  else
#    error Unexpected integer size
#  endif
#endif
#ifndef WORD_BIT
#  if INT_MAX == 32767
#    define WORD_BIT 16
#  elif INT_MAX == 2147483647
#    define WORD_BIT 32
#  elif INT_MAX == 9223372036854775807
#    define WORD_BIT 64
#  else
#    error Unexpected integer size
#  endif
#endif
#ifndef LONG_BIT
#  if LONG_MAX == 32767
#    define LONG_BIT 16
#  elif LONG_MAX == 2147483647
#    define LONG_BIT 32
#  elif LONG_MAX == 9223372036854775807
#    define LONG_BIT 64
#  else
#    error Unexpected integer size
#  endif
#endif
#ifndef INTMAX_BIT
#  if INTMAX_MAX == 32767
#    define INTMAX_BIT 16
#  elif INTMAX_MAX == 2147483647
#    define INTMAX_BIT 32
#  elif INTMAX_MAX == 9223372036854775807
#    define INTMAX_BIT 64
#  else
#    error Unexpected integer size
#  endif
#endif
#endif
#ifdef __cplusplus
extern "C" {
#endif

void crc_gen(model_t *model, char *name, FILE *head, FILE *code, FILE *defs, FILE *test);
char *crc_name(model_t *model);
int create_source(char *src, char *name, FILE **head, FILE **code);


#ifdef __cplusplus
}
#endif