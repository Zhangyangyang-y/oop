#pragma once
#include <string>
using namespace std;

// �����ࣺ��װ��������
class Elephant {
	private:
		string name;  // ��������
	public:
		Elephant(string name);  // ���캯������ʼ������
		string getName() const; // ��ȡ���ƣ�ֻ���ӿڣ�
	};

