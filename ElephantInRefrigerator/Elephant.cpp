#include "Elephant.h"
// 1. ʵ�� Elephant ��Ĺ��캯��
// ���ܣ���ʼ����������ƣ�����������˽�г�Ա name)
Elephant::Elephant(string name) {
	// this->name ��ʾ����ǰ����� name ��Ա��������������� name ��ͻ
	this->name = name;
}
// 2. ʵ�� Elephant ��� getName ����)
string Elephant::getName() const {
	return name; // ֱ�ӷ���˽�г�Ա name
}