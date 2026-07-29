def solution(arr):
    answer = 0
    sum = 0
    #정수 담고있음................arr에서 걔네 평균값 리턴
    for x in arr:
        sum += x
    answer = sum / len(arr)
    return answer