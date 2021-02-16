#include <bits/stdc++.h>

using namespace std;

// 1 <= N, X <= 10,000
void func1(void)
{
    int N, X;

    cin >> N >> X;

    int arr[N];
    int temp = 0;

    while(temp < N)
        cin >> arr[temp++];

    temp = 0;

    while(temp < N)
    {
        if(arr[temp] < X)
            cout << arr[temp] << ' ';
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