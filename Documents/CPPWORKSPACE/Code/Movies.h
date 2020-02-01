#ifndef __MOVIES__H
#define __MOVIES__H
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Movies
{
    private:
        vector<Movie>m;
        
public:
        Movies();
        ~Movies();
        
    bool add_movie(string name,string rating,int watch_count);
    bool count_increment(string mov_name);
    void display() const;     
}
#endif