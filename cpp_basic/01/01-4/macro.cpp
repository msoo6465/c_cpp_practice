#include <stdio.h>

#define XN(t) x ## t

#define PRT_XN(n) printf("x"#n"�� ����� ���� %d�Դϴ�.\n", x ## n)  



int macro(void)

{

    int XN(1) = 10;

    int XN(2) = 20;



    PRT_XN(1);

    PRT_XN(2);

    return 0;

}