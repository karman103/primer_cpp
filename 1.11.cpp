#include <iostream>
int main () {
    int x , y ;
    std::cin >> x >> y;
    if (y < x) {
        int temp = x;
        x= y;
        y = temp;
    }

    while(x < y - 1) {
        x++;
        std::cout << x <<std::endl;
    }
}