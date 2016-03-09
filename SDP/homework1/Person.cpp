#include <iostream>
#include <cmath>

struct Person
{
	char name[20];

	void setName(){
		std::cout << "Please, enter the name of the person: ";
		std::cin >> name;
	}

};

struct Client
{
	Person p;
	double balance;

	void input(){
		p.setName();

		std::cout << "Please, enter the balance for " << p.name << " : ";
		std::cin >> balance;
	}

	void print(){
		std::cout << "The balance is of " << p.name << " : " << balance << std::endl;
	}

	double zadyljeniq(){
		if( balance < 0){
			return balance;
		}
		return 0;
	}
};

int main()
{
	std::cout << "You are going to enter 3 Clients" << std::endl;
	Client c[3];
	int balance = 0;
	for (int i = 0; i < 3; ++i)
	{
		c[i].input();
	}
	for (int i = 0; i < 3; ++i)
	{
		c[i].print();
	}
	for (int i = 0; i < 3; ++i)
	{
		balance += c[i].zadyljeniq();
	}

	std::cout << "The negative balances are summed upto: "<< balance << std::endl;

	return 0;
}