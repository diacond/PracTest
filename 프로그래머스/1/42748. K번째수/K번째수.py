def solution(array, commands):
    answer = []
    sub = []
    # 일단 배열을 i~j까지 잘라야함. 근데 인덱스 기준으로는, i-1, j-1 사이의 애들
    # 그리고 그 잘린 배열을 정렬하고, k번째 원소 구하기
    for x in range(len(commands)):
        sub = array[(commands[x][0] - 1) : (commands[x][1])]
        sub.sort()
        answer.append(sub[commands[x][2] - 1])
        
    return answer