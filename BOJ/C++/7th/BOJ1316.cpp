// 이게 왜 되지

#include <bits/stdc++.h>

int main(void)
{
    int N;
    int count = 0;
    std::cin >> N;
    std::string str;
    std::vector<bool> flag(26, false);
    for(int i = 0; i < N; i++)
    {
        std::cin >> str;
        for(int j = 0; j < str.size(); j++)
        {
            if(flag.at(str.at(j) - 'a') == false)
            {
                for(int k = j; k < str.size(); k++)
                {
                    // flag.at(str.at(j) - 'a') = true; to line 26
                    if(str.at(j) == str.at(k))
                        continue;
                    else
                    {
                        flag.at(str.at(j) - 'a') = true; //
                        j = k - 1;
                        break;
                    }
                }
            }
            else
                break;
            if(j == str.size() - 1)
                count++;
        }
        flag.assign(26, false);
    }
    std::cout << count;
}