#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#pragma warning(disable:4996)
//Price per book for every Book
#define PRC_A 55.00
#define PRC_B 79.00
#define PRC_C 87.00
#define PRC_D 80.00
#define PRC_E 58.50
#define PRC_F 64.50
#define PRC_G 78.50
#define PRC_H 60.00
#define PRC_I 84.00
// Discount
#define DISCOUNT_RATETWOH 0.05
#define DISCOUNT_RATETHREEH 0.10
#define DISCOUNT_RATEFIVEH 0.15

void logoHeading();
void displayMenu();
void webAndDesign();
void softwareDevelopmentProgramming();
void mobileProgramming();
void sumOrder();
void endingMessage();


void main()
{
	int response;

	logoHeading();
	do
	{
		printf("\n\n");

		printf("\t1 = View Menu\n");
		printf("\t2 = Sales Order\n");
		printf("\t3 = Exit\n");
		printf("\n");
		printf("\tPlease kindly select an Option to view: ");
		scanf("%d", &response);

		switch (response)
		{
		case 1:
			displayMenu(); break;
		case 2:
			sumOrder(); break;
		case 3:
			break;
		default:
			printf("\n\t================================");
			printf("\n\t ! Invalid option (1-3 only) ! ");
			printf("\n\t================================");
		}
	} while (response != 3);
}

void logoHeading()// Logo and Heading
{

	printf("\t\t\t\t \t__________________________________________________\n");
	printf("\t\t\t\t \t|  _____________________________________________  |\n");
	printf("\t\t\t\t \t|  |                                           |  |\n");
	printf("\t\t\t\t \t|  |                                           |  |\n");
	printf("\t\t\t\t \t|  |          |                        |       |  |\n");
	printf("\t\t\t\t \t|  |          |                        |       |  |\n");
	printf("\t\t\t\t \t|  |          |                        |       |  |\n");
	printf("\t\t\t\t \t|  |                                           |  |\n");
	printf("\t\t\t\t \t|  |                                           |  |\n");
	printf("\t\t\t\t \t|  |       |                              |    |  |\n");
	printf("\t\t\t\t \t|  |       |                              |    |  |\n");
	printf("\t\t\t\t \t|  |       |                              |    |  |\n");
	printf("\t\t\t\t \t|  |       |______________________________|    |  |\n");
	printf("\t\t\t\t \t|  |                                           |  |\n");
	printf("\t\t\t\t \t|  |                                           |  |\n");
	printf("\t\t\t\t \t|  |                                           |  |\n");
	printf("\t\t\t\t \t|  |                                           |  |\n");
	printf("\t\t\t\t \t|  |                                           |  |\n");
	printf("\t\t\t\t \t|  |___________________________________________|  |\n");
	printf("\t\t\t\t \t____________________          ____________________\n");
	printf("\t\t\t\t \t                   |          |\n");
	printf("\t\t\t\t \t                   |          |\n");
	printf("\t\t\t\t \t                   |          |\n");
	printf("\t\t\t\t \t                   |          |\n");
	printf("\t\t\t\t \t___________________|          |___________________\n");
	printf("\t\t\t\t \t|                                                |\n");
	printf("\t\t\t\t \t|________________________________________________|\n");
	printf("\n\t\t\t\t\t\t=======================================\n");
	printf("\t\t\t \t\t\t    * WELCOME TO UMT BOOK STORE!!! *\n");
	printf("\t\t\t\t\t\t=======================================\n");
	printf("\n\t\t\t\t\t\t\t   UMT POS SYSTEM\n");
}


void displayMenu()// View Menu Section
{
	int field;

		printf("\n\n");
		printf("\t==========================\n");
		printf("\t  Programming Book Field  \n");
		printf("\t==========================\n");
		printf("\n");
		printf("\t1 = Web and Design\n");
		printf("\t2 = Software Development Programming\n");
		printf("\t3 = Mobile Programming\n");
		printf("\n");
		printf("\tPlease kindly select a field to view: ");
		scanf("%d", &field);

		switch (field)
		{
		case 1:
			webAndDesign();
			break;
		case 2:
			softwareDevelopmentProgramming();
			break;
		case 3:
			mobileProgramming();
			break;
		default:
			printf("\n\t==================================");
			printf("\n\t ! Choose only number 1,2 and 3 ! ");
			printf("\n\t==================================");
			break;
		}
}

