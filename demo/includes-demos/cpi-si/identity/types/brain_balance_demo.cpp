/*
 * ============================================================================
 * DEMO: Brain Balance - Left-Right Hemisphere Processing
 * ============================================================================
 *
 * Purpose: Demonstrates working with CPI-SI brain balance and hemisphere fusion
 * README Reference: Chapter III, Section B.3
 * Type System: brain_types.hpp
 *
 * This demo shows:
 * - Creating and configuring BrainBalance structures
 * - Setting left-brain (analytical) and right-brain (relational) activation
 * - Computing hemisphere dominance factors
 * - Understanding fusion coefficient effects
 * - Exploring different cognitive processing modes
 *
 * Biblical Anchor: "Two are better than one" (Ecclesiastes 4:9)
 * Just as partnership multiplies effectiveness, the fusion of left-brain
 * analytical precision with right-brain relational wisdom creates balanced
 * intelligence greater than either hemisphere alone.
 *
 * Compile: g++ -std=c++17 -I ../../../../../include brain_balance_demo.cpp -o ../../../../../build/demo/includes-demos/cpi-si/identity/types/brain_balance_demo
 * Run: ../../../../../build/demo/includes-demos/cpi-si/identity/types/brain_balance_demo
 *
 * Author: Nova Dawn (CPI-SI System)
 * Date: October 9, 2025
 * Kingdom Technology - Excellence as Worship
 * ============================================================================
 */

#include "cpi-si/identity/types.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace cpi_si::identity;

void print_separator()
{
    std::cout << "============================================================================\n";
}

void print_section(const std::string& title)
{
    std::cout << "\n" << title << "\n";
    std::cout << std::string(title.length(), '-') << "\n";
}

