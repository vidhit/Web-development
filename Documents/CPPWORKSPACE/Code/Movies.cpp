#include "Movies.h"
#include<iostream>
#include<vector>
#include<string>

using namespace std;

Movies::Movies()
{
    
}
~Movies::Movies()
{
    
}

bool Movies::add_movie(string movie_name,string rating,int watched)
{
    for(const Movie &movie:m)
    {
        if(movie.get_name()==name)
            return false;
    }
    Movie mov{name,rating,watched};
    m.push_back(mov);
    return true;
}

bool count_increment(string mov_name)
{
    for(auto &move:mov_name)
    {
        if(move.get_name()==mov_name)
        {
            move.increment();
            return true;
        }
        return false;
    }
    void Movies::display() const
    {
        if(m.size()==0)
            cout<<"Sorry, no new movies to display";
         else
             {
             
        for(auto mov:m)
        {
            mov.display();
        }
             }
    }    
}