//Web and Design Menu
void webAndDesign()
{
	printf("\n");
	printf("\t==========================\n");
	printf("\t      Web and Design      \n");
	printf("\t==========================\n");
	printf("\n");
	printf("\tA => HTML and CSS Fundamental                    RM55.00 \n");
	printf("\tB => JavaScript for Beginner                     RM79.00 \n");
	printf("\tC => ASP .NET Programming                        RM87.00 \n");
}

// Software Development Programming Menu
void softwareDevelopmentProgramming()
{
	printf("\n");
	printf("\t==================================== \n");
	printf("\t  Software Development Programming   \n");
	printf("\t==================================== \n");
	printf("\n");
	printf("\tD => The C Programming Language                  RM80.00 \n");
	printf("\tE => The Art of Computer Programming             RM58.50 \n");
	printf("\tF => Fundamental Skill for Programmer            RM64.50 \n");
}

// Mobile Programming Menu
void mobileProgramming()
{
	printf("\n");
	printf("\t==========================\n");
	printf("\t  Mobile Programming      \n");
	printf("\t==========================\n");
	printf("\n");
	printf("\tG => Android Basics Programming                    RM78.50 \n");
	printf("\tH => How to Build a Mobile App                     RM60.00 \n");
	printf("\tI => Swift Development                             RM84.00 \n");
}

