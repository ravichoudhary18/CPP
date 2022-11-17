#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float total = 0;

    for (float a = 0; a < 2; a += 0.01f){
        total += a;
    }

    cout << total << endl;

    double a = 0.1;
    double b = 0.2;
    double c = 0.3;
    if (a + b != c){
        cout << "This Computer is Magic! " + to_string(c) << endl;
    }

    return 0;
}

