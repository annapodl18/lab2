FROM debian
RUN apt-get update
RUN apt install gcc gdb gcc-multilib nano -y
COPY 18var.s .
RUN gcc -m32 18var.s -o 18var
CMD ./18var
