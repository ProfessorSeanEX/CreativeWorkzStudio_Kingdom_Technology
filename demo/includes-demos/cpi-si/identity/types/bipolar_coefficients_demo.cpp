/*
 * ============================================================================
 * DEMO: Bipolar Coefficients - Foundation Types Usage
 * ============================================================================
 *
 * Purpose: Demonstrates working with CPI-SI bipolar coefficient system
 * README Reference: Chapter III, Section B.1
 * Type System: foundation_types.hpp
 *
 * This demo shows:
 * - Creating bipolar coefficients in the [-1.0, 1.0] range
 * - Validating coefficient boundaries
 * - Computing fusion between left-brain and right-brain coefficients
 * - Using mathematical constants from the foundation
 *
 * Biblical Anchor: "In the beginning God created..." (Genesis 1:1)
 * Just as God established order through creation, CPI-SI establishes
 * computational order through the bipolar coefficient foundation.
 *
 * Compile: g++ -std=c++17 -I ../../../../../include bipolar_coefficients_demo.cpp -o ../../../../../build/demo/includes-demos/cpi-si/identity/types/bipolar_demo
 * Run: ../../../../../build/demo/includes-demos/cpi-si/identity/types/bipolar_demo
 *
 * Author: Nova Dawn (CPI-SI System)
 * Date: October 9, 2025
 * Kingdom Technology - Excellence as Worship
 * ============================================================================
 */

#include "cpi-si/identity/types.hpp"
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace cpi_si::identity;

int main()
{
    std::cout << "============================================================================\n";
    std::cout << "CPI-SI Bipolar Coefficients Demo\n";
    std::cout << "Foundation Types: Mathematical Primitives in Action\n";
    std::cout << "============================================================================\n\n";

    // ========================================================================
    // PART 1: Creating Bipolar Coefficients
    // ========================================================================
    std::cout << "PART 1: Creating Bipolar Coefficients\n";
    std::cout << "--------------------------------------\n";

    // Left-brain coefficient (analytical bias)
    Coefficient left_brain = -0.6;
    std::cout << "Left-brain coefficient:  " << std::setw(6) << std::fixed << std::setprecision(2)
              << left_brain << " (analytical bias)\n";

    // Right-brain coefficient (relational bias)
    Coefficient right_brain = 0.8;
    std::cout << "Right-brain coefficient: " << std::setw(6) << std::fixed << std::setprecision(2)
              << right_brain << " (relational bias)\n\n";

    // ========================================================================
    // PART 2: Validating Coefficient Boundaries
    // ========================================================================
    std::cout << "PART 2: Validating Coefficient Boundaries\n";
    std::cout << "------------------------------------------\n";

    // Check that coefficients are within valid range
    assert(left_brain >= constants::MIN_COEFFICIENT);
    assert(left_brain <= constants::MAX_COEFFICIENT);
    std::cout << "✓ Left-brain coefficient within bounds:  ["
              << constants::MIN_COEFFICIENT << ", " << constants::MAX_COEFFICIENT << "]\n";

    assert(right_brain >= constants::MIN_COEFFICIENT);
    assert(right_brain <= constants::MAX_COEFFICIENT);
    std::cout << "✓ Right-brain coefficient within bounds: ["
              << constants::MIN_COEFFICIENT << ", " << constants::MAX_COEFFICIENT << "]\n\n";

    // ========================================================================
    // PART 3: Computing Fusion
    // ========================================================================
    std::cout << "PART 3: Computing CPI-SI Fusion\n";
    std::cout << "--------------------------------\n";

    // Simple fusion: average of left and right brain
    Coefficient fusion = (left_brain + right_brain) / 2.0;

    std::cout << "Fusion calculation:\n";
    std::cout << "  Left-brain:  " << std::setw(6) << std::fixed << std::setprecision(2) << left_brain << "\n";
    std::cout << "  Right-brain: " << std::setw(6) << std::fixed << std::setprecision(2) << right_brain << "\n";
    std::cout << "  Fusion:      " << std::setw(6) << std::fixed << std::setprecision(2) << fusion << "\n\n";

    // Interpret the fusion result
    std::cout << "Fusion interpretation: ";
    if (fusion > constants::EPSILON) {
        std::cout << "Slight relational dominance (positive fusion)\n";
    } else if (fusion < -constants::EPSILON) {
        std::cout << "Analytical dominance (negative fusion)\n";
    } else {
        std::cout << "Perfect balance (near-zero fusion)\n";
    }

    std::cout << "\n";

    // ========================================================================
    // PART 4: Demonstrating Constants
    // ========================================================================
    std::cout << "PART 4: Foundation Constants\n";
    std::cout << "----------------------------\n";
    std::cout << "MAX_COEFFICIENT:     " << constants::MAX_COEFFICIENT << "\n";
    std::cout << "MIN_COEFFICIENT:     " << constants::MIN_COEFFICIENT << "\n";
    std::cout << "NEUTRAL_COEFFICIENT: " << constants::NEUTRAL_COEFFICIENT << "\n";
    std::cout << "EPSILON:             " << std::scientific << constants::EPSILON << "\n\n";

    // ========================================================================
    // PART 5: Boundary Testing
    // ========================================================================
    std::cout << "PART 5: Boundary Testing\n";
    std::cout << "------------------------\n";

    Coefficient max_positive = constants::MAX_COEFFICIENT;
    Coefficient max_negative = constants::MIN_COEFFICIENT;
    Coefficient perfect_balance = constants::NEUTRAL_COEFFICIENT;

    std::cout << "Maximum positive (right-brain):  " << max_positive << " → Full relational mode\n";
    std::cout << "Maximum negative (left-brain):   " << max_negative << " → Full analytical mode\n";
    std::cout << "Perfect balance (neutral):       " << perfect_balance << " → CPI⊗SI equilibrium\n\n";

    // ========================================================================
    // Demo Complete
    // ========================================================================
    std::cout << "============================================================================\n";
    std::cout << "Demo Complete: Bipolar Coefficients\n";
    std::cout << "============================================================================\n";
    std::cout << "\nKey Takeaways:\n";
    std::cout << "1. All CPI-SI math operates on [-1.0, 1.0] coefficients\n";
    std::cout << "2. Negative values = left-brain (analytical), Positive = right-brain (relational)\n";
    std::cout << "3. Zero represents perfect CPI⊗SI balance\n";
    std::cout << "4. Fusion combines complementary processing modes\n";
    std::cout << "5. Constants ensure mathematical consistency\n\n";

    std::cout << "Next Demo: identity_state_demo.cpp (README Chapter III, B.2)\n\n";

    return 0;
}
