// =============================================================================
// BLOCK 1: METADATA - Documentation, Attribution, Architectural Context
// =============================================================================

/**
 * DIGITAL GENOME: scaling_utilities.hpp - Coefficient⟷Percentage Conversion
 * =========================================================================
 *
 * @file scaling_utilities.hpp
 * @author Nova Dawn (CPI-SI System) & Seanje (Architectural Vision)
 * @date October 2025
 * @version 1.0
 * @last_updated October 9, 2025
 *
 * BIBLICAL ANCHOR: Matthew 13:52 - "Therefore every scribe which is instructed unto the kingdom
 *                                   of heaven is like unto a man that is an householder, which
 *                                   bringeth forth out of his treasure things new and old."
 *
 * KINGDOM PURPOSE: Just as the scribe translates between treasures old and new, this file
 *                  translates between mathematical coefficients (for computation) and
 *                  percentages (for human understanding). Both representations contain
 *                  truth - one serves the machine, one serves the person.
 *
 * ═══════════════════════════════════════════════════════════════════════════════════════════
 * TECHNICAL DNA - Complete System Intelligence Profile
 * ═══════════════════════════════════════════════════════════════════════════════════════════
 *
 * File Identity:
 * ├── Type: Utility/Conversion Functions Module
 * ├── Function: Bidirectional coefficient⟷percentage scaling and validation
 * ├── Layer: Utility Layer (Level 2 - depends on foundation_types)
 * ├── Stability: STABLE - Conversion mathematics should rarely change
 *
 * Module Purpose:
 * ├── Coefficient → Percentage: Mathematical precision → User-friendly display
 * ├── Percentage → Coefficient: User input → Mathematical operations
 * ├── Validation: Boundary checking and clamping for both domains
 * ├── Intensity Conversion: Bipolar → Absolute value transformation
 *
 * System Integration DNA:
 * ├── Direct Dependencies: foundation_types.hpp (Coefficient, constants)
 * ├── Reverse Dependencies: ui_wrappers.hpp, any user-facing components
 * ├── Impact Radius: USER INTERFACE - Changes affect how users see/input values
 * ├── Modification Risk: MEDIUM - Math changes could confuse existing users
 *
 * Performance Profile:
 * ├── Compilation Impact: Minimal - all inline functions
 * ├── Runtime Cost: TRIVIAL - simple arithmetic operations (multiply/divide by 100)
 * ├── Memory Footprint: ZERO - no state, pure functions only
 * ├── Thread Safety: PERFECT - stateless pure functions, inherently thread-safe
 *
 * ═══════════════════════════════════════════════════════════════════════════════════════════
 * RELATIONAL DNA - Character, Personality & Covenant Promises
 * ═══════════════════════════════════════════════════════════════════════════════════════════
 *
 * File Character: Bridging, translating, enabling understanding, serving clarity
 * File Personality: The friendly interpreter between machine and human languages
 *
 * Covenant Promises:
 * ├── TO DEVELOPERS: "I provide simple, reliable conversion between coefficient
 *     │               and percentage domains. My math is straightforward and trustworthy."
 * ├── TO SYSTEM: "I maintain mathematical consistency across coefficient-percentage
 *     │          translations. Conversions are lossless within floating-point precision."
 * ├── TO USERS: "I enable you to see and work with familiar percentages while the
 *     │         system uses precise mathematical coefficients internally."
 * ├── TO KINGDOM: "I bridge technical precision with human understanding. Mathematics
 *     │           serves relationship by enabling clear communication."
 *
 * For Non-Programmers: Think of this file as a "translator" between how computers
 * like to work with numbers (coefficients from -1.0 to 1.0) and how humans prefer
 * to understand numbers (percentages from -100% to 100%). Just like translating
 * between languages, this file ensures both computer and human understand the
 * same concept even though they express it differently.
 *
 * ═══════════════════════════════════════════════════════════════════════════════════════════
 * SURGICAL MODIFICATION INTELLIGENCE
 * ═══════════════════════════════════════════════════════════════════════════════════════════
 *
 * CPI-SI Modification Guidelines:
 * ├── LOW RISK: Adding new conversion utility functions
 * ├── MEDIUM RISK: Changing validation or clamping logic
 * ├── HIGH RISK: Modifying core scaling mathematics (multiply/divide by 100)
 * ├── CRITICAL RISK: Breaking bidirectional conversion consistency
 *
 * Pre-Modification Checklist:
 * □ Verify conversion roundtrip accuracy (coefficient → % → coefficient = original)
 * □ Ensure boundary clamping remains consistent with constants
 * □ Test edge cases (-1.0, 0.0, 1.0 coefficients and -100, 0, 100 percentages)
 * □ Validate that UI components work correctly with changes
 * □ Confirm floating-point precision doesn't introduce errors
 * □ Check that intensity conversions maintain absolute value semantics
 *
 * Last Surgical Update: October 9, 2025 - Module extraction from monolithic types.hpp
 * Next Review: [UNSCHEDULED] Will occur if scaling mathematics require evolution
 */

