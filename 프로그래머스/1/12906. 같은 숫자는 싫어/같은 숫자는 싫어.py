def solution(arr):
    answer = []
    # arr을 줄테니까, 중복 지워달라는 문제
    for x in range(len(arr)):
        if x == 0:
            answer.append(arr[x])
        elif x > 0 and arr[x] != arr[x - 1]:
            answer.append(arr[x])
    return answer