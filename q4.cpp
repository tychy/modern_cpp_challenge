#include <iostream>
#include <cmath>
typedef unsigned int digit;

digit isprime(digit n){
    for (digit i = 2; i < (std::sqrt(n)); i++)
    {
        if ((n - (n / i) * i) == 0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    digit n;
    std::cout << "input number :";
    std::cin >> n;
    if (n <= 3)
    {
        std::cout << "prime : " << n << "\n";
    }
    
    for (digit i = n - 1; i > 1; i--)
    {
        if (isprime(i))
        {
            std::cout << "prime : " << i << "\n";
            return 0;
        }
        
    }
    
    std::cout << 1 << "\n";
    return 0;
}