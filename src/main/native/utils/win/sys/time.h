#pragma once

#include <time.h>
#ifdef WIN32
    #include <windows.h>
    #include <winsock2.h>
    #include <stdint.h>
#else
    #include <sys/time.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif
 
#ifdef WIN32
int gettimeofday(struct timeval *tp, void *tzp);
void sleep(unsigned int time);
#endif

#ifdef __cplusplus
}
#endif