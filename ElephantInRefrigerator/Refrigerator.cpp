#include "Refrigerator.h"
#include <iostream>
using namespace std;

// ���캯������ʼ������Ϊ���Ź�+�޴���
Refrigerator::Refrigerator() {
	isDoorOpen = false;
	hasElephant = false;
	elephantName = "";
}

// �򿪱����ţ����Źر�ʱִ�У�
void Refrigerator::openDoor() {
	if (!isDoorOpen) {
		isDoorOpen = true;
		cout << "�������Ѵ򿪣�" << endl;
	}
	else {
		cout << "�����ű������ǿ���" << endl;
	}
}

// �رձ����ţ����Ŵ�ʱִ�У�
void Refrigerator::closeDoor() {
	if (isDoorOpen) {
		isDoorOpen = false;
		cout << "�������ѹرգ�" << endl;
	}
	else {
		cout << "�����ű������ǹص�" << endl;
	}
}

// ������������㡰�ſ�+�޴��󡱣�
void Refrigerator::putElephant(string name) {
	if (!isDoorOpen) {
		cout << "�޷�����������ȴ򿪱����š�" << endl;
		return;
	}
	if (hasElephant) {
		cout << "�޷�������󣡱��������д���" << elephantName << "����" << endl;
		return;
	}
	hasElephant = true;
	elephantName = name;
	cout << "����" << name << "���ѳɹ�������䣡" << endl;
}

// �鿴���䵱ǰ״̬
void Refrigerator::showStatus() const {
	cout << "\n===== ����״̬ =====" << endl;
	cout << "��״̬��" << (isDoorOpen ? "��" : "�ر�") << endl;
	cout << "����" << (hasElephant ? ("����" + elephantName) : "��") << endl;
	cout << "===================\n" << endl;
}