float InvSqrt (float x)

{

float xhalf = 0.5f*x;

int i = *(int*)&x;

i = 0x5f3759df - (i >> 1); // 计算第一个近似根

x = *(float*)&i;

x = x*(1.5f - xhalf*x*x); // 牛顿迭代法

return x;

}