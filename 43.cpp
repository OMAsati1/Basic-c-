#include<iostream>
using namespace std;
class base1{
  public :
  void greet(){
    cout<<"how are you?"<<endl;
  }  
};
class base2{
  public :
  void greet(){
    cout<<"kaise ho?"<<endl;
  }  
};
class derived : public base1, public base2{
   public: void greet(){
    base1::greet();
   }

};
  class B{
       public:
    void say(){
        cout<<"good shot"<<endl;
    }
  };
  class D : public B{ 
    // if we comment out following function than it will overwrite the inherited class function
    public:
    void say(){
        cout<<"great dilevery";
    }
  };
int main(){
//   base1 om;
//   om.greet();
//   base2 som;  
//   som.greet(); 
// ambiguity 1 solved
// derived om;
// om.greet();
B k;
k.say();
D h;
h.say();
    return 0;
}