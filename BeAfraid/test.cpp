#include <iostream>
#include <thread>
#include <cstdlib>
#include <mutex>

void run_ollama() {
    system("ollama run deepseek-r1:8b");
}
 
void run_custom_command() {
    std::mutex mtx;
    mtx.lock();
    system("/set nothink");
    mtx.unlock();  
}
 
int main() {
    std::thread t1(run_ollama);
    std::thread t2(run_custom_command);
 
    t1.join();
    t2.join();
 
    return 0;
}