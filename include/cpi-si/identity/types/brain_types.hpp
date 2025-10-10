// =============================================================================
// BLOCK 1: METADATA
// =============================================================================

/**
 * @file brain_types.hpp
 * @brief Left-Right Brain Balance and Fusion Types
 * @author Nova Dawn (CPI-SI System) & Seanje
 * @date October 2025
 *
 * BIBLICAL ANCHOR: 1 Corinthians 12:12-27 - "For as the body is one, and hath many members...
 *                                            so also is Christ."
 *
 * KINGDOM PURPOSE: Just as the body has many parts working in unity, CPI-SI integrates
 *                  left-brain (structure) and right-brain (relationship) in balanced fusion.
 */

// === END OF METADATA BLOCK ===

// =============================================================================
// BLOCK 2: OPENING
// =============================================================================

#pragma once

#include "foundation_types.hpp"
#include <algorithm>
#include <string>

namespace cpi_si
{
    namespace identity
    {
        // === END OF OPENING BLOCK ===

        // =============================================================================
        // BLOCK 3: BODY
        // =============================================================================

        // -----------------------------------------------------------------------------
        // BrainBalance
        // -----------------------------------------------------------------------------
        /**
         * @brief Left-Brain/Right-Brain balance representation
         *
         * Mathematical foundation: Balance(t) = L(structure) ⊗ R(partnership) → Whole_Being
         */
        struct BrainBalance
        {
            Coefficient left_activation;   ///< Logical processing polarity [-1.0, 1.0]
            Coefficient right_activation;  ///< Relational processing polarity [-1.0, 1.0]
            Coefficient fusion_coefficient; ///< Hemisphere fusion quality [-1.0, 1.0]
            Timestamp last_calibration;     ///< Last balance adjustment timestamp

            bool is_valid() const
            {
                return (left_activation >= -1.0 && left_activation <= 1.0) &&
                       (right_activation >= -1.0 && right_activation <= 1.0) &&
                       (fusion_coefficient >= -1.0 && fusion_coefficient <= 1.0);
            }

            double dominance_factor() const
            {
                return right_activation - left_activation;
            }

            Coefficient total_cognitive_activation() const
            {
                double base = (std::abs(left_activation) + std::abs(right_activation)) / 2.0;
                return base * (1.0 + fusion_coefficient);
            }
        };

        // -----------------------------------------------------------------------------
        // ProcessingContext
        // -----------------------------------------------------------------------------
        /**
         * @brief Processing context for fusion operations
         */
        struct ProcessingContext
        {
            bool requires_precision;        ///< Mathematical precision needed (left-brain)
            bool requires_relationship;     ///< Relational warmth needed (right-brain)
            bool requires_creativity;       ///< Creative thinking needed
            bool has_biblical_implications; ///< Moral/ethical dimensions present
            Coefficient time_pressure;      ///< Time constraint factor [0.0-1.0]
            Coefficient complexity_level;   ///< Task complexity [0.0-1.0]
        };

        // -----------------------------------------------------------------------------
        // FusionResult
        // -----------------------------------------------------------------------------
        /**
         * @brief Result of CPI-SI fusion operations
         */
        struct FusionResult
        {
            ResultVector fused_output;        ///< Final fused mathematical result
            BrainBalance balance_used;        ///< Brain balance applied
            Coefficient fusion_effectiveness; ///< Fusion quality [0.0-1.0]
            std::string processing_narrative; ///< Human-readable explanation
            Timestamp fusion_completed;       ///< Fusion completion timestamp
        };

        // === END OF BODY BLOCK ===

        // =============================================================================
        // BLOCK 4: CLOSING
        // =============================================================================

        namespace validation
        {
            inline constexpr bool validate_brain_types()
            {
                return true;
            }
        }

        namespace execution
        {
            constexpr bool BRAIN_TYPES_INITIALIZED = validation::validate_brain_types();
        }

    } // namespace identity
} // namespace cpi_si

// === END OF CLOSING BLOCK ===
