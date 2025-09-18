#ifndef INIT_H
#define INIT_H


#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <errno.h>

typedef enum
{
        LIN_INIT_SUCCESS = 0,
        LIN_INIT_ALREADY = 1,
        LIN_INIT_FAILED = 2,

} LIN_INIT_RES;


LIN_INIT_RES                        init();






#endif
