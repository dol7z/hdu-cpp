#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    
    int randomNumber = rand() % 10 + 1;
    int guess;
    int attempts = 0;

    std::cout << "我想了一个 1 到 10 之间的数字，请猜一猜：" << std::endl;
    do {
        std::cout << "你的猜测：";
        std::cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            std::cout << "猜小了，请再试一次。" << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "猜大了，请再试一次。" << std::endl;
        }
    } while (guess!= randomNumber);

    std::cout << "恭喜你，猜对了！你总共猜了 " << attempts << " 次。" << std::endl;

    return 0;
}
