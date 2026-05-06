#include<iostream>
using namespace std;

class Area{
    public:
    int length;
    int width;

    Area(){
        length=0;
        width=0;

    }

    Area(int length,int w){
        this->length=length;
        width=w;
    }

    Area(int s){
        length=s;
        width=s;

    }

    void show(){
        cout<<"Area is: "<<length*width<<endl;
    }
};

// class Area{
//     public:
//     double length;
//     double width;
//     double radius;

//     Area(double length,double width,double radius){
//         length=2;
//         width=3;
//         radius=4;
//     }
    
//     void show(){
//         cout<<"Area of rectangle: "<<length*width<<endl;
//         cout<<"Area of square: "<<length*length<<endl;
//         cout<<"Area of circle: "<<3.14*radius*radius<<endl;
//     }
int main(){
    Area a1;
    a1.show();
    Area a2(5,10);
    a2.show();
    Area a3(7);
    a3.show();
   
    return 0;
}