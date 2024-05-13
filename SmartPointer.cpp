#include <iostream>
#include <memory>
using namespace std;
class A{
    public:
    A(){
     cout<<"A instanctiated"<<endl;
    }
    ~A(){
        cout<<"A destructed"<<endl;
    }
    void operation(){
        cout<<"A.operation is called"<<endl;
    }

};
template<typename T>
class SmartPointerOfTypeA{
    T *ptr;
    public:
    SmartPointerOfTypeA(T* ptrRef):ptr{ ptrRef}{}
    ~SmartPointerOfTypeA(){
        delete ptr;
    }
    T* operator->(){
        return ptr;
    }
   // void operation(){
       // this->ptr->operation();
    //}
};



void instanctiate(){
    //SmartPointerOfTypeA<A> smartPtr {new A()};
    //smartPtr->operation();
    std::unique_ptr<A> newSmartPtr =std::make_unique<A>();
    newSmartPtr->operation();
    //A* ptr=new A();
}
int main(){
    instanctiate();
}