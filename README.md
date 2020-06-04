# Midterms-Exam-Alternative-Task
**Project Name : Microbrew POS**

**Project Information**
1. Installation : Visual Studio
2. 주제를 선정하게 된 이유
    맥주집에서 알바를 하면서 POS 기계의 고충을 발견하였다. 스텔라의 경우 3+1, 홉하우스의 경우 2+1의 이벤트가 진행중이지만 막상 POS에서는 자동으로
    반영되지 않아 일일이 개수를 계산하면서 POS를 찍다보니 불편하였다. 이에 이 문제를 해결하기 위해 POS의 알고리즘을 다시 짜보는 주제를 선정하게
    되었다.
3. Program Feature
    1. 수제맥주의 종류는 이벤트 맥주 2가지를 포함하여 총 9가지를 선정하였다. -> 9가지 맥주의 .cpFep + Main의 .cpp
    2. POS다 보니 반복문으로 프로그램을 구현했다.
    3. Main함수에서 조건문을 사용하여 손님이 어떤 맥주를 주문했는지 기록하는 POS 찍는 곳과 계산을 하는 곳 이렇게 2가지로 나누었다.
    4. 테이블의 개수는 약 15개 정도이고 각 테이블 별로 주문한 맥주의 종류와 개수가 다르기 때문에 이 부분에 대해서는 클래스 내에서 구현해서 계산했다.
    5. 이 수제 맥주집은 현재 이벤트 중이라서 한 개의 맥주는 3+1, 다른 한 개의 맥주는 2+1로 이벤트 적용을 하여 가격을 조정했다.
    6. 맥주의 개수에 대해서는 전역변수를 사용하였다.
