//番号2610210086、宮沢祥平

#include<stdio.h>

int main (void){
	int i,j,dat[5],tmp;
	
	for(i = 0; i<5; i++){
		printf("整数を5つ入力してください。（%d つ目）：", i+1);
		scanf("%d", &dat[i]);
	}
	
	printf("入力された５つの数字は：");
	for(i = 0; i<5; i++){
		printf("%d ", dat[i]);
	}
	printf("\n");
	
	for (i = 0; i < 5; i++){     //昇順で並び替える際に一枚ずつ大小が確定していくので、それをforループで考える。
		for (j = i + 1; j < 5; j++).  //例えば[0]と[1]、[0]と[2]、[0]と[3]、[0]と[4]の大小を比べていき、基準の配列と他の配列のうちで一番小さいものを探す。
		{
			if (dat[i] > dat[j])
			{
				tmp = dat[i];
				dat[i] = dat[
				dat[j] = tmp;
				//dat[i]=dat[j]、dat[j]=dat[i]とするとうまくいかないので、一旦避難させるための待避所的なもの(tmp)を作る。
			}
		}
	}
	
	printf("小さい順に並び替えると：");
	for(i = 0; i<5; i++)
	{
		printf("%d ", dat[i]);
	}
	printf("\n");
	
	return 0;
}