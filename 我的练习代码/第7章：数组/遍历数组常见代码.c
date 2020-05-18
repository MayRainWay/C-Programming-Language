//遍历数组常见代码

for(i=0;i<length;i++){
	b[i]=a[i];
} 



for(i=0;i<number;i++){
	count[i]=0;
}


for(i=0;i<length;i++){
	if(a[i]==key){
		ret=i;
		break;
	}
}


for(i=0;i<cnt;i++){
	if(number[i]>average){
		printf("%d",number[i]);
	}
}

for(i=0;i<number;i++){
	printf("%d:%d\n",i,count[i]);
}


//遍历数组通常都是使用for循环，让循环变量从i到0到<数组的长度，
//这样循环体内最大的i正好是数组最大的有效下标

//常见错误是：
    //循环结束条件是<=数组长度，或 
	// 离开循环后，继续使用i的值来做数组元素的下标 
