#include<iostream>
using namespace std;
int main(){
   int m,n,k,ans=0;
   int x1,y1,x2,y2;
   cin>>n>>m;
   int tree[500][500]={0};
   cin>>k;
   
   for(int s=1;s<=k;s++){
   	cin>>x1>>y1>>x2>>y2;
   	  if(y1==y2)
		 {
		    if(x2>x1)
			{
			 for(int i=x1;i<=x2;i++)
   	  		    tree[i][y2]=1;
			 }
		 else{
		 	for(int i=x2;i<=x1;i++)
		 		tree[i][y2]=1;
		 }
	}else if(x1==x2){
		
   	         if(y2>y1){
   		for(int j=y1;j<=y2;j++){
   			tree[x1][j]=1;
		   }
	   }else{
	   	for(int j=y2;j<=y1;j++){
	   		tree[x1][j]=1;
		   }
	   }
   }else if(x1>x2&&y1<y2){
   		int j=y1;
   		for(int i=x1;i>=x2;i--){
   			tree[i][j]=1;
   			j++;
		   }
	   }else if(x2>x1&&y2<y1){
   		int j=y1;
   		for(int i=x1;i<=x2;i++){
   			tree[i][j]=1;
   			j--;
		   }
	   }else if(x1<x2&&y1<y2){
   		int j=y1;
   		for(int i=x1;i<=x2;i++){
   			tree[i][j]=1;
   			j++;
		   }
	   }else if(x1>x2&&y1>y2){
   		int j=y1;
   		for(int i=x1;i>=x2;i--){
   			tree[i][j]=1;
   			j--;
		   }
	   }
}

for(int j=1;j<=m;j++){
	
	for(int i=1;i<=n;i++){
		

		
		if(tree[i][j]==1){
			ans++;
		}
}

}
cout<<ans;

   return 0;
}