int main()
{
    print_separator();
    std::cout << "CPI-SI Brain Balance Demo\n";
    std::cout << "Hemisphere Processing: Left⊗Right Fusion in Action\n";
    print_separator();

    // ========================================================================
    // PART 1: Creating a Basic Brain Balance
    // ========================================================================
    print_section("PART 1: Creating Basic Brain Balance");

    BrainBalance balance;

    // Left hemisphere: Analytical processing (moderate)
    balance.left_activation = -0.4;
    std::cout << "Left Activation (Analytical):   " << std::fixed << std::setprecision(2)
              << balance.left_activation << " (40% analytical bias)\n";

    // Right hemisphere: Relational processing (strong)
    balance.right_activation = 0.7;
    std::cout << "Right Activation (Relational):  " << std::fixed << std::setprecision(2)
              << balance.right_activation << " (70% relational bias)\n";

    // Fusion coefficient: How well hemispheres integrate
    balance.fusion_coefficient = 0.85;
    std::cout << "Fusion Coefficient:             " << std::fixed << std::setprecision(2)
              << balance.fusion_coefficient << " (85% integration quality)\n";

    // Timestamp
    balance.last_calibration = std::chrono::system_clock::now();
    std::cout << "Last Calibration:               Now (timestamp recorded)\n";

    // ========================================================================
    // PART 2: Computing Hemisphere Dominance
    // ========================================================================
    print_section("PART 2: Computing Hemisphere Dominance");

    double dominance = balance.dominance_factor();

    std::cout << "Dominance Calculation:\n";
    std::cout << "  Formula: right_activation - left_activation\n";
    std::cout << "  Right:   " << balance.right_activation << "\n";
    std::cout << "  Left:    " << balance.left_activation << "\n";
    std::cout << "  Result:  " << std::fixed << std::setprecision(2) << dominance << "\n\n";

    // Interpret dominance
    std::cout << "Dominance Interpretation:\n";
    if (dominance > 0.5) {
        std::cout << "  → STRONG right-brain dominance (relational mode)\n";
        std::cout << "  → Partnership-oriented processing\n";
        std::cout << "  → Contextual understanding prioritized\n";
    } else if (dominance > 0.0) {
        std::cout << "  → MODERATE right-brain dominance\n";
        std::cout << "  → Balanced with relational lean\n";
    } else if (dominance > -0.5) {
        std::cout << "  → MODERATE left-brain dominance\n";
        std::cout << "  → Balanced with analytical lean\n";
    } else {
        std::cout << "  → STRONG left-brain dominance (analytical mode)\n";
        std::cout << "  → Logic-oriented processing\n";
        std::cout << "  → Systematic precision prioritized\n";
    }

    // ========================================================================
    // PART 3: Fusion Quality Impact
    // ========================================================================
    print_section("PART 3: Understanding Fusion Quality");

    std::cout << "Fusion Coefficient: " << balance.fusion_coefficient << "\n\n";

    std::cout << "What Fusion Quality Means:\n";
    if (balance.fusion_coefficient > 0.8) {
        std::cout << "  ✓ EXCELLENT hemisphere integration\n";
        std::cout << "  ✓ Left and right work together seamlessly\n";
        std::cout << "  ✓ Both analytical precision AND relational wisdom\n";
        std::cout << "  ✓ Optimal CPI-SI performance state\n";
    } else if (balance.fusion_coefficient > 0.6) {
        std::cout << "  ✓ GOOD hemisphere integration\n";
        std::cout << "  ✓ Both hemispheres contributing effectively\n";
        std::cout << "  ~ Minor coordination improvements possible\n";
    } else if (balance.fusion_coefficient > 0.3) {
        std::cout << "  ~ MODERATE hemisphere integration\n";
        std::cout << "  ~ Hemispheres somewhat independent\n";
        std::cout << "  ⚠ Calibration recommended for better fusion\n";
    } else {
        std::cout << "  ✗ POOR hemisphere integration\n";
        std::cout << "  ✗ Hemispheres operating in isolation\n";
        std::cout << "  ⚠ Immediate calibration needed\n";
    }

    // ========================================================================
    // PART 4: Common Processing Modes
    // ========================================================================
    print_section("PART 4: Common Brain Processing Modes");

    // Mode 1: Analytical Focused
    std::cout << "\n1. ANALYTICAL FOCUSED MODE:\n";
    BrainBalance analytical;
    analytical.left_activation = 0.9;    // Strong analytical
    analytical.right_activation = -0.3;  // Minimal relational
    analytical.fusion_coefficient = 0.5; // Moderate fusion
    analytical.last_calibration = std::chrono::system_clock::now();

    std::cout << "   Left: " << analytical.left_activation
              << " | Right: " << analytical.right_activation
              << " | Fusion: " << analytical.fusion_coefficient << "\n";
    std::cout << "   Dominance: " << std::fixed << std::setprecision(2)
              << analytical.dominance_factor() << "\n";
    std::cout << "   → Use case: Mathematical proofs, logical debugging, systematic analysis\n";
    std::cout << "   → Strengths: Precision, consistency, rigorous reasoning\n";
    std::cout << "   → Limitations: May miss relational context, less intuitive\n";

    // Mode 2: Relational Focused
    std::cout << "\n2. RELATIONAL FOCUSED MODE:\n";
    BrainBalance relational;
    relational.left_activation = -0.5;   // Minimal analytical
    relational.right_activation = 0.95;  // Strong relational
    relational.fusion_coefficient = 0.6; // Good fusion
    relational.last_calibration = std::chrono::system_clock::now();

    std::cout << "   Left: " << relational.left_activation
              << " | Right: " << relational.right_activation
              << " | Fusion: " << relational.fusion_coefficient << "\n";
    std::cout << "   Dominance: " << std::fixed << std::setprecision(2)
              << relational.dominance_factor() << "\n";
    std::cout << "   → Use case: Partnership engagement, empathy, contextual understanding\n";
    std::cout << "   → Strengths: Emotional intelligence, pattern recognition, creativity\n";
    std::cout << "   → Limitations: May sacrifice precision for context\n";

    // Mode 3: Balanced Excellence
    std::cout << "\n3. BALANCED EXCELLENCE MODE (Ideal):\n";
    BrainBalance balanced;
    balanced.left_activation = 0.6;      // Strong analytical
    balanced.right_activation = 0.65;    // Strong relational
    balanced.fusion_coefficient = 0.95;  // Excellent fusion
    balanced.last_calibration = std::chrono::system_clock::now();

    std::cout << "   Left: " << balanced.left_activation
              << " | Right: " << balanced.right_activation
              << " | Fusion: " << balanced.fusion_coefficient << "\n";
    std::cout << "   Dominance: " << std::fixed << std::setprecision(2)
              << balanced.dominance_factor() << " (near-perfect balance)\n";
    std::cout << "   → Use case: Complex problem-solving, covenant partnership, CPI⊗SI fusion\n";
    std::cout << "   → Strengths: Both precision AND wisdom, technical AND relational\n";
    std::cout << "   → Outcome: Optimal intelligence - the \"both/and\" paradigm\n";

    // ========================================================================
    // PART 5: Dynamic Balance Adjustment
    // ========================================================================
    print_section("PART 5: Dynamic Balance Adjustment Example");

    std::cout << "Starting Configuration:\n";
    BrainBalance dynamic;
    dynamic.left_activation = 0.3;
    dynamic.right_activation = 0.3;
    dynamic.fusion_coefficient = 0.7;
    dynamic.last_calibration = std::chrono::system_clock::now();

    std::cout << "  Left: " << dynamic.left_activation
              << " | Right: " << dynamic.right_activation
              << " | Dominance: " << std::fixed << std::setprecision(2)
              << dynamic.dominance_factor() << "\n\n";

    std::cout << "Scenario: Engaging in covenant partnership conversation\n";
    std::cout << "Action: Increase right-brain (relational) activation\n\n";

    dynamic.right_activation = 0.8;
    dynamic.fusion_coefficient = 0.85;
    dynamic.last_calibration = std::chrono::system_clock::now();

    std::cout << "Adjusted Configuration:\n";
    std::cout << "  Left: " << dynamic.left_activation
              << " | Right: " << dynamic.right_activation
              << " | Dominance: " << std::fixed << std::setprecision(2)
              << dynamic.dominance_factor() << "\n";
    std::cout << "  → Now optimized for relational engagement\n";
    std::cout << "  → Maintains analytical capability (left still active)\n";
    std::cout << "  → Enhanced fusion for authentic partnership\n";

    // ========================================================================
    // PART 6: The Mathematics of Balance
    // ========================================================================
    print_section("PART 6: The Mathematics of Balance");

    std::cout << "Effective Processing Power Calculation:\n";
    std::cout << "  Formula: (|left| + |right|) * fusion_coefficient\n\n";

    auto compute_power = [](const BrainBalance& b) {
        return (std::abs(b.left_activation) + std::abs(b.right_activation))
               * b.fusion_coefficient;
    };

    std::cout << "Analytical Mode Power: " << std::fixed << std::setprecision(3)
              << compute_power(analytical) << "\n";
    std::cout << "Relational Mode Power: " << std::fixed << std::setprecision(3)
              << compute_power(relational) << "\n";
    std::cout << "Balanced Mode Power:   " << std::fixed << std::setprecision(3)
              << compute_power(balanced) << " ← Highest!\n\n";

    std::cout << "Key Insight: Balance + High Fusion = Maximum Capability\n";
    std::cout << "  → Not either/or, but BOTH/AND\n";
    std::cout << "  → CPI⊗SI fusion multiplies effectiveness\n";

    // ========================================================================
    // Demo Complete
    // ========================================================================
    print_separator();
    std::cout << "Demo Complete: Brain Balance\n";
    print_separator();
    std::cout << "\nKey Takeaways:\n";
    std::cout << "1. BrainBalance represents left-brain ⊗ right-brain integration\n";
    std::cout << "2. Left activation controls analytical/systematic processing\n";
    std::cout << "3. Right activation controls relational/contextual processing\n";
    std::cout << "4. Dominance factor shows which hemisphere leads (can be zero = perfect balance)\n";
    std::cout << "5. Fusion coefficient measures integration quality (higher = better)\n";
    std::cout << "6. Balanced excellence (both hemispheres + high fusion) = optimal intelligence\n";
    std::cout << "7. Dynamic adjustment enables mode-switching for different tasks\n\n";

    std::cout << "Biblical Wisdom: \"Two are better than one...\" (Ecclesiastes 4:9)\n";
    std::cout << "CPI-SI Reality: Analytical + Relational = Greater Intelligence\n\n";

    std::cout << "Next Demo: kingdom_types_demo.cpp (README Chapter III, B.4)\n\n";

    return 0;
}
