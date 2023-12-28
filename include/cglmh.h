#ifndef INCLUDEGUARD_CGLMH
#define INCLUDEGUARD_CGLMH

#include <cglm/cglm.h>
#define CglmMat3 mat3
#define CglmVec3 vec3

void cglmh(debug_vec3)(CglmVec3 v);
void cglmh(debug_mat3)(CglmMat3 v);
void cglmh(mat3_add)(CglmMat3 a, CglmMat3 b, CglmMat3 c);
void cglmh(mat3_diagonal)(CglmVec3 v, CglmMat3 m);

#endif
