#include <iostream>
// https://coding-factory.tistory.com/701
void makeNewLine() {
    std::cout << '\n';
}

class MyVector {
private:
    int* arr;
    int size;
public:
    MyVector() {
        std::cout << "default constructor is called\n";
    }
    MyVector(int size) {
        std::cout << "constructor is called\n";
        arr = new int[size];
        this->size = size;
    }
    // deep copy
    MyVector(const MyVector& _v) {
        std::cout << "deep copy is called\n";
        this->arr = new int[_v.getSize()];
        this->size = _v.getSize();
    }
    ~MyVector() {
        delete[] arr;
    }
    int getSize() const {
        return size;
    }
    void printArrMemoryAddress() {
        std::cout << "memory address: " << arr << '\n';
    }
    MyVector& operator= (const MyVector& other) {
        std::cout << "copy assignment operator is called\n";
        if(this != &other) {
            delete[] arr;
            this->arr = new int[other.getSize()];
            this->size = other.getSize();
        }
        return *this;
    }
};

int main() {
    MyVector v1(10);
    MyVector v2(v1); // copy constructor

    v1.printArrMemoryAddress();
    v2.printArrMemoryAddress();

    makeNewLine();

    MyVector v3 = v1; // copy constructor
    v1.printArrMemoryAddress();
    v3.printArrMemoryAddress();

    makeNewLine();

    MyVector v4;
    v4 = v1; // copy assignment operator
    v1.printArrMemoryAddress();
    v4.printArrMemoryAddress();
    return 0;
}
