#pragma once
#include <string>
using namespace std;

// 冰箱类：封装状态（门、大象）和操作
class Refrigerator
{
private:
	bool isDoorOpen;    // 门状态：true=开，false=关
	bool hasElephant;   // 是否有大象：true=有，false=无
	string elephantName;// 大象名称（若存在）

public:
	Refrigerator();              // 构造函数：初始化状态
	void openDoor();             // 打开冰箱门
	void closeDoor();            // 关闭冰箱门
	void putElephant(string name);// 放入大象（需开门+无大象）
	void showStatus() const;     // 查看当前状态（不修改成员变量）
};
