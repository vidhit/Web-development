#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    ifstream in_file;
    string line;
    double voltage,soc;
    in_file.open("../battery_data.csv");
    if(!in_file)
    {
        cerr<<"Problem opening file"<<endl;
        //return 1;
    }
    //cout<<"file good to go";
    in_file>>line>>voltage>>soc;
    cout<<line<<endl;
    cout<<voltage<<endl;
    cout<<soc<<endl;
    return 0;
}