#pragma once
#include <string>
using namespace std;

// 大象类：封装名称属性
class Elephant {
	private:
		string name;  // 大象名称
	public:
		Elephant(string name);  // 构造函数：初始化名称
		string getName() const; // 获取名称（只读接口）
	};

