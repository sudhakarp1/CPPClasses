#include <iostream>

class Singleton {
private:
    static Singleton* instance; // Pointer to the single instance
    Singleton() {} // Private constructor

public:
    // Public method to access the instance
    static Singleton* getInstance() {
        if (instance==nullptr) {
            instance = new Singleton();
        }
        return instance;
    }
    void showMessage() {
        std::cout << "Hello from Singleton!" << std::endl;
    }
};

// Initialize static member
Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage();

    Singleton* s2 = Singleton::getInstance();
    s2->showMessage();

    // Check if both instances are the same
    std::cout << "Are both instances the same? " << (s1 == s2) << std::endl;

    return 0;
}

