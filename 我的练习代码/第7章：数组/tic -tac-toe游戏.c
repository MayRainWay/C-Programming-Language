//tic-tac-toe ��Ϸ
//����һ��3x3�ľ��󣬾����е�����Ϊ1��ʾ��λ������һ��x��Ϊ0��ʾΪ O
//�����ж�����������Ƿ��л�ʤ��һ���������ʤһ�����ַ�X��O����������˻�ʤ

#include <stdio.h>

int main()
{
	//��ʼ��ʼ������ 
	const int size = 3;             //�޶�����9����Ԫ 
	int board[size][size];
	int i,j;
	int numOfX;
	int numOFO;
	int result = -1;   // -1:û��Ӯ��    1��XӮ��    0��OӮ
	
	//�������
	for(i=0;i<size;i++) {
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);   //�������Ԫ���������ݣ�������д������ 
		}
	}
	
	//�����
	for(i=0;i<size; && result == -1;i++){
		numOfO = numOfX =0;  //ȷ�����ж�������Ӱ�� 
		for(j=0;j<size;j++){
			if(board[i][i] == 1){
				numOfX++;
			}else{
				numOfO++;
			}
		}
		if(numOfO==size){
			result=0;
		}else if(numOfX==size){
			result=1;
		}
	} 
	
	//�����
	if(result == -1) {   //�޶�ǰ������ 
		for(j=0;j<size && result ==-1;j++){
			numOfO=numOfX=0;
			for(i=0;i<size;i++){
				if(board[i][j]==1){
					numOfX++;
				}else{
					numOfO++;
				}
			}
			if(numOfO==size){
				result=0;
			}else if(numOfX==size){
				result=1;
			}
		}
	}
	
	//���Խ���
	if(result == -1) {   //�޶�ǰ������ 
	numOfO=numOfX=0;
	for(i=0;i<size;i++){
				if(board[i][i]==1){  //���Խ��� 
					numOfX++;
				}else{
					numOfO++;
				} 
	if(numOfO==size){
				result=0;
			}else if(numOfX==size){
				result=1;
			}	
	}
}
					
	if(result == -1) {   //�޶�ǰ������ 
	numOfO=numOfX=0;
	for(i=0;i<size;i++){
				if(board[i][size-i-1]==1){  //���Խ��� 
					numOfX++;
				}else{
					numOfO++;
				} 
	if(numOfO==size){
				result=0;
			}else if(numOfX==size){
				result=1;
			}
    }
}
	return 0;
 } 
