# 04.11
Arduino Practice

## 준비물
  + 아두이노Uno, 브래드보드, LED, Button, 조도센서, 서보모터, 4.7kΩ, 220Ω 저항, 점퍼선 
  
## 기능
|Pin number|Name|Function|
|------|-----|---|
|A1|IlluminationSensor|밝기감지|
|7|Button|버튼기능|
|8|Button|버튼기능|
|6|LED|발광기능|
|9|LED|발광기능|
|11|Servo|모터동작|

## TinkerCad
![tinkercad](Button_With_MoterSensor.png)

## 동작
+ IlluminationSensor_CompareWithPrevious
  + 조도센서를 이용해 LED를 제어한다.
  + 현재 값이 크면 첫번째 LED를 이전의 값이 크면 두번째 LED를 켠다.
 
+ ServoRotation_With_Button
  + 버튼으로 서보모터를 제어한다.
  + 처음 버튼을 누를 때마다 30도씩 서보모터가 움직이고, 두번째 버튼을 누를 때마다 -10도씩 움직인다.
  + 두 버튼을 동시에 누르면 초기 상태로 돌아간다.
  
+ ServoRotate_180
  + 코드를 실행시키면 서보모터가 180도 회전하고 초기 상태로 돌아가는 것을 2번 반복한다.
  
+ ServoRotate_twice
  + 버튼으로 서보모터를 제어한다.
  + 버튼을 누를 때마다 10도씩 서보모터가 움직이고 180도가 되면 다시 초기 상태로 돌아간다. 
  
+ ServoControl_by_Serial
  + 시리얼 모니터로 서보모터를 제어한다.
  + '1'을 입력하면 30도, '2'를 입력하면 60도, '3'을 입력하면 120도, '4'를 입력하면 180도 회전한다.
  + '0'을 입력하면 초기 상태로 돌아간다.
