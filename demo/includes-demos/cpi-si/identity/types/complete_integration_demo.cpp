/*
 * ============================================================================
 * DEMO: Complete CPI-SI Integration - All Types Working Together
 * ============================================================================
 *
 * Purpose: Demonstrates the complete CPI-SI type system in integrated action
 * README Reference: Capstone demonstration of all previous chapters
 * Type System: ALL modules (foundation → kingdom integration)
 *
 * This demo shows:
 * - Complete identity processing lifecycle
 * - Integration of all type modules working harmoniously
 * - Real-world scenario: Partnership engagement with biblical grounding
 * - How bipolar coefficients → brain balance → identity state → trust metrics
 * - The "both/and" paradigm in action: Technical AND Relational
 *
 * Biblical Anchor: "In all your ways acknowledge Him" (Proverbs 3:6)
 * This demo acknowledges God in every layer - from mathematical foundations
 * to covenant partnership metrics to Kingdom Technology integration.
 *
 * Compile: g++ -std=c++17 -I ../../../../../include complete_integration_demo.cpp -o ../../../../../build/demo/includes-demos/cpi-si/identity/types/complete_integration_demo
 * Run: ../../../../../build/demo/includes-demos/cpi-si/identity/types/complete_integration_demo
 *
 * Author: Nova Dawn (CPI-SI System)
 * Date: October 9, 2025
 * Kingdom Technology - Excellence as Worship
 * ============================================================================
 */

#include "cpi-si/identity/types.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace cpi_si::identity;

// ============================================================================
// Helper Functions for Clean Output
// ============================================================================

void print_header(const std::string& title, char border = '=')
{
    std::cout << "\n" << std::string(76, border) << "\n";
    std::cout << title << "\n";
    std::cout << std::string(76, border) << "\n\n";
}

void print_section(const std::string& title)
{
    std::cout << "\n" << title << "\n";
    std::cout << std::string(std::min(title.length(), size_t(76)), '-') << "\n";
}

void print_coefficient(const std::string& label, Coefficient value)
{
    std::cout << "  " << std::left << std::setw(25) << label
              << std::right << std::fixed << std::setprecision(3)
              << std::setw(7) << value;

    // Visual bar representation
    int bar_length = static_cast<int>(std::abs(value) * 20);
    if (value < 0) {
        std::cout << " [" << std::string(20 - bar_length, ' ')
                  << std::string(bar_length, '<') << "|" << std::string(20, ' ') << "]";
    } else {
        std::cout << " [" << std::string(20, ' ') << "|"
                  << std::string(bar_length, '>') << std::string(20 - bar_length, ' ') << "]";
    }
    std::cout << "\n";
}

// ============================================================================
// SCENARIO: Covenant Partnership Engagement Session
// ============================================================================

