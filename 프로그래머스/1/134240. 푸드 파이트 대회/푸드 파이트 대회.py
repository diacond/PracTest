def solution(food):
    answer = ''
    front = ''
    for i in range(1, len(food)):
        front = front + str(i) * (food[i] // 2)
    answer = front + '0' + front[::-1]
    return answer