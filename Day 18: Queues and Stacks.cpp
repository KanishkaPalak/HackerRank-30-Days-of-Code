#include <iostream>
#define max 40
using namespace std;
struct stack
{
    char st[max];
    int top;
};
void initialise(struct stack *ps)
{ps->top=-1;}
struct queue
{
    char qu[max];
    int f,r;
};
void initial(struct queue *pq)
{pq->f=0; pq->r=0;}
class Solution 
{
    public:
        struct stack a;
        struct stack *ps;
        struct queue b;
        struct queue *pq;
        Solution()
        {
            initialise(&a);
            initial(&b);
            ps=&a;
            pq=&b;
        }
        void pushCharacter(char ch);
        void  enqueueCharacter(char ch);
        char popCharacter();
        char dequeueCharacter();
};
void Solution::pushCharacter(char ch)
{
        ps->top++;
        ps->st[ps->top]=ch;
}
void Solution::enqueueCharacter(char ch)
{
        pq->qu[pq->r]=ch;
        pq->r++;
}
char Solution::popCharacter()
{
    char x;
    x=ps->st[ps->top];
    ps->top--;
    return x;
}
char Solution::dequeueCharacter()
{
    char y;
    y=pq->qu[pq->f];
    pq->f++;
    return y;
}
