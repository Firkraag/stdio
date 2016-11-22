/*************************************************************************
	> File Name: stdio.c
	> Author: 
	> Mail: 
	> Created Time: Fri 04 Nov 2016 10:37:00 PM CST
 ************************************************************************/

#include "stdio.h"

FILE _iob[OPEN_MAX] = { 
    {0, (char *) 0, (char *) 0, {1, 0, FULLBUF, 0, 0}, 0}, 
	{0, (char *) 0, (char *) 0, {0, 1, LINEBUF, 0, 0}, 1}, 
	{0, (char *) 0, (char *) 0, {0, 1, UNBUF, 0, 0}, 2}
};

