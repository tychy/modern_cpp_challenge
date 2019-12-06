#include <iostream>
typedef unsigned int digit;

digit isabundant(digit n){
    digit sums = 0;
    for (digit i = 1; i * i <= n; i++)
    {
        if (n == (i * (n / i)))
        {
            if (i == (n / i))
            {
                sums += i;
            }
            else
            {
                sums += i + (n / i);
            }
        }
    }
    return (sums > (n * 2))? true : false;
}

int main(){
    digit n;
    std::cout << "input number :";
    std::cin >> n;

    for (digit i = 2; i < n; i++)
    {
        if (isabundant(i))
        {
            std::cout << "abundant : " << i << "\n";
        }
    }
    return 0;
}