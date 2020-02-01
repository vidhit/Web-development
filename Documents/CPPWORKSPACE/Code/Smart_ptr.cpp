#include<iostream>
#include<memory>
#include<vector>

class Test
{
private:
    int data;
    
public:
  Test():data{0}
  {
      
      std::cout<<"Test constructor ("<<data<< ")"<<std::endl;
  }
  Test(int data):data{data}
  {
      
      std::cout<<"Test constructor ("<<data<< ")"<<std::endl;
  }
  int get_data() const
  {
      return data;
  }
  ~Test()
  {
      std::cout<<"Test destructor ("<<data<< ")"<<std::endl;
  }
};

using namespace std;
int main()
{
    //Test *t1 = new Test(1000);//Raw pointer you need to delete t1 in order to call the destructor and free up the space in heap
    //delete t1;
    
    std::unique_ptr<Test>t1{new Test{100}};//destructor is automatically called
    std::unique_ptr<Test> t2=std::make_unique<Test>(1000);
    std::unique_ptr<Test>t3;
    //t3=t1//NOT ALLOWED TO ASSIGN UNIQUE POINTERS
    t3=std::move(t1);
    if(!t1)
        std::cout<<"t1 is nullptr"<<std::endl;
    return 0;
}