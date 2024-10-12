#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
	ofstream outfile("my.txt");
	outfile<<"hello"<<endl;
	outfile<<25<<endl;

	outfile.close();

	return 0;
}