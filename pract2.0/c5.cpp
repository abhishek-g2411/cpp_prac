


#include <iostream>
using namespace std;

void printOne(int n)
{
    if(n == 0)      // Base condition
        return;

    cout << 1 << endl;
    printOne(n - 1);   // function calls itself
}

int main()
{
    printOne(5);
    return 0;
}
