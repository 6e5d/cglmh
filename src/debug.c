#include <cglm/cglm.h>
#include "../include/cglmh.h"

void cglmh(debug_vec3)(CglmVec3 v) {
	fprintf(stderr, "%f %f %f\n",
		(double)v[0],
		(double)v[1],
		(double)v[2]);
}

void cglmh(debug_mat3)(CglmMat3 m) {
	size_t i, j;
	for (i = 0; i < 3; i += 1) {
		for (j = 0; j < 3; j += 1) {
			fprintf(stderr, "%f ", (double)m[i][j]);
		}
		fprintf(stderr, "\n");
	}
	fprintf(stderr, "\n");
}
