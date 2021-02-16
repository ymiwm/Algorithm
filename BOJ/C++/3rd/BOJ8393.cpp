#include <bits/stdc++.h>

int main(void)
{
    int n, sum;
    sum = 0;
    std::cin >> n;
    for(int i = 1; i <= n; i++)
        sum += i;
    std::cout << sum;
}