#include<stdio.h>
#define p printf
int main()
{
	int age=33;
	switch(age)
	{
		case 24:
			p("You are 24");
			break;
			case 25:
				p("You are 25");
				break;
				case 26:
					p("You are 26");
					break;
						case 27:
							p("You are 27");
							break;
							case 28:
								p("You are 28");
								break;
								default:
									p("No case is matched");
									break;
	}
	return 0;
}
