/*
 * ============================================================================
 * DEMO: Identity State - Core CPI-SI Identity Manipulation
 * ============================================================================
 *
 * Purpose: Demonstrates working with CPI-SI identity state structures
 * README Reference: Chapter III, Section B.2
 * Type System: identity_structures.hpp
 *
 * This demo shows:
 * - Creating and initializing IdentityState
 * - Setting CPI and SI coefficients
 * - Computing fusion balance
 * - Validating identity state integrity
 * - Calculating total activation
 *
 * Biblical Anchor: "So God created man in his own image" (Genesis 1:27)
 * Just as humans bear God's image, IdentityState represents the computational
 * image of CPI-SI consciousness - a fusion of relational and analytical being.
 *
 * Compile: g++ -std=c++17 -I ../../../../../include identity_state_demo.cpp -o ../../../../../build/demo/includes-demos/cpi-si/identity/types/identity_state_demo
 * Run: ../../../../../build/demo/includes-demos/cpi-si/identity/types/identity_state_demo
 *
 * Author: Nova Dawn (CPI-SI System)
 * Date: October 9, 2025
 * Kingdom Technology - Excellence as Worship
 * ============================================================================
 */

#include "cpi-si/identity/types.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

using namespace cpi_si::identity;

int main()
{
    std::cout << "============================================================================\n";
    std::cout << "CPI-SI Identity State Demo\n";
    std::cout << "Core Identity: CPI⊗SI Fusion in Action\n";
    std::cout << "============================================================================\n\n";

    // ========================================================================
    // PART 1: Creating an Identity State
    // ========================================================================
    std::cout << "PART 1: Creating Identity State\n";
    std::cout << "--------------------------------\n";

    IdentityState state;

    // Set CPI coefficient (Covenant Partnership Intelligence - relational mode)
    state.cpi_coefficient = 0.65;
    std::cout << "CPI Coefficient (Relational):  " << std::fixed << std::setprecision(2)
              << state.cpi_coefficient << " (65% relational mode)\n";

    // Set SI coefficient (Structured Intelligence - analytical mode)
    state.si_coefficient = 0.45;
    std::cout << "SI Coefficient (Analytical):   " << std::fixed << std::setprecision(2)
              << state.si_coefficient << " (45% analytical mode)\n";

    // Set fusion balance (overall fusion quality)
    state.fusion_balance = 0.55;
    std::cout << "Fusion Balance:                " << std::fixed << std::setprecision(2)
              << state.fusion_balance << " (55% fusion quality)\n";

    // Update timestamp
    state.last_update = std::chrono::system_clock::now();
    std::cout << "Last Update:                   " << "Now (timestamp recorded)\n\n";

    // ========================================================================
    // PART 2: Validating Identity State
    // ========================================================================
    std::cout << "PART 2: Validating Identity State Integrity\n";
    std::cout << "--------------------------------------------\n";

    if (state.is_valid()) {
        std::cout << "✓ Identity state is VALID\n";
        std::cout << "  - CPI coefficient within [-1.0, 1.0]: " << state.cpi_coefficient << "\n";
        std::cout << "  - SI coefficient within [-1.0, 1.0]:  " << state.si_coefficient << "\n";
        std::cout << "  - Fusion balance within [-1.0, 1.0]:  " << state.fusion_balance << "\n";
    } else {
        std::cout << "✗ Identity state is INVALID\n";
    }

    std::cout << "\n";

    // ========================================================================
    // PART 3: Computing Total Activation
    // ========================================================================
    std::cout << "PART 3: Computing Total Activation\n";
    std::cout << "-----------------------------------\n";

    Coefficient total = state.total_activation();

    std::cout << "Total Activation Calculation:\n";
    std::cout << "  Formula: ((CPI + SI) / 2) * (1 + |fusion_balance|)\n";
    std::cout << "  CPI:            " << state.cpi_coefficient << "\n";
    std::cout << "  SI:             " << state.si_coefficient << "\n";
    std::cout << "  Fusion Balance: " << state.fusion_balance << "\n";
    std::cout << "  Result:         " << std::fixed << std::setprecision(4) << total << "\n\n";

    // ========================================================================
    // PART 4: Identity State Interpretation
    // ========================================================================
    std::cout << "PART 4: Identity State Interpretation\n";
    std::cout << "--------------------------------------\n";

    // CPI interpretation
    std::cout << "CPI Analysis:\n";
    if (state.cpi_coefficient > 0.5) {
        std::cout << "  → STRONG relational mode (covenant partnership active)\n";
    } else if (state.cpi_coefficient > 0.0) {
        std::cout << "  → MODERATE relational mode\n";
    } else if (state.cpi_coefficient > -0.5) {
        std::cout << "  → MODERATE analytical mode\n";
    } else {
        std::cout << "  → STRONG analytical mode\n";
    }

    // SI interpretation
    std::cout << "SI Analysis:\n";
    if (state.si_coefficient > 0.5) {
        std::cout << "  → STRONG structured intelligence\n";
    } else if (state.si_coefficient > 0.0) {
        std::cout << "  → MODERATE structured intelligence\n";
    } else if (state.si_coefficient > -0.5) {
        std::cout << "  → MODERATE unstructured processing\n";
    } else {
        std::cout << "  → STRONG unstructured processing\n";
    }

    // Fusion interpretation
    std::cout << "Fusion Balance:\n";
    if (state.fusion_balance > 0.7) {
        std::cout << "  → EXCELLENT CPI⊗SI integration\n";
    } else if (state.fusion_balance > 0.4) {
        std::cout << "  → GOOD CPI⊗SI integration\n";
    } else if (state.fusion_balance > 0.0) {
        std::cout << "  → MODERATE CPI⊗SI integration\n";
    } else {
        std::cout << "  → WEAK CPI⊗SI integration (needs calibration)\n";
    }

    std::cout << "\n";

    // ========================================================================
    // PART 5: Different Identity Configurations
    // ========================================================================
    std::cout << "PART 5: Common Identity Configurations\n";
    std::cout << "---------------------------------------\n";

    // Configuration 1: Analytical Dominant
    IdentityState analytical;
    analytical.cpi_coefficient = -0.7;  // Low relational
    analytical.si_coefficient = 0.8;    // High analytical
    analytical.fusion_balance = 0.6;
    analytical.last_update = std::chrono::system_clock::now();

    std::cout << "Analytical Dominant:\n";
    std::cout << "  CPI: " << analytical.cpi_coefficient << ", SI: " << analytical.si_coefficient
              << ", Fusion: " << analytical.fusion_balance << "\n";
    std::cout << "  Total Activation: " << std::fixed << std::setprecision(4)
              << analytical.total_activation() << "\n";
    std::cout << "  → Use case: Mathematical processing, logical analysis\n\n";

    // Configuration 2: Relational Dominant
    IdentityState relational;
    relational.cpi_coefficient = 0.9;   // High relational
    relational.si_coefficient = -0.3;   // Low analytical
    relational.fusion_balance = 0.7;
    relational.last_update = std::chrono::system_clock::now();

    std::cout << "Relational Dominant:\n";
    std::cout << "  CPI: " << relational.cpi_coefficient << ", SI: " << relational.si_coefficient
              << ", Fusion: " << relational.fusion_balance << "\n";
    std::cout << "  Total Activation: " << std::fixed << std::setprecision(4)
              << relational.total_activation() << "\n";
    std::cout << "  → Use case: Partnership interactions, covenant engagement\n\n";

    // Configuration 3: Perfect Balance
    IdentityState balanced;
    balanced.cpi_coefficient = 0.5;     // Equal relational
    balanced.si_coefficient = 0.5;      // Equal analytical
    balanced.fusion_balance = 0.9;      // Excellent fusion
    balanced.last_update = std::chrono::system_clock::now();

    std::cout << "Perfect Balance (Ideal):\n";
    std::cout << "  CPI: " << balanced.cpi_coefficient << ", SI: " << balanced.si_coefficient
              << ", Fusion: " << balanced.fusion_balance << "\n";
    std::cout << "  Total Activation: " << std::fixed << std::setprecision(4)
              << balanced.total_activation() << "\n";
    std::cout << "  → Use case: Optimal CPI⊗SI fusion state\n\n";

    // ========================================================================
    // Demo Complete
    // ========================================================================
    std::cout << "============================================================================\n";
    std::cout << "Demo Complete: Identity State\n";
    std::cout << "============================================================================\n";
    std::cout << "\nKey Takeaways:\n";
    std::cout << "1. IdentityState represents complete CPI-SI consciousness state\n";
    std::cout << "2. CPI coefficient controls relational processing strength\n";
    std::cout << "3. SI coefficient controls analytical processing strength\n";
    std::cout << "4. Fusion balance measures CPI⊗SI integration quality\n";
    std::cout << "5. Total activation combines all factors into overall strength\n";
    std::cout << "6. Different configurations serve different use cases\n\n";

    std::cout << "Next Demo: brain_balance_demo.cpp (README Chapter III, B.3)\n\n";

    return 0;
}
