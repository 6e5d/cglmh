// debug printing functions
#include <cglm/cglm.h>

#include "../include/cglmh.h"
#define NS_NAME(symbol) com_6e5d_cglmh_##symbol

void NS_NAME(debug_vec3)(CglmVec3 v) {
	fprintf(stderr, "%f %f %f\n",
		(double)v[0],
		(double)v[1],
		(double)v[2]);
}

void NS_NAME(debug_mat3)(CglmMat3 m) {
	size_t i, j;
	for (i = 0; i < 3; i += 1) {
		for (j = 0; j < 3; j += 1) {
			fprintf(stderr, "%f ", (double)m[i][j]);
		}
		fprintf(stderr, "\n");
	}
	fprintf(stderr, "\n");
}

#undef NS_NAME
