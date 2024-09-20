#include <iostream>
#include <cstring>
using namespace std;
class CHW
{
protected:
 string title;
  float rating;

public:
  CHW(string s, float r)
  {
    title =s;
    rating = r;
  }
  virtual void display() {}
};
class CWHvedio : public CHW{
  float vedioLength;
  public :
  CWHvedio(string s, float r, float vl  ) : CHW(s,r){
    vedioLength=vl;
  }
  void display(){
  cout<<"This is an amazinng vedio with title "<<title<<endl;
  cout<<"length of teh vedio is: "<<vedioLength<<" minutes"<<endl;
  cout<<"rating out of 5 stars is: "<<rating<<endl;
  }
};
class CWHtext : public CHW{
  int wordCount;
  public :
  CWHtext(string s, float r, int wc  ) : CHW(s,r){
    wordCount=wc;
  }
  void display(){
    cout<<"This is an amazinng text tutorial with title "<<title<<endl;
  cout<<"no. of the words in the text tutorial is : "<<wordCount<<" words"<<endl;
  cout<<"rating of the text tutorial out of 5 stars is : "<<rating<<endl;
  }
};
int main()
{
   string title;
   float rating, vlen;
   int words;
  //  for vedio
   title = "Java tutorial";
   vlen=11.34;
   rating=4.7;
   CWHvedio javaVedio(title, rating, vlen);
  //  javaVedio.display();

  //  for text
   title = "Java tutorial textual";
   words=467;
   rating=4.2;
   CWHtext javaText(title, rating, words);
  //  javaText.display();
  
  CHW*tuts[2];
  tuts[0]=&javaVedio;
  tuts[1]=&javaText;

  tuts[0]->display();
  cout<<"\n";
  tuts[1]->display();
  return 0;
}