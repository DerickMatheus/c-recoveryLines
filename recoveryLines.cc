#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){
	set<int> lines_map;
	int line_num;
	string line;

	if(argc != 3){
		cout << "# arg invalid\nplz enter\n./recoveryline <files with lines> <source file>\n";
		return 1;
	}
	ifstream file_lines(argv[1]), file_source(argv[2]);

	while(file_lines >> line_num)
		lines_map.insert(line_num);
	
	line_num = 1;
	while(getline(file_source, line)){
		if(lines_map.find(line_num) != lines_map.end())
			cout << line << endl;
		line_num ++;
	}

	return 0;
}
