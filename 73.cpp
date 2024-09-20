#include <iostream>
#include <map>
#include <string>
using namespace std;
// map is an associative array
int main()
{
    map<string, int> marks;
    marks["om"] = 97;
    marks["david"] = 77;
    marks["rohan"] = 57;
    marks.insert({{"lazbirth",99},{"zacky",57},});
    map<string, int> :: iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
       cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"size of the map is: "<<marks.size()<<endl;
    cout<<"max size is : "<<marks.max_size()<<endl;
    cout<<"The empty return value is: "<<marks.empty()<<endl;

    return 0;
}