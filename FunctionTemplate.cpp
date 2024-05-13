#include <iostream>
#include <string>
using namespace std;
template<typename T>
T add(T operandone, T operandtwo){
    return operandone + operandtwo;
}

int main(){
    int result = add<int>(100, 200);
    cout << result << endl;

    string strresult = add<string>("hi", "hello");
    cout << strresult <<endl;

    return 0;
}
