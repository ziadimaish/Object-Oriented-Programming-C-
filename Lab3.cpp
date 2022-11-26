#include <iostream>

using namespace std;

class Clock {
private:
	short hours_;
	short minutes_;
	short seconds_;

public:
	Clock() {
		hours_ = 0;
		minutes_ = 0;
		seconds_= 0;
	}

	void Sethours(short hours) {
		if (hours < 0 || hours > 23) {
			cout << "Hour entered should be in the range [0,23]";
			return;
		}
		else
			hours_ = hours;
	}

	void Setminutes(short minutes) {
		while (minutes < 0 || minutes > 59) {
			cout << "Please enter a number in the range [0,59]";
			cin >> minutes;
		}
		minutes_ = minutes;;
	}


	void Setseconds(short seconds) {
		if (seconds < 0 || seconds>59) {
			cout << "Seconds value invalid";
			seconds= 0;
		}else
		seconds_=seconds;
	}

	short Gethours() {
		return hours_;
	}
	short Getminutes() {
		return minutes_;
	}

	short Getseconds() {
		return seconds_;
	}

	void show() {
		if (hours_ < 10) 
			cout << "0";
		
			cout << hours_ << ":";
		
		if (minutes_ < 10)
		
			cout << "0";
		
		cout << minutes_ << ":";
	
		if (seconds_ < 10) 
			cout << "0";
			cout << seconds_ << endl;
		
	}

	void increment() {
		seconds_ += 1;
		if (seconds_ == 60) {
			seconds_ = 0;
			minutes_ += 1;
		}

		if (minutes_ == 60) {
			minutes_ = 0;
			hours_ += 1;
		}

		if (hours_ == 24) {
			hours_ = 0;
		}
	}

	void decrement() {
		seconds_ -= 1;

		if (seconds_ == -1) {
			seconds_ = 59;
			minutes_ -= 1;
		}

		if (minutes_ == -1) {
			minutes_ = 59;
			hours_ -= 1;
		}

		if (hours_ == -1) {
			hours_ = 23;
			minutes_ = 59;
		}

	}


};

int main() { 

	Clock c1;
	c1.Sethours(1);
	c1.Setminutes(52);
	c1.Setseconds(3);

	c1.show();
	c1.increment();
	c1.show();
	c1.decrement();
	c1.show();
	
return 0; }