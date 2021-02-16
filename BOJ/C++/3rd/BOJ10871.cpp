#include <bits/stdc++.h>

void func1(void)
{
    int N, X;
    std::cin >> N >> X;
    int arr[N];
    int temp = 0;
    while(temp < N)
        std::cin >> arr[temp++];
    temp = 0;
    while(temp < N)
    {
        if(arr[temp] < X)
            std::cout << arr[temp] << ' ';
        temp++;
    }
}

int main(void)
{
    func1();
}

/*
    int N, X, T;
    cin >> N >> X;
    while(N--)
    {
        cin >> T;
        if(T < X)
            cout << T << ' ';
    }
*/