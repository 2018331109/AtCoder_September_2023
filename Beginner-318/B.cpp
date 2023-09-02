#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;


    std::vector<std::vector<bool>> covered(101, std::vector<bool>(101, false));

    for (int i = 0; i < N; ++i)
    {
        int A, B, C, D;
        std::cin >> A >> B >> C >> D;


        for (int x = A; x < B; ++x)
        {
            for (int y = C; y < D; ++y)
            {
                covered[x][y] = true;
            }
        }
    }

    int area = 0;


    for (int x = 0; x <= 100; ++x)
    {
        for (int y = 0; y <= 100; ++y)
        {
            if (covered[x][y])
            {
                area++;
            }
        }
    }

    std::cout << area << std::endl;

    return 0;
}

