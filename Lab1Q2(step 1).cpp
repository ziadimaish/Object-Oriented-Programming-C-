//Name:Ziad Imaish
//ID:20210052

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


// Add the FOUR overloaded functions here

int random(int max){
  int n=0+rand()%(max-0+1);
  return n;
}

int random(int max,int min){
  int n=min+rand()%(max-min+1);
  return n;
}

double random(double max){
  double n=0+(double)rand()/RAND_MAX*(max-0);
  return n;
}

double random(double max,double min){
  double n=min+(double)rand()/RAND_MAX*(max-min);
  return n;
}



int main() {
    srand(time(0));

    cout << "Random integer in the range [100, 200]: " 
         << random(200, 100) << endl;

    cout << "Random integer in the range [-100, 0]: " 
         << random(0, -100) << endl;

    cout << "Random integer in the range [0, 200]: " 
         << random(200) << endl;

    cout << "Random double in the range [1.5, 2.5]: " 
         << random(2.5, 1.5) << endl;

    cout << "Random double in the range [-2.5, -1.5]: " 
         << random(-1.5, -2.5) << endl;

    cout << "Random double in the range [0, 5]: " 
         << random(5.0) << endl;   

    return 0;
}