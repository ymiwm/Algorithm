#include <bits/stdc++.h>

int main(void)
{
    int A, B, C;
    std::vector<int> vec(10, 0);
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::string str = std::to_string(A*B*C);
    for(int i = 0; i < str.size(); i++)
        vec.at(std::stoi(str.substr(i, 1)))++;
    for(int i = 0; i < 10; i++)
        std::cout << vec.at(i) << '\n';
}