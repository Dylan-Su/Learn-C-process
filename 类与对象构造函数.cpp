#include <iostream>
using namespace std;
class Clock                                  //����Clock��
{
public:
	Clock(int newH, int newM, int newS);    //���캯��
	void setTime(int newH ,int newM ,int newS);
	void showTime();
private:
	int hour,minute,second;
};
//�����Ա����
void Clock::setTime(int newH,int newM,int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}
//���캯����ʵ��
Clock::Clock(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
//������
int main() {
	Clock c(0,0,0);//��������캯��֮��Ϳ��Զ������ʱֱ�Ӹ�������ֵ��
	c.showTime();
	c.setTime(8, 30, 30);
	c.showTime();
	system("pause");
	return 0;
}