def solution(num_list):
    answer = []
    even = [n for n in num_list if n % 2 == 0]
    odd = [n for n in num_list if n % 2 != 0]
    answer = [len(even), len(odd)]
    return answer