using System;


namespace ATM
{
    class Program
    {

       static string int_Password1 ="plexus";
       static string int_Password2;
        static string int_selection;
        static Int32 age      =18;
        static void Main(string[] args)
        {
            Console.WriteLine("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");

            Console.WriteLine("||||                                                                ||||");

            Console.WriteLine("||||               AUTOMATED TELLER MACHINE                         ||||");

            Console.WriteLine("||||                                                                ||||");

            Console.WriteLine("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            age.ToString();
            Console.ReadKey();

            getMenue();

            


        }

        public static void getMenue()
        {
            Console.WriteLine("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");

            Console.WriteLine("||||                                                                ||||");

            Console.WriteLine("||||                    WELCOME TO GTBANK                           ||||");

            Console.WriteLine("||||                                                                ||||");

            Console.WriteLine("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");


            Console.WriteLine("||||                    Insert Your Card                           ||||\n");


            Console.WriteLine("                    Enter Your Password                             \n");

            int_Password2 = Console.ReadLine();

            if(int_Password1==int_Password2)
            {
                Console.WriteLine("Which type of transaction do you want to carry out?");

                Console.WriteLine("1-For Deposit\n2-For Withdrawal\n");

                int_selection = Console.ReadLine();

                switch (int_selection)
                {

                    case "1":
                        get_Deposit();
                        break;

                    case "2":
                        get_Withdrawal();
                        break;

                    default:
                        Console.WriteLine("Invalid Input");
                        break;

                }
            }

        }

        public static void get_Deposit()
        {
            
        }

        public static void get_Withdrawal()
        {

        }
    }
}