// === END OF METADATA BLOCK ===

// =============================================================================
// BLOCK 2: OPENING - Declarations, Includes, API Surface
// =============================================================================

#pragma once

// =============================================================================
// IMPORTS AND DEPENDENCIES
// =============================================================================

// Foundation Types Module
// =============================================================================
#include "foundation_types.hpp" // For Coefficient and Percentage types

// Standard Library Dependencies
// =============================================================================
#include <algorithm> // For std::min, std::max
#include <cmath>     // For std::abs

// =============================================================================
// NAMESPACE AND API SURFACE
// =============================================================================

namespace cpi_si
{
    namespace identity
    {
        // === END OF OPENING BLOCK ===

        // =============================================================================
        // BLOCK 3: BODY - Scaling and Conversion Utilities
        // =============================================================================

        /**
         * @brief Scaling utilities for bipolar coefficient⟷percentage conversion
         *
         * Provides bidirectional conversion between mathematical bipolar coefficients
         * (-1.0 to +1.0) and user-friendly bipolar percentages (-100 to +100).
         *
         * Mathematical Foundation:
         * - Coefficient domain: [-1.0, 1.0] - Internal computational representation
         * - Percentage domain: [-100.0, 100.0] - External user-facing representation
         * - Linear scaling: percentage = coefficient × 100
         * - Inverse scaling: coefficient = percentage / 100
         *
         * Bipolar Semantics:
         * - Negative values represent one polarity (opposition, left-brain, etc.)
         * - Zero represents neutrality/balance
         * - Positive values represent opposite polarity (alliance, right-brain, etc.)
         *
         * Intensity Operations:
         * - Convert bipolar values to absolute magnitudes
         * - Useful for "strength" metrics independent of direction
         */
        namespace scaling
        {
            // =============================================================================
            // COEFFICIENT ⟷ PERCENTAGE CONVERSION
            // =============================================================================

            /**
             * @brief Convert bipolar coefficient to user-friendly percentage
             * @param coeff Bipolar coefficient [-1.0 to +1.0]
             * @return Bipolar percentage value [-100 to +100]
             *
             * Mathematical Operation:
             * percentage = coefficient × 100
             *
             * Examples:
             * -1.0 → -100% (full negative polarity)
             *  0.0 →    0% (perfect neutrality)
             * +0.5 →  +50% (moderate positive polarity)
             * +1.0 → +100% (full positive polarity)
             */
            inline double to_percentage(Coefficient coeff)
            {
                return coeff * 100.0;
            }

            /**
             * @brief Convert bipolar percentage to mathematical coefficient
             * @param percent Bipolar percentage value [-100 to +100]
             * @return Bipolar coefficient [-1.0 to +1.0]
             *
             * Mathematical Operation:
             * coefficient = percentage / 100
             *
             * Examples:
             * -100% → -1.0 (full negative polarity)
             *    0% →  0.0 (perfect neutrality)
             *  +50% → +0.5 (moderate positive polarity)
             * +100% → +1.0 (full positive polarity)
             */
            inline Coefficient from_percentage(double percent)
            {
                return percent / 100.0;
            }

            // =============================================================================
            // VALIDATION AND BOUNDARY CHECKING
            // =============================================================================

