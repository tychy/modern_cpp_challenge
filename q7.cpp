#include <iostream>
typedef unsigned int digit;

digit sumdiv(digit n){
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
    return sums - n;
}

digit isamicable(digit n, digit m){
    return (n == sumdiv(m))? true : false;
}

int main(){
    digit n;
    std::cout << "input number :";
    std::cin >> n;

    for (digit i = 2; i < n; i++)
    {   
        digit sums = sumdiv(i);
        // std::cout << "pair : " << i << " & " << sums << "\n";
        if (isamicable(i, sums))
        {
            std::cout << "amicable : " << i << " & " << sums << "\n";
        }
    }
    return 0;
}