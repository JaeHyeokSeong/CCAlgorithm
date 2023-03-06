#include <iostream>
#include <stdlib.h>
#include "MyVector.hpp"

enum options {
    getSize = 1,
    getCapacity,
    pushBack,
    popBack,
    back,
    empty,
    clear,
    finish
};

void menu() {
    std::cout << "[1] getSize\n";
    std::cout << "[2] getCapacity\n";
    std::cout << "[3] pushBack\n";
    std::cout << "[4] popBack\n";
    std::cout << "[5] back\n";
    std::cout << "[6] empty\n";
    std::cout << "[7] clear\n";
    std::cout << "[8] finish\n";
}

int readInput(std::string txt) {
    int input;
    std::cout << txt;
    std::cin >> input;
    return input;
}

void test() {
    MyVector v;
    while(true) {
        menu();
        int input = readInput("=> ");
        switch (input) {
            case getSize:
                std::cout << v.getSize() << '\n';
                break;
            case getCapacity:
                std::cout << v.getCapacity() << '\n';
                break;
            case pushBack:
                v.pushBack(readInput("enter value: "));
                break;
            case popBack:
                try {
                    v.popBack();
                } catch (std::out_of_range& e) {
                    std::cout << e.what() << '\n';
                }
                break;
            case back:
                try {
                    std::cout << v.back() << '\n';
                } catch (std::out_of_range& e) {
                    std::cout << e.what() << '\n';
                }
                break;
            case empty:
                std::cout << "is empty " << v.empty() << '\n';
                break;
            case clear:
                system("clear");
                break;
            case finish:
                return;
            default:
                std::cout << "[warning] invalid input\n";
        }
    }
}

int main() {
    test();
    return 0;
}
