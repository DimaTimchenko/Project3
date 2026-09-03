#include <iostream>
using namespace std;

class Book {
private:
	string name;
	string author;
	int pages;

public:
	Book();
	Book(string n, string a, int p);
	~Book();

	string GetName();
	void SetName(string n);
	string GetAuthor();
	void SetAuthor(string a);
	int GetPages();
	void SetPages(int p);

	void Print();
};

class BankAccount {
private:
	string number;
	string owner;
	double balance;

public:
	BankAccount();
	BankAccount(string number, string o, double b);
	~BankAccount();

	string GetNumber();
	void SetNumber(string number);
	string GetOwner();
	void SetOwner(string o);
	double GetBalance();
	void SetBalance(double b);

	void AddMoney(double money);
	void TakeMoney(double money);
	void PrintBalance();
};


Book::Book()
{
	name = "0";
	author = "0";
	pages = 0;
}

Book::Book(string n, string a, int p)
{
	name = n;
	author = a;
	pages = p;
}

Book::~Book()
{
	cout << "destructor" << endl;
}

string Book::GetName()
{
	string n = name;
	return n;
}

void Book::SetName(string n)
{
	name = n;
}

string Book::GetAuthor()
{
	string a = author;
	return a;
}

void Book::SetAuthor(string a)
{
	author = a;
}

int Book::GetPages()
{
	int p = pages;
	return p;
}

void Book::SetPages(int p)
{
	pages = p;
}

void Book::Print()
{
	cout << "Name=" << name << endl
		<< "Author=" << author << endl
		<< "Pages=" << pages << endl;
}


BankAccount::BankAccount()
{
	number = "0";
	owner = "0";
	balance = 0;
}

BankAccount::BankAccount(string number, string o, double b)
{
	number = number;
	owner = o;
	balance = b;
}

BankAccount::~BankAccount()
{
	cout << "destructor" << endl;
}

string BankAccount::GetNumber()
{
	string number = number;
	return number;
}

void BankAccount::SetNumber(string n)
{
	number = n;
}

string BankAccount::GetOwner()
{
	string o = owner;
	return o;
}

void BankAccount::SetOwner(string o)
{
	owner = o;
}

double BankAccount::GetBalance()
{
	double b = balance;
	return b;
}

void BankAccount::SetBalance(double b)
{
	balance = b;
}

void BankAccount::AddMoney(double money)
{
	balance = balance + money;
}

void BankAccount::TakeMoney(double money)
{
	if (money <= balance)
	{
		balance = balance - money;
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

void BankAccount::PrintBalance()
{
	cout << "Number=" << number << endl
		<< "Owner=" << owner << endl
		<< "Balance=" << balance << endl;
}


int main() {

	Book Book1("ffoisafjas","fdasfdfdas",200);
	Book Book2("ranbom123", "dgfdgfdgs", 320);
	Book1.Print();
	Book2.Print();
	BankAccount Account("123456789", "Dmytro", 1000);
	Account.PrintBalance();
	Account.AddMoney(500);
	Account.PrintBalance();
	Account.TakeMoney(300);
	Account.PrintBalance();
	Account.TakeMoney(2000);
	Account.PrintBalance();
}