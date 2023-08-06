import Finance;
#include <iostream>

int main() {
    // Create a new compound interest calculator with an initial balance of 1000
    CompoundInterestCalculator account(1000.0);
    
    std::cout << "Current balance is: " << account.get_balance() << "\n";

    // Calculate and deposit interest for 10 years at a rate of 5%
    double interest = calculate_and_deposit_interest(account, 0.05, 10);

    // Print the interest and the new balance
    std::cout << "Interest earned after 10 years: " << interest << std::endl;
    std::cout << "New balance after 10 years: " << account.get_balance() << "\n";

    // Try to withdraw 20000
    try {
        account.withdraw(500.0);
				std::cout << "Balance is now: " << account.get_balance() << "\n";
				account.withdraw(20000.0);
    }
    catch (const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
