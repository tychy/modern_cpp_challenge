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
    if (n <= 7)
    {
        std::cout << "input must be bigger than 7" << "\n";
    }
    
    for (digit i = 2; i <= n - 6; i++)
    {
        if ((isprime(i)) && (isprime(i + 6)))
        {
            std::cout << "sexy prime : " << i << " & " << i + 6 << "\n";
        }
        
    }
    return 0;
}