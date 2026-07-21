def solution(slice, n):
    answer = 0
    while (slice * answer) / n < 1:
        answer += 1
    return answer