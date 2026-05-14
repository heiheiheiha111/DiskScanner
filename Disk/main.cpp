#include "Scanner.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string path;
	cout << "请输入路径";
	getline(cin, path);

	Scanner scanner;

	auto files = scanner.scan(path);

	for (const auto& file : files)
	{
		cout << "名称：" << file.name << endl;
		
		cout << "路径：" << file.path<< endl;
		cout << fixed << setprecision(2);
		cout << "大小：" << file.size/1024.0/1024.0 <<"MB"<< endl;

		cout << "-----------------------" << endl;
	}
	return 0;
}