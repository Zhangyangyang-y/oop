#include "Elephant.h"
// 1. 实现 Elephant 类的构造函数
// 功能：初始化大象的名称（将参数传入私有成员 name)
Elephant::Elephant(string name) {
	// this->name 表示“当前对象的 name 成员”，避免与参数名 name 冲突
	this->name = name;
}
// 2. 实现 Elephant 类的 getName 函数)
string Elephant::getName() const {
	return name; // 直接返回私有成员 name
}