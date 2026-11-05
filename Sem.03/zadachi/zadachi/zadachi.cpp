// zadachi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //TASK 1
        /*int sum=0, currNum;

        do {
            std::cin >> currNum;
            sum += currNum;
        } while (currNum);

        std::cout << sum;*/

    //TASK 2
        /*int oldNum, newNum=0;
        std::cin >> oldNum;
        while (oldNum > 0) {
            newNum *= 10;
            newNum += oldNum % 10;
            oldNum /= 10;
        }
        std::cout << newNum + 1;*/

    //TASK 3
        //int n, mostFrequentDigit = 0, maxCount = 0;
        //    std::cin >> n;
        //
        //    //Nachin 1 - poveche interacii po-malko promenlivi
        //        //if (n < 0)
        //        //    n = -n;

        //        ////ideqta e da predotvrati izlishni iteracii posle, no ako ima 9 v chisloto ne pravi nishto, a samo dobavq 1 iteraciq, kaji dali ima smisyl
        //        //int count = 0, totalCount = 0;
        //        //{
        //        //    int tempN = n;
        //        //    while (tempN > 0) {
        //        //        tempN /= 10;
        //        //        totalCount++;
        //        //    }
        //        //}
        //        //   

        //        //for (int digit = 0; digit <= 9; digit++) {
        //        //    int tempN = n;
        //        //    int currDigitCount = 0;

        //        //    while (tempN > 0) {
        //        //        if (tempN % 10 == digit)
        //        //            currDigitCount++;
        //        //        tempN /= 10;
        //        //        
        //        //    }
        //        //    count += currDigitCount;

        //        //    if (currDigitCount > maxCount) {
        //        //        maxCount = currDigitCount;
        //        //        mostFrequentDigit = digit;
        //        //    }
        //        //       
        //        //    //opita za optimizaciq
        //        //    if(count==totalCount)
        //        //        break;
        //        //}

        //    //Nachin 2 - 10 promenlivi 
        //         int frequency0 = 0;
        //         int frequency1 = 0;
        //         int frequency2 = 0;
        //         int frequency3 = 0;
        //         int frequency4 = 0;
        //         int frequency5 = 0;
        //         int frequency6 = 0;
        //         int frequency7 = 0;
        //         int frequency8 = 0;
        //         int frequency9 = 0;

        //         for (int digit = n % 10; n; n/=10, digit = n % 10) {
        //             switch (digit) {
        //                case 0:
        //                    frequency0++;
        //                    break;
        //                case 1:
        //                    frequency1++;
        //                    break;
        //                case 2:
        //                    frequency2++;
        //                    break;
        //                case 3:
        //                    frequency3++;
        //                    break;
        //                case 4:
        //                    frequency4++;
        //                    break;
        //                case 5:
        //                    frequency5++;
        //                    break;
        //                case 6:
        //                    frequency6++;
        //                    break;
        //                case 7:
        //                    frequency7++;
        //                    break;
        //                case 8:
        //                    frequency8++;
        //                    break;
        //                case 9:
        //                    frequency9++;
        //                    break;
        //             }
        //             //n /= 10;
        //         }

        //         maxCount = frequency0;
        //         if(maxCount < frequency1) 
        //            maxCount=frequency1, mostFrequentDigit = 1;
        //         if (maxCount < frequency2)
        //             maxCount = frequency2, mostFrequentDigit = 2;
        //         if (maxCount < frequency3)
        //             maxCount = frequency3, mostFrequentDigit = 3;
        //         if (maxCount < frequency4)
        //             maxCount = frequency4, mostFrequentDigit = 4;
        //         if (maxCount < frequency5)
        //             maxCount = frequency5, mostFrequentDigit = 5;
        //         if (maxCount < frequency6)
        //             maxCount = frequency6, mostFrequentDigit = 6;
        //         if (maxCount < frequency7)
        //             maxCount = frequency7, mostFrequentDigit = 7;
        //         if (maxCount < frequency8)
        //             maxCount = frequency8, mostFrequentDigit = 8;
        //         if (maxCount < frequency9)
        //             maxCount = frequency9, mostFrequentDigit = 9;

        //    std::cout << mostFrequentDigit;
        
    //TASK 4
        //int num1, num2, nod=0;
        //std::cin >> num1 >> num2;

        ////Nachin 1 - pyrva intuiciq (po-baven algo)
        //    //int smallerNum;
        //    //(num1 > num2) ? smallerNum = num2 : smallerNum = num1;
        //    //for (int divisor = 1; divisor <= smallerNum; divisor++) {
        //    //    if (!(num1 % divisor) && !(num2 % divisor)) {
        //    //        nod = divisor;
        //    //    }
        //    //}

        ////Nachin 2 - Optimized Euclidean Algorithm (google search) dosta po-byrz
        //    //sortira gi (malko, golqmo) za da raboti posle algorityma
        //    if (num1 < num2) {
        //        int temp = num1;
        //        num1 = num2;
        //        num2 = temp;
        //    }

        //    //izpolzva ideqta che nod(a,b)=nod(a%b,b) 
        //    while (num2 > 0) {
        //        int temp = num2;
        //        num2 = num1 % num2;
        //        num1 = temp;
        //    }

        //    nod = num1;

        //std::cout << nod;
        
    //TASK 5
        /*int a, b, nok=0;
		std::cin >> a >> b;
		for (int i = 1; i <= a * b; i++) {
			if (i % a == 0 && i % b == 0) { 
                nok = i;
                break;
            }
        }
        std::cout << nok;*/

    //TASK 6 - imashe q na praktikuma
        /*int n, currNum=2;
        bool isPrime = 1;
        std::cin >> n;
            while (currNum*currNum < n) {
                if (n % currNum == 0) {
                    isPrime = 0;
                    break;
                }
                currNum++;
            }
            if (isPrime)
                std::cout << "The number is prime";
            else std::cout << "The number is NOT prime";*/
        
    //TASK 7 - basi gadnata zadacha
            int  n;
            std::cin >>  n;

            //proverqva dali samoto chislo e prosto i ako e izvejda n^1
            bool isNPrime = 1;
            int biggestDivisor;
            for (int currNum = 2; currNum * currNum <= n; currNum++) {
                if (n % currNum == 0) {
                    isNPrime = 0;
                    biggestDivisor = currNum;
                    break;
                }
            }
            if (!isNPrime) {
                //cikyl koito trygva naobratno ot chisloto i tyrsi chisla koito go delqt
                for (int i = n - 1; i >= 2; i--)
                {
                    if (n % i == 0) {
                        //proverka dali delitelqt e prosto chislo
                        bool isPrime = 1;
                        int biggestDivisor;
                        for (int currNum = 2; currNum * currNum <= i; currNum++) {
                            if (i % currNum == 0) {
                                isPrime = 0;
                                biggestDivisor = currNum;
                                break;
                            }
                        }
                        if (isPrime) {
                            //ako e prosto proverqva kolko pyti go deli chisloto kato obnovqva i samoto chislo dokato proverqwa dali se deli
                            int counter = 0;

                            do {
                                n /= i;
                                counter++;
                            } while (n % i == 0 && n != 1);

                            //izvejda rezultata
                            std::cout << i << "^" << counter << " ";

                            //ako n==1 to sme izcherpali vsichki deliteli => spirame cikyla i sme gotovi
                            if (n == 1) break; 
                        } 
                    } 
                }
            }
            else {
                std::cout << n << "^" << 1;
            }

            



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
