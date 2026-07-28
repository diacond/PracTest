def solution(n):
    answer = 2
    for x in range(1, n):
        y = n / x
        if x == y:
            answer = 1
            break
    return answer