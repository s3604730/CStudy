compile with gcc -ldl malicious.c -fPIC -shared -D_GNU_SOURCE -o malicious.so 



Example output:
tokyo:~/LearningC/ # ./output
Hello, World!#
tokyo:~/LearningC/ # export LD_PRELOAD=/root/LearningC/write.so
tokyo:~/LearningC/ # ./output
Goodbye, cruel world!#
