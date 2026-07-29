def solution(n):
    answer = 0
    # n % x == 1인데, 가장 작은 x
    for x in range(1, n):
        if n % x == 1:
            answer = x
            break
    return answer