#include <iostream>

using namespace std;
class ErrorInfo{
    public:
    string methodName;
    string LineName;
    string message;
};
int divFun(int numerator,int divisor){
    int result;
    cout<<"div Begin"<<endl;
    if(divisor <= 0){
       ErrorInfo errorDetails;
       errorDetails.methodName = "divFun";
       errorDetails.LineName =13;
       errorDetails.message = "Divisor value cannot be Zero or Negative";
       throw errorDetails;
    }
    result=numerator/divisor;
    /*try{
    result=numerator/divisor;
    }*/
    //catch(runtime_error& errobj)
    /*catch(...)
    {
        //cout << errobj.what() << endl;
        cout<<"Exception"<<endl;
    }*/
    cout<<"div End"<<endl;
    return result;
}
void init(){
     cout<<"init Begin"<<endl;
     int result = divFun( numerator:10, divisor:0);
    cout<<"init End"<<":"<< result <<endl;
   
   
}
int main(){
    cout<<"Main Begin"<<endl;
   try{
    init();
    
    }
     cout<<"Main End"<<endl;
    catch(ErrorInfo& exObj){
        cout << "MethodName :"<<exObj.methodName<<endl;
        cout << "LineName :"<<exObj.LineName<<endl; 
        cout << "message :"<<exObj.message<<endl;
    }
    
}