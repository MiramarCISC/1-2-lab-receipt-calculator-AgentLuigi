#include "receipt.hpp"

// Returns the sum of all three item prices.
double calculateSubtotal(double item1, double item2, double item3) {
    subtotal = item1 + item2 + item3;
    return 0.0;
}

// Returns the sales tax for the subtotal using TAX_RATE.
double calculateTax(double subtotal) {
    tax = subtotal * TAX_RATE;
    return 0.0;
}

// Returns the tip amount.
double calculateTip(double subtotal, double tipPercent) {
    tip = subtotal * tipPercent;
    return 0.0;
}

// TODO: Return the final total.
double calculateTotal(double subtotal, double tax, double tip) {
    total = subtotal + tax + tip;
    return 0.0;
}
