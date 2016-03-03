#ifndef __INTTYPES_H__

#define __INTTYPES_H__

#include <math.h>
#include <limits.h>

#if defined(_MSC_VER) 
typedef signed __int8 int8_t; 
typedef signed __int16 int16_t; 
typedef signed __int32 int32_t; 
typedef signed __int64 int64_t; 
typedef unsigned __int8 uint8_t; 
typedef unsigned __int16 uint16_t; 
typedef unsigned __int32 uint32_t; 
typedef unsigned __int64 uint64_t; 

#define __attribute__(A) /* do nothing */

#ifdef  _WIN64
typedef unsigned __int64    ssize_t;
#define SSIZE_MAX _UI64_MAX
#else
typedef _W64 unsigned int   ssize_t;
#define SSIZE_MAX _UI64_MAX
#endif //_WIN64

#define PRIu64 "I64u"
#define PRId64 "I64d"

#if _MSC_VER <= 1600
const double LN2_VAL = log(2.0);

static inline double log2( double n )
{  
    return log( (double)n ) / LN2_VAL;
}
#endif //_MSC_VER <= 1600

#endif //_MSC_VER

#endif //__INTTYPES_H__
