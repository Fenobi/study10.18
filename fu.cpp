#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>

using namespace std;

//int main()
//{
//	const char* arr = "abcd";
//	cout << arr << endl;
//	return 0;
//}

//int main()
//{
//	//�������ͣ�new��delete��
//	//���malloc/free�������÷�û����������
//	int* p1 = new int;
//	delete p1;
//
//	int* p2 = new int(0);//��ʼ��
//	delete p2;
//
//	int* p3 = new int[10];
//	delete[] p3;
//
//	int* p4 = new int[10] {1, 2, 3, 4};
//	delete[] p4;
//
//	return 0;
//}

//class A
//{
//private:
//	int _a;
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		_a = a;
//		cout << "A()����" << endl;
//	}
//
//	~A()
//	{
//		cout << "~A()����" << endl;
//	}
//};
//
//struct ListNode
//{
//	ListNode* _next;
//	int _val;
//	ListNode(int val = 0)
//		:_next(nullptr)
//		, _val(val)
//	{}
//};
//
//int main()
//{
//	//�Զ�������
//	//new��delete���malloc�����˿ռ����������ù��캯������������
//	A* p1 = new A;
//	A* p2 = (A*)malloc(sizeof(A));
//
//	delete p1;
//	free(p2);
//
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(3);
//	ListNode* n4 = new ListNode(4);
//	n1->_next = n2;
//	n2->_next = n3;
//	n3->_next = n4;
//
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		//����ʧ�ܷ��ؿ�ָ��
//		int* p1 = (int*)malloc(1024*1024);
//		if (p1)
//		{
//			cout << p1 << endl;
//		}
//		else
//		{
//			cout << "����ʧ��" << endl;
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	try
//	{
//		while (1)
//		{
//			//����ʧ�����쳣,����Ҫ��鷵��ֵ
//			int* p = new int[1024 * 1024 * 1024 * 1024 * 1024];
//			if (p)
//			{
//				cout << (void*)p << endl;
//			}
//			else
//			{
//				cout << "����ʧ��" << endl;
//				break;
//			}
//		}
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}

struct ListNode
{
	ListNode* _next;
	int _val;
	ListNode(int val = 0)
		:_next(nullptr)
		, _val(val)
	{}
};

int main()
{
	ListNode* p1 = new ListNode;
	delete p1;
	return 0;
}
