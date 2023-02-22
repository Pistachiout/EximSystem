

# 一、需求分析

​	设计一个简单的考试系统，可进行C++与Java的考试，考生姓名、考生学号、C++题目、Java题目、C++答案，Java答案分别存入../txt文件数据/路径下的StudentsName、StudentsNum、QuestionC，QuestionJ、AnswerC、AnswerJtxt文件中，进入系统后输入学号验证并进入考试，系统将自动给选择题和填空题进行对错判断并给分，最后求出选择与填空题的考试总分并存入../txt文件数据/Score.txt，而简答题与编程题则写入../txt文件数据/路径下的shortAnswerC.txt/shortAnswerJ.txt与programmingC.txt /programming.txtJ文件供老师打分。

 

# 二、逻辑流程

![图1：考试系统流程图](https://img-blog.csdnimg.cn/33defa162692417c990aa934fb357249.png)

# 三、考试类设计

![图2：考试系统类图](https://img-blog.csdnimg.cn/eb459f8a9cec4d7cb8df686c762d8c6c.png)



## ①　学生类Student

学生类包括学生姓名与学号，学号用于登录系统并认证身份，学生姓名则用于记录选择题与填空题分数以及简答编程的答案。方法包括InitStudent（）初始化考生与Register（）登录考试。

## ②　问题基类QandA

问题基类，属性包括问题，答案与对应的分数，而方法则包括：

1. 虚函数InitQandA（）用来初始化考题，答案以及分数，本系统只是模拟，故对于每道题初始默认为10分的分值，	
2. choice（），fillIn（），shortAnswer（），programming（）等函数表示对于考题中的选择题，填空题等题型进行处理函数，其中shortAnswer（），programming（）为虚函数。
3. 虚函数Exam（）,采用了模板方法模式，由于对于Java与C++考试时shortAnswer（），programming（）函数有细微的差别，但算法大致的逻辑一样，故将某些步骤推迟到子类，有助于算法的扩展。 

## ③　C++考试类QandAC

C++考试类，若选择C++考试则执行该类的方法

1. InitQandA（）用来初始化C++考题，答案以及分数，
2. choice（），fillIn（），shortAnswer（），programming（）等函数表示对于C++考题中的选择题，填空题等题型进行处理函数，并写入./txt文件数据/路径下的Score.txt、shortAnswerC.txt与programmingC.txt文件。
3. Exam（）将 choice（），fillIn（），shortAnswer（），programming（）统一调用，完成C++考试，programming（）在输入为“end”时表示代码编写结束。

## ④　**Java考试类QandAJ**

Java考试类，若选择Java考试则执行该类的方法

1.InitQandA（）用来初始化Java考题，答案以及分数，	2.choice（），fillIn（），shortAnswer（），programming（）等函数表示对于Java考题中的选择题，填空题等题型进行处理函数，并写入./txt文件数据/路径下的Score.txt、shortAnswerJ.txt与programmingJ.txt文件。

3.Exam（）将 choice（），fillIn（），shortAnswer（），programming（）统一调用，完成Java考试，programming（）在输入为“end”时表示代码编写结束。



# 四、**考试截图**

## ①　用户登录 为方便老师测试，学号可输入为1

![在这里插入图片描述](https://img-blog.csdnimg.cn/284067909c7a43a6a5e37e602b2183c0.png)
![](https://img-blog.csdnimg.cn/e6e8b66c16c743ad8aefb82a173273a7.png)

## ②　**选择考试课目C++**

![](https://img-blog.csdnimg.cn/9908b1ca04ee4341820e9cf6bc187a8f.png)

## ③　选择考试课目为Java

![](https://img-blog.csdnimg.cn/79582b4e7e3a420f86c7fd01a524e271.png)

## ④　**选择题**

![](https://img-blog.csdnimg.cn/0a248f2ff72843b4831f5a4a3774896d.png)

## ⑤　**填空题作答**

![](https://img-blog.csdnimg.cn/c1ae5ca9b471461287e09e81a1eb97d2.png)

## ⑥　**简答题作答**

 ![](https://img-blog.csdnimg.cn/89e20af882e246fab31b75de057ecc1d.png)
![](https://img-blog.csdnimg.cn/e776ff9f1e0946aa9a1e6a39150a1a4e.png)



## ⑦　**编程题作答**

![](https://img-blog.csdnimg.cn/eb8dc3d9abe2498aacdeb17772540b83.png)

## ⑧　**分数统计**

![](https://img-blog.csdnimg.cn/d94ed6753f7544d8be3564c1ceab0f59.png)

## ⑨　**考试结束**

![](https://img-blog.csdnimg.cn/68a3926d873f4565ac3861ae3a8d5d8e.png)

 

# 五、总结

本次实验我对于系统的功能性需求已基本全部实现，如选择判断自动判分，且分数与简答编程答案计入txt文件供后续老师判分。但由于我此前的学习没有深入C++以及QT可视化等方面的知识，对于非功能性需求没有特别突出的地方，如可视化方面、数据持久化方面没有亮点，但也尽量用到了自己学习过的知识，如在设计时进行类图设计，并考虑到了设计模式如模板方法的使用，并在代码注释方面也应有尽有。此外对于编程题也有改进的空间，虽然本系统中可以进行换行，但会消耗考生做题的时间。

 

 

