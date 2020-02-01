#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};


struct node_second
{
    int data_second;
    node_second *next_second;
};

class linked_list
{
private:
    node *head,*tail;
public:

      linked_list()
      {
          head=NULL;
          tail=NULL;
      }
      
      void add_node(int n)
      {
          node *temp=new node;
          temp->data=n;
          temp->next=NULL;
          
          if(head==NULL)
          {
              head=temp;
              tail=temp;
          }
          else
         { 
           tail->next=temp;
           tail=tail->next;
         }
      }
      
      void reverse_list()
      {
          node *prev_node;
          node *next_node,*current_node;
          current_node=head;
          prev_node=NULL;
          next_node=NULL;
          while(current_node!=NULL)
          {
              next_node=current_node->next;
              current_node->next=prev_node;
              prev_node=current_node;
              current_node=next_node;
          }
          
          
          head=prev_node;
      }
      
      
      void display_list()
      {
          //string storenum=NULL;
          node *track;
          track=head;
          while(track!=NULL)
          {
              cout<<track->data;
              cout<< " ";
              track=track->next;
          }
          cout<<endl;
          //cout<<storenum;
      }
};
      
      int main()
      {
          linked_list a;
          a.add_node(2);
          a.add_node(4);
          a.add_node(3);
          a.display_list();
          a.reverse_list();
          a.display_list();
          return 0;
      }


