def solution(num_list, n):
    answer = []
    x = 0
    while x < len(num_list):
        answer.append(num_list[x])
        x += n
    return answer