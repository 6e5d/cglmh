#ifndef INCLUDEGUARD_CGLMH
#define INCLUDEGUARD_CGLMH

#include <cglm/cglm.h>

typedef mat3 CglmMat3;
typedef vec3 CglmVec3;

void cglmh_debug_vec3(CglmVec3 v);
void cglmh_debug_mat3(CglmMat3 v);

void cglmh_mat3_add(CglmMat3 a, CglmMat3 b, CglmMat3 c);
void cglmh_mat3_diagonal(CglmVec3 v, CglmMat3 m);

#endif
