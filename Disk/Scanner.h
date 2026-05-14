#pragma once
#include <vector>
#include <string>
#include "FileInfo.h"
using namespace std;

class Scanner {
public:
	vector<FileInfo> scan(const string& path);
};