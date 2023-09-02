import BankAccount;
#include "CompoundInterest.hpp"
#include <cmath>

export module Finance;

export class CompoundInterestCalculator : public BankAccount {
public:
    CompoundInterestCalculator(double initial_balance)
        : BankAccount(initial_balance)
    {}

    double calculate_compound_interest(double rate, int years) {
        double principal = get_balance();
        return principal * std::pow(1.0 + rate, years);
    }
};

export template<typename T>
double calculate_and_deposit_interest(T& account, double rate, int years) {
    double interest = account.calculate_compound_interest(rate, years);
    account.deposit(interest);
    return interest;
}
