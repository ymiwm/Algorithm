#include <bits/stdc++.h>

int main(void)
{
    int A, B;
    std::cin >> A;
    std::cin >> B;
    int a, b, c;
    a = B%10;
    b = (B%100)-a;
    c = B-(a+b);
    std::cout << A*a << '\n';
    std::cout << A*b/10 << '\n';
    std::cout << A*c/100 << '\n';
    std::cout << A*(a+b+c) << '\n';
}