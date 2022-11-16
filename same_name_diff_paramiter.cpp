#include <iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout << to_string(add(2, 3)) + " <===to parameters " + to_string(add(12, 25, 63)) << endl;
}