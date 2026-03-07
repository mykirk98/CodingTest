#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

void Q1000()	// 2026/02/16 - 1번째 문제
{
	int A, B;
	cin >> A >> B;
	cout << A + B << endl;
}

void Q1001()	// 2026/02/16 - 2번째 문제
{
	int A, B;
	cin >> A >> B;
	cout << A - B << endl;
}

void Q10998()	// 2026/02/16 - 3번째 문제
{
	int A, B;
	cin >> A >> B;
	cout << A * B << endl;
}

void Q1008()	// 2026/02/16 - 4번째 문제
{
	double A, B;
	cin >> A >> B;

	cout.precision(12);
	cout.fixed;
	cout << A / B << endl;
}

void Q10869()	// 2026/02/16 - 5번째 문제
{
	int a, b;
	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
}

void Q2739()	// 2026/02/17 - 1번째 문제
{
	int N;
	cin >> N;

	for (int i = 1; i < 10; i++)
	{
		cout << N << " * " << i << " = " << N * i << endl;
	}
}

void Q10430()	// 2026/02/17 - 2번째 문제
{
	int A, B, C;
	cin >> A >> B >> C;

	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;
}

void Q2753()	// 2026/02/17 - 3번째 문제
{
	int year;
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)	// ex 400, 800, 1200, ...
			{
				cout << 1 << endl;
			}
			else	// ex 100, 200, 300, 500, 600, ...
			{
				cout << 0 << endl;
			}
		}
		else	// ex 4, 8, 12, 16, ...
		{
			cout << 1 << endl;
		}
	}
	else
	{
		cout << 0 << endl;
	}
}

void Q2588()	// 2026/02/17 - 4번째 문제
{
	int a, b;
	cin >> a;
	cin >> b;

	int x, y, z;
	x = b / 100;
	y = (b % 100) / 10;
	z = b % 10;

	cout << a * z << endl;
	cout << a * y << endl;
	cout << a * x << endl;
	cout << a * b << endl;
}

void Q10950()	// 2026/02/17 - 5번째 문제
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int A, B;
		cin >> A >> B;

		cout << A + B << endl;
	}
}

void Q2884() // 2026/02/18 - 1번째 문제
{
	int H, M;
	cin >> H >> M;

	if (M < 45)
	{
		H--;
		M += 60;
	}

	M -= 45;

	if (H < 0)
	{
		H += 24;
	}

	cout << H << " " << M << endl;
}

void Q8393()	// 2026/02/18 - 2번째 문제
{
	int n;
	cin >> n;

	int sum = 0;

	for (int i = 0; i <= n; i++)
	{
		sum += i;
	}

	cout << sum << endl;
}

void Q10952()	// 2026/02/18 - 3번째 문제
{
	int A, B;

	while (true)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
		{
			break;
		}
		else
		{
			cout << A + B << endl;
		}
	}
}

void Q10818()	// 2026/02/18 - 4번째 문제
{
	int N;
	cin >> N;

	int minVal = 1000001;
	int maxVal = -1000001;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (num < minVal)
		{
			minVal = num;
		}

		if (num > maxVal)
		{
			maxVal = num;
		}
	}

	cout << minVal << " " << maxVal << endl;
}

void Q11021()	// 2026/02/18 - 5번째 문제
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int A, B;
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A + B << endl;
	}
}

void Q10951()	// 2026/02/18 - 6번째 문제
{
	int A, B;
	while (!(cin >> A >> B).eof())	// ctrl + z 입력 시 EOF(End Of File) 발생
	{
		cout << A + B << endl;
	}
}

void Q18108()	// 2026/02/18 - 7번째 문제
{
	int y;
	cin >> y;

	cout << y - 543 << endl;
}

void Q11022()	// 2026/02/18 - 8번째 문제
{
	int A, B;
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << endl;
	}
}

void Q11720()	// 2026/02/18 - 9번째 문제
{
	int N;
	cin >> N;

	string numbers;
	cin >> numbers;

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += numbers[i] - '0';	// 문자 '0'의 아스키 코드 값은 48이므로, '0'을 빼면 해당 문자가 나타내는 숫자 값을 얻을 수 있다.
	}

	cout << sum;
}

