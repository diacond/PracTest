def solution(x):
    answer = True
    origin = x
    sum = 0
    #하샤드...........x가 있으면, 12이 있으면 1+2=3으로 12가 나눠져야함.
    #x를 일단 자릿수별로 분리
    while x > 0:
        sum += x % 10
        x //= 10
        
    if origin % sum != 0:
        answer = False
    return answer