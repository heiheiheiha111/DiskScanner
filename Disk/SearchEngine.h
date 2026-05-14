#pragma once
#include <string>
#include <vector>
#include"fileInfo.h"

using namespace std;

class SearchEngine {
public:
	vector<FileInfo> search(const vector<FileInfo>& files, const string& keyword);
};