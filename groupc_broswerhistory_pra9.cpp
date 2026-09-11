#include <iostream>
#define MAX 5
using namespace std;

class broswer_history
{
  public:
  string history[MAX];
  int top;
  bool flag=1;
  
  broswer_history()
  {
    top=-1;
  }
  
  bool isFull()
    {
        if (top == MAX - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
        
  bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }   
        else
        {
            return false;
        }
    }
  
  void new_page_push(string value)
  {
    if(isFull())
    { 
      cout<<"The history tab is full !"<<endl;
    }
    else
    { 
      top++;
      history[top]=value;
      cout<<" | "<<value<<" | "<<"--> PUSH"<<endl;
    }
  }
  
  void new_page_pop()
  {
    if(isEmpty())
    { 
      cout<<"The history tab is empty !"<<endl;
    }
    else
    { cout<<" | "<<top[history]<<" | "<<"--> Pop"<<endl;
      top--;
    }
  }
  
   void display()
    {
      if(isEmpty())
      { 
      cout<<"The history tab is empty !"<<endl;
      }
      else
      {
        for (int i = top; i >= 0; i--)
        {
          cout<<" | "<<history[i]<<" | "<< endl;
        }
        cout << endl;
        }
    }
  
};

int main()
{
broswer_history bh;
bh.new_page_push("https://www.nmiet.edu.in/wp-content/uploads/2026/08/Curriculum-S.-Y.-B.Tech_.-Computer-Engg-merged-17-8-26.pdf");
bh.new_page_push("https://github.com/Samarth-Chabuk/data_structure_nmiet/blob/main/stacks1.cpp");
bh.new_page_push("https://takeuforward.org/plus/dsa/problems/input-output?source=strivers-a2z-dsa-track");
cout<<endl;

bh.display();
cout<<endl;

bh.new_page_pop();
cout<<endl;

bh.display();
cout<<endl;

return 0;
}
