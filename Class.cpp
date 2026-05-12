#include <iostream>
using namespace std;
const float pi = 3.14;
class circumference 
{
    float radius; 
    float circle;
    public:
    void area();

};
void circumference :: area()
    {
        std::cout << "Enter radius : ";
        std::cin >> radius; 
        std::cout << radius;
        circle = 2 * pi * radius; 
        std::cout << " Area of circle is : "<<circle;
    }
int main() {
    
     circumference cir; 
     cir.area();

    return 0;
}
