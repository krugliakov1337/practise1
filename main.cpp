#include <iostream>

int main(){
    int gol;
    std::cout << "Введите гол: ";
    std::cin >> gol;
    for (int i = 1; i <= gol; i++){
        std::cout << "42 $" << i << std::endl;
    }
    return 0;
}