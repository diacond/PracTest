def solution(my_string):
    moeum = 'aeiou'
    for a in my_string:
        if a in moeum:
            my_string = my_string.replace(a,"")
    return my_string