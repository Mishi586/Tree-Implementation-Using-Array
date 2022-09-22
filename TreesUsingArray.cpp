#include <iostream>
using namespace std;
class Tree{
  int Ar[10];
  public:
  Tree()
  {
      for(int i=0;i<10;i++)
      {
         Ar[i]='\0'; 
      }
  }
  bool isEmpty(){
      for(int i=0;i<10;i++)
      {
          if(Ar[i]=='\0')
          {
      return true;
      
      }
      else
      {
      return false;
      }
  }
  }
  void addRoot(char val)
  {
      if(Ar[0]!='\0')
      {
          cout<<"Tree is not empty!!";
          
      }
      else
      {
          Ar[0]=val;
      }
  }
  void printArray()
  {
      for(int i=0;i<10;i++)
      {
          if(Ar[i]!='\0')
          {
              cout<<Ar[i]<<endl;
          }
          else
          {
              cout<<"->";
      }
  }
  }
  void LeftElement(char e,int pos)
  {
      if(Ar[pos]=='\0')
      {
          cout<<"This is Empty!"<<endl;
      }
      else
      {
          Ar[(pos*2)+1]=e;
      }
  }
  void rightElement(char x,int pos)
  {
      if(Ar[pos]=='\0')
      {
          cout<<"Empty"<<endl;
      }
      else
      {
          Ar[(pos*2)+2]=x;
      }
  }
};
int main() {
    Tree t;
    cout<<t.isEmpty();
    cout<<"\n";
    t.addRoot('3');
     t.LeftElement('2',0);
     t.rightElement('5',0);
     cout<<t.isEmpty();
     cout<<"\n";
     
      t.printArray();
}
