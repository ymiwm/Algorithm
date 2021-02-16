#include <bits/stdc++.h>

int main(void)
{
    int N, ten, one, temp;
    int cycle = 0;
    std::cin >> N;
    if(N < 10)
    {
        one = N;
        ten = 0;
    }   
    else
    {
        one = N % 10;
        ten = (N - one) / 10;
    }
    temp = (one * 10) + ((ten + one) % 10);
    cycle++;
    while(true)
    {
        one = temp % 10;
        ten = (temp - one) / 10;
        if(N == temp)
            break;
        else
            temp = (one * 10) + ((ten + one) % 10);
        cycle++;
    }
    std::cout << cycle;
}