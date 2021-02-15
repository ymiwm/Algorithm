#include <bits/stdc++.h>

int main(void)
{
    int A;
    std::cin >> A;
    if(A >= 90 && A <= 100)
        std::cout << 'A';
    else if(A >= 80 && A <= 89)
        std::cout << 'B';
    else if(A >= 70 && A <= 79)
        std::cout << 'C';
    else if(A >= 60 && A <= 69)
        std::cout << 'D';    
    else
        std::cout << 'F';
}