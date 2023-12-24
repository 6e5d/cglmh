#ifndef INCLUDEGUARD_CGLMH
#define INCLUDEGUARD_CGLMH

#include <cglm/cglm.h>
#define NS_NAME(symbol) com_6e5d_cglmh_##symbol
#define CglmMat3 mat3
#define CglmVec3 vec3

void NS_NAME(debug_vec3)(CglmVec3 v);
void NS_NAME(debug_mat3)(CglmMat3 v);

void NS_NAME(mat3_add)(CglmMat3 a, CglmMat3 b, CglmMat3 c);
void NS_NAME(mat3_diagonal)(CglmVec3 v, CglmMat3 m);

#undef NS_NAME
#endif
