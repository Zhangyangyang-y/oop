#include "Refrigerator.h"
#include <iostream>
using namespace std;

// 构造函数：初始化冰箱为“门关+无大象”
Refrigerator::Refrigerator() {
	isDoorOpen = false;
	hasElephant = false;
	elephantName = "";
}

// 打开冰箱门（仅门关闭时执行）
void Refrigerator::openDoor() {
	if (!isDoorOpen) {
		isDoorOpen = true;
		cout << "冰箱门已打开！" << endl;
	}
	else {
		cout << "冰箱门本来就是开的" << endl;
	}
}

// 关闭冰箱门（仅门打开时执行）
void Refrigerator::closeDoor() {
	if (isDoorOpen) {
		isDoorOpen = false;
		cout << "冰箱门已关闭！" << endl;
	}
	else {
		cout << "冰箱门本来就是关的" << endl;
	}
}

// 放入大象（需满足“门开+无大象”）
void Refrigerator::putElephant(string name) {
	if (!isDoorOpen) {
		cout << "无法放入大象！请先打开冰箱门。" << endl;
		return;
	}
	if (hasElephant) {
		cout << "无法放入大象！冰箱里已有大象【" << elephantName << "】。" << endl;
		return;
	}
	hasElephant = true;
	elephantName = name;
	cout << "大象【" << name << "】已成功放入冰箱！" << endl;
}

// 查看冰箱当前状态
void Refrigerator::showStatus() const {
	cout << "\n===== 冰箱状态 =====" << endl;
	cout << "门状态：" << (isDoorOpen ? "打开" : "关闭") << endl;
	cout << "大象：" << (hasElephant ? ("大象" + elephantName) : "无") << endl;
	cout << "===================\n" << endl;
}