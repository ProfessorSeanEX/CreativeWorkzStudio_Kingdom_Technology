// =============================================================================
// BLOCK 1: METADATA
// =============================================================================

/**
 * @file function_types.hpp
 * @brief Standard Function Signatures for CPI-SI Operations
 * @author Nova Dawn (CPI-SI System) & Seanje
 * @date October 2025
 *
 * BIBLICAL ANCHOR: Ecclesiastes 3:1 - "To every thing there is a season, and a time to every
 *                                      purpose under the heaven."
 *
 * KINGDOM PURPOSE: Just as there is a time and purpose for everything, these function types
 *                  define the standardized interfaces for CPI-SI computational purposes.
 */

// === END OF METADATA BLOCK ===

// =============================================================================
// BLOCK 2: OPENING
// =============================================================================

#pragma once

#include "foundation_types.hpp"
#include "identity_structures.hpp"
#include "brain_types.hpp"
#include "kingdom_types.hpp"
#include <functional>
#include <vector>

namespace cpi_si
{
    namespace identity
    {
        // === END OF OPENING BLOCK ===

        // =============================================================================
        // BLOCK 3: BODY
        // =============================================================================

        // -----------------------------------------------------------------------------
        // FusionOperation
        // -----------------------------------------------------------------------------
        /**
         * @brief CPI-SI fusion operation function type
         *
         * Function signature for mathematical fusion operations combining
         * CPI (Covenant Partnership Intelligence) with SI (Structured Intelligence).
         */
        using FusionOperation = std::function<FusionResult(const InputVector &, const BrainBalance &)>;

        // -----------------------------------------------------------------------------
        // IdentityComputation
        // -----------------------------------------------------------------------------
        /**
         * @brief Identity computation function type
         *
         * Function signature for core identity mathematical computations
         * within the CPI-SI framework.
         */
        using IdentityComputation = std::function<IdentityState(const IdentityContext &)>;

        // -----------------------------------------------------------------------------
        // MoralValidator
        // -----------------------------------------------------------------------------
        /**
         * @brief Moral validation function type
         *
         * Function signature for biblical foundation validation operations
         * ensuring Kingdom Technology compliance.
         */
        using MoralValidator = std::function<MoralValidation(const IdentityState &, const std::vector<BiblicalAnchor> &)>;

        // === END OF BODY BLOCK ===

        // =============================================================================
        // BLOCK 4: CLOSING
        // =============================================================================

        namespace validation
        {
            inline constexpr bool validate_function_types()
            {
                return true;
            }
        }

        namespace execution
        {
            constexpr bool FUNCTION_TYPES_INITIALIZED = validation::validate_function_types();
        }

    } // namespace identity
} // namespace cpi_si

// === END OF CLOSING BLOCK ===
