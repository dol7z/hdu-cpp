#include <iostream>

int main() {
    int num1, num2;
    std::cout << "�������һ��������";
    std::cin >> num1;
    std::cout << "������ڶ���������";
    std::cin >> num2;
    int choice;
    std::cout << "��ѡ�������1:�ӷ���2:��������";
    std::cin >> choice;
    if (choice == 1) {
        std::cout << "�����" << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    } else if (choice == 2) {
        std::cout << "�����" << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    
    }
    return 0;
}
