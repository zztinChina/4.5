#include<iostream>
using namespace std;
class animal
{  
public:
	virtual void speak()
	{
		cout << "������˵��";
	}
};
class cat :public animal
{
	void speak()
	{
		cout << "Сè��˵��";
   }
};
void test(animal& tem)
{
	tem.speak();
}
int main()
{   
	cat cat;
	test(cat);
	return 0;
}