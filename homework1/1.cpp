#include <iostream>

int main() {
    int num1, num2;
    std::cout << "请输入第一个整数：";
    std::cin >> num1;
    std::cout << "请输入第二个整数：";
    std::cin >> num2;
    int choice;
    std::cout << "请选择操作（1:加法，2:减法）：";
    std::cin >> choice;
    if (choice == 1) {
        std::cout << "结果：" << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    } else if (choice == 2) {
        std::cout << "结果：" << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    
    }
    return 0;
}
