g++ -c src/*.cpp src/Renderer/*.cpp -std=c++14 -g -Wall -m64 -I include -I C:\SDL2\include && g++ *.o -o bin\debug\main -L C:\SDL2\lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_image && start bin\debug\main
