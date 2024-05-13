#include <iostream>
#include <string>
using namespace std;

class IntVector{
    int items[10];
    int size;
public:
    IntVector() : size(0) {}

    void push_back(int item){
        if (size < 10) {
            items[size++] = item;
        }
    }

    int operator[](int index) const {
        if (index < size) {
            return items[index];
        } else {
            
            return -1; 
        }
    }

    friend ostream& operator<<(ostream& os, const IntVector& v) {
        for (int i = 0; i < v.size; ++i) {
            os << v.items[i] << " ";
        }
        return os;
    }
};

int main(){
    IntVector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    int item = v[3];
    cout << item << endl;
    cout << v << endl;

    return 0;
}
//to allocate array on Heap we need to add 'delete' constructor

 
