

#include <iostream>
#include <string>

class person {
    std::string name;
    int age;
    bool is_grateful;
    int salary;
    int account_balance;

public:
    person(std::string name, int age, bool is_grateful, int salary, int account_balance)
    {
        this->name = name;
        this->age = age;
        this->is_grateful = is_grateful;
        this->salary = salary;
        this->account_balance = account_balance;
    }

    std::string get_name()
    {
        return name;
    }

    int get_age()
    {
        return age;
    }

    bool grateful()
    {
        return is_grateful;
    }

    int get_salary()
    {
        return salary;
    }

    int get_account_balance()
    {
        std::cout << "account balance is " << account_balance << " $ " << std::endl;
        return account_balance;
        
    }
    
    void all_info()
    {
        std::cout << " Customer's name is " << name << std::endl;
        std::cout << " Customer is  " << age << " years old "  << std::endl;
        if (is_grateful)
        {
            std::cout << " Customer is grateful " <<  std::endl;
        }
        else
        {
            std::cout << " Customer isn't grateful " << std::endl;
        }
        std::cout << " Customer's salary is " << salary << " $ " << std::endl;
        std::cout << "Customer's account balance is " << account_balance << " $ " << std::endl;
    }

    void add_money(int amount)
    {
        account_balance += amount;



    }

    void withdraw_money(int amount)
    {
        if (account_balance >= amount)
        {
            account_balance -= amount;
        }
        else
        {
            std::cout << " insufficient funds " << std::endl;
        }
    }

    void get_a_loan(int amount)
    {
        if (is_grateful)
        {
            account_balance += amount;
            std::cout << " Loan is given succesfully " << std::endl;
        }
        else
        {
            std::cout << " Sorry, but customer isn't grateful, the transaction was rejected " << std::endl;
        }

    }
    
   
    
    

};

int main()
{
    person customer("Tigran", 23, 1, 1000, 5000);

    customer.all_info();
    std::cout << "account_balance " << std::endl;
    customer.get_account_balance();
    customer.add_money(2000);
    std::cout << "account_balance after add money " << std::endl;
    customer.get_account_balance();
    customer.withdraw_money(3000);
    std::cout << "account_balance after withdraw money " << std::endl;
    customer.get_account_balance();
    customer.get_a_loan(10000);
    std::cout << "account_balance after a loan " << std::endl;
    customer.get_account_balance();


    return 0;    
}

