//tic-tac-toe 游戏
//读入一个3x3的矩阵，矩阵中的数字为1表示该位置上有一个x，为0表示为 O
//程序判断这个矩阵中是否有获胜的一方，输出获胜一方的字符X或O，或输出无人获胜

#include <stdio.h>

int main()
{
	//开始初始化矩阵 
	const int size = 3;             //限定数组9个单元 
	int board[size][size];
	int i,j;
	int numOfX;
	int numOFO;
	int result = -1;   // -1:没人赢，    1：X赢，    0：O赢
	
	//读入矩阵
	for(i=0;i<size;i++) {
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);   //读入矩阵单元格所有数据，将矩阵写入数组 
		}
	}
	
	//检查行
	for(i=0;i<size; && result == -1;i++){
		numOfO = numOfX =0;  //确保上行对下行无影响 
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
	
	//检查列
	if(result == -1) {   //限定前提条件 
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
	
	//检查对角线
	if(result == -1) {   //限定前提条件 
	numOfO=numOfX=0;
	for(i=0;i<size;i++){
				if(board[i][i]==1){  //正对角线 
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
					
	if(result == -1) {   //限定前提条件 
	numOfO=numOfX=0;
	for(i=0;i<size;i++){
				if(board[i][size-i-1]==1){  //反对角线 
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
