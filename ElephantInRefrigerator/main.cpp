#include "Refrigerator.h"  // 包含冰箱类接口
#include "Elephant.h"      // 包含大象类接口
#include <iostream>
using namespace std;

int main() {
	// 1. 创建对象
	Refrigerator myFridge;    // 实例化冰箱
	Elephant myElephant("yiyi");

	// 2. 模拟“大象装冰箱”完整流程
	cout << "===== 开始执行「大象装进冰箱」流程 =====" << endl;
	myFridge.showStatus();    // 初始状态（门关、无大象）
	myFridge.openDoor();      // 步骤1：开门
	myFridge.showStatus();    // 查看开门后状态
	myFridge.putElephant(myElephant.getName());// 步骤2：放大象
	myFridge.showStatus();    // 查看放大象后状态
	myFridge.closeDoor();     // 步骤3：关门
	myFridge.showStatus();    // 查看关门后状态

	// 3. 测试异常场景（重复操作、非法操作）
	cout << "===== 测试异常场景 =====" << endl;
	myFridge.closeDoor();     // 重复关门
	myFridge.putElephant("yiyi");// 关门时放大象
	myFridge.openDoor();      // 开门后重复放大象
	myFridge.putElephant("yiyi");

	system("pause");  // VS中保持控制台窗口
	return 0;
}