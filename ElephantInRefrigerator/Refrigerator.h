#pragma once
#include <string>
using namespace std;

// �����ࣺ��װ״̬���š����󣩺Ͳ���
class Refrigerator
{
private:
	bool isDoorOpen;    // ��״̬��true=����false=��
	bool hasElephant;   // �Ƿ��д���true=�У�false=��
	string elephantName;// �������ƣ������ڣ�

public:
	Refrigerator();              // ���캯������ʼ��״̬
	void openDoor();             // �򿪱�����
	void closeDoor();            // �رձ�����
	void putElephant(string name);// ��������迪��+�޴���
	void showStatus() const;     // �鿴��ǰ״̬�����޸ĳ�Ա������
};
