#include "advanced.h"

// 計算 3x3 行列式
float determinant3x3(float m[3][3]) {
    float det = 0.0;

    det =
        m[0][0] * (m[1][1]*m[2][2] - m[1][2]*m[2][1]) -
        m[0][1] * (m[1][0]*m[2][2] - m[1][2]*m[2][0]) +
        m[0][2] * (m[1][0]*m[2][1] - m[1][1]*m[2][0]);

    return det;
}

// 計算 3x3 矩陣的余子式 Cofactors
static void cofactor3x3(float m[3][3], float out[3][3]) {
    out[0][0] =  (m[1][1]*m[2][2] - m[1][2]*m[2][1]);
    out[0][1] = -(m[1][0]*m[2][2] - m[1][2]*m[2][0]);
    out[0][2] =  (m[1][0]*m[2][1] - m[1][1]*m[2][0]);

    out[1][0] = -(m[0][1]*m[2][2] - m[0][2]*m[2][1]);
    out[1][1] =  (m[0][0]*m[2][2] - m[0][2]*m[2][0]);
    out[1][2] = -(m[0][0]*m[2][1] - m[0][1]*m[2][0]);

    out[2][0] =  (m[0][1]*m[1][2] - m[0][2]*m[1][1]);
    out[2][1] = -(m[0][0]*m[1][2] - m[0][2]*m[1][0]);
    out[2][2] =  (m[0][0]*m[1][1] - m[0][1]*m[1][0]);
}

// 計算 3x3 伴隨矩陣 (adjoint matrix = cofactor matrix 的 transpose)
void adjoint3x3(float m[3][3], float out[3][3]) {
    float cof[3][3];
    cofactor3x3(m, cof);

    // 轉置 cofactor 得到 adjoint
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            out[j][i] = cof[i][j];
        }
    }
}
