#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    
    int randomNumber = rand() % 10 + 1;
    int guess;
    int attempts = 0;

    std::cout << "������һ�� 1 �� 10 ֮������֣����һ�£�" << std::endl;
    do {
        std::cout << "��Ĳ²⣺";
        std::cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            std::cout << "��С�ˣ�������һ�Ρ�" << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "�´��ˣ�������һ�Ρ�" << std::endl;
        }
    } while (guess!= randomNumber);

    std::cout << "��ϲ�㣬�¶��ˣ����ܹ����� " << attempts << " �Ρ�" << std::endl;

    return 0;
}
