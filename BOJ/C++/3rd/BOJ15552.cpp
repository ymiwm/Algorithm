#include <bits/stdc++.h>

int main(void)
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    int T, A, B;
    std::cin >> T;
    for(int i = 0; i < T; i++)
    {
        std::cin >> A >> B;
        std::cout << A+B << '\n';
    }

    // REF
    // std::cin.tie(NULL); : https://www.cplusplus.com/reference/iostream/cin/?kw=cin
    // std::ios::sync_with_stdio(false); : http://www.cplusplus.com/reference/ios/ios_base/sync_with_stdio/
}