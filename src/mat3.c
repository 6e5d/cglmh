#include <stddef.h>
#include <string.h>
#include <cglm/cglm.h>

#include "../include/mat3.h"

void cglmh_mat3_add(mat3 a, mat3 b, mat3 c) {
	size_t i, j;
	for (i = 0; i < 3; i += 1) {
		for (j = 0; j < 3; j += 1) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void cglmh_mat3_diagonal(vec3 v, mat3 m) {
	memset(m, 0, sizeof(float) * 9);
	m[0][0] = v[0];
	m[1][1] = v[1];
	m[2][2] = v[2];
}
