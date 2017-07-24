#include <iostream>
#include <mutex>
#include <string>
#include <thread>

std::mutex msg_mutex;
std::string msg;

void read()
{
  while (true) {
    std::string sin;
    std::cin >> sin;
    std::lock_guard<std::mutex> lock{msg_mutex};
    msg = sin;
  }
}

void write()
{
  while (true) {
    std::lock_guard<std::mutex> lock{msg_mutex};
    if (msg.length() > 0) {
      std::cout << msg << std::endl;
      msg.clear();
    }
  }
}

int main()
{
  std::thread reader(read);
  std::thread writer(write);

  reader.join();
  writer.join();
  return 0;
}