#include <iostream>
#define laenge 10
class Queue
{
public:



    void setupQueue();
    void coutall();
    void push(int);
    void pv2(int);
    int pop();
    void reset();

private:
    int pointer=0;
    int lastElement=2;
    int firstElement= 2;
    int maxQL= laenge;
    int TheQueue[laenge]={0};
};
void Queue::setupQueue()
{


    //TheQueue[100]= {10};
    for(int e;e<laenge;e++)
    {
        //std::cout<< "grfd"<<std::endl;
        //TheQueue[e]= 0;
    }

};
void Queue::reset() {
    for(int e=0;e<laenge;e++)
    {
        TheQueue[e]= {999};
    }
};
void Queue::coutall() {


    for(int i=0;i<laenge;i++)
        {
        std::cout<<"the I"<<i;
        std::cout<<TheQueue[i]<<std::endl;


        };

};
void Queue::push(int newItem) {
    if(lastElement<laenge-1)
    {
        TheQueue[(lastElement+1)] = newItem;

        lastElement ++;

    }
    else
    {
       std::cout<<"Ups,zu viel"<< newItem<<std::endl;
    }

}void Queue::pv2(int newItem2) {


    if( !(firstElement-lastElement ==1 ) )
    {
        if( !(firstElement==0 && lastElement ==laenge))
        {
            TheQueue[(lastElement != laenge)*(lastElement+1)]=newItem2;
            if(lastElement == laenge){
                lastElement =0;
            }
            else {
                lastElement = !(lastElement == laenge) * (lastElement + 1);
            }
            if(newItem2 == 1){
                std::cout<<"1111111111111"<<std::endl;
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;
            }
            if(newItem2 == 2){
                std::cout<<"222222222222"<<std::endl;
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;
            }
            if(newItem2 == 3){
                std::cout<<"33333333333333333333333"<<std::endl;
                std::cout<<"Queue "<<TheQueue[0];
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;

            }
            if(newItem2 == 4){
                std::cout<<"4444444444444444444"<<std::endl;
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;
            }
            if(newItem2 == 5){
                std::cout<<"5555555555555555555555555"<<std::endl;
                std::cout<<"Queue "<<TheQueue[0];
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;

            }
            if(newItem2 == 6){
                std::cout<<"666666666666666666"<<std::endl;
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;
            }
            if(newItem2 == 7){
                std::cout<<"7777777777777777"<<std::endl;
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;
            }
            if(newItem2 == 8){
                std::cout<<"8888888888888"<<std::endl;
                std::cout<<"Queue "<<TheQueue[0];
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;

            }
            if(newItem2 == 9){
                std::cout<<"9999999999999"<<std::endl;
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;
            }
            if(newItem2 == 10){
                std::cout<<"10101010101010"<<std::endl;
                std::cout<<"l "<<lastElement;
                std::cout<<"f "<<firstElement<< std::endl;
                std::cout<<(lastElement != laenge)*(lastElement+1)<<std::endl;
            }

        }
        else{
            std::cout<<"l "<<lastElement;
            std::cout<<"l "<<firstElement<< std::endl;
            std::cout<<"Ups,zu vielo"<< newItem2<<std::endl;
        }
    }
    else{

        std::cout<<"Ups,zu viel"<< newItem2<<std::endl;
    }


}
int Queue::pop()
{

}
int main() {

    Queue que;
    //que.setupQueue();
    //que.coutall();
    que.reset();
    que.pv2(1);
    que.pv2(2);
    que.pv2(3);
    que.pv2(4);
    //que.coutall();
    que.pv2(5);

    que.pv2(6);

    que.pv2(7);
    que.pv2(8);
    que.pv2(9);
    que.pv2(10);
    que.pv2(11);
    que.coutall();

}

