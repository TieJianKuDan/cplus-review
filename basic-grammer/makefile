src = $(wildcard ./src/*.cpp)
obj = $(patsubst ./src/%.cpp, ./obj/%.o, $(src))
out = $(patsubst ./obj/%.o, ./out/%, $(obj))

ALL:$(out)

$(out):./out/%:./obj/%.o
	g++ $< -o $@ 

./obj/%.o:./src/%.cpp
	g++ -c $< -o $@ -g -Wall -std=c++11

clean:
	-rm -rf $(out) $(obj)

.PHONY:clean ALL
