
#include <stdio.h>

#include <math.h>
int main(void)
{
    float ax, ay, az;  // 첫 번째 벡터 A의 x, y,z 좌표
    float bx, by, bz ;  // 두 번째 벡터 B의 x, y,z 좌표

    // 1. x벡터의 x좌표를 입력
    printf("x벡터의 x좌표를 입력하세요: ");
    scanf_s("%f", &ax);  // 올바른 포맷: %f

    // 2. x벡터의 y좌표를 입력
    printf("x벡터의 y좌표를 입력하세요: ");
    scanf_s("%f", &ay);  // 올바른 포맷: %f

    // 3. x벡터의 z좌표를 입력
    printf("x벡터의 z좌표를 입력하세요: ");
    scanf_s("%f", &az);  // 올바른 포맷: %f

    // 4. y벡터의 x좌표를 입력
    printf("y벡터의 x좌표를 입력하세요: ");
    scanf_s("%f", &bx);  // 올바른 포맷: %f

    // 5. y벡터의 y좌표를 입력
    printf("y벡터의 y좌표를 입력하세요: ");
    scanf_s("%f", &by);  // 올바른 포맷: %f

    // 6. y벡터의 y좌표를 입력
    printf("y벡터의 z좌표를 입력하세요: ");
    scanf_s("%f", &bz);  // 올바른 포맷: %f

    // 5. 내적 계산
    float dotProduct =(ax*bx+ay*by+az*bz);

    //6.외적 계산
    float crossProduct = (ay*bz - az*by, az*bx - ax*bz, ax*by-ay*bx);

    // 6. 결과 출력
    printf("두 벡터의 내적값은: %.2f\n", dotProduct);
    printf("두 벡터의 외적값은: %.2f\n", crossProduct);//



    return 0;
}
