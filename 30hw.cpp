//create a function which takes two point objects and computes the distance between those two points
//Hint :make it a friend function
#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x ,y ;
    friend void distance(point o1 ,point o2 );
    public:
    point (int a ,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
void distance(point o1 ,point o2){
    cout<<"The distance between 2 given points is "<<endl;
    float dist;
dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));
cout<<dist<<endl;
}
int main()
{
   point p(4,12);
   p.display();
   point q(34,3);
   q.display(); 
   distance(p,q);

    return 0;
}