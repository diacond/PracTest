def solution(my_string, n):
    answer = ''
    for a in my_string:
        for b in range(n): # 정수는 range사용해야
            answer += a
    return answer