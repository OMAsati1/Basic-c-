#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(24);
   display(list1);
//    list1.pop_back();
//    display(list1);
//    list1.push_back(67);
//    display(list1);
//    list1.pop_front();
//    display(list1);
//    list1.remove(3);
//    display(list1);

//sorting of list...............................................................
list1.sort();
   display(list1);
    cout<<endl;

    list<int> list2(3);
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=25;
    iter++;
    *iter=75;
    iter++;
    display(list2);
    list2.sort();
    list1.merge(list2);
    cout<<"list1 after merging: ";
   display(list1);
   list1.reverse();
   display(list1);
    return 0;
}