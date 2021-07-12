#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    int t,qsize,op,k,c;
    string str;
    scanf("%d",&t);
    for(int i=0; i<t;i++){
        deque<int>q;
        scanf("%d %d",&qsize,&op);
        printf("Case %d:\n",i+1);
        for(int j=0;j<op;j++)
        {
            cin>>str;
            if(str=="pushLeft"){
                cin>>k;
                if(q.size()!=qsize){
                    q.push_front(k);
                    printf("Pushed in left: %d\n",k);
                }
                else{
                 printf("The queue is full\n");
            }
            }
            else if(str=="pushRight"){
                cin>>k;
                if(q.size()!=qsize){
                    q.push_back(k);
                    printf("Pushed in right: %d\n",k);

                }
                else{
                 printf("The queue is full\n");
                }
            }
            else if(str=="popLeft"){
                if(!q.empty()){
                printf("Popped from left: %d\n",q.front());
                q.pop_front();
                }
                else{
                    printf("The queue is empty\n");
                }
            }
            else{
                if(!q.empty()){
                printf("Popped from right: %d\n",q.back());
                q.pop_back();
                }
                else{
                    printf("The queue is empty\n");
                }
            }
        }
    }
    return 0;
}
