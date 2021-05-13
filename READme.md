# **C++ LAB3**
---
**This program has some functions**

### **Question A**
>1. **function 1->Read file:**
+ Read "file_in.txt" data to sort.
The first number read in the file is the number of vectors to be stored in this file.
>2. **function 2->Sum:**
+ calculate the total weight of the top five and print sum.

### **Question B**
>1. **function 1->Calculating time:**
+ Using member function `getElapsedTime()`to calculate the difference between the two times (start and end of sorting) respectively.
>2. **function 2->Compare the time of two algorithms:**
+ Compare the built-in sorting method in C++ with the simple sorting method written by myself.

---
## **Explain the difference between *O*($n log n$) and *O*($n^2$)**

![](https://i.imgur.com/i9hF2qn.jpg)
![](https://i.imgur.com/v1xxKIM.jpg)
![](https://i.imgur.com/Mlnca0S.jpg)
---
#### **以上為使用VS跑C++ compile時間**
---
![](https://i.imgur.com/ryKgVMW.jpg)
---
#### **以上為使用Cygwin run g++ compile時間**
---
## **結論** 

不論是哪個都可以看出當size越小時，在範例中較小的像`size=1000`時，不論是使用自己寫的排序法(插入排序法時間複雜度為*O*($n^2$))，或是使用`include<algorithm>`中的`sort()` (使用Quick sort時間複雜度為*O*($n log n$)) ，其實相差很小，甚至可以說幾乎沒什麼差別。     
但是一旦當n變大時兩個演算法的優劣立馬高下立判，在範例中使用較大的數像是`size=1000000`，可以看到就算使用跑起來就快的Cygwin中最後執行的結果還是相當漫長要花時 4409.56 sec，而此時若是使用Quick sort則跑完的時間為 0.312 sec，由此可見影響一個程式執行花費時間最大的不是機器執行效率，而是演算法的時間複雜度。 


---
# **心得**
#### 這次打起來的感覺比上次作業簡單，可能因為真的要打的東西不多，(也有可能是很多例外情形我都沒考慮沒寫出來...)，除此之外的老師都已經給我們了，只要照著打進來就好，最後在Question B的地方用數字來讓我們實際了解到演算法複雜度主要都是在考慮n趨近於無窮大之情形，果然動手做的紮實程度跟只是讀過去相比而言差很多呢!




