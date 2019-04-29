# C可变参数 
可变参数函数的一般格式
```C
int func(int,...)
{
	.
	.
}
int main()
{
	func(2,2,3);
	func(3,2,3,4)
}	
```
函数 func() 最后一个参数写成省略号，即三个点号（...），省略号之前的那个参数是 int，代表了要传递的可变参数的总数。为了使用这个功能，您需要使用 stdarg.h 头文件，该文件提供了实现可变参数功能的函数和宏。具体步骤如下：
* 定义一个函数，最后一个参数为省略号，省略号前面可以设置自定义参数
* 在函数定义中创建一个 va_list 类型变量，该类型是在 stdarg.h 头文件中定义的
* 使用 int 参数和 va_start 宏来初始化 va_list 变量为一个参数列表。宏 va_start 是在 stdarg.h 头文件中定义的
* 使用 va_arg 宏和 va_list 变量来访问参数列表中的每个项
* 使用宏 va_end 来清理赋予 va_list 变量的内存
# reference
* [C可变参数](http://www.runoob.com/cprogramming/c-variable-arguments.html)
* [C语言基础：不定参数](https://blog.csdn.net/walle2018/article/details/79751650)
* [C语言深处第二节：函数栈帧](https://www.askpure.com/course_DXMRI553-D81INAOS-06RBPK32-8QGUKX0E.html)