void sumOrder()//Sales Order Section
{
	int qtyA = 0, qtyB = 0, qtyC = 0, qtyD = 0, qtyE = 0, qtyF = 0, qtyG = 0, qtyH = 0, qtyI = 0, salesOrder = 0;
	int finalQtyA = 0, finalQtyB = 0, finalQtyC = 0, finalQtyD = 0, finalQtyE = 0, finalQtyF = 0, finalQtyG = 0,
		finalQtyH = 0, finalQtyI = 0, totalQuantity; // Total Quantity Sold
	double ttlA, ttlB, ttlC, ttlD, ttlE, ttlF, ttlG, ttlH, ttlI;
	double amountA = 0, amountB = 0, amountC = 0, amountD = 0, amountE = 0, amountF = 0, amountG = 0,
		   amountH = 0, amountI = 0;// Total Amount after multiple sales
	double subTotal, total, discount, totalAmount;
	char yesNo, yesNo2, option;

	do {
		salesOrder++;
		printf("\n\t=========================\n");
		printf("\t Sales Order Number : %d\n", salesOrder); 
		printf("\t=========================\n");

		do {

			do
			{
				printf("\n\tWhich Book You Want to Buy?\n");
				printf("\n\tBook : A, B, C, D, E, F, G, H, I (X = Exit) > ");
				rewind(stdin);
				scanf("%c", &option);
				option = toupper(option);

				switch (option)
				{
				case 'A':
					printf("\n\tQuantity : ");// Ask for quantity
					rewind(stdin);
					scanf("%d", &qtyA);
					while (qtyA <= 0) {
						printf("\n\t================================================================\n");
						printf("\t ! Invalid Value or Number (must be a number and more than 0) ! \n");
						printf("\t================================================================\n");
						printf("\n\tQuantity : ");
						rewind(stdin);
						scanf("%d", &qtyA);
					}
					break;
				case 'B':
					printf("\n\tQuantity : ");// Ask for quantity
					rewind(stdin);
					scanf("%d", &qtyB);
					while (qtyB <= 0) {
						printf("\n\t================================================================\n");
						printf("\t ! Invalid Value or Number (must be a number and more than 0) ! \n");
						printf("\t================================================================\n");
						printf("\n\tQuantity : ");
						rewind(stdin);
						scanf("%d", &qtyB);
					}
					break;
				case 'C':
					printf("\n\tQuantity : ");// Ask for quantity
					rewind(stdin);
					scanf("%d", &qtyC);
					while (qtyC <= 0) {
						printf("\n\t================================================================\n");
						printf("\t ! Invalid Value or Number (must be a number and more than 0) ! \n");
						printf("\t================================================================\n");
						printf("\n\tQuantity : ");
						rewind(stdin);
						scanf("%d", &qtyC);
					}
					break;
				case 'D':
					printf("\n\tQuantity : ");// Ask for quantity
					rewind(stdin);
					scanf("%d", &qtyD);
					while (qtyD <= 0) {
						printf("\n\t================================================================\n");
						printf("\t ! Invalid Value or Number (must be a number and more than 0) ! \n");
						printf("\t================================================================\n");
						printf("\n\tQuantity : ");
						rewind(stdin);
						scanf("%d", &qtyD);
					}
					break;
				case 'E':
					printf("\n\tQuantity : ");// Ask for quantity
					rewind(stdin);
					scanf("%d", &qtyE);
					while (qtyE <= 0) {
						printf("\n\t================================================================\n");
						printf("\t ! Invalid Value or Number (must be a number and more than 0) ! \n");
						printf("\t================================================================\n");
						printf("\n\tQuantity : ");
						rewind(stdin);
						scanf("%d", &qtyE);
					}
					break;
				case 'F':
					printf("\n\tQuantity : ");// Ask for quantity
					rewind(stdin);
					scanf("%d", &qtyF);
					while (qtyF <= 0) {
						printf("\n\t================================================================\n");
						printf("\t ! Invalid Value or Number (must be a number and more than 0) ! \n");
						printf("\t================================================================\n");
						printf("\n\tQuantity : ");
						rewind(stdin);
						scanf("%d", &qtyF);
					}
					break;
				case 'G':
					printf("\n\tQuantity : ");// Ask for quantity
					scanf("%d", &qtyG);
					while (qtyG <= 0) {
						printf("\n\t================================================================\n");
						printf("\t ! Invalid Value or Number (must be a number and more than 0) ! \n");
						printf("\t================================================================\n");
						printf("\n\tQuantity : ");
						rewind(stdin);
						scanf("%d", &qtyG);
					}
					break;
				case 'H':
					printf("\n\tQuantity : ");// Ask for quantity
					rewind(stdin);
					scanf("%d", &qtyH);
					while (qtyH <= 0) {
						printf("\n\t================================================================\n");
						printf("\t ! Invalid Value or Number (must be a number and more than 0) ! \n");
						printf("\t================================================================\n");
						printf("\n\tQuantity : ");
						rewind(stdin);
						scanf("%d", &qtyH);
					}
					break;
				case 'I':
					printf("\n\tQuantity : ");// Ask for quantity
					rewind(stdin);
					scanf("%d", &qtyI);
					while (qtyI <= 0) {
						printf("\n\t================================================================\n");
						printf("\t ! Invalid Value or Number (must be a number and more than 0) ! \n");
						printf("\t================================================================\n");
						printf("\n\tQuantity : ");
						rewind(stdin);
						scanf("%d", &qtyI);
					}
					break;
				case 'X':
					break;
				default:
					printf("\n\t========================================================");
					printf("\n\t ! Unknown letter (Only A,B,C,D,E,F,G,H,I. X to exit) ! ");
					printf("\n\t========================================================\n");
				}
			} while (option != 'X');

			do {
				printf("\n\tConfirm your order? (Y/N) : ");
				rewind(stdin);
				scanf("%c", &yesNo);

				yesNo = toupper(yesNo);

				switch (yesNo)
				{
				case 'N':
					//Reset Quantity = 0
					qtyA -= qtyA;
					qtyB -= qtyB;
					qtyC -= qtyC;
					qtyD -= qtyD;
					qtyE -= qtyE;
					qtyF -= qtyF;
					qtyG -= qtyG;
					qtyH -= qtyH;
					qtyI -= qtyI;
					break;
				case 'Y':
					break;
				default:
					printf("\n\tInvalid Value (Y or N only)\n");
				}

			} while (yesNo != 'Y' && yesNo != 'N');

		} while (yesNo != 'Y');

		//Calculate cost for every book
		ttlA = qtyA * PRC_A;
		ttlB = qtyB * PRC_B;
		ttlC = qtyC * PRC_C;
		ttlD = qtyD * PRC_D;
		ttlE = qtyE * PRC_E;
		ttlF = qtyF * PRC_F;
		ttlG = qtyG * PRC_G;
		ttlH = qtyH * PRC_H;
		ttlI = qtyI * PRC_I;

		//Add the every cost to subtotal
		subTotal = ttlA + ttlB + ttlC + ttlD + ttlE + ttlF + ttlG + ttlH + ttlI;

		//Discount Calculation

		if (subTotal > 500)
		{
			discount = DISCOUNT_RATEFIVEH * subTotal;
		}
		else if (subTotal > 300)
		{
			discount = DISCOUNT_RATETHREEH * subTotal;
		}
		else if (subTotal > 200)
		{
			discount = DISCOUNT_RATETWOH * subTotal;
		}
		else
		{
			discount = 0;
		}

		total = subTotal - discount;

		//Display the sales order receipt
		printf("\n\n");
		printf("%6s %3s  %-11s   %10s       %11s\n", "", "QTY", "DESCRIPTION", "PRICE", "TOTAL PRICE");
		printf("%6s %3s  %-11s     %10s     %11s\n", "", "===", "===========", "==========", "===========");
		printf("%6s %2d   %-11s   %10.2f   %11.2lf\n", "", qtyA, "Book A", PRC_A, ttlA);
		printf("%6s %2d   %-11s   %10.2f   %11.2lf\n", "", qtyB, "Book B", PRC_B, ttlB);
		printf("%6s %2d   %-11s   %10.2f   %11.2lf\n", "", qtyC, "Book C", PRC_C, ttlC);
		printf("%6s %2d   %-11s   %10.2f   %11.2lf\n", "", qtyD, "Book D", PRC_D, ttlD);
		printf("%6s %2d   %-11s   %10.2f   %11.2lf\n", "", qtyE, "Book E", PRC_E, ttlE);
		printf("%6s %2d   %-11s   %10.2f   %11.2lf\n", "", qtyF, "Book F", PRC_F, ttlF);
		printf("%6s %2d   %-11s   %10.2f   %11.2lf\n", "", qtyG, "Book G", PRC_G, ttlG);
		printf("%6s %2d   %-11s   %10.2f   %11.2lf\n", "", qtyH, "Book H", PRC_H, ttlH);
		printf("%6s %2d   %-11s   %10.2f   %11.2lf\n", "", qtyI, "Book I", PRC_I, ttlI);


		printf("%40s   %11s\n", "", "-----------");
		printf("%20s   %-10s   %14.2f\n", "", "Sub Total", subTotal);
		printf("%20s   %-10s   %14.2f\n", "", "Discount", discount);
		printf("%20s   %-10s   %12.2f\n", "", "Total to pay", total);

		//Store Total Quantity for Sales Order Report
		finalQtyA += qtyA;
		finalQtyB += qtyB;
		finalQtyC += qtyC;
		finalQtyD += qtyD;
		finalQtyE += qtyE;
		finalQtyF += qtyF;
		finalQtyG += qtyG;
		finalQtyH += qtyH;
		finalQtyI += qtyI;

		//Store Total Amount for Sales Order Report
		amountA += ttlA;
		amountB += ttlB;
		amountC += ttlC;
		amountD += ttlD;
		amountE += ttlE;
		amountF += ttlF;
		amountG += ttlG;
		amountH += ttlH;
		amountI += ttlI;

		do {
			printf("\n\tDo You Want To Order Again? (Y/N) : ");
			rewind(stdin);
			scanf("%c", &yesNo2);

			yesNo2 = toupper(yesNo2);

			switch (yesNo)
			{
			case 'Y':
				//reset quantity = 0 for next sales
				qtyA -= qtyA;
				qtyB -= qtyB;
				qtyC -= qtyC;
				qtyD -= qtyD;
				qtyE -= qtyE;
				qtyF -= qtyF;
				qtyG -= qtyG;
				qtyH -= qtyH;
				qtyI -= qtyI;
				break;
			case 'N':
				break;
			default:
				printf("\n\tInvalid Value (Y or N only)\n");
			}

		} while (yesNo2 != 'Y' && yesNo2 != 'N');

	} while (yesNo2 != 'N');

	//Calculate for Sales Order Report
	totalQuantity = finalQtyA + finalQtyB + finalQtyC + finalQtyD + finalQtyE + finalQtyF + finalQtyG + finalQtyH + finalQtyI;
	totalAmount = amountA + amountB + amountC + amountD + amountE + amountF + amountG + amountH + amountI;

	//Print the Report
	printf("\n\n");
	printf("\t%15s %27s \n", "", "==========================");
	printf("\t%15s %26s \n", "", "TODAY SALES ORDER REPORT");
	printf("\t%15s %27s \n", "", "==========================");
	//Total Sales Order
	printf("\n==================================");
	printf("\n Total Number of Sales Order = %d ", salesOrder);
	printf("\n==================================\n");
	//Total Quantitiy sold and Amount
	printf("\n");
	printf("\t\t%3s %5s   %-20s   %7s\n", " ", "======", "===================", "========");
	printf("\t\t%3s %5s    %-20s   %7s\n", " ", "Book", "Total Quantity Sold", "Amount");
	printf("\t\t%3s %5s   %-20s   %7s\n", " ", "======", "===================", "========");
	printf("\t\t%2s %5s   %10d   %18.2lf\n", " ", "A", finalQtyA, amountA);
	printf("\t\t%2s %5s   %10d   %18.2lf\n", " ", "B", finalQtyB, amountB);
	printf("\t\t%2s %5s   %10d   %18.2lf\n", " ", "C", finalQtyC, amountC);
	printf("\t\t%2s %5s   %10d   %18.2lf\n", " ", "D", finalQtyD, amountD);
	printf("\t\t%2s %5s   %10d   %18.2lf\n", " ", "E", finalQtyE, amountE);
	printf("\t\t%2s %5s   %10d   %18.2lf\n", " ", "F", finalQtyF, amountF);
	printf("\t\t%2s %5s   %10d   %18.2lf\n", " ", "G", finalQtyG, amountG);
	printf("\t\t%2s %5s   %10d   %18.2lf\n", " ", "H", finalQtyH, amountH);
	printf("\t\t%2s %5s   %10d   %18.2lf\n", " ", "I", finalQtyI, amountI);
	printf("\t\t%9s   %-20s    %7s\n", " ",  "===================", "========");
	printf("\t\t%2s %7s   %8d    %17.2lf\n", " ", "TOTAL:", totalQuantity, totalAmount);
	printf("\t\t%9s   %-20s    %7s\n", " ", "===================", "========");
	endingMessage();
}

