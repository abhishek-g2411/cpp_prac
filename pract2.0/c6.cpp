#include <iostream>
using namespace std;

class ATM{
public:
    void withdraw(){
        cout << "Cash withdrawn";
    }
};

int main() {
    ATM a;          // object of class ATM
    a.withdraw();   // calling function
    return 0;
}
