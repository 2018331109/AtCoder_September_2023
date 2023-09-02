 #include <iostream>

int main() {
    long long N, M, P;
    std::cin >> N >> M >> P;

    long long days_between = 0;

 
    for (long long day = M; day <= N; day += P) {
         if (day >= M && day <= N) {
            days_between++;
        }
    }

    std::cout << days_between << std::endl;

    return 0;
}

