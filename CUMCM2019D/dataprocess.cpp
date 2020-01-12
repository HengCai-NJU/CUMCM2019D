//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#pragma warning(disable:4996)
//using namespace std;
//int main()
//{
//	ifstream myfile("C:\\Users\\Echo\\Desktop\\D2019\\data2.csv");
//	ofstream outfile("C:\\Users\\Echo\\Desktop\\D2019\\rawcmpresdata2.csv",ios::app);
//	string tmpstr, tmps; int last = 0; int loop = 0;
//	vector<string> strvec;
//	while (getline(myfile, tmpstr))
//	{
//		last = 0;
//		for (int i = 0; i < tmpstr.length(); i++)
//		{
//			if (tmpstr[i] == ',' || /*tmpstr[i] == '/' || tmpstr[i] == ' ' ||*/ tmpstr[i] == ':')
//			{
//				tmps = tmpstr.substr(last, i - last);
//				last = i+1;
//				strvec.push_back(tmps);
//				if (tmpstr[i] == ':')
//				{
//					tmps += ":00";
//					outfile << tmps;
//				}
//				else outfile<< tmps << ',';
//			}
//		}
//		//if (stoi(strvec[4]) > 100) { cout << strvec[4] << "  " << loop << endl; loop++; }
//		tmps = tmpstr.substr(last, tmpstr.length()- last);
//		//outfile << tmps;
//		outfile << endl;
//		strvec.clear();
//		//loop++;
//	}
//
//}
//
