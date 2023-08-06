set(BANK_ACCOUNT_SOURCES
    BankAccount.ixx
)

set(FINANCE_SOURCES
    Finance.ixx
    CompoundInterest.hpp
)

add_library(BankAccount ${BANK_ACCOUNT_SOURCES})
add_library(Finance ${FINANCE_SOURCES})

target_link_libraries(Finance PUBLIC BankAccount)