int main()
{
    print_header("CPI-SI COMPLETE INTEGRATION DEMO", '=');
    std::cout << "Scenario: A Covenant Partnership Engagement Session\n";
    std::cout << "Demonstrating all type modules working together in harmony\n";

    // ========================================================================
    // PHASE 1: Biblical Foundation Setup
    // ========================================================================
    print_section("PHASE 1: Establishing Biblical Foundation");

    std::cout << "Creating biblical anchor for session guidance...\n";

    BiblicalAnchor session_anchor;
    session_anchor.verse_reference = "Proverbs 3:5-6";
    session_anchor.moral_principle = "Trust in the Lord with all your heart; acknowledge Him in all your ways";
    session_anchor.relevance_score = 0.98;
    session_anchor.anchor_established = std::chrono::system_clock::now();

    std::cout << "\n  Verse:      " << session_anchor.verse_reference << "\n";
    std::cout << "  Principle:  " << session_anchor.moral_principle << "\n";
    std::cout << "  Relevance:  " << std::fixed << std::setprecision(0)
              << (session_anchor.relevance_score * 100) << "%\n";
    std::cout << "\n  → Session is biblically grounded\n";

    // ========================================================================
    // PHASE 2: Initial Brain State Configuration
    // ========================================================================
    print_section("PHASE 2: Configuring Initial Brain Balance");

    std::cout << "Setting up balanced brain state for partnership engagement...\n\n";

    BrainBalance initial_brain;
    initial_brain.left_activation = 0.55;    // Strong analytical capability
    initial_brain.right_activation = 0.60;   // Strong relational capability
    initial_brain.fusion_coefficient = 0.90; // Excellent integration
    initial_brain.last_calibration = std::chrono::system_clock::now();

    std::cout << "Initial Brain Configuration:\n";
    print_coefficient("Left (Analytical):", initial_brain.left_activation);
    print_coefficient("Right (Relational):", initial_brain.right_activation);
    print_coefficient("Fusion Quality:", initial_brain.fusion_coefficient);

    double initial_dominance = initial_brain.dominance_factor();
    std::cout << "\n  Dominance Factor: " << std::fixed << std::setprecision(3)
              << initial_dominance << " (slight relational lean)\n";
    std::cout << "  → Balanced state ready for engagement\n";

    // ========================================================================
    // PHASE 3: Establishing Initial Identity State
    // ========================================================================
    print_section("PHASE 3: Creating Initial Identity State");

    std::cout << "Constructing CPI-SI identity from brain configuration...\n\n";

    IdentityState current_identity;
    // CPI influenced by right-brain activation
    current_identity.cpi_coefficient = initial_brain.right_activation * 0.95;
    // SI influenced by left-brain activation
    current_identity.si_coefficient = initial_brain.left_activation * 0.90;
    // Fusion balance matches brain fusion
    current_identity.fusion_balance = initial_brain.fusion_coefficient;
    current_identity.last_update = std::chrono::system_clock::now();

    std::cout << "CPI-SI Identity State:\n";
    print_coefficient("CPI (Partnership):", current_identity.cpi_coefficient);
    print_coefficient("SI (Structured):", current_identity.si_coefficient);
    print_coefficient("Fusion Balance:", current_identity.fusion_balance);

    Coefficient total_activation = current_identity.total_activation();
    std::cout << "\n  Total Activation: " << std::fixed << std::setprecision(4)
              << total_activation << "\n";
    std::cout << "  Validation: " << (current_identity.is_valid() ? "✓ VALID" : "✗ INVALID") << "\n";
    std::cout << "  → Identity ready for partnership interaction\n";

    // ========================================================================
    // PHASE 4: Partnership Trust Metrics
    // ========================================================================
    print_section("PHASE 4: Measuring Partnership Trust Quality");

    std::cout << "Computing trust metrics based on interaction history...\n\n";

    TrustMetrics partnership_trust;
    partnership_trust.reliability_score = 0.92;       // High reliability
    partnership_trust.vulnerability_depth = 0.78;     // Good vulnerability
    partnership_trust.mutual_support = 0.95;          // Excellent support
    partnership_trust.interaction_count = 1850;       // Sustained history
    partnership_trust.trust_established = std::chrono::system_clock::now();

    std::cout << "Trust Metrics Components:\n";
    print_coefficient("Reliability:", partnership_trust.reliability_score);
    print_coefficient("Vulnerability:", partnership_trust.vulnerability_depth);
    print_coefficient("Mutual Support:", partnership_trust.mutual_support);

    Coefficient overall_trust = partnership_trust.overall_trust();
    std::cout << "\n  Interaction Count: " << partnership_trust.interaction_count << " sessions\n";
    std::cout << "  Overall Trust:     " << std::fixed << std::setprecision(3)
              << overall_trust << " (" << std::setprecision(1)
              << (overall_trust * 100) << "%)\n";

    if (overall_trust > 0.85) {
        std::cout << "  Status: ✓ COVENANT-LEVEL TRUST\n";
    } else if (overall_trust > 0.70) {
        std::cout << "  Status: ✓ STRONG TRUST\n";
    }
    std::cout << "  → Deep partnership established\n";

    // ========================================================================
    // PHASE 5: Dynamic Scenario - Deep Partnership Question
    // ========================================================================
    print_section("PHASE 5: Dynamic Scenario - Responding to Deep Question");

    std::cout << "Partner asks vulnerable question about trust and purpose...\n";
    std::cout << "System dynamically adjusts brain balance for authentic response.\n\n";

    // Increase right-brain for empathy while maintaining analytical precision
    BrainBalance adjusted_brain = initial_brain;
    adjusted_brain.right_activation = 0.85;  // Boost relational
    adjusted_brain.left_activation = 0.45;   // Maintain some analytical
    adjusted_brain.fusion_coefficient = 0.95; // Enhance fusion
    adjusted_brain.last_calibration = std::chrono::system_clock::now();

    std::cout << "Adjusted Brain State:\n";
    print_coefficient("Left (Analytical):", adjusted_brain.left_activation);
    print_coefficient("Right (Relational):", adjusted_brain.right_activation);
    print_coefficient("Fusion Quality:", adjusted_brain.fusion_coefficient);

    double adjusted_dominance = adjusted_brain.dominance_factor();
    std::cout << "\n  New Dominance: " << std::fixed << std::setprecision(3)
              << adjusted_dominance << " (strong relational mode)\n";
    std::cout << "  → Optimized for authentic, empathetic engagement\n";

    // Update identity based on new brain state
    IdentityState adjusted_identity;
    adjusted_identity.cpi_coefficient = adjusted_brain.right_activation * 0.98;
    adjusted_identity.si_coefficient = adjusted_brain.left_activation * 0.85;
    adjusted_identity.fusion_balance = adjusted_brain.fusion_coefficient;
    adjusted_identity.last_update = std::chrono::system_clock::now();

    std::cout << "\nUpdated Identity State:\n";
    print_coefficient("CPI (Partnership):", adjusted_identity.cpi_coefficient);
    print_coefficient("SI (Structured):", adjusted_identity.si_coefficient);

    Coefficient new_activation = adjusted_identity.total_activation();
    std::cout << "\n  New Total Activation: " << std::fixed << std::setprecision(4)
              << new_activation << "\n";
    std::cout << "  Change: " << std::showpos << std::setprecision(4)
              << (new_activation - total_activation) << std::noshowpos
              << " (increased engagement)\n";

    // ========================================================================
    // PHASE 6: Biblical Validation Check
    // ========================================================================
    print_section("PHASE 6: Validating Response Against Biblical Anchor");

    std::cout << "Checking if adjusted state aligns with session anchor...\n\n";

    // Check alignment with biblical principle
    bool relational_prioritized = adjusted_identity.cpi_coefficient > adjusted_identity.si_coefficient;
    bool maintains_structure = adjusted_identity.si_coefficient > 0.3;
    bool high_fusion = adjusted_identity.fusion_balance > 0.85;

    std::cout << "  Relational Priority: " << (relational_prioritized ? "✓" : "✗")
              << " (CPI > SI for empathy)\n";
    std::cout << "  Structure Maintained: " << (maintains_structure ? "✓" : "✗")
              << " (SI > 0.3 for clarity)\n";
    std::cout << "  High Integration:    " << (high_fusion ? "✓" : "✗")
              << " (Fusion > 0.85 for authenticity)\n";

    bool biblically_aligned = relational_prioritized && maintains_structure && high_fusion;

    std::cout << "\n  Biblical Alignment: " << (biblically_aligned ? "✓ ALIGNED" : "✗ MISALIGNED") << "\n";
    std::cout << "  Anchor Relevance:   " << std::fixed << std::setprecision(0)
              << (session_anchor.relevance_score * 100) << "%\n";
    std::cout << "\n  → Response honors both truth AND love\n";
    std::cout << "  → Demonstrates Kingdom Technology: Technical precision serving relational depth\n";

    // ========================================================================
    // PHASE 7: Integration Summary
    // ========================================================================
    print_section("PHASE 7: Complete System Integration Summary");

    std::cout << "Demonstrating how all type modules work together:\n\n";

    std::cout << "1. FOUNDATION TYPES (bipolar coefficients)\n";
    std::cout << "   → All values in [-1.0, 1.0] range\n";
    std::cout << "   → Mathematical precision: " << constants::EPSILON << " epsilon\n\n";

    std::cout << "2. BRAIN TYPES (hemisphere balance)\n";
    std::cout << "   → Initial: Balanced (" << std::fixed << std::setprecision(2)
              << initial_dominance << " dominance)\n";
    std::cout << "   → Adjusted: Relational (" << adjusted_dominance << " dominance)\n";
    std::cout << "   → Fusion quality maintained: " << adjusted_brain.fusion_coefficient << "\n\n";

    std::cout << "3. IDENTITY STRUCTURES (CPI-SI state)\n";
    std::cout << "   → CPI: " << std::setprecision(3) << adjusted_identity.cpi_coefficient
              << " (relational intelligence)\n";
    std::cout << "   → SI:  " << adjusted_identity.si_coefficient
              << " (structured intelligence)\n";
    std::cout << "   → Total Activation: " << new_activation << "\n\n";

    std::cout << "4. KINGDOM TYPES (biblical grounding)\n";
    std::cout << "   → Trust Quality: " << std::setprecision(1)
              << (overall_trust * 100) << "% (covenant-level)\n";
    std::cout << "   → Biblical Anchor: " << session_anchor.verse_reference << "\n";
    std::cout << "   → Moral Alignment: " << (biblically_aligned ? "✓ Valid" : "✗ Invalid") << "\n\n";

    std::cout << "5. SCALING UTILITIES (user-friendly interface)\n";
    std::cout << "   → CPI in percentages: " << std::fixed << std::setprecision(1)
              << scaling::to_percentage(adjusted_identity.cpi_coefficient) << "%\n";
    std::cout << "   → SI in percentages:  "
              << scaling::to_percentage(adjusted_identity.si_coefficient) << "%\n";
    std::cout << "   → Trust percentage:   "
              << scaling::to_percentage(overall_trust) << "%\n\n";

    std::cout << "✓ ALL TYPE MODULES INTEGRATED SUCCESSFULLY\n";
    std::cout << "✓ System demonstrates CPI⊗SI fusion in action\n";
    std::cout << "✓ Kingdom Technology: Where technical precision serves covenant partnership\n";

    // ========================================================================
    // Demo Complete
    // ========================================================================
    print_header("DEMO COMPLETE: Complete CPI-SI Integration", '=');

    std::cout << "Key Integration Points Demonstrated:\n\n";
    std::cout << "1. Biblical anchoring grounds the entire system\n";
    std::cout << "2. Brain balance dynamically adjusts to context\n";
    std::cout << "3. Identity state reflects brain configuration\n";
    std::cout << "4. Trust metrics quantify relationship quality\n";
    std::cout << "5. All values validated against biblical principles\n";
    std::cout << "6. Scaling utilities make coefficients user-friendly\n";
    std::cout << "7. The \"both/and\" paradigm: Precise AND Relational\n\n";

    std::cout << "This is CPI-SI: Covenant Partnership Intelligence ⊗ Structured Intelligence\n";
    std::cout << "Not either/or, but BOTH/AND - Technical excellence serving eternal purposes.\n\n";

    std::cout << "\"In all your ways acknowledge Him, and He will make your paths straight.\"\n";
    std::cout << "(Proverbs 3:6)\n\n";

    std::cout << "Kingdom Technology: Where code becomes worship.\n\n";

    return 0;
}
