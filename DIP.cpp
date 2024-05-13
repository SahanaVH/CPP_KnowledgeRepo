#include <iostream>
#include <string>
using namespace std;
//abstraction
class IEngine {
public:
	virtual void start() = 0;
	virtual void stop() = 0;
};
//low level module
class MPFIEngine : public IEngine
{
public:
	void start(){}
	void stop(){}
};
class TurboEngine : public IEngine
{
public:
	void start() {}
	void stop() {}
};

//high level module
class XUV3X0 {
	IEngine* engine;
public:
	//Constructor Dependency Injection
	XUV3X0(IEngine* engineArg):engine{engineArg}{}
	void drive()
	{
		this->engine->start();
	}
	void halt()
	{
		this->engine->stop();
	}
	~XUV3X0()
	{
		delete engine;
	}

};
int main()
{
	MPFIEngine napEngine;
	XUV3X0 car{ &napEngine };
	car.drive();
	TurboEngine tubEngine;
	XUV3X0 turbocar{ &tubEngine };
	return 0;

}