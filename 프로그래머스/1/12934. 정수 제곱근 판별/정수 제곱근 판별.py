import math

def solution(n):
    answer = 0
    for x in range(int(n**(0.5)) + 1):
        if x * x == n:
            answer = (x + 1)*(x + 1)
        else:
            answer = -1
    return answer