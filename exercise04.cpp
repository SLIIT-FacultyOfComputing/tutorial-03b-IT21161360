#include <iostream>
using namespace std;
void print(int len, int wth);
void input(int &len, int &wth);

// Do not change the main() function
int main() 
{
   int length,width;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len << ", Width  : " << wth 
   <<endl;
}

// Implement the Input Function here
void input(int &len, int &wth)
{
    cout<<"Enter the length:"<<endl;
    cin>>len;
    cout<<"Enter the width :"<<endl;
    cin>>wth;
    
}