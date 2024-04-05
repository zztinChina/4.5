#include<iostream>
using namespace std;
class animal
{  
public:
	virtual void speak()
	{
		cout << "动物在说话";
	}
};
class cat :public animal
{
	void speak()
	{
		cout << "小猫在说话";
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