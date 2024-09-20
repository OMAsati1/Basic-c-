#include<iostream>
using namespace std;

typedef struct employee 
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    enum Meal{breakfast,lunch,dinner};
    Meal m1= lunch;
       cout<<m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    // union money m1;
    // m1.rice = 34;
    // cout<<m1.rice;

    // ep om;
    // om.eId = 55;
    // om.favChar = 'r';   
    // om.salary = 1250000;
    // cout<<om.eId<<endl;
    // cout<<om.favChar<<endl;
    // cout<<om.salary<<endl;
    return 0;
}