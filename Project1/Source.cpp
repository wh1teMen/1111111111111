#include<iostream>
using namespace std;
class ISubscribe {
public:
	virtual void onEmit() = 0;

class Observer {
public:
	virtual void subscribe(ISubscribe& subscriber) = 0;
	virtual void publish(string payload)=0;
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
	virtual void value() = 0;
	virtual void view(Observer& observer) = 0;
	virtual void input() = 0;
};

int main() {

	return 0;
}