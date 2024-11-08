h, m, s = map(int, input().split())
duration = int(input())

_24_hour = 24 * 3600
total_s = h * 3600 + m * 60 + s
total_s += duration
if total_s < _24_hour:
    h = total_s // 3600
    remain = total_s % 3600

    m = remain // 60
    remain = remain % 60

    s = remain

if total_s >= _24_hour:
    h = total_s // 3600
    total_s = total_s % 3600
    if h >= 24:
        h = h % 24
    m = total_s // 60
    s = total_s % 60

print(f"{h} {m} {s}")