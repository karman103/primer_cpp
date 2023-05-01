#include <iostream>
int main() {
    std::cout << "Enter two arguments";
    std::cout <<std::endl;
    int  x, y;
    std::cin >> x;
    std::cin>>y;
    std::cout<< "The product of ";
    std::cout << x;
    std::cout<< " and ";
    std::cout << y;
    std::cout << " is ";
    std::cout << x*y;
    std::cout<< std::endl;
    return 0 ;
}