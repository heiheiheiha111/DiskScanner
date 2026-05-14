#include "Scanner.h"
#include "SearchEngine.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string path;
	cout << "ÇëÊäÈëÂ·¾¶";
	getline(cin, path);

	Scanner scanner;

	auto files = scanner.scan(path);

	SearchEngine engine;
	string keyword;
	cout << "ÇëÊäÈë¹Ø¼ü´Ê";
	getline(cin, keyword);
	vector<FileInfo> result = engine.search(files, keyword);
	return 0;
}