////指针与const2

//转换 
//·总是可以把一个非const的值转换成const

/*  void f(const int *x);
int a=15;
f(&a);   //OK

const int b=a;
f(&b);   //OK

b=a+1;   //ERROR!

·当要传递的参数的类型比地址大的时候，这是常用的手段：既能用比较少的字节数传递值给参数，又能避免函数对外面的变量的修改 
*/ 

//const数组
//·const int a[]={1,2,3,4,5,6,};
//·数组变量已经是const的指针了，这里的const表明数组的每个单元都是const int
//·所以必须通过初始化进行赋值

//保护数组值
//·因为把数组传入函数时传递的是地址，所以那个函数内部可以修改数组的值
//为了保护数组不被函数破坏，可以设置参数为const
//·int sum(const int a[],int length); 
