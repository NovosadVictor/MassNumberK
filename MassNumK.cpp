#include <iostream>
#define A(i,j)  a[(j - 1) + (i - 1) * N]


void Contain(int N) {
	int *a = new int[N * N];
        for (int i = N; i >= 1; --i)
                for (int j = 1; j <= N; ++j)
                        std::cin >> A(i,j);
	int x;
	std::cin >> x;
	int X = A(N / 2, N / 2);
//	std::cout << "\n";
//	std::cout << x << std::endl;
//	std::cout << X << std::endl;
	if (x == X) {
		std::cout << "yes" << std::endl;
		return;
	}
	if (x < X) {
//		std::cout << "true <" << std::endl;
		int i = N / 2;
		while (i > 1 && x < A(i,i))
			--i;
		if (x == A(i,i)) {
			std::cout << "yes" << std::endl;
			return;
		}
		else {
			for (int k = i; k <= N / 2; ++k)
				if (A(i,k) == x) {
					std::cout << "yes" << std::endl;
					return;
				}
			for (int k = i; k <= N / 2; ++k)
				if (A(k, i) == x) {
					std::cout << "yes" << std::endl;
					return;
				}
		}
		std::cout << "no" << std::endl;
	}
	if (x > X) {
	//	std::cout << "true >" << std::endl;
                int i = N / 2;
                while (i < N && x > A(i,i))
                        ++i;
                if (x == A(i,i)) {
                        std::cout << "yes" << std::endl;
                        return;
                }
                else {
                        for (int k = i; k >= N / 2; --k)
                                if (A(i,k) == x) {
                                        std::cout << "yes" << std::endl;
                                        return;
                                }
                        for (int k = i; k >= N / 2; --k)
                                if (A(k, i) == x) {
                                        std::cout << "yes" << std::endl;
                                        return;
                                }
                }
                std::cout << "no" << std::endl;
        }
}


int main() {
	int N;
	std::cin >> N;
	Contain(N);
	return 0;
}
			
