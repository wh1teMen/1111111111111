#include<iostream>
#include<list>
using namespace std;
class ISubscribe {
public:
	virtual void onEmit() = 0;

class Observer {
public:
	virtual void subscribe(ISubscribe& subscriber) = 0;
	virtual void publish(string payload)=0;
	list<ISubscribe>list;
};
class ModelObserver:public Observer {
public:
	void subscribe(ISubscribe& subscriber) {}
	void publish(string payload) {}
};
class ViewObserver:public Observer {
public:
	void subscribe(ISubscribe& subscriber) {}
	void publish(string payload) {}
};
class View:public ViewObserver {
public:
	
	virtual void on_input() = 0;

	string value;
};

int main() {

	return 0;
}