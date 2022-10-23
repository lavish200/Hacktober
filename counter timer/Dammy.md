import time

def countdown(time_sec):
    while time_sec:
        mins, secs = divmod(time_sec, 60)
        timeformat = '{:02d}:{:02d}'.format(mins, secs)
        print(timeformat, end='\r')
        time.sleep(1)
        time_sec -= 1

    print("stop")

countdown(5)

output:-
![Screenshot (55)](https://user-images.githubusercontent.com/116490388/197387614-bb67c631-2142-44d7-b041-c0979b4e2b00.png)
