#include<iostream>
using namespace std;
class car {
    public :
    string name;
    int price;
    int seats;
    
};
void print(car c) {
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<endl;
}
int main() {
    car c1;
    c1.name="bmw";
    c1.price=2000000;
    c1.seats=5;
     car c2;
    c2.name="rolles royce";
    c2.price=2000000000;
    c2.seats=3;
    
print(c1);
print(c2);
    
}
