#include"SearchEngine.h"

vector<FileInfo> SearchEngine::search(const vector<FileInfo>& files, const string& keywords)
{
	vector<FileInfo> results;
	for (const auto& file : files)
	{

		if (file.name.find(keywords) != string::npos)
		{
			results.push_back(file)
		}
	}
	return results;

}