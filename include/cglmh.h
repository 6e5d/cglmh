#ifndef INCLUDEGUARD_CGLMH
#define INCLUDEGUARD_CGLMH

#include <cglm/cglm.h>

void cglmh_debug_vec3(vec3 v);
void cglmh_debug_mat3(mat3 v);

void cglmh_mat3_add(mat3 a, mat3 b, mat3 c);
void cglmh_mat3_diagonal(vec3 v, mat3 m);

#endif
