#include <iostream>
using namespace std;
class Clock                                  //定义Clock类
{
public:
	Clock(int newH, int newM, int newS);    //构造函数
	void setTime(int newH ,int newM ,int newS);
	void showTime();
private:
	int hour,minute,second;
};
//定义成员函数
void Clock::setTime(int newH,int newM,int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}
//构造函数的实现
Clock::Clock(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
//主函数
int main() {
	Clock c(0,0,0);//定义过构造函数之后就可以定义对象时直接赋予对象初值；
	c.showTime();
	c.setTime(8, 30, 30);
	c.showTime();
	system("pause");
	return 0;
}