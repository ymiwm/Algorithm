#include <bits/stdc++.h>

int main(void)
{
    int A, B;
    std::cin >> A >> B;
    long double C = static_cast<long double>(A)/static_cast<long double>(B);
    std::cout << std::fixed;
    std::cout.precision(9);
    std::cout << C;
    std::cout.unsetf(std::ios::fixed);

    // REF
    // std::cout << std::fixed; : https://www.cplusplus.com/reference/ios/fixed/
    // std::cout.precision(N); : https://www.cplusplus.com/reference/ios/ios_base/precision/?kw=precision
    // std::cout.unsetf(Format); : https://www.cplusplus.com/reference/ios/ios_base/unsetf/?kw=unsetf
}