def solution(my_string):
    number = "1234567890"
    sum = 0
    for a in my_string:
        if a in number:
            sum += int(a)
    return sum