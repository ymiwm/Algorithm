#include <bits/stdc++.h>

int main(void)
{
    int H, M;
    std::cin >> H >> M;
    if(M-45 < 0)
    {
        if(H-1 < 0)
            H = 23;
        else
            H -= 1;
        M += 15;
    }
    else
        M -= 45;
    std::cout << H << ' ' << M;
}