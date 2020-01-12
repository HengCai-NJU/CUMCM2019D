#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;
int main()
{
	ifstream in1("C:\\Users\\Echo\\Desktop\\D2019\\cmprsdata1.csv");
	ifstream in2("C:\\Users\\Echo\\Desktop\\D2019\\cmprsdata2.csv");
	ofstream out1("C:\\Users\\Echo\\Desktop\\D2019\\lineddata1.csv", ios::app);
	ofstream out2("C:\\Users\\Echo\\Desktop\\D2019\\lineddata2.csv", ios::app);
	vector<string> guotime;
	vector<string> zitime;
	string tmps,tmps2,tmptime;
	while (getline(in1, tmps))
	{
		for (int i = 0; i < tmps.length(); i++)
		{
			if (tmps[i] == ',')
			{
				tmptime = tmps.substr(0, i); break;
			}
			
		}
		guotime.push_back(tmptime);
	}
	while (getline(in2, tmps))
	{
		for (int i = 0; i < tmps.length(); i++)
		{
			if (tmps[i] == ',')
			{
				tmptime = tmps.substr(0, i); break;
			}

		}
		zitime.push_back(tmptime);
	}
	in1.clear();
	in1.seekg(0);
	in2.clear();
	in2.seekg(0);
	vector<string> intertime;
	sort(guotime.begin(), guotime.end());
	sort(zitime.begin(), zitime.end());
	set_intersection(guotime.begin(), guotime.end(), zitime.begin(), zitime.end(),back_inserter(intertime));
	cout << intertime.size();

	while(getline(in1,tmps))
	{
		for (int i = 0; i < tmps.length(); i++)
		{
			if (tmps[i] == ',')
			{
				tmptime = tmps.substr(0, i); break;
			}

		}
		vector<string>::iterator it=find(intertime.begin(), intertime.end(), tmptime);
		if (it != intertime.end())
		{
			out1 << tmps << endl;
		}

	}
	while (getline(in2, tmps))
	{
		for (int i = 0; i < tmps.length(); i++)
		{
			if (tmps[i] == ',')
			{
				tmptime = tmps.substr(0, i); break;
			}

		}
		vector<string>::iterator it = find(intertime.begin(), intertime.end(), tmptime);
		if (it != intertime.end())
		{
			out2 << tmps << endl;
		}

	}
}