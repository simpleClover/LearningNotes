# display模块

## 设置窗口大小
set_mode(size=(0, 0), flags=0, depth=0, display=0, vsync=0) -> Surface

设置Pygame的窗口大小，需要使用`pygame.display.set_mode()`函数，该函数传入一个size元组`(x,y)`，其中x为宽度，y为长度

这个函数默认将直接显示窗口并返回一个Surface引用对象
```
screen = pygame.display.set_mode((1600,900))    #创建一个1600×900大小的窗口并立即显示
```

> 注意这是一个单例对象，也就是说多次使用`pygame.display.set_mode()`并不会创建多个窗口，自始至终只有一个窗口对象，但重复调用这个函数这将重新设置窗口属性

### pygame.display.set_mode的flag参数
若要使用多个flag参数，请将其用`|`运算符连接

名称|作用
:-|:-
pygame.FULLSCREEN|全屏显示（使用给定的分辨率）
pygame.DOUBLEBUF|仅适用于OpenGL
pygame.HWSURFACE|(在Python2中已过时)在全屏时使用硬件加速
pygame.OPENGL|创建一个OpenGL渲染的窗口
pygame.RESIZABLE|窗口可改变大小
pygame.NOFRAME|取消窗口边框和控件
pygame.SCALED|分辨率取决于桌面大小和缩放图形
pygame.SHOWN|显式打开窗口（默认）
pygame.HIDDEN|使用隐藏模式打开窗口

## 获取窗口引用

如果在使用`pygame.display.set_mode()`函数的时候没有使用变量接收返回值，那么还可以使用`pygame.display.get_surface()`方法来获取Surface引用对象

## 设置窗口标题

使用`pygame.display.set_caption()`函数设置窗口标题，这需要传入一个字符串

## 设置窗口图标

使用`pygame.display.set_icon()`函数来设置窗口图标

这需要传入一个Surface类的对象

## 获取当前窗体大小

使用`pygame.display.get_window_size()`函数来获取当前窗口大小，这将返回一个包含两个数字的元组

## 获取当前桌面分辨率

使用`pygame.display.get_desktop_sizes() `函数来获取电脑桌面分辨率，这将返回一个包含两个数字的元组

## 获取可使用的显示器分辨率

使用`pygame.display.list_modes()`来获取设置中当前可使用的显示器分辨率

