#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,qsize,op,k,c;
    string str;
    scanf("%d",&t);
    for(int i=0; i<t;i++){
        queue<int> rightQueue;
        stack<int> leftStack;
        scanf("%d %d",&qsize,&op);
        c=1;
        printf("Case %d:\n",i+1);
        for(int j=0;j<op;j++)
        {
            cin>>str;
            if(str=="pushLeft")
            {
                cin>>k;
                if(c>qsize){
                    printf("The queue is full\n");
                }
                else{
                leftStack.push(k);
                printf("Pushed in left: %d\n",leftStack.top());
                c++;
                }
            }
            else if(str=="pushRight")
            {
                cin>>k;
                if(c>qsize){
                    printf("The queue is full\n");
                }
                else{
                rightQueue.push(k);
                printf("Pushed in right: %d\n",rightQueue.front());
                c++;
                }
            }

            else if(str=="popLeft")
            {
                if(!leftStack.empty()){
                printf("Popped from left: %d\n",leftStack.top());
                leftStack.pop();
                }
                else{
                    printf("The queue is empty\n");
                }
            }
            else if(str=="popRight")
            {
                if(!rightQueue.empty()){
                printf("Popped from right: %d\n",rightQueue.front());
                rightQueue.pop();
                }
                else{
                    printf("The queue is empty\n");
                }
            }
        }
    }
    return 0;
}