            /**
             * @brief Validate bipolar percentage is within bounds
             * @param percent Percentage to validate
             * @return true if percentage is in valid range [-100 to +100]
             *
             * Use this before conversion to detect invalid user input.
             */
            inline bool is_valid_percentage(double percent)
            {
                return percent >= constants::MIN_PERCENTAGE &&
                       percent <= constants::MAX_PERCENTAGE;
            }

            /**
             * @brief Validate bipolar coefficient is within bounds
             * @param coeff Coefficient to validate
             * @return true if coefficient is in valid range [-1.0 to +1.0]
             *
             * Use this to verify mathematical operations stayed within bounds.
             */
            inline bool is_valid_coefficient(Coefficient coeff)
            {
                return coeff >= constants::MIN_COEFFICIENT &&
                       coeff <= constants::MAX_COEFFICIENT;
            }

            // =============================================================================
            // CLAMPING AND BOUNDARY ENFORCEMENT
            // =============================================================================

            /**
             * @brief Clamp percentage to valid bipolar bounds
             * @param percent Percentage to clamp
             * @return Clamped percentage in range [-100 to +100]
             *
             * Use this to handle potentially out-of-range user input gracefully.
             *
             * Examples:
             * -150.0 → -100.0 (clamped to minimum)
             *   50.0 →   50.0 (within bounds, unchanged)
             *  200.0 →  100.0 (clamped to maximum)
             */
            inline double clamp_percentage(double percent)
            {
                return std::max(constants::MIN_PERCENTAGE,
                              std::min(constants::MAX_PERCENTAGE, percent));
            }

            /**
             * @brief Clamp coefficient to valid bipolar bounds
             * @param coeff Coefficient to clamp
             * @return Clamped coefficient in range [-1.0 to +1.0]
             *
             * Use this to handle potentially out-of-range calculation results.
             *
             * Examples:
             * -1.5 → -1.0 (clamped to minimum)
             *  0.5 →  0.5 (within bounds, unchanged)
             *  1.2 →  1.0 (clamped to maximum)
             */
            inline Coefficient clamp_coefficient(Coefficient coeff)
            {
                return std::max(constants::MIN_COEFFICIENT,
                              std::min(constants::MAX_COEFFICIENT, coeff));
            }

            // =============================================================================
            // INTENSITY CONVERSION (BIPOLAR → ABSOLUTE VALUE)
            // =============================================================================

            /**
             * @brief Convert bipolar percentage to intensity (absolute value)
             * @param percent Bipolar percentage [-100 to +100]
             * @return Intensity percentage [0 to 100] (absolute magnitude)
             *
             * Intensity represents "strength" independent of direction.
             *
             * Examples:
             * -100% → 100% intensity (strong negative polarity)
             *  -50% →  50% intensity (moderate negative polarity)
             *    0% →   0% intensity (no activation)
             *  +75% →  75% intensity (strong positive polarity)
             * +100% → 100% intensity (maximum positive polarity)
             */
            inline double to_intensity_percentage(double percent)
            {
                return std::abs(percent);
            }

            /**
             * @brief Convert bipolar coefficient to intensity (absolute value)
             * @param coeff Bipolar coefficient [-1.0 to +1.0]
             * @return Intensity coefficient [0.0 to 1.0] (absolute magnitude)
             *
             * Intensity represents "strength" independent of direction.
             *
             * Examples:
             * -1.0 → 1.0 intensity (strong negative polarity)
             * -0.5 → 0.5 intensity (moderate negative polarity)
             *  0.0 → 0.0 intensity (no activation)
             * +0.75 → 0.75 intensity (strong positive polarity)
             * +1.0 → 1.0 intensity (maximum positive polarity)
             */
            inline Coefficient to_intensity_coefficient(Coefficient coeff)
            {
                return std::abs(coeff);
            }

            // =============================================================================
            // ROUNDTRIP VERIFICATION UTILITIES
            // =============================================================================

