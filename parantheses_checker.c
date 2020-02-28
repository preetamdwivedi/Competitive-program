#include<stdio.h>
#include<string.h>
int top=-1;
char stack[100];
void push(char a){
	stack[top]=a;
	top++;
}
void pop(){
	top--;
}
void main(){
	char a[100];
	printf("Enter expression\n");
	scanf("%s",&a);
	for(int i=0;a[i] != '\0';i++){
		if(a[i]=='[' || a[i]=='{' || a[i]=='('){
			push(a[i]);
		}
		else if(a[i] == ']' || a[i] == '}' || a[i]== ')'){
			pop();
		}
	}
	if(top==-1){
		printf("Balanced");
	}	
	else{
		printf("Unbalanced");
	}
}