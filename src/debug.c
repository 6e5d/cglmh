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

void cglmh_debug_mat3(mat3 v) {
	size_t i, j;
	for (i = 0; i < 3; i += 1) {
		for (j = 0; j < 3; j += 1) {
			fprintf(stderr, "%f ", (double)v[i][j]);
		}
		fprintf(stderr, "\n");
	}
	fprintf(stderr, "\n");
}
