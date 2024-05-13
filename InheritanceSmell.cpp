#include <iostream>
using namespace std;
class Laptop{
    protected:
      Laptop();
   private:
      string modelName;
      string color;
      string hostOsType;
      float weight;
      int storageCapacity;
      string serialNumber;
};
//compliation time relationship, sttaic relationship
class HPLaptop:public Laptop{
  
};
class ZeLaptop{
   
};
class LenovaLaptop{
   
    
};
int main(){
    Laptop *
}