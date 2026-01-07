//Type your content here
#include<stdio.h>
int main(){
	int i,n,key,pos=0;
	int a[100];
	int flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			pos=i;
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("found at position %d\n",pos);
	}
	else{
		printf("%d not found\n",key);
	}
	return 0;
}
