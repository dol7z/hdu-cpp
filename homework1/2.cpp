#include <iostream>

int main() {
    int num;
    std::cout << "������һ��������";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << num << " ��ż����" << std::endl;
    } else {
        std::cout << num << " ��������" << std::endl;
    }
    return 0;
}
