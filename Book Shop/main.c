#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20],category;

    //paper
    char paper,pmore;
    int p1,p2,pcost=0;

    //novel
    int writer,n1,ncost=0;

    //study
    int choose,scost=0,s1,s2;


    printf("Enter your name ");
    scanf("%s",&name);

    printf("\nHello %s, Welcome to ABC Book Shop\n\n",name);

    printf("Please enter category (Paper/Novels/Study)\n");
    scanf("%s",&category);

    switch (category)
    {
        case 'P': printf("\nWhat are you want ? , Sinhala News Papers or English News Papers.\nPlease enter your choice (Sinhala/English)\n");
                  scanf("%s",&paper);

                  switch (paper)
                  {
                      //sinhala paper
                      case 'S': printf("\nWe have these Sinhala News Papers,\n\n\t1. Lankadeepa rs.120.00 \n\t2. Lakbima rs.110.00 \n\t3. Rivira rs.100.00 .  \n\n Please enter your choice number (please enter a one number) ");
                                scanf("%d",&p1);
                                printf("\n Do you want more items ? ");
                                scanf("%s",&pmore);

                                switch (pmore)
                                {
                                    case 'Y': printf("\n Enter your choice number ");
                                              scanf("%d",&p2);
                                               break;
                                    case 'N': printf("ok");
                                              break;
                                    default: ("\nPlease enter Yes or No");
                                }

                                printf("\n\n");

                                if (p1==1 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Lankadeepa News Paper. Price is rs.120.00 ");
                                    pcost=120;
                                }
                                else if (p1==2 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Lakbima News Paper. Price is rs.110.00 ");
                                    pcost=110;
                                }
                                else if (p1==3 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Rivira News Paper. Price is rs.100.00 ");
                                    pcost=100;
                                }
                                else if (p1==1 && p2==01)
                                {
                                    printf("Dear sir/madam your choice is number of two Lankadeepa News Papers. Your cost is rs.240.00 ");
                                    pcost=240;
                                }
                                else if (p1==1 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Lankadeepa and Lakbima. Your cost is rs.230.00");
                                    pcost=230;
                                }
                                else if (p1==1 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Lankadeepa and Rivira. Your cost is rs.220.00");
                                    pcost=220;
                                }
                                else if (p1==2 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are  Lakbima and Lankadeepa . Your cost is rs.230.00");
                                    pcost=230;
                                }
                                else if (p1==3 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Rivira and Lankadeepa. Your cost is rs.220.00");
                                    pcost=220;
                                }
                                else if (p1==2 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two Lakbima News Papers. Your cost is rs.230.00 ");
                                    pcost=230;
                                }
                                else if (p1==2 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Lakbima and Rivira. Your cost is rs.210.00");
                                    pcost=210;
                                }
                                else if (p1==3 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Rivira and Lakbima. Your cost is rs.210.00");
                                    pcost=210;
                                }
                                else if (p1==3 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two Rivira News Papers. Your cost is rs.200.00 ");
                                    pcost=200;
                                }

                                break;

                                //English Paper

                        case 'E': printf("\nWe have these English News Papers,\n\n\t1. Daily Mirror rs.120.00 \n\t2. Sunday Times rs.150.00 \n\t3. Sunday Observer rs.150.00 .  \n\n Please enter your choice number (please enter a one number) ");
                                scanf("%d",&p1);
                                printf("\n Do you want more items ? ");
                                scanf("%s",&pmore);

                                switch (pmore)
                                {
                                    case 'Y': printf("\n Enter your choice number ");
                                              scanf("%d",&p2);
                                              break;
                                    case 'N': printf("ok");
                                              break;
                                    default: ("\nPlease enter Yes or No");
                                }

                                printf("\n\n");

                                if (p1==1 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Daily Mirror News Paper. Price is rs.120.00 ");
                                    pcost=120;
                                }
                                else if (p1==2 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Sunday Times News Paper. Price is rs.150.00 ");
                                    pcost=150;
                                }
                                else if (p1==3 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Sunday Observer News Paper. Price is rs.150.00 ");
                                    pcost=150;
                                }
                                else if (p1==1 && p2==01)
                                {
                                    printf("Dear sir/madam your choice is number of two Daily Mirror News Papers. Your cost is rs.240.00 ");
                                    pcost=240;
                                }
                                else if (p1==1 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Daily Mirror and Sunday Times. Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==1 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Daily Mirror and Sunday Observer. Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==2 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are  Sunday Times and Daily Mirror . Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==3 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Sunday Observer and Daily Mirror. Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==2 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two Sunday Times News Papers. Your cost is rs.300.00 ");
                                    pcost=300;
                                }
                                else if (p1==2 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Sunday Times and Sunday Observer. Your cost is rs.300.00");
                                    pcost=300;
                                }
                                else if (p1==3 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Sunday Observer and Sunday Times. Your cost is rs.300.00");
                                    pcost=300;
                                }
                                else if (p1==3 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two Sunday Observer News Papers. Your cost is rs.300.00 ");
                                    pcost=300;
                                }


                                break;

                                default: printf("Please Enter Sinhala or English");
                  }

                                printf("\n\nDo you want Novel or Study items (Please Enter Novel/Study) ");
                                scanf("%s",&category);

                                switch (category)
                                {
                                    case 'N': printf("\n We have these writers books,\n\n\t1. Martin Wickramasinghe.\n\t2. T.B Ilangarathna.\n\t3. Upul S. Sannasgala.\n\nPlease Enter your choice number (One number only) ");
                                              scanf("%d",&writer);

                                              switch (writer)
                                              {

                                             case 1: printf("\t1. Ape gama\n\t2. Madolduwa\n\nPlease Enter your choice number ");
                                             scanf("%d",&n1);
                                             printf("\n");

                                             switch (n1)
                              {
                                            case 1: printf("Your choice is 'Ape gama' novel. Your cost is rs.250.00");
                                            ncost=250;
                                            break;
                                            case 2: printf("Your choice is 'Madolduwa' novel. Your cost is rs.300.00");
                                            ncost=300;
                                            break;
                                            default: printf("Please Enter valid number ");
                              }
                              break;

                                            case 2: printf("\t1. Aba Yaluwo\n\t2. Thilaka\n\nPlease Enter your choice number ");
                                            scanf("%d",&n1);
                                            printf("\n");

                                            switch (n1)
                              {
                                            case 1: printf("Your choice is 'Aba Yaluwo' novel. Your cost is rs.350.00");
                                            ncost=350;
                                            break;
                                            case 2: printf("Your choice is 'Thilaka' novel. Your cost is rs.280.00");
                                          ncost=280;
                                          break;
                                  default: printf("Please Enter valid number ");
                              }
                              break;

                    case 3: printf("\t1. Amma\n\t2. Kolapata as\n\nPlease Enter your choice number ");
                              scanf("%d",&n1);
                              printf("\n");

                             switch (n1)
                              {
                                  case 1: printf("Your choice is 'Amma' novel. Your cost is rs.600.00");
                                          ncost=600;
                                          break;
                                  case 2: printf("Your choice is 'Kolapata as' novel. Your cost is rs.450.00");
                                          ncost=450;
                                          break;
                                  default: printf("Please Enter valid number ");
                              }
                              break;

                  }
                  printf("\n\nYour total bill is rs.%d.00 . \nThank you & See you again\n\n",ncost);

                  break;

                  case 'S': printf("\nWe have \n\t1. paper collection\n\t2. Past Papers books \n\nPlease Enter number ");
                  scanf("%d",&choose);

                  switch (choose)
                  {
                      case 1: printf("We have these, \n\n\t1. Vidusara \n\t2. Vidura \n\t3. Muthuhara \n\nPlease Enter number ");
                              scanf("%d",&s1);

                              switch (s1)
                              {
                                  case 1: printf("Your choice is 'Vidusara' paper. Your cost is rs.80.00");
                                          scost=80;
                                          break;
                                  case 2: printf("Your choice is 'Vidura' paper. Your cost is rs.50.00");
                                          scost=50;
                                          break;
                                  case 3: printf("Your choice is 'Muthuhara' paper. Your cost is rs.60.00");
                                          scost=60;
                                          break;
                                  default: printf("Please enter valid number");
                              }
                              break;

                      case 2: printf("We have these, \n\n\t1. Physics Past Papers Book\n\t2. Combine Maths Past Papers Book \n\t3. Chemistry Past Papers Book \n\t4. Bio Past Papers Book \n\t5. IT Past Papers Book \n\nPlease Enter number");
                              scanf("%d",&s2);

                              switch (s2)
                              {
                                  case 1: printf("Your choice is Physics Past Papers Book. Your cost is rs.700.00");
                                          scost=700;
                                          break;
                                  case 2: printf("Your choice is Combine Maths Past Papers Book. Your cost is rs.800.00");
                                          scost=800;
                                          break;
                                  case 3: printf("Your choice is Chemistry Past Papers Book. Your cost is rs.700.00");
                                          scost=700;
                                          break;
                                  case 4: printf("Your choice is Bio Past Papers Book. Your cost is rs.900.00");
                                          scost=900;
                                          break;
                                  case 5: printf("Your choice is IT Past Papers Book. Your cost is rs.700.00");
                                          scost=700;
                                          break;
                                  default: printf("Please enter valid number");
                              }
                              break;


                  }



                                }

        break;

        case 'N': printf("\n We have these writers books,\n\n\t1. Martin Wickramasinghe.\n\t2. T.B Ilangarathna.\n\t3. Upul S. Sannasgala.\n\nPlease Enter your choice number (One number only) ");
                  scanf("%d",&writer);

                  switch (writer)
                  {


                      case 1: printf("\t1. Ape gama\n\t2. Madolduwa\n\nPlease Enter your choice number ");
                              scanf("%d",&n1);
                              printf("\n");

                              switch (n1)
                              {
                                  case 1: printf("Your choice is 'Ape gama' novel. Your cost is rs.250.00");
                                          ncost=250;
                                          break;
                                  case 2: printf("Your choice is 'Madolduwa' novel. Your cost is rs.300.00");
                                          ncost=300;
                                          break;
                                  default: printf("Please Enter valid number ");
                              }
                              break;

                     case 2: printf("\t1. Aba Yaluwo\n\t2. Thilaka\n\nPlease Enter your choice number ");
                              scanf("%d",&n1);
                              printf("\n");

                             switch (n1)
                              {
                                  case 1: printf("Your choice is 'Aba Yaluwo' novel. Your cost is rs.350.00");
                                          ncost=350;
                                          break;
                                  case 2: printf("Your choice is 'Thilaka' novel. Your cost is rs.280.00");
                                          ncost=280;
                                          break;
                                  default: printf("Please Enter valid number ");
                              }
                              break;

                    case 3: printf("\t1. Amma\n\t2. Kolapata as\n\nPlease Enter your choice number ");
                              scanf("%d",&n1);
                              printf("\n");

                             switch (n1)
                              {
                                  case 1: printf("Your choice is 'Amma' novel. Your cost is rs.600.00");
                                          ncost=600;
                                          break;
                                  case 2: printf("Your choice is 'Kolapata as' novel. Your cost is rs.450.00");
                                          ncost=450;
                                          break;
                                  default: printf("Please Enter valid number ");
                              }
                              break;
                  }


                              printf("\n\nDo you want Paper or Study items (Please Enter Paper/Study) ");
                                scanf("%s",&category);

                                switch (category)
                                {
                                    case 'P': printf("\nWhat are you want ? , Sinhala News Papers or English News Papers.\nPlease enter your choice (Sinhala/English)\n");
                  scanf("%s",&paper);

                  switch (paper)
                  {
                      //sinhala paper
                      case 'S': printf("\nWe have these Sinhala News Papers,\n\n\t1. Lankadeepa rs.120.00 \n\t2. Lakbima rs.110.00 \n\t3. Rivira rs.100.00 .  \n\n Please enter your choice number (please enter a one number) ");
                                scanf("%d",&p1);
                                printf("\n Do you want more items ? ");
                                scanf("%s",&pmore);

                                switch (pmore)
                                {
                                    case 'Y': printf("\n Enter your choice number ");
                                              scanf("%d",&p2);
                                               break;
                                    case 'N': printf("ok");
                                              break;
                                    default: ("\nPlease enter Yes or No");
                                }

                                printf("\n\n");

                                if (p1==1 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Lankadeepa News Paper. Price is rs.120.00 ");
                                    pcost=120;
                                }
                                else if (p1==2 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Lakbima News Paper. Price is rs.110.00 ");
                                    pcost=110;
                                }
                                else if (p1==3 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Rivira News Paper. Price is rs.100.00 ");
                                    pcost=100;
                                }
                                else if (p1==1 && p2==01)
                                {
                                    printf("Dear sir/madam your choice is number of two Lankadeepa News Papers. Your cost is rs.240.00 ");
                                    pcost=240;
                                }
                                else if (p1==1 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Lankadeepa and Lakbima. Your cost is rs.230.00");
                                    pcost=230;
                                }
                                else if (p1==1 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Lankadeepa and Rivira. Your cost is rs.220.00");
                                    pcost=220;
                                }
                                else if (p1==2 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are  Lakbima and Lankadeepa . Your cost is rs.230.00");
                                    pcost=230;
                                }
                                else if (p1==3 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Rivira and Lankadeepa. Your cost is rs.220.00");
                                    pcost=220;
                                }
                                else if (p1==2 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two Lakbima News Papers. Your cost is rs.230.00 ");
                                    pcost=230;
                                }
                                else if (p1==2 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Lakbima and Rivira. Your cost is rs.210.00");
                                    pcost=210;
                                }
                                else if (p1==3 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Rivira and Lakbima. Your cost is rs.210.00");
                                    pcost=210;
                                }
                                else if (p1==3 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two Rivira News Papers. Your cost is rs.200.00 ");
                                    pcost=200;
                                }

                                break;

                                //English Paper

                        case 'E': printf("\nWe have these English News Papers,\n\n\t1. Daily Mirror rs.120.00 \n\t2. Sunday Times rs.150.00 \n\t3. Sunday Observer rs.150.00 .  \n\n Please enter your choice number (please enter a one number) ");
                                scanf("%d",&p1);
                                printf("\n Do you want more items ? ");
                                scanf("%s",&pmore);

                                switch (pmore)
                                {
                                    case 'Y': printf("\n Enter your choice number ");
                                              scanf("%d",&p2);
                                              break;
                                    case 'N': printf("ok");
                                              break;
                                    default: ("\nPlease enter Yes or No");
                                }

                                printf("\n\n");

                                if (p1==1 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Daily Mirror News Paper. Price is rs.120.00 ");
                                    pcost=120;
                                }
                                else if (p1==2 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Sunday Times News Paper. Price is rs.150.00 ");
                                    pcost=150;
                                }
                                else if (p1==3 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Sunday Observer News Paper. Price is rs.150.00 ");
                                    pcost=150;
                                }
                                else if (p1==1 && p2==01)
                                {
                                    printf("Dear sir/madam your choice is number of two Daily Mirror News Papers. Your cost is rs.240.00 ");
                                    pcost=240;
                                }
                                else if (p1==1 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Daily Mirror and Sunday Times. Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==1 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Daily Mirror and Sunday Observer. Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==2 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are  Sunday Times and Daily Mirror . Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==3 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Sunday Observer and Daily Mirror. Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==2 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two Sunday Times News Papers. Your cost is rs.300.00 ");
                                    pcost=300;
                                }
                                else if (p1==2 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Sunday Times and Sunday Observer. Your cost is rs.300.00");
                                    pcost=300;
                                }
                                else if (p1==3 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Sunday Observer and Sunday Times. Your cost is rs.300.00");
                                    pcost=300;
                                }
                                else if (p1==3 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two Sunday Observer News Papers. Your cost is rs.300.00 ");
                                    pcost=300;
                                }


                            break;
                  }

                  case 'S': printf("\nWe have \n\t1. paper collection\n\t2. Past Papers books \n\nPlease Enter number ");
                  scanf("%d",&choose);

                  switch (choose)
                  {
                      case 1: printf("We have these, \n\n\t1. Vidusara \n\t2. Vidura \n\t3. Muthuhara \n\nPlease Enter number ");
                              scanf("%d",&s1);

                              switch (s1)
                              {
                                  case 1: printf("Your choice is 'Vidusara' paper. Your cost is rs.80.00");
                                          scost=80;
                                          break;
                                  case 2: printf("Your choice is 'Vidura' paper. Your cost is rs.50.00");
                                          scost=50;
                                          break;
                                  case 3: printf("Your choice is 'Muthuhara' paper. Your cost is rs.60.00");
                                          scost=60;
                                          break;
                                  default: printf("Please enter valid number");
                              }
                              break;

                      case 2: printf("We have these, \n\n\t1. Physics Past Papers Book\n\t2. Combine Maths Past Papers Book \n\t3. Chemistry Past Papers Book \n\t4. Bio Past Papers Book \n\t5. IT Past Papers Book \n\nPlease Enter number");
                              scanf("%d",&s2);

                              switch (s2)
                              {
                                  case 1: printf("Your choice is Physics Past Papers Book. Your cost is rs.700.00");
                                          scost=700;
                                          break;
                                  case 2: printf("Your choice is Combine Maths Past Papers Book. Your cost is rs.800.00");
                                          scost=800;
                                          break;
                                  case 3: printf("Your choice is Chemistry Past Papers Book. Your cost is rs.700.00");
                                          scost=700;
                                          break;
                                  case 4: printf("Your choice is Bio Past Papers Book. Your cost is rs.900.00");
                                          scost=900;
                                          break;
                                  case 5: printf("Your choice is IT Past Papers Book. Your cost is rs.700.00");
                                          scost=700;
                                          break;
                                  default: printf("Please enter valid number");
                              }
                              break;


                  }



                                }



                  printf("\n\nYour total bill is rs.%d.00 . \nThank you & See you again\n\n",ncost);

                  break;

        case 'S': printf("\nWe have \n\t1. paper collection\n\t2. Past Papers books \n\nPlease Enter number ");
                  scanf("%d",&choose);

                  switch (choose)
                  {
                      case 1: printf("We have these, \n\n\t1. Vidusara \n\t2. Vidura \n\t3. Muthuhara \n\nPlease Enter number ");
                              scanf("%d",&s1);

                              switch (s1)
                              {
                                  case 1: printf("Your choice is 'Vidusara' paper. Your cost is rs.80.00");
                                          scost=80;
                                          break;
                                  case 2: printf("Your choice is 'Vidura' paper. Your cost is rs.50.00");
                                          scost=50;
                                          break;
                                  case 3: printf("Your choice is 'Muthuhara' paper. Your cost is rs.60.00");
                                          scost=60;
                                          break;
                                  default: printf("Please enter valid number");
                              }
                              break;

                      case 2: printf("We have these, \n\n\t1. Physics Past Papers Book\n\t2. Combine Maths Past Papers Book \n\t3. Chemistry Past Papers Book \n\t4. Bio Past Papers Book \n\t5. IT Past Papers Book \n\nPlease Enter number");
                              scanf("%d",&s2);

                              switch (s2)
                              {
                                  case 1: printf("Your choice is Physics Past Papers Book. Your cost is rs.700.00");
                                          scost=700;
                                          break;
                                  case 2: printf("Your choice is Combine Maths Past Papers Book. Your cost is rs.800.00");
                                          scost=800;
                                          break;
                                  case 3: printf("Your choice is Chemistry Past Papers Book. Your cost is rs.700.00");
                                          scost=700;
                                          break;
                                  case 4: printf("Your choice is Bio Past Papers Book. Your cost is rs.900.00");
                                          scost=900;
                                          break;
                                  case 5: printf("Your choice is IT Past Papers Book. Your cost is rs.700.00");
                                          scost=700;
                                          break;
                                  default: printf("Please enter valid number");
                              }



                  }



                                                printf("\n\nDo you want Novel or Paper items (Please Enter  yNovel/Paper) ");
                                scanf("%s",&category);

                                switch (category)
                                {
                                    case 'N': printf("\n We have these writers books,\n\n\t1. Martin Wickramasinghe.\n\t2. T.B Ilangarathna.\n\t3. Upul S. Sannasgala.\n\nPlease Enter your choice number (One number only) ");
                                              scanf("%d",&writer);

                                              switch (writer)
                                              {

                                             case 1: printf("\t1. Ape gama\n\t2. Madolduwa\n\nPlease Enter your choice number ");
                                             scanf("%d",&n1);
                                             printf("\n");

                                             switch (n1)
                              {
                                            case 1: printf("Your choice is 'Ape gama' novel. Your cost is rs.250.00");
                                            ncost=250;
                                            break;
                                            case 2: printf("Your choice is 'Madolduwa' novel. Your cost is rs.300.00");
                                            ncost=300;
                                            break;
                                            default: printf("Please Enter valid number ");
                              }
                              break;

                                            case 2: printf("\t1. Aba Yaluwo\n\t2. Thilaka\n\nPlease Enter your choice number ");
                                            scanf("%d",&n1);
                                            printf("\n");

                                            switch (n1)
                              {
                                            case 1: printf("Your choice is 'Aba Yaluwo' novel. Your cost is rs.350.00");
                                            ncost=350;
                                            break;
                                            case 2: printf("Your choice is 'Thilaka' novel. Your cost is rs.280.00");
                                          ncost=280;
                                          break;
                                  default: printf("Please Enter valid number ");
                              }
                              break;

                    case 3: printf("\t1. Amma\n\t2. Kolapata as\n\nPlease Enter your choice number ");
                              scanf("%d",&n1);
                              printf("\n");

                             switch (n1)
                              {
                                  case 1: printf("Your choice is 'Amma' novel. Your cost is rs.600.00");
                                          ncost=600;
                                          break;
                                  case 2: printf("Your choice is 'Kolapata as' novel. Your cost is rs.450.00");
                                          ncost=450;
                                          break;
                                  default: printf("Please Enter valid number ");
                              }
                              break;

                  }
                  printf("\n\nYour total bill is rs.%d.00 . \nThank you & See you again\n\n",ncost);

                  break;

                  case 'P': printf("\nWhat are you want ? , Sinhala News Papers or English News Papers.\nPlease enter your choice (Sinhala/English)\n");
                  scanf("%s",&paper);

                  switch (paper)
                  {
                      //sinhala paper
                      case 'S': printf("\nWe have these Sinhala News Papers,\n\n\t1. Lankadeepa rs.120.00 \n\t2. Lakbima rs.110.00 \n\t3. Rivira rs.100.00 .  \n\n Please enter your choice number (please enter a one number) ");
                                scanf("%d",&p1);
                                printf("\n Do you want more items ? ");
                                scanf("%s",&pmore);

                                switch (pmore)
                                {
                                    case 'Y': printf("\n Enter your choice number ");
                                              scanf("%d",&p2);
                                               break;
                                    case 'N': printf("ok");
                                              break;
                                    default: ("\nPlease enter Yes or No");
                                }

                                printf("\n\n");

                                if (p1==1 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Lankadeepa News Paper. Price is rs.120.00 ");
                                    pcost=120;
                                }
                                else if (p1==2 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Lakbima News Paper. Price is rs.110.00 ");
                                    pcost=110;
                                }
                                else if (p1==3 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Rivira News Paper. Price is rs.100.00 ");
                                    pcost=100;
                                }
                                else if (p1==1 && p2==01)
                                {
                                    printf("Dear sir/madam your choice is number of two Lankadeepa News Papers. Your cost is rs.240.00 ");
                                    pcost=240;
                                }
                                else if (p1==1 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Lankadeepa and Lakbima. Your cost is rs.230.00");
                                    pcost=230;
                                }
                                else if (p1==1 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Lankadeepa and Rivira. Your cost is rs.220.00");
                                    pcost=220;
                                }
                                else if (p1==2 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are  Lakbima and Lankadeepa . Your cost is rs.230.00");
                                    pcost=230;
                                }
                                else if (p1==3 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Rivira and Lankadeepa. Your cost is rs.220.00");
                                    pcost=220;
                                }
                                else if (p1==2 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two Lakbima News Papers. Your cost is rs.230.00 ");
                                    pcost=230;
                                }
                                else if (p1==2 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Lakbima and Rivira. Your cost is rs.210.00");
                                    pcost=210;
                                }
                                else if (p1==3 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Rivira and Lakbima. Your cost is rs.210.00");
                                    pcost=210;
                                }
                                else if (p1==3 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two Rivira News Papers. Your cost is rs.200.00 ");
                                    pcost=200;
                                }

                                break;

                                //English Paper

                        case 'E': printf("\nWe have these English News Papers,\n\n\t1. Daily Mirror rs.120.00 \n\t2. Sunday Times rs.150.00 \n\t3. Sunday Observer rs.150.00 .  \n\n Please enter your choice number (please enter a one number) ");
                                scanf("%d",&p1);
                                printf("\n Do you want more items ? ");
                                scanf("%s",&pmore);

                                switch (pmore)
                                {
                                    case 'Y': printf("\n Enter your choice number ");
                                              scanf("%d",&p2);
                                              break;
                                    case 'N': printf("ok");
                                              break;
                                    default: ("\nPlease enter Yes or No");
                                }

                                printf("\n\n");

                                if (p1==1 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Daily Mirror News Paper. Price is rs.120.00 ");
                                    pcost=120;
                                }
                                else if (p1==2 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Sunday Times News Paper. Price is rs.150.00 ");
                                    pcost=150;
                                }
                                else if (p1==3 && p2==0)
                                {
                                    printf("Dear sir/madam your choice is Sunday Observer News Paper. Price is rs.150.00 ");
                                    pcost=150;
                                }
                                else if (p1==1 && p2==01)
                                {
                                    printf("Dear sir/madam your choice is number of two Daily Mirror News Papers. Your cost is rs.240.00 ");
                                    pcost=240;
                                }
                                else if (p1==1 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Daily Mirror and Sunday Times. Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==1 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Daily Mirror and Sunday Observer. Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==2 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are  Sunday Times and Daily Mirror . Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==3 && p2==1)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Sunday Observer and Daily Mirror. Your cost is rs.270.00");
                                    pcost=270;
                                }
                                else if (p1==2 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two Sunday Times News Papers. Your cost is rs.300.00 ");
                                    pcost=300;
                                }
                                else if (p1==2 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Sunday Times and Sunday Observer. Your cost is rs.300.00");
                                    pcost=300;
                                }
                                else if (p1==3 && p2==2)
                                {
                                    printf("Dear sir/madam your choice is number of two News Papers they are Sunday Observer and Sunday Times. Your cost is rs.300.00");
                                    pcost=300;
                                }
                                else if (p1==3 && p2==3)
                                {
                                    printf("Dear sir/madam your choice is number of two Sunday Observer News Papers. Your cost is rs.300.00 ");
                                    pcost=300;
                                }


                                break;


                  printf("\n\nYour total bill is rs.%d.00 . \nThank you & See you again\n\n",scost);

                  }

                                }



            }






    return 0;
}
