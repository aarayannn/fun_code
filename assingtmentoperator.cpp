#include <iostream> 

int main () {
    int a = 10;

    //asingnment 
    a %= 5;
    std::cout << "nilai asiigntment : " << std::endl;
    std::cout << a << std::endl;

    a -= 2;
    std::cout << "nilai assginment : " << std::endl;
    std::cout << a << std::endl;

    a += 1;
    std::cout << "nilai assingnment : " << std::endl;
    std::cout << a << std::endl;

    a /= 5;
    std::cout << "nilai assingtment" << std::endl;
    std::cout << a << std::endl;

    a *= 2;
    std::cout << "nilai assingtment" << std::endl;
    std::cout << a << std::endl;

    //postincrement

    a = 5;
    std::cout << "postincrement" << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    //preincrement

    int b = 3;
    std::cout <<  "preincrement"  << std::endl;
    std::cout << b << std::endl;
    std::cout << ++b << std::endl;
    std::cout << b << std::endl;





}