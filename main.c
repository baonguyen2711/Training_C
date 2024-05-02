#include <stdio.h>
#include "isPrime/func.h"
#include "Print/print.h"
#include "Read/read.h"

int main()
{
    int num, total;
    num = EnterPrime();
    ShowPrime(num);
    ShowSum(num, 1);
    ShowAmount(num, 1);

    ShowNotPrime(num);
    ShowSum(num, 0);
    ShowAmount(num, 0);
}