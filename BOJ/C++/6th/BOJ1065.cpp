#include <bits/stdc++.h>

int cal(std::string str, int index)
{
    return stoi(str.substr(index, 1));
}

void func(int N)
{
    std::string str;
    int cd, temp;
    int count = 0;
    str = std::to_string(N);
    if(str.size() > 2)
    {
        count += 99;
        for(int i = 100; i <= N; i++)
        {
            str = std::to_string(i);
            cd = cal(str, 1) - cal(str, 0);
            temp = cal(str, 1);
            for(int j = 2; j < str.size(); j++)
            {
                if(cd != cal(str, j) - temp)
                   break;
                else
                    temp = cal(str, j);
                if(j == str.size() - 1)
                    count++;
            }
        }
    }
    else
        count = N;
    std::cout << count;
}

int main(void)
{
    int N;
    std::cin >> N;
    func(N);
}