void Q15552()	// 2026/02/18 - 10번째 문제
{
	ios::sync_with_stdio(false);	// C++의 표준 입출력과 C의 표준 입출력을 동기화하지 않도록 설정하여 입출력 속도를 향상시킵니다.
	cin.tie(NULL);

	int T;
	cin >> T;

	int A, B;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << A + B << "\n";
	}
}

void Q1546()	// 2026/02/18 - 11번째 문제
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int maximum = 0;
	float sum = 0;

	int* array = new int[N]; // 동적 배열 할당

	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
		sum += array[i];

		if (array[i] > maximum)
		{
			maximum = array[i];
		}
	}

	sum /= N; // 평균 계산
	cout << sum / maximum * 100.0 << "\n";

	delete[] array; // 동적 배열 해제
}

void Q3052()	// 2026/02/18 - 12번째 문제
{
	int array[42] = { 0 }; // 0으로 초기화된 배열

	for (int i = 0; i < 10; i++)
	{
		int N;
		cin >> N;

		array[N % 42] = 1;	// 나머지 값을 인덱스로 사용하여 해당 인덱스의 값을 1로 설정
	}

	int count = 0;
	for (int i = 0; i < 42; i++)
	{
		if (array[i] == 1)
		{
			count++;	// 1로 설정된 인덱스의 개수를 세어줌
		}
	}

	cout << count << "\n";
}

void Q2525()	// 2026/02/19 - 1번째 문제
{
	int A, B, C;
	cin >> A >> B >> C;

	int M = (B + C) % 60;
	int H = (A + (B + C) / 60) % 24;

	cout << H << " " << M << "\n";
}

void Q2480()	// 2026/02/19 - 2번째 문제
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c)
	{
		cout << 10000 + a * 1000 << "\n";
	}
	else if (a == b || a == c || b == c)
	{
		int sameNumber = (a == b) ? a : c;
		cout << 1000 + sameNumber * 100 << "\n";
	}
	else
	{
		int maxNumber = max({ a, b, c });
		cout << maxNumber * 100 << "\n";
	}
} 

void Q11382()	// 2026/02/19 - 3번째 문제
{
	unsigned long long A, B, C;
	cin >> A >> B >> C;

	cout << A + B + C << "\n";
}

void Q2839()	// 2026/02/19 - 4번째 문제
{
	int N;
	cin >> N;

	int bag = 0;

	while (N > 0)
	{
		if (N % 5 == 0)
		{
			bag += N / 5;
			N = 0;
		}
		else
		{
			N -= 3;
			bag++;
		}
	}

	if (N < 0)
	{
		cout << -1 << "\n";
	}
	else
	{
		cout << bag << "\n";
	}
}

void Q2577()	// 2026/02/19 - 5번째 문제
{
	int count[10] = { 0 };

	int A, B, C;
	cin >> A >> B >> C;

	int N = A * B * C;

	while (N > 0)
	{
		count[N % 10]++;
		N /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << count[i] << "\n";
	}
}

void Q2908()	// 2026/02/19 - 6번째 문제
{

	string A, B;
	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	int numA = stoi(A);
	int numB = stoi(B);

	cout << max(numA, numB) << "\n";
}

void Q1110()	// 2026/02/19 - 7번째 문제
{
	int N;
	cin >> N;

	int a, b;
	int cnt = 0;
	int nextNum = N;
	int thirdDigit;

	do
	{
		a = nextNum / 10;
		b = nextNum % 10;
		thirdDigit = (a + b) % 10;
		nextNum = b * 10 + thirdDigit;
		cnt++;

	} while (N != nextNum);

	cout << cnt << "\n";
}

//bool isPrime(int num)
//{
//	if (num <= 1)
//	{
//		return false;
//	}
//	else
//	{
//		for (int i = 2; i <= sqrt(num); i++)
//		{
//			if (num % i == 0)
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//}

//void Q1978()	// 2026/02/20 - 1번째 문제
//{
//	int N;
//	cin >> N;
//
//	int cnt = 0;
//	int num;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> num;
//		if (isPrime(num))
//		{
//			cnt++;
//		}
//	}
//
//	cout << cnt << "\n";
//}

