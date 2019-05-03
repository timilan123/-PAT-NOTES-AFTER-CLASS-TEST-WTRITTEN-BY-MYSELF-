#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int N;
	while(scanf("%d",&N),N!=0) {
		int score[1010];
		int give_score;
		int count=0;
		for(int i=0; i<N; i++) {
			scanf("%d",&score[i]);
		}
		scanf("%d",&give_score);
		for(int i=0; i<N; i++) {
			if(score[i]==give_score)
				count++;
		}
		cout<<count;
		cout<<'\n';
	}
	return 0;
}

