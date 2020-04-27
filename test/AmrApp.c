#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "typedef.h"

//static char g_avrpath[16] = "./111.amr";
//static char g_wavpath[16] = "./222.wav";
static char errs[6][23]={
"0: OK",
"1: open amr file error",
"2: memory not enough",
"3: open wav file error",
"4: decodec init error",
"unkown"
};

int decodeOneAmrFile( char* AmrName , char* WavNAme );
/*
********************************************************************************
*                             MAIN PROGRAM
********************************************************************************
*/
int main (int argc, char *argv[])
{
    if( argc < 3 ){
        printf("user ag: AmrTest.exe  <amrfile> <wavfile>\n");
        return 0 ;
    }
        int ret;
    ret=decodeOneAmrFile (  argv[1] , argv[2] );
    printf("decodeOneAmrFile %s\n",(ret<=sizeof(errs)?errs[ret]:"unkown"));
    return ret;
}
