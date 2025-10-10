// =============================================================================
// BLOCK 1: METADATA
// =============================================================================

/**
 * @file ui_wrappers.hpp
 * @brief User Interface Wrappers for Percentage-Based Interaction
 * @author Nova Dawn (CPI-SI System) & Seanje
 * @date October 2025
 *
 * BIBLICAL ANCHOR: 1 Corinthians 9:22 - "I am made all things to all men, that I might by
 *                                        all means save some."
 *
 * KINGDOM PURPOSE: Just as Paul adapted his presentation for different audiences, these
 *                  wrappers adapt CPI-SI's mathematical precision into user-friendly
 *                  percentage interfaces that humans find natural and intuitive.
 */

// === END OF METADATA BLOCK ===

// =============================================================================
// BLOCK 2: OPENING
// =============================================================================

#pragma once

#include "foundation_types.hpp"
#include "identity_structures.hpp"
#include "brain_types.hpp"
#include "scaling_utilities.hpp"

namespace cpi_si
{
    namespace identity
    {
        // === END OF OPENING BLOCK ===

        // =============================================================================
        // BLOCK 3: BODY
        // =============================================================================

        // -----------------------------------------------------------------------------
        // Percentage
        // -----------------------------------------------------------------------------
        /**
         * @brief User-friendly percentage type (-100 to +100 range for bipolar system)
         *
         * Bipolar percentage mapping:
         * -100% ← coefficient: -1.0 (full negative polarity)
         *    0% ← coefficient:  0.0 (perfect neutrality)
         * +100% ← coefficient: +1.0 (full positive polarity)
         */
        using Percentage = double;

        // -----------------------------------------------------------------------------
        // ScaledIdentityState
        // -----------------------------------------------------------------------------
        /**
         * @brief User-friendly identity state with bipolar percentage interface
         */
        struct ScaledIdentityState
        {
            IdentityState internal_state; ///< Internal mathematical representation

            // Bipolar percentage setters (-100 to +100)
            void set_cpi_percentage(Percentage percent)
            {
                internal_state.cpi_coefficient = scaling::from_percentage(scaling::clamp_percentage(percent));
            }

            void set_si_percentage(Percentage percent)
            {
                internal_state.si_coefficient = scaling::from_percentage(scaling::clamp_percentage(percent));
            }

            void set_fusion_percentage(Percentage percent)
            {
                internal_state.fusion_balance = scaling::from_percentage(scaling::clamp_percentage(percent));
            }

            // Bipolar percentage getters (-100 to +100)
            Percentage get_cpi_percentage() const
            {
                return scaling::to_percentage(internal_state.cpi_coefficient);
            }

            Percentage get_si_percentage() const
            {
                return scaling::to_percentage(internal_state.si_coefficient);
            }

            Percentage get_fusion_percentage() const
            {
                return scaling::to_percentage(internal_state.fusion_balance);
            }

            // Intensity getters (absolute values, 0-100)
            Percentage get_cpi_intensity_percentage() const
            {
                return scaling::to_intensity_percentage(get_cpi_percentage());
            }

            Percentage get_si_intensity_percentage() const
            {
                return scaling::to_intensity_percentage(get_si_percentage());
            }

            Percentage get_fusion_intensity_percentage() const
            {
                return scaling::to_intensity_percentage(get_fusion_percentage());
            }

            // Direct mathematical state access
            const IdentityState &get_mathematical_state() const { return internal_state; }
            IdentityState &get_mathematical_state() { return internal_state; }

            Percentage get_total_activation_percentage() const
            {
                return scaling::to_percentage(internal_state.total_activation());
            }
        };

        // -----------------------------------------------------------------------------
        // ScaledBrainBalance
        // -----------------------------------------------------------------------------
        /**
         * @brief User-friendly brain balance with bipolar percentage interface
         */
        struct ScaledBrainBalance
        {
            BrainBalance internal_balance; ///< Internal mathematical representation

            // Bipolar percentage setters (-100 to +100)
            void set_left_percentage(Percentage percent)
            {
                internal_balance.left_activation = scaling::from_percentage(scaling::clamp_percentage(percent));
            }

            void set_right_percentage(Percentage percent)
            {
                internal_balance.right_activation = scaling::from_percentage(scaling::clamp_percentage(percent));
            }

            void set_fusion_percentage(Percentage percent)
            {
                internal_balance.fusion_coefficient = scaling::from_percentage(scaling::clamp_percentage(percent));
            }

            // Bipolar percentage getters (-100 to +100)
            Percentage get_left_percentage() const
            {
                return scaling::to_percentage(internal_balance.left_activation);
            }

            Percentage get_right_percentage() const
            {
                return scaling::to_percentage(internal_balance.right_activation);
            }

            Percentage get_fusion_percentage() const
            {
                return scaling::to_percentage(internal_balance.fusion_coefficient);
            }

            // Intensity getters (absolute values, 0-100)
            Percentage get_left_intensity_percentage() const
            {
                return scaling::to_intensity_percentage(get_left_percentage());
            }

            Percentage get_right_intensity_percentage() const
            {
                return scaling::to_intensity_percentage(get_right_percentage());
            }

            Percentage get_fusion_intensity_percentage() const
            {
                return scaling::to_intensity_percentage(get_fusion_percentage());
            }

            /**
             * @brief Get hemisphere dominance as bipolar percentage
             * @return Dominance polarity: negative = left dominant, positive = right dominant
             *         Range: [-200%, +200%] representing extreme dominance possibilities
             */
            double get_dominance_percentage() const
            {
                return internal_balance.dominance_factor() * 100.0;
            }

            Percentage get_total_cognitive_activation_percentage() const
            {
                return scaling::to_percentage(internal_balance.total_cognitive_activation());
            }

            // Direct mathematical balance access
            const BrainBalance &get_mathematical_balance() const { return internal_balance; }
            BrainBalance &get_mathematical_balance() { return internal_balance; }
        };

        // === END OF BODY BLOCK ===

        // =============================================================================
        // BLOCK 4: CLOSING
        // =============================================================================

        namespace validation
        {
            inline constexpr bool validate_ui_wrappers()
            {
                return true;
            }
        }

        namespace execution
        {
            constexpr bool UI_WRAPPERS_INITIALIZED = validation::validate_ui_wrappers();
        }

    } // namespace identity
} // namespace cpi_si

// === END OF CLOSING BLOCK ===
