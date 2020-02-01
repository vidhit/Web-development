#include<iostream>
#include<string>
#include<vector>
#include<chrono>
#include<iomanip>

using namespace std;

int main()
{
    double sum=0.0;
    vector<string> name{"85.23","92.2","34.23"};
    vector<double>name_in;
     for(int i=0;i<name.size();++i)
        name_in.push_back(stod(name.at(i)));
        
    for(int i=0;i<name.size();++i)
         sum+=name_in.at(i);
  
         
      cout<<sum<<endl;
      namespace chr = std::chrono;

    auto unix_timestamp = std::chrono::seconds(std::time(NULL));
    int unix_timestamp_x_1000 = std::chrono::milliseconds(unix_timestamp).count();
    //cout<<unix_timestamp_x_1000;
    
    auto millisecondsUTC = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
     cout<<millisecondsUTC<<endl;
       //cout.precision(1);
     double t=4.923454547;
     
     cout<<std::setprecision(10)<<t;
}