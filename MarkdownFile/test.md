# <center><font face="楷体" color=orange> md学习</font></center>
## 一、基本语法
### 1、标题
#一级标题
##二级
...
### 2、引用
> 使用小箭头
> >可分级

### 3、列表
#### 无序列表
- 加减乘号加空格
+
*
#### 有序列表
1. 前面空格嵌套
2. 罗马数字序列
3. 
#### TodoList
- [x] 小横杠空格加方括号中间空格在空格加内容
- [ ] A

### 4、表格
|左对齐|居中对齐|右对齐|
| :--- | :---: | ---:|
|竖杠先行|英文冒号在那边那边对齐|加不限个短杠|

### 5、段落
- 换行：两个以上空格回车或空一行
- 分割线 三个以上***
  ****
- 字体
  |字体|代码|
  |:--:| :--:|
  |*斜体*|* *|
  |==高亮==|== ==|
  |**粗体**|** **|
  |***斜粗体***|*** ***|
  |~~删除~~|~~ ~~|
  |<u>下划线</u>|<u> </u>|
- 脚注
  代码块要特别^[随便写点、小间隔符加方括号，括号内写脚注内容]处理 
  
### 6、代码
- 单句：用 `print ("hello would") `（最左上角）
- 多句：
```
 #include<iostream>

int main()
{
    printf ("hello world");
    return 0;
}
```
### 7、超链接
- [学习教程]：https://pan.baidu.com/s/1T3OPbjLGAesjUYlrUnuv_w
### 8、图片
[路过图床]：https://imgchr.com/

![pndCLHx.png](https://s41.ax1x.com/2026/10/14/pndCLHx.png)

<div align=center><img src="https://s41.ax1x.com/2026/10/14/pndCLHx.png" alt="pndCLHx.png" border="0" width=50% height=40%/></div>
  
## 三、其他操作
- 插入latex公式(了解latex语法)
  - 行内显示公式：一个`$ $`
  $f(x)=ax+b$
  - 块内数学表达式：`$$ $$`
  
- html语法
  - 修改标题等格式：
  改变颜色、字体：`<font face="字体" size="字号" color=英文> </font>`
  居中：`<center> </center>`

  也可用css语法，后面再搜
  - 改变图片大小:要使用html格式的图片地址

## 四、PDF导出