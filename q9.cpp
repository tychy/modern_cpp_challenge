#include <iostream>
typedef unsigned int digit;

digit coutprimes(digit n){
    for (digit i = 2; i * i <= n; i++)
    {
        if (n == (i * (n / i))){
            std::cout << i << "\n";
            return coutprimes(n / i);
        }
    }
    std::cout << n << "\n";
    return 0;
}

int main(){
    digit n;
    std::cout << "input number :";
    std::cin >> n;
    coutprimes(n);
    return 0;
}