#include<iostream>
#define CONSTR 1
using namespace std;

#if (CONSTR==2)


class Person
{
	int a;
public:
	Person()
	{
		cout << "Person\n";
		a = 0;
	}
	void Show()
	{
		cout << "***\n";
	}

	~Person()
	{
		cout << "~Person\n";
	}
};

Person* CreatePerson()
{
	Person * p = new Person();
	return p;
}

void main()
{
	//  ������������ foreach 
	//double arr[20]{ 1,5,7,8,1,23,45,1,2,5 };
	//for (auto a : arr)//  ��� ������� �������� (���� �� ������ �) � ����� arr ������ ��� �������
	//{
	//	cout << a << " ";
	//}
	//auto a = 10;


	//Person p;
	//p.Show();
	//cout << endl;

	//Person * pptr = new Person();//   ����������� ���� ��������� ����
	//pptr->Show();
	//cout << endl;
	//delete pptr;

	/*Person p1[3];
	for (int i = 0; i < 3; i++)
	{
		p1[i].Show();
	}
	cout << endl;*/
	////new Person(); - �� ����� ��� ������ �� �������� ���� �� ���� �� ������������ ����� ��������
	//Person * pptr3;//   ���� �� �����������
	
	//cout << endl;
	//Person * pptr2 = new Person[3];//   ����������� 3 �����
	//cout << endl;

	//Person ** pppp = new Person *[3];//   �� ����������� �����
	//for (int i = 0; i < 3; i++)
	//{
	//	pppp[i] = new Person();
	//}
	//cout << endl;
	
	/*delete []pptr2;*/

	//for (int i = 0; i < 3; i++)
	//{
	//	delete pppp[i];
	//}
	//delete[] pppp;

	//Person p;
	Person *p = CreatePerson();
	delete p;

	cout << "Main end!!!!!\n";
}


#endif //  CONSTR 2