#ifndef LOTTERY_H
#define LOTTERY_H
 
class Lottery {
   
  private:
   
    struct ListNode {
       
      int numbers;
      
      struct ListNode *next;
       
    };
   
    ListNode *head;
     
  public:
     
    Lottery()
    {head = nullptr;}
     
    ~Lottery();
     
    void appendNode(int);
    void insertNode(int ,int,int,int,int);
    void deleteNode(int);
    void displayList() const;
};


#endif