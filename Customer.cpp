#include <iostream>
#include <string>
using namespace std;

class Customer{
private:
    string name, address, pan, adhar, emailid, contactNumber;

public:
    Customer(string nameArg,
             string addressArg,
             string panArg,
             string adharArg)
        : name{nameArg}, address{addressArg}, pan{panArg}, adhar{adharArg} {}

    void setContactNumber(string contactNumberArg) {
        this->contactNumber = contactNumberArg;
    }

    void setEmailId(string emailidArg) {
        this->emailid = emailidArg;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "PAN: " << pan << endl;
        cout << "Aadhar: " << adhar << endl;
        cout << "Email Id: " << emailid << endl;
        cout << "Contact Number: " << contactNumber << endl;
    }
};

class CustomerBuilder {
private:
    string name, address, pan, adhar, emailid, contactNumber;

public:
    CustomerBuilder& setName(string name){
        this->name = name;
        return *this;
    }
    CustomerBuilder& setAddress(string address){
        this->address = address;
        return *this;
    }
    CustomerBuilder& setPAN(string pan){
        this->pan = pan;
        return *this;
    }
    CustomerBuilder& setAadhar(string adhar){
        this->adhar = adhar;
        return *this;
    }
    CustomerBuilder& setEmailId(string emailid){
        this->emailid = emailid;
        return *this;
    }
    CustomerBuilder& setContactNumber(string contactNumber){
        this->contactNumber = contactNumber;
        return *this;
    }
    Customer build(){
        return Customer(name, address, pan, adhar);
    }
};

int main() {
    Customer customerObj = CustomerBuilder().setName("Tom").setAddress("BLR").setPAN("JFKN").setAadhar("231534158").setEmailId("tom@gmail.com")
    .setContactNumber("1234567890").build();
    customerObj.displayInfo();
    return 0;
}
