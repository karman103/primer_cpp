#include <iostream>
int main () {
    int x = 0,sum = 0 ;
    while(std::cin >>x) {
        sum += x ;
    }
    std::cout << sum << std::endl;
    return 0;
}