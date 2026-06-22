#include "receipt.hpp"

// Initializing variables for calculating subtotal, tax, tip, and total.
double subtotal;
double tax;
double tip;
double total;

// Returns the sum of all three item prices.
double calculateSubtotal(double item1, double item2, double item3) {
    subtotal = item1 + item2 + item3;
    return subtotal;
}

// Returns the sales tax for the subtotal using TAX_RATE.
double calculateTax(double subtotal) {
    tax = subtotal * TAX_RATE;
    return tax;
}

// Returns the tip amount.
double calculateTip(double subtotal, double tipPercent) {
    tip = subtotal * tipPercent / 100.0;
    return tip;
}

// Return the final total.
double calculateTotal(double subtotal, double tax, double tip) {
    total = subtotal + tax + tip;
    return total;
}
