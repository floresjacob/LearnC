# Makefile

CC = clang
CFLAGS = -I/opt/homebrew/opt/glew/include -I/opt/homebrew/opt/glfw/include
LDFLAGS = -L/opt/homebrew/opt/glew/lib -L/opt/homebrew/opt/glfw/lib -lglfw -lglew -framework OpenGL

all: hello_opengl

hello_opengl: hello_opengl.c
	$(CC) $(CFLAGS) hello_opengl.c -o hello_opengl $(LDFLAGS)

clean:
	rm -f hello_opengl
