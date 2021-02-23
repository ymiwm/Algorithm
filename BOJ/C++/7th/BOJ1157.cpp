#include <bits/stdc++.h>

int main(void)
{
    std::string word;
    int max = 0;
    char index;
    int temp;
    bool flag = false;
    std::vector<int> vec(26, 0);
    std::cin >> word;
    for(int i = 0; i < word.size(); i++)
    {
        if(word.at(i) >= 'a' && word.at(i) <= 'z')
            vec.at(word.at(i)-'a')++;
        else
            vec.at(word.at(i)-'A')++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(max < vec.at(i))
        {
            max = vec.at(i);
            index = i + 'A';
            flag = false;
        }
        else if(max == vec.at(i))
            flag = true;
    }
    if(flag == true)
        std::cout << '?';
    else
        std::cout << index;
}

// By using pointer(*), Could run more efficient time complexity. But unsafe.