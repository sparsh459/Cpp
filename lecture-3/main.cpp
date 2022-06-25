#include<iostream>

using namespace std;

int main(){

    char ch;
    cout << "Enter the character to check" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z'){
        cout << "It's between a and z" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z'){
        cout << "It's between A and Z" <<endl;
    }
    else if(ch >= 0 && ch <= 9){
        cout<< "Between 0 and 9" << endl;
    }
    else{
        cout << "Its between neither" << endl;
    }

    return 0;
}