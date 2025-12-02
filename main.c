#include<stdio.h>
int add(int a, int b) {
    return a + b;
}       
int add_float(float a, float b) {
    return a + b;
}       

int main() {
    int a=5;
    int b=13;
    int a=5.5;
    int b=13.2;
    printf("%d + %d =%d\n",a,b,add(a,b));
    printf("%f + %f =%f\n",a,b,add_float(a,b));
    return 0;
}