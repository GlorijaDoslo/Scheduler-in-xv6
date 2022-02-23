//
// Created by os on 1/3/22.
//

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    if(argc < 4){
        chSched(0, 0, 50);  //default parameters
        exit(0);
    }
    chSched(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));

    exit(0);
}