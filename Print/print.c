#include "print.h"
#include "../isPrime/func.h"

void ShowPrime(int num)
{
    printf("-- Cac so nguyen to la: ");
    for (int i = 1; i <= num; i++)
    {
        int sum;
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void ShowNotPrime(int num)
{
    printf("-- Cac so khong phai nguyen to la: ");
    for (int i = 1; i <= num; i++)
    {
        if (!isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void ShowSum(int num, int prime)
{
    int sum;
    if (prime)
    {
        printf("-- Tong cac so nguyen to la : ");
        sum = isSum(num, 1);
    }
    else
    {
        printf("-- Tong cac so khong phai la so nguyen to : ");
        sum = isSum(num, 0);
    }
    printf("%d\n", sum);
}

void ShowAmount(int num, int prime)
{
    int sum;

    if (prime)
    {
        sum = isAmount(num, 1);
        printf("-- Co tat ca %d so la so nguyen to trong tong so %d so duoc nhap\n", sum, num);
    }
    else
    {
        sum = isAmount(num, 0);
        printf("-- Co tat ca %d so khong phai la so nguyen to trong tong so %d so duoc nhap\n", sum, num);
    }

    printf("%d\n", sum);
}
