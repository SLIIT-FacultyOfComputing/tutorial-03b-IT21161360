#include <iostream>
#include<iomanip>
using namespace std;
int main()

 {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 
 cout <<setw(5) <<"No"<<setw(15)<< "Name"<<setw(10) << "Marks" << endl;
 
 for (int r = 0; r < 5; r++) 
 {
 cout<<std::setw(5)<<r+1<<std::setw(15)<<names[r]<<std::setw(10)<<std::setiosflags(ios::fixed)<<std::setprecision(2)<< marks[r] << endl;
 }
 
}