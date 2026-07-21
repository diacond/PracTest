def solution(n):
    answer = 0
    while(1):
        if((answer*7)/n < 1):
            answer += 1
        else:
            break
    return answer