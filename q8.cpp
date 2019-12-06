#include <iostream>
#include <cmath>
typedef unsigned int digit;

digit triple(digit n){
    return (n == 0)? 0 : std::pow((n % 10), 3) + triple(n / 10);
}

digit isnarcissistic(digit n){
    return n == triple(n);
}

int main(){
    for (digit i = 100; i < 1000; i++)
    {
        if(isnarcissistic(i)){
            std::cout << i << "\n";
        }
    }
    return 0;
}