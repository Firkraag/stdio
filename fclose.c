#include <unistd.h>
#include <stdlib.h>
#include "stdio.h"


int fclose(FILE *fp) {
    int ret = fflush(fp);
	free(fp->base);
	if (close(fp->fd))
        return EOF;
    return ret;
}
