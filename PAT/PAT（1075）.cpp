#include<iostream>
#include<stdio.h>
# include<fstream>  
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
    int i,temp,t=0,k=0;
    int address,data,next;
    for (i=0;i<number;i++){
        cin>>arr[i].address>>arr[i].data>>arr[i].next;
    }
    for(i=0;i<number;i++){
        if(arr[i].address==firstaddress){
             real[t]=arr[i];
            while(real[t].next!=-1){
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
    LinkNode fuoutput[number];
    LinkNode betwoutput[number];
    LinkNode largoutput[number];
    int fucount=0,betwcount=0,largcount=0;
    for(i=0;i<number;i++){
        if(real[i].data<0){
            fuoutput[fucount++]=real[i];
        }else if(real[i].data<=limitnum){
            betwoutput[betwcount++]=real[i];
        }else{
            largoutput[largcount++]=real[i];
        }
    }
   for(i=0;i<fucount;i++){
       if(i!=fucount-1){
            printf("%05d",fuoutput[i].address);
            cout<<" "<<fuoutput[i].data<<" ";
            printf("%05d",fuoutput[i+1].address);
       }else{
            printf("%05d",fuoutput[i].address);
            cout<<" "<<fuoutput[i].data<<" ";
            printf("%05d",betwoutput[0].address);
       }
        cout<<endl;
   }

   for(i=0;i<betwcount;i++){
         if(i!=betwcount-1){
            printf("%05d",betwoutput[i].address);
            cout<<" "<<betwoutput[i].data<<" ";
            printf("%05d",betwoutput[i+1].address);
       }else{
            printf("%05d",betwoutput[i].address);
            cout<<" "<<betwoutput[i].data<<" ";
            printf("%05d",largoutput[0].address);
       }
        cout<<endl;
   }
      for(i=0;i<largcount;i++){
         if(i!=largcount-1){
            printf("%05d",largoutput[i].address);
            cout<<" "<<largoutput[i].data<<" ";
            printf("%05d",largoutput[i+1].address);
            cout<<endl;
       }else{
            printf("%05d",largoutput[i].address);
            cout<<" "<<largoutput[i].data<<" ";
            k=-1;
            cout<<k;
       }
       
   }

  

  
    

    // int count=0,j=0;
    // int after,before;
    // for(i=0;i<number;i++){
    //     if(real[i].data<0){
    //         output[j++]=real[i];
    //         count++;
    //     }else if(real[i].data<limitnum){
    //         temp=j-count;
    //         while(temp--){
    //             after=temp+count+1;
    //             before=temp+count;
    //             output[after]=output[before];
    //         }
    //         output[count++]=real[i];
    //         j++;
    //     }else{
    //         output[j++]=real[i];
    //     }
    //     cout<<count<<":"<<output[count]<<endl;
        // cout<<j<<":"<<output[j]<<endl;
    

    
}