            /**
             * @brief Verify coefficient → percentage → coefficient roundtrip accuracy
             * @param original Original coefficient value
             * @return true if roundtrip conversion maintains accuracy within epsilon
             *
             * Use this for testing to ensure conversion consistency.
             */
            inline bool verify_coefficient_roundtrip(Coefficient original)
            {
                Coefficient roundtrip = from_percentage(to_percentage(original));
                return std::abs(roundtrip - original) < constants::EPSILON;
            }

            /**
             * @brief Verify percentage → coefficient → percentage roundtrip accuracy
             * @param original Original percentage value
             * @return true if roundtrip conversion maintains accuracy within epsilon
             *
             * Use this for testing to ensure conversion consistency.
             */
            inline bool verify_percentage_roundtrip(double original)
            {
                double roundtrip = to_percentage(from_percentage(original));
                return std::abs(roundtrip - original) < (constants::EPSILON * 100.0);
            }

        } // namespace scaling

        // === END OF BODY BLOCK ===

        // =============================================================================
        // BLOCK 4: CLOSING - Validation, Execution Context, Module Completion
        // =============================================================================

        /**
         * @brief Module validation and completion
         *
         * This closing block provides validation for scaling utilities
         * and execution context for the module.
         */

        // Module Validation Functions
        namespace validation
        {
            /**
             * @brief Validates scaling utilities mathematical integrity
             * @return true if all scaling operations maintain consistency
             */
            inline bool validate_scaling_utilities()
            {
                // Test key roundtrip conversions
                bool min_coeff_ok = scaling::verify_coefficient_roundtrip(constants::MIN_COEFFICIENT);
                bool neutral_ok = scaling::verify_coefficient_roundtrip(constants::NEUTRAL_COEFFICIENT);
                bool max_coeff_ok = scaling::verify_coefficient_roundtrip(constants::MAX_COEFFICIENT);

                bool min_percent_ok = scaling::verify_percentage_roundtrip(constants::MIN_PERCENTAGE);
                bool neutral_percent_ok = scaling::verify_percentage_roundtrip(constants::NEUTRAL_PERCENTAGE);
                bool max_percent_ok = scaling::verify_percentage_roundtrip(constants::MAX_PERCENTAGE);

                // Test boundary clamping
                bool clamp_low_ok = scaling::clamp_coefficient(-2.0) == constants::MIN_COEFFICIENT;
                bool clamp_high_ok = scaling::clamp_coefficient(2.0) == constants::MAX_COEFFICIENT;

                return min_coeff_ok && neutral_ok && max_coeff_ok &&
                       min_percent_ok && neutral_percent_ok && max_percent_ok &&
                       clamp_low_ok && clamp_high_ok;
            }

        } // namespace validation

        // Execution Context
        namespace execution
        {
            /**
             * @brief Scaling utilities module initialization
             *
             * USAGE PATTERNS:
             * - Use to_percentage() for displaying coefficients to users
             * - Use from_percentage() for accepting percentage input from users
             * - Use clamp_*() functions to handle out-of-range values gracefully
             * - Use is_valid_*() functions to validate before conversion
             * - Use to_intensity_*() for absolute magnitude calculations
             *
             * OPTIMIZATION HINTS:
             * - All functions are inline (zero function call overhead)
             * - Conversions are simple arithmetic (multiply/divide by 100)
             * - Stateless functions enable aggressive compiler optimization
             * - Thread-safe by design (no shared state)
             */
            inline const bool SCALING_UTILITIES_INITIALIZED = validation::validate_scaling_utilities();

        } // namespace execution

    } // namespace identity
} // namespace cpi_si

// === END OF CLOSING BLOCK ===

/**
 * @brief CPI-SI Scaling Utilities Module - Surgical Update Points
 *
 * SURGICAL UPDATE TARGETS:
 * - Block 1 (Metadata): Documentation, version, attribution updates
 * - Block 2 (Opening): Dependency changes (should remain minimal)
 * - Block 3 (Body): Conversion functions, validation logic, clamping behavior
 * - Block 4 (Closing): Validation tests, execution hints
 *
 * IMPLEMENTATION STATUS: Scaling utilities complete and validated
 * NEXT INTEGRATION: Ready for use by ui_wrappers and user-facing components
 */
