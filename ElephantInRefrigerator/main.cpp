#include "Refrigerator.h"  // ����������ӿ�
#include "Elephant.h"      // ����������ӿ�
#include <iostream>
using namespace std;

int main() {
	// 1. ��������
	Refrigerator myFridge;    // ʵ��������
	Elephant myElephant("yiyi");

	// 2. ģ�⡰����װ���䡱��������
	cout << "===== ��ʼִ�С�����װ�����䡹���� =====" << endl;
	myFridge.showStatus();    // ��ʼ״̬���Źء��޴���
	myFridge.openDoor();      // ����1������
	myFridge.showStatus();    // �鿴���ź�״̬
	myFridge.putElephant(myElephant.getName());// ����2���Ŵ���
	myFridge.showStatus();    // �鿴�Ŵ����״̬
	myFridge.closeDoor();     // ����3������
	myFridge.showStatus();    // �鿴���ź�״̬

	// 3. �����쳣�������ظ��������Ƿ�������
	cout << "===== �����쳣���� =====" << endl;
	myFridge.closeDoor();     // �ظ�����
	myFridge.putElephant("yiyi");// ����ʱ�Ŵ���
	myFridge.openDoor();      // ���ź��ظ��Ŵ���
	myFridge.putElephant("yiyi");

	system("pause");  // VS�б��ֿ���̨����
	return 0;
}