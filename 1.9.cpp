#include <iostream>
int main() {
    int x= 50;
    int y = 0;
    while (x<=100) {
        y+=x;
        x++;
    }
    std::cout<< y<<std::endl;
    
}