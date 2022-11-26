
#include <iostream>
using namespace std;

bool is_redundant(char c[],int size) {
    
    for (int i = 0; i < size; i++) {
        if (c[i] != c[0])
            return false;
    }
            return true;
}


bool is_identical(char c[], int size) {

    for (int i = 0; i < size; i++) {
        if (c[i] == c[i + 1])
            return false;
    }
    return true;
}


bool is_duplicated(string name) {
    int len = name.length();

    if (len % 2 == 0) {
        for (int i = 0; i < len / 2; i++) {
            if (name[i] == name[len / 2])
                return false;

        }
    }
    else

        int j = len - (len / 2);

    for (int i = 0; i < i; i++) {
        if (name[i] == name[len / 2])
            return false;


        return true;

    }
}


int main()
{
    cout<< "PLease fill the array with 10 characters\n";

    char cha[10];
    for (int i = 0; i < 10; i++) {
        cin >> cha[i];
    }

    if (is_redundant(cha, 10)==1)
        cout << "true\n" << endl;
    else
        cout << "false\n" << endl;
        

    if(is_identical(cha,10)==1)
        cout << "true\n" << endl;
    else
        cout << "false\n" << endl;


    cout << "Please enter a string\n"<<endl;

    string name;

    cin >> name;


    if (is_duplicated(name)==1)

        cout << "true\n" << endl;
    else
        cout << "false\n" << endl;


    return 0;
}


