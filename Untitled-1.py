import time

def display_clock():
    while True:
        current_time = time.strftime("%H:%M:%S")
        print(f"Current time: {current_time}", end="\r")
        time.sleep(1)

if __name__ == "__main__":
    try:
        display_clock()
    except KeyboardInterrupt:
        print("\nClock stopped. Goodbye!")
