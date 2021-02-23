#include <bits/stdc++.h>

int main(void)
{
    std::string str;
    std::vector<int> vec(26, -1);
    std::cin >> str;
    for(char i = 'a'; i <= 'z'; i++)
        vec.at(i - 'a') = str.find(i);
    for(int i = 0; i < 26; i++)
        std::cout << vec.at(i) << ' ';
}