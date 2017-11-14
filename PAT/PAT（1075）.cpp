#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct{
    int address;
    int data;
    int next;
}LinkNode;
int main(){
    int firstaddress,number,limitnum;
    cin>>firstaddress>>number>>limitnum;
    LinkNode arr[number];
    LinkNode real[number];
    int i,temp,t=0;
    int k=0;
    int address,data,next;
    for (i=0;i<number;i++){
        cin>>arr[i].address>>arr[i].data>>arr[i].next;
    }
    for(i=0;i<number;i++){
        if(arr[i].address==firstaddress){
             real[t]=arr[i];
            while(real[t].next!=-1){
                //    real[t]=arr[i];
                   k=0;
                  while(arr[k].address!=real[t].next){
                      k++;
                 }
                 t++;
                 real[t]=arr[k];
            }
            break;
         }
    }
    LinkNode output[number];
    int count=0,j=0;
    for(i=0;i<number;i++){
        if(real[i].data<0){
            output[j++]=real[i];
            count++;
        }else if(real[i].data<limitnum){
            temp=j-count;
            while(temp--){
                output[temp+count+1]=output[temp+cout];
            }
            output[count++]=real[i];
        }
    }
    // for(i=0;i<number;i++){
    //     if(arr[i].data<0){
    //         j++;
    //         temp=i;
    //         while(temp--)
    //               arr[temp+j]=arr[temp];
    //         arr[j].data=data;
    //         arr[j].next=next;
    //         arr[j].address=address;
    //     }else if(data<limitnum){
    //         k++;
    //       arr[j+k].data=data;
    //       arr[j+k].next=next;
    //       arr[j+k].address=address;
    //     }else{
    //      arr[i].data=data;
    //       arr[i].next=next;
    //       arr[i].address=address;
    //     }
    // }
    cout<<'========================'<<endl;
    // for(i=0;i<number;i++){
    //     if(i!=number-1)
    //         cout<<real[i].address<<' '<<real[i].data<<' '<<real[i].address<<'\n';
    //     else
    //     cout<<real[i].address<<' '<<real[i].data<<' '<<real[i].next;
    for(i=0;i<number;i++){
        if(i!=number-1)
            cout<<output[i].address<<' '<<output[i].data<<' '<<outpur[i+1].address<<'\n';
        else
        cout<<output[i].address<<' '<<output[i].data<<' '<<-1;
    

}




}