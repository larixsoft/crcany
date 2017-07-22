#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#if defined(WIN32) || defined (_WINDOWS) || defined(WIN32)
#include <io.h>
#include <direct.h>
#else
#include <unistd.h>
#endif
#include "model.h"
#include "crc.h"

#ifdef __cplusplus
extern "C" {
#endif

void crc_gen(model_t *model, char *name, FILE *head, FILE *code, FILE *defs, FILE *test);
char *crc_name(model_t *model);
int create_source(char *src, char *name, FILE **head, FILE **code);


#ifdef __cplusplus
}
#endif