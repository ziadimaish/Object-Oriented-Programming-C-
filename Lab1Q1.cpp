#include <iostream>
using namespace std;


bool oddDigits(int n){
  
bool x=true;

  
while(n>0){
int last=n%10;
  n=n/10;
    if(last%2==0){
      x=false;
    }}
  
  if(x)
    return true;
  else
    return false;
  
}

int main() {

  int number;
  
  cout << "Please enter a number \n";

  cin>>number;

  if(oddDigits(number))
    cout<<"The number is odd\n";
  else
    cout<<"The number is even\n";


  return 0;
}