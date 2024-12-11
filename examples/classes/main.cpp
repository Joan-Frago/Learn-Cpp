#include <iostream>

class Functions {
    public:
    std::string func1() {
        return "function 1";
    }
};

int main() {
    std::string output;

    Functions functions;

    output = functions.func1();
    std::cout << output;
    
    return 0;
}