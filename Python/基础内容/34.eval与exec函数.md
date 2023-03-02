# eval与exec函数

## eval函数

eval函数输入一个表达式字符串，并返回其计算结果
```py
>>> eval("1+2") 
3
>>> x=2          
>>> eval("x*2+2") 
6
>>> def f():
...     print("s")
...
>>> eval("f()")
s
```

## exec函数

`exec`用于执行一条字符串
```py
>>> exec("x=10")
>>> print(x)
10
>>> exec("x+=10")
>>> print(x)
20
```