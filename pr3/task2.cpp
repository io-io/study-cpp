#include <iostream>

float garm (float a, float b){
    return (2/(((1/a)+(1/b))));
}
int main() {
    float a,b;
    std::cout << "input a and b" << std::endl;
    do {
        std::cin >> a >>b;
        if (((a!=0) && (b!=0)))
        {
               std::cout << "res: "<< garm(a,b) << std::endl;
        }    
    }
    while ((a!=0) && (b!=0));
    return 0;
}