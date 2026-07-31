def solution(numbers):
    # 하나씩 뽑아서 0~9검사하고 카운트해줘야하나? 하나뽑고 0~9사이 범위때려서 ...
    # 그러면 특정을 못하잖아. 어떡하지?
    sum = 0
    answer = [0,1,2,3,4,5,6,7,8,9]
    for x in numbers:
        answer.remove(x)
    for y in answer:
        sum += y
    return sum