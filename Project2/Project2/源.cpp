#include<iostream>
using namespace std;
class Teacher
{
public:
	Teacher() {};
	virtual int Salary()const = 0;
private:
	int hour;
};
class Pro :public Teacher
{
public:
	Pro(int h) { hour = h; };
	virtual int Salary()const{
		return 5000+50*hour;
	}
private:
	int hour;
};
class A_Pro :public Teacher
{
public:
	A_Pro(int h) { hour = h; };
	virtual int Salary() const{
		return 3000 + 30 * hour;
	}
private:
	int hour;
};
class Lec :public Teacher
{
public:
	Lec(int h) { hour = h; };
	virtual int Salary() const{
		return 2000 + 20 * hour;
	}
private:
	int hour;
};
void func(Teacher& p) {
	cout << p.Salary();
}
int main() {
	int h;
	int i;
	int j;
	cout << "教授的工作课时为：";
	cin >> h;
	cout << "副教授的工作课时为：";
    cin >> i;
	cout << "讲师的工作课时为：";
	cin >> j;
	Pro pro(h);
	func(pro);
	printf("\n");
	A_Pro a_pro(i);
	func(a_pro);
	printf("\n");
	Lec lec(j);
	func(lec);
}