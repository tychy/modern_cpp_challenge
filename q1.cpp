#include <iostream>
typedef unsigned int digit;

int main(){
    digit n;
    std::cout << "input number :";
    std::cin >> n;

    unsigned long long sum = 0;
    for (digit i = 0; i < n; i++)
    {
        if (((i % 3) == 0) || ((i % 5) == 0))
        {
            sum = sum + i;
        }
        
    }
    
    std::cout << sum << "\n";
    return 0;
}