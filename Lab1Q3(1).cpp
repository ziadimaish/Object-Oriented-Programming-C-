//Name:Ziad Imaish
//ID:20210052

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void generate(int x,int y){
  x=0+rand()%(9-0+1);
  y=0+rand()%(9-0+1);
}

int main() {
  srand(time(0));

  int x=1;
  int y=2;
  
  generate(x,y);
  
  cout <<x<<endl<<y<<endl;
  
  return 0;
}

/*It is possible to pass the argument by value but it does not work if we want the values to be changed */