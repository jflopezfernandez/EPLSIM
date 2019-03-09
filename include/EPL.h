
#ifndef EPL_INCLUDES_EPL_H_
#define EPL_INCLUDES_EPL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include <gmp.h>
#include <mpfr.h>

#include "File.h"
#include "String.h"
#include "Random.h"

#define INITIALIZE_RANDOM_NUMBER_GENERATOR(seed) srand(time(seed))

#endif // EPL_INCLUDES_EPL_H_
