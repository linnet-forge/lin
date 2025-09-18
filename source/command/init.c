#include "../include/command/init.h"


LIN_INIT_RES
init()
{

        DIR* dir = opendir(".lin");

        if (dir) {
                printf("The lin system is already initialized");
                closedir(dir);
                return LIN_INIT_ALREADY;
        }


        if (mkdir(".lin", 0755) == 0) {
                printf("The lin system was initialized successfully :)\n");
                return LIN_INIT_SUCCESS;
        }


        else {
                perror("The directory could not be created :(");
                return LIN_INIT_FAILED;
        }


}
