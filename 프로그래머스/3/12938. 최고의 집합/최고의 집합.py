def solution(n, s):
    answer = []
    if s < n:
        return [-1]
    answer = [s // n] * n
    
    for i in range(s % n):
        answer[-1 - i] += 1
    return answer