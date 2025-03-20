#include <iostream>

int main () {
    int a = 3;

    //while dengan komparasi
    // while (a <= 10) {
    //     ++a; //postincrement
    //     std::cout << "halo " << a << "\n";
    // }
    // //while dengan komparasi
    // while (a > 2) {
    //     a++; //preincrement 
    //     std::cout << "halo " << a << "\n";
    // }

    //do while
    do
    {
        std::cout << "halo " << a << "\n";
    } while (a >= 2);

    std::cout << "-----papay-----\n";

    return 0;
}
