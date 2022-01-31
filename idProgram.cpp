#include <iostream>
#include <unistd.h>

int main() {
    std::cout << "User id: " << getuid();
    std::cout << "Group id: " << getgid();
    return 0;
}
