import python1

def service_func():
  print("In python2.py")

if __name__ == '__main__':
  service_func()
  python1.some_func()

# python1.py
