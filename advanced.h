#ifndef ADVANCED_H
#define ADVANCED_H

// 計算 3x3 行列式
float determinant3x3(float m[3][3]);

// 計算 3x3 伴隨矩陣 (Adjoint matrix)
void adjoint3x3(float m[3][3], float out[3][3]);

#endif
