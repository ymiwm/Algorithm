#include <bits/stdc++.h>

int main(void)
{
    int T, A, B;
    std::cin >> T;
    for(int i = 1; i <= T; i++)
    {
        std::cin >> A >> B;
        std::cout << "Case #" << i << ": " << A+B << '\n';
    }
}