void Q25304()	// 2026/02/20 - 2번째 문제
{
	int X;
	cin >> X;

	int N;
	cin >> N;

	int a, b;

	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		X -= a * b;
	}

	if (X == 0)
	{
		cout << "Yes\n";
	}
	else
	{
		cout << "No\n";
	}
}

void Q10872()	// 2026/02/20 - 3번째 문제
{
	int N;
	cin >> N;

	unsigned long long result = 1;

	for (int i = 1; i <= N; i++)
	{
		result *= i;
	}

	cout << result << "\n";
}

void Q2292()	// 2026/02/20 - 4번째 문제
{
	int N;
	cin >> N;
	N--;
	int jump = 1;

	while (N > 0)
	{
		N -= jump * 6;
		jump++;
	}

	cout << jump << "\n";
}

void Q4344()	// 2026/02/20 - 5번째 문제
{
	int C;
	cin >> C;

	for (int i = 0; i < C; i++)
	{
		int N;
		cin >> N;

		int* array = new int[N];
		double sum = 0, average, cnt = 0;

		for (int j = 0; j < N; j++)
		{
			cin >> array[j];
			sum += array[j];
		}
		average = sum / N;

		for (int j = 0; j < N; j++)
		{
			if (array[j] > average)
				cnt++;
		}

		cout << fixed;	// 고정 소수점 표기법 사용
		cout.precision(3);	// 소수점 셋째 자리까지 출력하도록 설정
		cout << (cnt / N) * 100 << "%\n";

		delete[] array;
	}
}

void Q3003()	// 2026/02/20 - 6번째 문제
{
	int answer[] = { 1, 1, 2, 2, 2, 8 };

	int num;
	for (int i = 0; i < 6; i++)
	{
		cin >> num;
		answer[i] -= num;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << answer[i] << " ";
	}
}


void Q2558()	// 2026/02/20 - 7번째 문제
{
	int A, B;
	cin >> A >> B;

	cout << A + B << "\n";
}

void Q2869()	// 2026/02/20 - 8번째 문제
{
	int A, B, V;
	cin >> A >> B >> V;

	int count = ceil(double(V - A) / (A - B)) + 1;
	cout << count;
}

int GLIM1(int n, int k)	// 2026/03/01 - 그림 - 코딩테스트 1
{
	int answer = 0;

	answer = n * 12000 + k * 2000 - n / 10 * 2000;

	return answer;
}

int GLIM2(vector<vector<int>> board, int k)	// 2026/03/01 - 그림 - 코딩테스트 2
{
	int answer = 0;

	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			if (i + j <= k)
			{
				answer += board[i][j];
			}
		}
	}
	return answer;
}

int GLIM3(vector<vector<int>> dots)		// 2026/03/01 - 그림 - 코딩테스트 3
{
	int answer = 0;
	int minX = 256, maxX = -256, minY = 256, maxY = -256;

	for (int i = 0; i < dots.size(); i++)
	{
		minX = min(minX, dots[i][0]);
		maxX = max(maxX, dots[i][0]);
		minY = min(minY, dots[i][1]);
		maxY = max(maxY, dots[i][1]);
	}

	int width = maxX - minX, height = maxY - minY;
	answer = width * height;

	return answer;
}

vector<int> GLIM4(vector<int> arr, vector<bool> flag)
{
	vector<int> answer;

	for (int i = 0; i < flag.size(); i++)
	{
		// flag[i]가 true일 때
		if (flag[i] == true)
		{
			// X에 arr[i]를 arr[i] x 2번 추가
			for (int j = 0; j < arr[i] * 2; j++)
			{
				answer.push_back(arr[i]);
			}
		}
		// flag[i]가 false일 때
		else
		{
			// X에서 마지막 arr[i]개의 원소를 제거
			for (int j = 0; j < arr[i]; j++)
			{
				answer.pop_back();
			}
		}
	}

	return answer;
}

