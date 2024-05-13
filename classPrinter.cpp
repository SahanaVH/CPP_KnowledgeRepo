#include <iostream>
#include <string>
using namespace std;
class Device {
private:
	string name, model, version;
protected:
	Device(string nameArg,string modelArg,string versionArg):name{ nameArg},model{ modelArg },version{ versionArg }
	{
		cout << "Device instantiated" << endl;
	}
	~Device()
	{
		cout << "Device destructed" << endl;
	}
 
};
class Printer : virtual public Device {
 
public:
	Printer():Device{ "","","" } {
		cout << "Printer instantiated" << endl;
	}
	~Printer(){
		cout << "Printer Destructed" << endl;
	}
	void print(string content)
	{
		cout << "Print" <<content<< endl;
	}
};
class Scanner : virtual public Device {
 
public:
	Scanner() :Device{"","",""}
	{
		cout << "Scanner instantiated" << endl;
	}
	~Scanner()
	{
		cout << "Scanner destructed" << endl;
	}
	void scan(string content)
	{
		cout << "scan" << content << endl;
	}
};
//Never use multipleinheritance.
class PrintScanner:public Device {
	Printer printerobj;
	Scanner scanobj;
public:
	void print(string content)
	{
		this->printerobj.print(content);
	}
	void scan(string content)
	{
		this->scanobj.scan(content);
	}
	PrintScanner(string n,string m,string v) :Device{n,m,v}
	{
		cout << "PrintScanner instantiated" << endl;
	}
	~PrintScanner()
	{
		cout << "PrintScanner destructed" << endl;
	}
 
};
 
class TaskManager {
public: 
	void invokePrintTask(Printer* printerPtr, string content)
	{
		printerPtr->print(content);
	}
	void invokeScanTask(Scanner* scannerPtr, string content)
	{
		scannerPtr->scan(content);
	}
};
 
 
int main()
{
	Printer hpPrinter;
	Scanner hpScanner;
	PrintScanner hpPrintScanner{ "","","" };
	TaskManager taskMgr;
 
	taskMgr.invokePrintTask(&hpPrinter,"Doc.pdf");
	taskMgr.invokeScanTask(&hpScanner, "Doc.pdf");
	taskMgr.invokePrintTask(hpPrintScanner.print, "DOC.pdf");
 
	return 0;
}