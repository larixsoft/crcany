#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "model.h"
#include "crc.h"

void crc_gen(model_t *model, char *name, FILE *head, FILE *code, FILE *defs, FILE *test);
char *crc_name(model_t *model);
int create_source(char *src, char *name, FILE **head, FILE **code);