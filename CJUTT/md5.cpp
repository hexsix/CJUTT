// MD5.cpp : 定义控制台应用程序的入口点。
//
#include "file.h"

int main(int argc, char *argv[]) {
	std::string fname;
	while (std::cin >> fname) {
		file f;
		f.init(fname);
		f.shengming();
		f.runmain();

	}
	return 0;
}