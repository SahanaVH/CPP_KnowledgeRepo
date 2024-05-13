#include <string>
using namespace std;

class LocationModel{
    private:
         std::string Name;
         float coOrdinate;
    public:
       static void sumpCounter(){}
         string getName(){
            return this->name;

         }    
         void setName(sting value){
           
            this->name = value;
         } 
};

class converter
{
    public:
          void convert(std::string filepath)
           {
              //logic
             //Read CSV File lne by line
             //split each line
             //represent linen content
             //create Xml Node
             // update Xml Tree
             //save XML tree

           }
};  

int main()
{
    //statck objects
    LocationModel obj;
    obj.setName("BLR");
    obj.getName();
   //Heap Allocation
   LocationModel* ptr= new LocatinModel(;)
    return 0;
}