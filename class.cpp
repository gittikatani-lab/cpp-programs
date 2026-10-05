#include<iostream>
using namespace std;
class student {
    private:
    int a,b,c;
    public:
    int d,e;
void setdata(int x,int y,int z) {
       a=x;
        b=y;
    c=z;}
    void getdata() {
        cout<<"value of a is "<<a<<endl;
         cout<<"value of bis "<<b<<endl;
         cout<<"value of c is "<<c<<endl;
 cout<<"value of d is "<<d<<endl;
         cout<<"value of e is "<<e<<endl;
        
    }
};
int main() {
    student s;
    s.setdata(37,68,89);
    s.d=53;
    s.e=23;
    s.getdata();
    return 0;
}
