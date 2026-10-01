#include<iostream>
using namespace std;
class Employee{
	private:
		string name;
		double  salary;
	public:
	void setData(string n , double s)
	{
		name = n;
		salary = s;
	}
	double calculateBonus(){
		return salary * 0.20; // 20% Bonus
	}
	void display(){
		cout << "Employee: " << name << endl;
		cout << "Salary: " << salary << endl;
		cout << "Bonus: " << calculateBonus() << endl;
		cout << "Total Pay: " << salary + calculateBonus() << endl;
	}
};
int main()
{
	Employee obj;
	obj.setData("Salbia", 60000);
	obj.display();
	return 0;
}
