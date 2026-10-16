#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "이름을 입력하세요: ";
    std::getline(std::cin, name);
    std::cout << "안녕하세요, " << name << "님!" << std::endl;


    return 0;
}
