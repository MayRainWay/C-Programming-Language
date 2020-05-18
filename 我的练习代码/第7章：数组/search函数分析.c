//search函数分析的

//我们之前在寻找数据中定义个一个函数
 
 int search (int key,int a[],int length)
 
 //对应使用方法 :
 
 loc = search(x,a,sizeof(a)/sizeof(a[0]))
 
 //为什么要传入length？
 //数组作为函数时，往往必须再用另一个参数来传入数组的大小；
 //数组作为函数的参数时：
      //不能在[]中给出数组的大小
	  //不能再利用sizeof来计算数组元素的数量
	  
	  //详细解释需要等学了指针才能彻底解惑 
	  
	  //关于length的疑问？我能否直接去掉length，直接在循环中给出具体数值来计算？ 
