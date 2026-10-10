def solution(s):
    answer = 0
    pairs = {"zero": "0", "one": "1", "two": "2", "three": "3", "four": "4", "five": "5", "six": "6", "seven": "7", "eight": "8", "nine": "9", "ten": "1"}
    for key, value in pairs.items():
        s = s.replace(key, value)
    answer = int(s)
    return answer