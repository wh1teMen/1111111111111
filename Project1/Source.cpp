#include<iostream>
#include<list>
using namespace std;
class ISubscribe {
public:
	virtual void onEmit() = 0;
};
class Observer {
public:
	virtual void subscribe(ISubscribe& subscriber) = 0;
	virtual void publish(string payload)=0;
private:
	list<ISubscribe>list;
};
class Controller:public ISubscribe {
public:
	void operation(){}

	//Model model;
};
class Model :public Controller {
public:
	void get_data()const{}
	string set_data(){}
	string data;
	//ModelObserver observer;
};
class ModelObserver:public Observer,public Model {
public:
	void subscribe(ISubscribe& subscriber) {}
	void publish(string payload) {}
private:
	list<ISubscribe>list;
};
class ViewObserver:public Observer {
public:
	void subscribe(ISubscribe& subscriber) {}
	void publish(string payload) {}
};
class View:public ViewObserver,public ISubscribe {
public:
	virtual void on_input() = 0;
	virtual void on_click() = 0;

	string value;
};
class Input:public View {
public:
	void on_input(){}
};
class TextArea:public Input {
public:
	void on_input() {}
};
class Urilnput :public Input {
public:
	void on_input() {}
};
class Btn :public View {
public:
	void on_click() {}
};
class SaveBtn:public Btn {
public:
	void on_click() {}
};
class OpenBtn :public Btn {
public:
	void on_click() {}
};
int main(){

	return 0;
}