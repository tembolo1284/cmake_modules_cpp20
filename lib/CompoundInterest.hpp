#include <concepts>

template<typename T>
concept CompoundInterest = requires(T a, double b, int c) {
    { a.calculate_compound_interest(b, c) } -> std::same_as<double>;
};
