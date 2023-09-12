#ifndef TYPEDEF_H_
#define TYPEDEF_H_

#include <stdint.h>

#ifndef R_NULL
    #define R_NULL ((void*)0)
#endif

typedef enum r_bool
{
    r_false = (uint8_t)0,
    r_true  = (uint8_t)1
} r_bool_t;

#endif
