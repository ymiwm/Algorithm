#include <bits/stdc++.h>

int main(void)
{
    std::string strA, strB;
    int A, B;
    std::cin >> strA >> strB;
    reverse(strA.begin(), strA.end());
    reverse(strB.begin(), strB.end());
    A = stoi(strA);
    B = stoi(strB);
    A - B > 0 ? std::cout << strA : std::cout << strB;
}