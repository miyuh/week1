#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
 int main()
 {
 	int num;
 	string str;
 	cin >> num;
 	cin >> str;

 sort(str.begin(), str.end());
 	cout <<str <<'\n';//入力した１６文字をアルファベット順に

 string w,sw;
 vector< pair<string,string> >words(1000000);

ifstream dict;
dict.open("/usr/share/dict/words"); //ファイルを開く

int s =0;
while(!dict.eof()){
dict >> w;
sw = w;
sort(sw.begin(),sw.end());
words[s] = make_pair(w,sw);

s++;
}
int max = s;

for(int t=0; t<= max; t++)
	if (words[t].second == str){
		cout<<words[t].first<<'\n';
	}

return 0;
}



