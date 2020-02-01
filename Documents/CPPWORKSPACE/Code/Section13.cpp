            #include<iostream>
            #include<string>
            #include<vector>
            using namespace std;
            class Movie
            {
            friend class Movies;
            private:
            string movie_name;
            string movie_rating;
            int watched;

public:
            Movie(movie_name,movie_rating,watched)
            {
                this->movie_name=movie_name;
                this->movie_rating=movie_rating;
                this->watched=watched;
            }
          
            };

            class Movies
            {
                vector<Movie>m;
                
public:
                 void add_movie(string mov_name,string mov_rating,int watch_count)
                 {
                     m[i].movie_name=mov_name;
                     m[i].movie_rating=mov_rating;
                     m[i].watched=watch_count;
                 }
                void count_increase(string mov_name)
                {
                    m[i].watched++;
                }
                
                void display()
                {
                    for(int i=0;i<m.size();++i)
                        cout<<m[i].movie_name<<endl;
                }
                
                
            };
            int main()
            {
             string mov_name;
             cin<<mov_name;
             string mov_rating;
             cin<<mov_rating;
             int watch_count; 
             cin>>watch_count;
             Movies movies;
             Movies movies(mov_name,mov_rating,watch_count);
             movies.count_increase(mov_name);
             movies.display();
            }