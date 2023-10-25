#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    double roof_length, ground_length, angle, ans, r, answer;
    double pi = 3.141;

    printf("비닐의 길이(m) : ");
    scanf("%lf", &roof_length);
    printf("땅 길이(m) : ");
    scanf("%lf", &ground_length);

    for (angle = 0; angle < 90; angle = angle + 0.001)
    {
        ans = angle / (sin(angle * pi / 180));

        if (ans < roof_length * 180 / pi / ground_length + 0.001 && ans > roof_length * 180 / pi / ground_length - 0.001)
            break;
    }

    r = ground_length / 2 / (sin(angle * pi / 180));

    answer = r - r * (cos(angle * pi / 180));
    printf("각도 : %.3lf m \n", angle);
    printf("필요한 기둥의 높이 : %.3lf m \n", answer);
}
