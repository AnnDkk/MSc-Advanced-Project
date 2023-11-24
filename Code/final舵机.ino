#include <Servo.h>
Servo servo_5;
Servo servo_6;
float checkdistance_7_3() {  //定义一个浮点型函数checkdistance_7_3()
  digitalWrite(7, LOW);   //低高低电平发一个短时间脉冲去Trigpin   
  delayMicroseconds(2);
  digitalWrite(7, HIGH);
  delayMicroseconds(10);
  digitalWrite(7, LOW);
  float distance = pulseIn(3, HIGH) / 58.00;   //将回波时间换算成distance
  delay(10);
  return distance;   //向调用函数返回distance
}
void setup(){
  pinMode(7, OUTPUT);  //定义7号引脚为输出管脚
  pinMode(3, INPUT);   //定义3号引脚为输入管脚
  servo_5.attach(5); 
  servo_6.attach(6);  //定义5号为舵机管脚
}
void loop(){
  if (checkdistance_7_3() < 10) {   //当物体接近超声波的距离小于20时，舵机转动到30度位置
    servo_5.write(148);
    servo_6.write(32);
    delay(1500);
    // servo_5.write(112);
    // servo_6.write(68);
    // servo_6.write(0);
  } else {     //否则舵机保持在90度位置
    servo_5.write(112);
    servo_6.write(68);
    // servo_6.write(-120);
  }
  // if (checkdistance_7_4() < 10) {   //当物体接近超声波的距离小于20时，舵机转动到30度位置
  //   // servo_5.write(0);
  //   servo_6.write(20);
  //   // delay(2000);
  // } else {     //否则舵机保持在90度位置
  //   // servo_5.write(120);
  //   servo_6.write(80);
  // }
}