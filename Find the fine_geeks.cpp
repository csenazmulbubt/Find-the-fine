#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
scanf("%d",&t);

while(t--){
        int k,x;
        cin>>k>>x;
        int cars[k],p[k],sum=0;
        for(int i=0;i<k;i++){
            cin>>cars[i];
        }
        for(int j=0;j<k;j++){
            cin>>p[j];
        }

        if(x%2==0){
                sum=0;
            for(int i=0;i<k;i++){
                if(cars[i]%2==1)
                    sum+=p[i];
            }
            printf("%d\n",sum);
        }
        else
            {
        for(int i=0;i<k;i++){
                if(cars[i]%2==0)
                    sum+=p[i];
            }
            printf("%d\n",sum);
        }




}

}
