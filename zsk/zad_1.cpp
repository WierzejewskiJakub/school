#include <iostream>

using namespace std;

class Account {
	private:
		int balance = 1000;
		int debit = 500;
		int credit = 2000;
	public:
		int getBalance();
		int withdraw(int money);
		int deposite(int money);
		int withdraw1(int money);
};

int Account::getBalance() {
	return balance;
}

int Account::withdraw(int money) {
	if (money > 0) {
	
		if (money <= balance) {
			balance -= money;
			return money;
		}else {
			return 0;
		}
	} else {
		return 0;
	}
}

int Account::deposite(int money){
	if(money > 0) {
		balance +=money;
		return money;
	} else {
		return 0;
	}
}

int Account::withdraw1(int money) {
	if (money > 0) {
	
		if (money <= balance + debit) {
		}else {
			return 0;
		}
	} else {
		return 0;
	}
}

int main(int argc, char** argv) {
		setlocale(LC_CTYPE,"polish");
		Account k1;
		cout<<"Wyp�acono: "<<k1.withdraw1(1200)<<endl;
		cout<<"Stan konta: "<<k1.getBalance()<<endl;
	return 0;
}
