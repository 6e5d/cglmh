// debug printing functions
#include <stdio.h>
#include <cglm/cglm.h>

#include "../include/debug.h"

void cglmh_debug_vec3(vec3 v) {
	fprintf(stderr, "%f %f %f\n",
		(double)v[0],
		(double)v[1],
		(double)v[2]);
}
