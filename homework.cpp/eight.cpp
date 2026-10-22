#include <iostream>

using namespace std;
int main()
{
    char inputChar;
    cout << "input one character:";
    cin >> inputChar;
    cout <<"the integer equivalent of "<< inputChar <<" is "<< static_cast<int>(inputChar);
    return 0;
}