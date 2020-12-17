# linux
- make fibo.cpp
- mv fibo fibo_line_999999999

# windows (in wsl debian)
[source](https://swarminglogic.com/article/2014_11_crosscompile)
- sudo apt-get install g++-mingw-w64 mingw-w64-{tools,x86-64-dev}
- x86_64-w64-mingw32-g++ -o fibo_line_999999999.exe fibo.cpp --static
