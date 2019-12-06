#include <iostream>
typedef unsigned int digit;


digit gcd(digit k, digit l){
    if (k % l)
    {
        return gcd(l, k % l);
    }
    else
    {
        return l;
    }
    
    return k % l;
}


digit lcm(digit k, digit l){
    return k * l / gcd(k, l);
}

int main(){
    digit n, m;
    std::cout << "input number 1 :";
    std::cin >> n;
    std::cout << "input number 2 :";
    std::cin >> m;
    std::cout << "gcd : " << lcm(n, m) << "\n";
}