int d(int n)
{
	int sum = n;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

void Q4673()	// 2026/03/06  - 1번째 문제
{
	bool check[10001] = { false };
	for (int i = 1; i <= 10000; i++)
	{
		int n = d(i);
		if (n <= 10000)
		{
			check[n] = true;
		}
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (check[i] == false)
		{
			cout << i << "\n";
		}
	}
}

//bool isPrime(int n)
//{
//	if (n <= 1)
//		return false;
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return false;
//	}
//	return true;
//}

//void Q1929()	// 2026/03/06 - 2번째 문제
//{
//	int M, N;
//	cin >> M >> N;
//
//	for (int i = M; i <= N; i++)
//	{
//		if (isPrime(i) == true)
//		{
//			cout << i << "\n";
//		}
//	}
//}

void Q1065()
{
	int N;
	cin >> N;

	int count = 0;

	for (int i = 1; i <= N; i++)
	{
		if (i < 10)
		{
			count++;
		}
		else if (i < 100)
		{
			count++;
		}
		else if (i < 1000)
		{
			int a = i / 100;
			int b = (i % 100) / 10;
			int c = i % 10;
			if (a - b == b - c)
			{
				count++;
			}
		}
	}

	cout << count << "\n";
}

void Q1085()	// 2026/03/07 - 1번째 문제
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int minDistance = min({ x - 0, y - 0,w - x, h - y });
	cout << minDistance << "\n";
}

void Q10870()	// 2026/03/07 - 2번째 문제
{
	vector<int> fibonacci_arr = { 0, 1 };

	int n;
	cin >> n;
	if (n == 0 || n == 1)
	{
		cout << fibonacci_arr[n] << "\n";
		return;
	}
	for (int i = 2; i <= n; i++)
	{
		fibonacci_arr.push_back(fibonacci_arr[i - 1] + fibonacci_arr[i - 2]);
	}
	cout << fibonacci_arr[n] << "\n";
}

void Q2609()	// 2026/03/07 - 3번째 문제
{
	int A, B;
	cin >> A >> B;

	int a = A, b = B;

	int remainder = a % b;
	while (remainder != 0)
	{
		a = b;
		b = remainder;
		remainder = a % b;
	}
	int gcd = b;
	int lcm = (A * B) / gcd;

	cout << gcd << "\n";
	cout << lcm << "\n";
}

void Q10250()	// 2026/03/07 - 4번째 문제
{
	int T;
	cin >> T;
	int H, W, N;
	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;

		int floor = N % H;
		int roomNumber = (N / H) + 1;

		if (floor == 0)
		{
			floor = H;
			roomNumber--;
		}

		cout << floor * 100 + roomNumber << "\n";
	}
}

void Q1193()	// 2026/03/07 - 5번째 문제
{
	int X;
	cin >> X;

	int row = 1;

	while (X > row)
	{
		X -= row;
		row++;
	}

	if (row % 2 == 0)
	{
		cout << X << "/" << row - X + 1 << "\n";
	}
	else
	{
		cout << row - X + 1 << "/" << X << "\n";
	}
}

void Q2475()	// 2026/03/07 - 6번째 문제
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		sum += num * num;
	}
	cout << sum % 10 << "\n";
}

void Q2738()	// 2026/03/07 - 7번째 문제
{
	int N, M;
	cin >> N >> M;

	vector<vector<int>> matrixA = vector<vector<int>>(N, vector<int>(M));
	vector<vector<int>> matrixB = vector<vector<int>>(N, vector<int>(M));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> matrixA[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> matrixB[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrixA[i][j] + matrixB[i][j] << " ";
		}
		cout << "\n";
	}
}

//bool isPrime(int n)	// 2026/03/07 - 8번째 문제
//{
//	if (n <= 1)
//		return false;
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return false;
//	}
//	return true;
//}
//
//void Q2581()
//{
//	int M, N;
//	cin >> M >> N;
//
//	vector<int> primes;
//	for (int i = M; i <= N; i++)
//	{
//		if (isPrime(i) == true)
//		{
//			primes.push_back(i);
//		}
//	}
//	if (primes.empty())
//	{
//		cout << -1 << "\n";
//	}
//	else
//	{
//		int sum = 0;
//		for (int i = 0; i < primes.size(); i++)
//		{
//			sum += primes[i];
//		}
//		cout << sum << "\n";
//		cout << primes[0] << "\n";
//	}
//}

//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);



	return 0;
}