#include <iostream>
using namespace std;

string hi(string name) {
    // cout << "Hello" << " " << name;
    return "Kunichiwa " + name;
    
};

int main()
{
    cout << hi("Minasa");
    return 0;
}