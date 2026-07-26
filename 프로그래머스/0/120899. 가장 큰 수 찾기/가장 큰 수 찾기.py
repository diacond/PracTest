def solution(array):
    answer = []
    maxval = max(array)
    idx = array.index(maxval)
    answer.append(maxval)
    answer.append(idx)
    return answer