#pragma once
#include <string>

using namespace std;

struct FileInfo {
	string name;
	string path;
	bool is_directory;
	uintmax_t size;

};