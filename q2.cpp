#include <iostream>
typedef unsigned int digit;

digit gcd(digit k, digit l){
    return (k % l)? gcd(l, k % l) : l;
}

int main(){
    digit n, m;
    std::cout << "input number 1 :";
    std::cin >> n;
    std::cout << "input number 2 :";
    std::cin >> m;
    std::cout << "gcd : " << gcd(n, m) << "\n";
}
