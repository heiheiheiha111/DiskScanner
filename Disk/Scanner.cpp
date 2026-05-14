#include "Scanner.h"
#include <filesystem>
#include<iostream>

namespace fs = std::filesystem;
vector<FileInfo> Scanner::scan(const string& path) {
	vector<FileInfo> files;
	try {
		for (const auto& entry : fs::recursive_directory_iterator(path, fs::directory_options::skip_permission_denied))
		{
			FileInfo info;

			info.path = entry.path().string();

			info.name = entry.path().filename().string();

			info.is_directory = fs::is_directory(entry);

			if (fs::is_regular_file(entry))
			{
				info.size = fs::file_size(entry);
			}
			else
			{
				info.size = 0;
			}
			files.push_back(info);

		}
	}
	catch (const exception& e)
	{
		cout << "É¨Ãè´íÎó£º" << e.what() << endl;
	}
	return files;
}