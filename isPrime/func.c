#include "func.h"

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int isSum(int num, int prime)
{
    int sum = 0;
    if (prime)
    {
        for (int i = 0; i <= num; i++)
        {
            if (isPrime(i))
            {
                sum += i;
            }
        }
    }
    else
    {
        for (int i = 0; i <= num; i++)
        {
            if (!isPrime(i))
            {
                sum += i;
            }
        }
    }
    return sum;
}

int isAmount(int num, int prime)
{
    int primeCount = 0;
    if (prime)
    {
        for (int i = 1; i <= num; i++)
        {
            if (isPrime(i))
            {
                primeCount++;
            }
        }
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (!isPrime(i))
            {
                primeCount++;
            }
        }
    }
    return primeCount;
}