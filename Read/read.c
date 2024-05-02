#include "read.h"

int EnterPrime()
{
    int num;
    char input[100];

    printf("Nhap so luong : ");
    fgets(input, sizeof(input), stdin);

    if (strlen(input) == 1 && input[0] == '\n')
    {
        printf("==> Ban khong nhap gi.Vui long nhap lai .\n");
        return EnterPrime();
    }

    if (sscanf(input, "%d", &num) != 1)
    {
        printf("==> Khong duoc nhap ki tu.Vui long nhap lai.\n");
        return EnterPrime();
    }

    return num;
}