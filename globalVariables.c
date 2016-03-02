
#include "globalVariables.h"

const char binaryStateNames[2]   = {'0', '1'};
const char dnaStateNames[4]      = {'A', 'C', 'G', 'T'};
const char protStateNames[20]    = {'A','R', 'N', 'D', 'C', 'Q', 'E', 'G', 'H', 
				    'I', 'L', 'K', 'M', 'F', 'P', 'S', 'T', 'W', 
				    'Y', 'V'};
const char genericStateNames[32] = {'0', '1', '2', '3', '4', '5', '6', '7', 
				    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
				    'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
				    'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'};


const unsigned int bitVectorAA[23] = {1, 2, 4, 8, 16, 32, 64, 128, 
				      256, 512, 1024, 2048, 4096, 
				      8192, 16384, 32768, 65536, 131072, 262144, 
				      524288, 12 /* N | D */, 96 /*Q | E*/, 1048575 /* - */};

const unsigned int bitVector32[33] = {1,     2,    4,    8,   16,   32,    64,   128,
                                      256, 512, 1024, 2048, 4096, 8192, 16384, 32768,
                                      65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608,
                                      16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648u, 
				      4294967295u};

const unsigned int mask32[32] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 
					262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 
					268435456, 536870912, 1073741824, 2147483648U};