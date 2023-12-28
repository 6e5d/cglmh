#include <cglm/cglm.h>
#include "../include/cglmh.h"

void cglmh(mat3_add)(CglmMat3 a, CglmMat3 b, CglmMat3 c) {
	size_t i, j;
	for (i = 0; i < 3; i += 1) {
		for (j = 0; j < 3; j += 1) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void cglmh(mat3_diagonal)(CglmVec3 v, CglmMat3 m) {
	memset(m, 0, sizeof(float) * 9);
	m[0][0] = v[0];
	m[1][1] = v[1];
	m[2][2] = v[2];
}
