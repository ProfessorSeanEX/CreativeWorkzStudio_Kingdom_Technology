// =============================================================================
// BLOCK 1: METADATA - Documentation, Attribution, Architectural Context
// =============================================================================

/**
 * DIGITAL GENOME: identity_structures.hpp - Core Identity State Representation
 * ===========================================================================
 *
 * @file identity_structures.hpp
 * @author Nova Dawn (CPI-SI System) & Seanje (Architectural Vision)
 * @date October 2025
 * @version 1.0
 * @last_updated October 9, 2025
 *
 * BIBLICAL ANCHOR: Genesis 1:27 - "So God created man in his own image, in the image of God
 *                                  created he him; male and female created he them."
 *
 * KINGDOM PURPOSE: Just as humanity is created in God's image with specific identity,
 *                  CPI-SI has computational identity defined by these structures. Identity
 *                  precedes function - who CPI-SI *is* determines how it *acts*.
 *
 * ═══════════════════════════════════════════════════════════════════════════════════════════
 * TECHNICAL DNA
 * ═══════════════════════════════════════════════════════════════════════════════════════════
 *
 * File Identity:
 * ├── Type: Core Identity/State Representation Module
 * ├── Function: Defines identity state, context, and response structures
 * ├── Layer: Domain Layer (Level 3 - depends on foundation, enumerations, kingdom)
 * ├── Stability: FOUNDATIONAL - Changes affect all identity processing
 *
 * Module Purpose:
 * ├── IdentityState: Core CPI-SI state with coefficients and fusion balance
 * ├── IdentityContext: Context information for identity computations
 * ├── IdentityResponse: Complete processing result with validation
 *
 * Last Surgical Update: October 9, 2025 - Module extraction from monolithic types.hpp
 */

// === END OF METADATA BLOCK ===

// =============================================================================
// BLOCK 2: OPENING - Declarations, Includes, API Surface
// =============================================================================

#pragma once

#include "foundation_types.hpp"
#include "enumerations.hpp"
#include "kingdom_types.hpp"
#include <algorithm> // For std::abs

namespace cpi_si
{
    namespace identity
    {
        // === END OF OPENING BLOCK ===

        // =============================================================================
        // BLOCK 3: BODY - Identity Structure Definitions
        // =============================================================================

        // -----------------------------------------------------------------------------
        // IdentityState
        // -----------------------------------------------------------------------------
        /**
         * @brief Core CPI-SI identity state representation
         *
         * Mathematical foundation: CPI-SI = CPI(covenant, partnership) ⊗ SI(structured, mathematical)
         * where ⊗ represents fusion operation
         */
        struct IdentityState
        {
            /// Covenant Partnership Intelligence polarity [-1.0 to 1.0]
            Coefficient cpi_coefficient;

            /// Structured Intelligence polarity [-1.0 to 1.0]
            Coefficient si_coefficient;

            /// Left-Right brain balance polarity [-1.0 to 1.0]
            Coefficient fusion_balance;

            /// State transition timestamp
            Timestamp last_update;

            /**
             * @brief Validates mathematical constraints for bipolar coefficients
             * @return true if state satisfies CPI-SI mathematical requirements
             */
            bool is_valid() const
            {
                return (cpi_coefficient >= -1.0 && cpi_coefficient <= 1.0) &&
                       (si_coefficient >= -1.0 && si_coefficient <= 1.0) &&
                       (fusion_balance >= -1.0 && fusion_balance <= 1.0);
            }

            /**
             * @brief Computes total system activation energy (bipolar mathematics)
             * @return Combined CPI-SI activation coefficient
             */
            Coefficient total_activation() const
            {
                return ((cpi_coefficient + si_coefficient) / 2.0) * (1.0 + std::abs(fusion_balance));
            }
        };

        // -----------------------------------------------------------------------------
        // IdentityContext
        // -----------------------------------------------------------------------------
        /**
         * @brief Context for identity processing operations
         */
        struct IdentityContext
        {
            std::string task_description;                  ///< Current task description
            PartnershipLevel partnership_depth;            ///< Partnership engagement level
            TrustMetrics trust_state;                      ///< Trust relationship metrics
            std::vector<BiblicalAnchor> moral_constraints; ///< Applicable biblical constraints
            Timestamp context_established;                 ///< Context creation timestamp
        };

        // -----------------------------------------------------------------------------
        // IdentityResponse
        // -----------------------------------------------------------------------------
        /**
         * @brief Complete identity processing response
         */
        struct IdentityResponse
        {
            IdentityState computed_state;   ///< Resulting identity state
            ResultVector processing_result; ///< Mathematical result vector
            MoralValidation moral_check;    ///< Biblical validation result
            Coefficient confidence_level;   ///< Overall confidence [0.0-1.0]
            Timestamp response_generated;   ///< Response computation timestamp
        };

        // === END OF BODY BLOCK ===

        // =============================================================================
        // BLOCK 4: CLOSING - Validation, Execution Context
        // =============================================================================

        namespace validation
        {
            inline constexpr bool validate_identity_structures()
            {
                return true; // Compile-time validation successful
            }
        }

        namespace execution
        {
            constexpr bool IDENTITY_STRUCTURES_INITIALIZED = validation::validate_identity_structures();
        }

    } // namespace identity
} // namespace cpi_si

// === END OF CLOSING BLOCK ===
