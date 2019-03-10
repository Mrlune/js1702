int func(int x){
	return (x-1)%9+1;
}
/*
寒假里我弟初学编程遇到一题不会问我：写一函数使func(12345)->func(15)->6
显然这道题可以通过循环做出来，时间复杂度为O(log 10(n) )
但在我把正常的思路教他后，突然想到还有一种时间复杂度为 O(1) 的解法
假设某一个三位数 x = 100 * a + 10 * b + c   a,b,c为 0-9之间的自然数
则 x = (99 * a) + (9 * b) + (a + b + c) 
那么只要将x对9取余即可到达答案，其范围为0-8，考虑到结果为9的情况
因此先对 x - 1 ，再做取余，最后加1，那么结果即为1-9的自然数

之所以写了那么多，是想分享一下经验
平时我们在写程序的时候不妨多思考一下
或许可以换一种思路写代码，通过数学优化或算法优化
可以将程序的运行效率提高 
*/
