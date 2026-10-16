#include <iostream>

int main()
{
    int num1, num2;
    std::cout << "첫번째 수 :";
    std::cin >> num1;
    std::cout << ", 두번째 수 :";
    std::cin >> num2;
    if (num2 == 0)
    {
        std::cerr << "두번째 수는 0을 입력할 수 없습니다." << std::endl;
        return 1;
    }
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
    std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;


    return 0;
}