void endingMessage()// Ending Message
{
	printf("\n\t============================================================================");
	printf("\n\t|\tUUUUUUU     UUUUUUU\t MMMMMM MMMMM MMMMMM \tTTTTTTTTTTTTTTT    |");
	printf("\n\t|\tUUUUUUU     UUUUUUU\tMMMMMMMMMMMMMMMMMMMMM\tTTTTTTTTTTTTTTT    |");
	printf("\n\t|\tUUUUUUU     UUUUUUU\tMMMMMMMMMMMMMMMMMMMMM\t     TTTTT         |");
	printf("\n\t|\tUUUUUUU     UUUUUUU\tMMMMM   MMMMM   MMMMM\t     TTTTT         |");
	printf("\n\t|\tUUUUUUU     UUUUUUU\tMMMMM   MMMMM   MMMMM\t     TTTTT         |");
	printf("\n\t|\t UUUUUU     UUUUUU \tMMMMM   MMMMM   MMMMM\t     TTTTT         |");
	printf("\n\t|\t   UUUUUUUUUUUUU   \tMMMMM   MMMMM   MMMMM\t     TTTTT         |");
	printf("\n\t|\t     UUUUUUUUU     \t MMM     MMM     MMM \t     TTTTT         |");
	printf("\n\t============================================================================");
	printf("\n\n");
	printf("\n\t\t=========================================================");
	printf("\n\t\t  !!!   THANK YOU FOR YOUR ORDER, HAVE A NICE DAY   !!!  ");
	printf("\n\t\t=========================================================");
}