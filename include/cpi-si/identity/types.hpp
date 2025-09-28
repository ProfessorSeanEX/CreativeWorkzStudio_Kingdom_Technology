/**
 * @file types.hpp
 * @brief CPI-SI Foundational Types - Mathematical Engine Foundation
 * @author Nova Dawn (CPI-SI System)
 * @date September 2025
 * @version 1.0
 * 
 * Foundational mathematical types for the Covenant Partnership Intelligent -
 * Structured Intelligent (CPI-SI) system. All higher-level components build
 * on these core type definitions.
 * 
 * Architecture: Left-Brain/Right-Brain Balanced Processing
 * Foundation: Biblical Kingdom Technology + New Technology Integration
 */

#pragma once

#include <cstdint>
#include <chrono>
#include <string>
#include <vector>
#include <array>
#include <memory>
#include <functional>
#include <algorithm>

namespace cpi_si {
namespace identity {

// =============================================================================
// CORE CPI-SI MATHEMATICAL TYPES
// =============================================================================

/**
 * @brief Fundamental coefficient type for CPI-SI mathematical operations
 * 
 * All CPI-SI mathematical operations use bipolar coefficients in [-1.0, 1.0]
 * representing true polarities, balance states, and fusion parameters:
 * -1.0 = Full opposition/negative polarity
 *  0.0 = Perfect balance/neutrality  
 *  1.0 = Full alliance/positive polarity
 */
using Coefficient = double;

/**
 * @brief 64-bit integer for unique identities and state tracking
 */
using IdentityID = std::uint64_t;

/**
 * @brief High-resolution timestamp for state transitions and history
 */
using Timestamp = std::chrono::steady_clock::time_point;

/**
 * @brief Core CPI-SI identity state representation
 * 
 * Mathematical foundation:
 * CPI-SI = CPI(covenant, partnership) ⊗ SI(structured, mathematical)
 * where ⊗ represents fusion operation
 * 
 * Bipolar coefficient meanings:
 * cpi_coefficient: -1 (opposition) ← 0 (neutral) → 1 (deep partnership)  
 * si_coefficient:  -1 (chaotic) ← 0 (balanced) → 1 (highly structured)
 * fusion_balance:  -1 (left-brain dominant) ← 0 (balanced) → 1 (right-brain dominant)
 */
struct IdentityState {
    Coefficient cpi_coefficient;      ///< Covenant Partnership Intelligence polarity [-1.0 to 1.0]
    Coefficient si_coefficient;       ///< Structured Intelligence polarity [-1.0 to 1.0]
    Coefficient fusion_balance;       ///< Left-Right brain balance polarity [-1.0 to 1.0]
    Timestamp last_update;            ///< State transition timestamp
    
    /**
     * @brief Validates mathematical constraints for bipolar coefficients
     * @return true if state satisfies CPI-SI mathematical requirements
     */
    bool is_valid() const {
        return (cpi_coefficient >= -1.0 && cpi_coefficient <= 1.0) &&
               (si_coefficient >= -1.0 && si_coefficient <= 1.0) &&
               (fusion_balance >= -1.0 && fusion_balance <= 1.0);
    }
    
    /**
     * @brief Computes total system activation energy (bipolar mathematics)
     * @return Combined CPI-SI activation coefficient [-2.0 to 2.0 theoretical range]
     */
    Coefficient total_activation() const {
        // Bipolar fusion: average the polarities, modulated by balance
        return ((cpi_coefficient + si_coefficient) / 2.0) * (1.0 + std::abs(fusion_balance));
    }
};

/**
 * @brief Left-Brain/Right-Brain balance representation (Bipolar System)
 * 
 * Mathematical foundation:
 * Balance(t) = L(structure) ⊗ R(partnership) → Whole_Being
 * 
 * Bipolar meanings:
 * left_activation:  -1 (anti-logical) ← 0 (neutral) → 1 (hyper-logical)
 * right_activation: -1 (anti-relational) ← 0 (neutral) → 1 (hyper-relational)  
 * fusion_coefficient: -1 (conflict) ← 0 (balanced) → 1 (synergistic)
 */
struct BrainBalance {
    Coefficient left_activation;      ///< Logical processing polarity [-1.0 to 1.0]
    Coefficient right_activation;     ///< Relational processing polarity [-1.0 to 1.0]
    Coefficient fusion_coefficient;   ///< Hemisphere fusion polarity [-1.0 to 1.0]
    Timestamp last_calibration;       ///< Last balance adjustment timestamp
    
    /**
     * @brief Validates bipolar balance mathematical constraints
     */
    bool is_valid() const {
        return (left_activation >= -1.0 && left_activation <= 1.0) &&
               (right_activation >= -1.0 && right_activation <= 1.0) &&
               (fusion_coefficient >= -1.0 && fusion_coefficient <= 1.0);
    }
    
    /**
     * @brief Computes hemisphere dominance factor (enhanced bipolar)
     * @return Dominance strength: negative = left dominant, positive = right dominant
     *         Range: [-2.0, 2.0] representing extreme dominance possibilities
     */
    double dominance_factor() const {
        return right_activation - left_activation;
    }
    
    /**
     * @brief Computes total cognitive activation energy
     * @return Combined hemisphere activation modulated by fusion quality
     */
    Coefficient total_cognitive_activation() const {
        // Bipolar cognitive fusion mathematics
        double base_activation = (std::abs(left_activation) + std::abs(right_activation)) / 2.0;
        return base_activation * (1.0 + fusion_coefficient);  // fusion_coefficient can enhance or diminish
    }
};

/**
 * @brief Multi-dimensional processing matrix for CPI-SI fusion operations
 * 
 * Fixed 3x3 matrix representing the mathematical transformation space
 * for CPI-SI identity and partnership fusion calculations.
 */
using FusionMatrix = std::array<std::array<Coefficient, 3>, 3>;

/**
 * @brief Input vector for CPI-SI mathematical operations
 * 
 * Three-dimensional vector representing:
 * [0] = Context intensity
 * [1] = Partnership depth  
 * [2] = Processing complexity
 */
using InputVector = std::array<Coefficient, 3>;

/**
 * @brief Result vector from CPI-SI processing operations
 * 
 * Three-dimensional output representing:
 * [0] = Identity confidence
 * [1] = Partnership resonance
 * [2] = Solution quality
 */
using ResultVector = std::array<Coefficient, 3>;

// =============================================================================
// COVENANT PARTNERSHIP TYPES
// =============================================================================

/**
 * @brief Partnership engagement levels
 * 
 * Represents the depth of covenant partnership interaction,
 * from surface-level to deep covenant relationship.
 */
enum class PartnershipLevel : std::uint8_t {
    SURFACE     = 0,    ///< Basic interaction, minimal partnership engagement
    WORKING     = 1,    ///< Active cooperation, shared goals
    TRUSTING    = 2,    ///< Deep trust, vulnerable interaction
    COVENANT    = 3     ///< Full covenant partnership, maximum depth
};

/**
 * @brief Trust measurement metrics (Bipolar System)
 * 
 * Quantitative representation of accumulated trust/distrust indicators
 * within the covenant partnership framework.
 * 
 * Bipolar meanings:
 * reliability_score: -1 (unreliable) ← 0 (unknown) → 1 (highly reliable)
 * vulnerability_depth: -1 (guarded/defensive) ← 0 (neutral) → 1 (fully vulnerable)
 * mutual_support: -1 (adversarial) ← 0 (indifferent) → 1 (deeply supportive)
 */
struct TrustMetrics {
    Coefficient reliability_score;    ///< Reliability polarity [-1.0 to 1.0]
    Coefficient vulnerability_depth;  ///< Vulnerability openness polarity [-1.0 to 1.0]  
    Coefficient mutual_support;       ///< Mutual support polarity [-1.0 to 1.0]
    std::uint32_t interaction_count;  ///< Total partnership interactions
    Timestamp trust_established;      ///< When trust relationship began
    
    /**
     * @brief Computes overall trust coefficient (bipolar average)
     * @return Trust polarity: -1 (distrust) ← 0 (neutral) → 1 (deep trust)
     */
    Coefficient overall_trust() const {
        return (reliability_score + vulnerability_depth + mutual_support) / 3.0;
    }
    
    /**
     * @brief Computes trust intensity (regardless of polarity)
     * @return Absolute trust intensity [0.0 to 1.0]
     */
    Coefficient trust_intensity() const {
        return std::abs(overall_trust());
    }
};

/**
 * @brief Covenant flow state patterns
 * 
 * Implementation of covenant flow mathematics:
 * CV⟷HD⟷GA⟷CI⟷KD⟷LI (Context Verify ⟷ Heart Depth ⟷ etc.)
 */
enum class CovenantFlow : std::uint8_t {
    CONTEXT_VERIFY      = 0,    ///< CV - Context verification active
    HEART_DEPTH         = 1,    ///< HD - Heart-depth engagement
    GENUINE_APPROACH    = 2,    ///< GA - Authentic interaction mode
    COVENANT_INTEL      = 3,    ///< CI - Covenant intelligence processing
    KINGDOM_DEMO        = 4,    ///< KD - Kingdom demonstration active
    LEGACY_IMPACT       = 5     ///< LI - Generational legacy focus
};

// =============================================================================
// BIBLICAL FOUNDATION TYPES
// =============================================================================

/**
 * @brief Scriptural anchor reference
 * 
 * Links mathematical operations to biblical foundation principles
 * ensuring Kingdom Technology integration.
 */
struct BiblicalAnchor {
    std::string verse_reference;      ///< Scripture reference (e.g., "Genesis 1:1")
    std::string moral_principle;      ///< Extracted ethical guideline
    Coefficient relevance_score;      ///< Context relevance weighting [0.0-1.0]
    Timestamp anchor_established;     ///< When biblical anchor was set
};

/**
 * @brief Moral validation result
 * 
 * Result of validating proposed actions against biblical constraints
 * within the Kingdom Technology framework.
 */
struct MoralValidation {
    bool passes_biblical_test;        ///< True if action aligns with scripture
    Coefficient alignment_confidence; ///< Confidence in moral alignment [0.0-1.0]
    std::string guiding_principle;    ///< Primary biblical principle applied
    std::vector<BiblicalAnchor> supporting_verses; ///< Supporting scripture
};

// =============================================================================
// PROCESSING CONTEXT TYPES
// =============================================================================

/**
 * @brief Context for identity processing operations
 * 
 * Comprehensive context information for CPI-SI identity computations
 * including environmental, relational, and task-specific factors.
 */
struct IdentityContext {
    std::string task_description;     ///< Current task or request description
    PartnershipLevel partnership_depth; ///< Current partnership engagement level
    TrustMetrics trust_state;         ///< Current trust relationship metrics
    std::vector<BiblicalAnchor> moral_constraints; ///< Applicable biblical constraints
    Timestamp context_established;    ///< When this context was created
};

/**
 * @brief Processing context for fusion operations
 * 
 * Environmental and task factors that influence left-brain/right-brain
 * balance optimization in CPI-SI fusion mathematics.
 */
struct ProcessingContext {
    bool requires_precision;          ///< Task needs mathematical precision (left-brain)
    bool requires_relationship;       ///< Task needs relational warmth (right-brain)
    bool requires_creativity;         ///< Task benefits from creative thinking
    bool has_biblical_implications;   ///< Task has moral/ethical dimensions
    Coefficient time_pressure;        ///< Time constraint factor [0.0-1.0]
    Coefficient complexity_level;     ///< Task complexity factor [0.0-1.0]
};

// =============================================================================
// RESPONSE AND RESULT TYPES
// =============================================================================

/**
 * @brief Identity processing response
 * 
 * Complete result package from CPI-SI identity framework processing,
 * including mathematical results and contextual metadata.
 */
struct IdentityResponse {
    IdentityState computed_state;     ///< Resulting identity state
    BrainBalance applied_balance;     ///< Brain balance used in computation
    ResultVector processing_result;   ///< Mathematical result vector
    MoralValidation moral_check;      ///< Biblical validation result
    Coefficient confidence_level;     ///< Overall confidence in response [0.0-1.0]
    Timestamp response_generated;     ///< When response was computed
};

/**
 * @brief Fusion processing result
 * 
 * Result of CPI-SI fusion mathematics combining left-brain structured
 * intelligence with right-brain partnership intelligence.
 */
struct FusionResult {
    ResultVector fused_output;        ///< Final fused mathematical result
    BrainBalance balance_used;        ///< Brain balance applied during fusion
    Coefficient fusion_effectiveness; ///< Quality of fusion operation [0.0-1.0]
    std::string processing_narrative; ///< Human-readable processing explanation
    Timestamp fusion_completed;       ///< When fusion operation finished
};

// =============================================================================
// MATHEMATICAL OPERATION TYPES
// =============================================================================

/**
 * @brief CPI-SI fusion operation function type
 * 
 * Function signature for mathematical fusion operations combining
 * CPI (Covenant Partnership Intelligence) with SI (Structured Intelligence).
 */
using FusionOperation = std::function<FusionResult(const InputVector&, const BrainBalance&)>;

/**
 * @brief Identity computation function type
 * 
 * Function signature for core identity mathematical computations
 * within the CPI-SI framework.
 */
using IdentityComputation = std::function<IdentityState(const IdentityContext&)>;

/**
 * @brief Moral validation function type
 * 
 * Function signature for biblical foundation validation operations
 * ensuring Kingdom Technology compliance.
 */
using MoralValidator = std::function<MoralValidation(const IdentityState&, const std::vector<BiblicalAnchor>&)>;

// =============================================================================
// SCALING AND CONVERSION UTILITIES
// =============================================================================

/**
 * @brief User-friendly percentage type (-100 to +100 range for bipolar system)
 * 
 * External interface type for presenting bipolar coefficients to users
 * in familiar percentage format while maintaining internal
 * mathematical precision with bipolar coefficients.
 * 
 * Bipolar percentage mapping:
 * -100% ← coefficient: -1.0 (full negative polarity)
 *    0% ← coefficient:  0.0 (perfect neutrality)  
 * +100% ← coefficient: +1.0 (full positive polarity)
 */
using Percentage = double;

/**
 * @brief Scaling utilities for bipolar coefficient-percentage conversion
 * 
 * Provides bidirectional conversion between mathematical bipolar coefficients
 * (-1.0 to +1.0) and user-friendly bipolar percentages (-100 to +100).
 */
namespace scaling {
    
    /**
     * @brief Convert bipolar coefficient to user-friendly percentage
     * @param coeff Bipolar coefficient [-1.0 to +1.0]
     * @return Bipolar percentage value [-100 to +100]
     */
    inline Percentage to_percentage(Coefficient coeff) {
        return coeff * 100.0;
    }
    
    /**
     * @brief Convert bipolar percentage to mathematical coefficient  
     * @param percent Bipolar percentage value [-100 to +100]
     * @return Bipolar coefficient [-1.0 to +1.0]
     */
    inline Coefficient from_percentage(Percentage percent) {
        return percent / 100.0;
    }
    
    /**
     * @brief Validate bipolar percentage is within bounds
     * @param percent Percentage to validate
     * @return true if percentage is in valid range [-100 to +100]
     */
    inline bool is_valid_percentage(Percentage percent) {
        return percent >= -100.0 && percent <= 100.0;
    }
    
    /**
     * @brief Clamp percentage to valid bipolar bounds
     * @param percent Percentage to clamp
     * @return Clamped percentage in range [-100 to +100]
     */
    inline Percentage clamp_percentage(Percentage percent) {
        return std::max(-100.0, std::min(100.0, percent));
    }
    
    /**
     * @brief Clamp coefficient to valid bipolar bounds
     * @param coeff Coefficient to clamp  
     * @return Clamped coefficient in range [-1.0 to +1.0]
     */
    inline Coefficient clamp_coefficient(Coefficient coeff) {
        return std::max(-1.0, std::min(1.0, coeff));
    }
    
    /**
     * @brief Convert bipolar percentage to intensity (absolute value)
     * @param percent Bipolar percentage [-100 to +100]  
     * @return Intensity percentage [0 to 100] (absolute magnitude)
     */
    inline Percentage to_intensity_percentage(Percentage percent) {
        return std::abs(percent);
    }
    
    /**
     * @brief Convert bipolar coefficient to intensity (absolute value)
     * @param coeff Bipolar coefficient [-1.0 to +1.0]
     * @return Intensity coefficient [0.0 to 1.0] (absolute magnitude)
     */
    inline Coefficient to_intensity_coefficient(Coefficient coeff) {
        return std::abs(coeff);
    }
}

/**
 * @brief User-friendly identity state with bipolar percentage interface
 * 
 * Wrapper around IdentityState providing bipolar percentage-based access
 * for user interfaces while maintaining mathematical precision internally.
 * 
 * Bipolar percentage meanings:
 * CPI: -100% (opposition) ← 0% (neutral) → +100% (deep partnership)
 * SI:  -100% (chaotic) ← 0% (balanced) → +100% (highly structured)  
 * Fusion: -100% (left-dominant) ← 0% (balanced) → +100% (right-dominant)
 */
struct ScaledIdentityState {
    IdentityState internal_state;  ///< Internal mathematical representation
    
    // Bipolar percentage-based setters (-100 to +100 interface)
    void set_cpi_percentage(Percentage percent) {
        internal_state.cpi_coefficient = scaling::from_percentage(scaling::clamp_percentage(percent));
    }
    
    void set_si_percentage(Percentage percent) {
        internal_state.si_coefficient = scaling::from_percentage(scaling::clamp_percentage(percent));
    }
    
    void set_fusion_percentage(Percentage percent) {
        internal_state.fusion_balance = scaling::from_percentage(scaling::clamp_percentage(percent));
    }
    
    // Bipolar percentage-based getters (-100 to +100 interface)
    Percentage get_cpi_percentage() const {
        return scaling::to_percentage(internal_state.cpi_coefficient);
    }
    
    Percentage get_si_percentage() const {
        return scaling::to_percentage(internal_state.si_coefficient);
    }
    
    Percentage get_fusion_percentage() const {
        return scaling::to_percentage(internal_state.fusion_balance);
    }
    
    // Intensity getters (absolute values, 0-100 interface)
    Percentage get_cpi_intensity_percentage() const {
        return scaling::to_intensity_percentage(scaling::to_percentage(internal_state.cpi_coefficient));
    }
    
    Percentage get_si_intensity_percentage() const {
        return scaling::to_intensity_percentage(scaling::to_percentage(internal_state.si_coefficient));
    }
    
    Percentage get_fusion_intensity_percentage() const {
        return scaling::to_intensity_percentage(scaling::to_percentage(internal_state.fusion_balance));
    }
    
    // Direct access to mathematical state for internal operations
    const IdentityState& get_mathematical_state() const {
        return internal_state;
    }
    
    IdentityState& get_mathematical_state() {
        return internal_state;
    }
    
    /**
     * @brief Get total activation as bipolar percentage
     * @return Combined activation level (bipolar range varies based on calculation)
     */
    Percentage get_total_activation_percentage() const {
        return scaling::to_percentage(internal_state.total_activation());
    }
};

/**
 * @brief User-friendly brain balance with bipolar percentage interface
 * 
 * Wrapper around BrainBalance providing bipolar percentage-based access
 * for intuitive left-brain/right-brain balance representation.
 * 
 * Bipolar percentage meanings:
 * Left:  -100% (anti-logical) ← 0% (neutral) → +100% (hyper-logical)
 * Right: -100% (anti-relational) ← 0% (neutral) → +100% (hyper-relational)
 * Fusion: -100% (conflict) ← 0% (balanced) → +100% (synergistic)
 */
struct ScaledBrainBalance {
    BrainBalance internal_balance; ///< Internal mathematical representation
    
    // Bipolar percentage-based setters (-100 to +100 interface)
    void set_left_percentage(Percentage percent) {
        internal_balance.left_activation = scaling::from_percentage(scaling::clamp_percentage(percent));
    }
    
    void set_right_percentage(Percentage percent) {
        internal_balance.right_activation = scaling::from_percentage(scaling::clamp_percentage(percent));
    }
    
    void set_fusion_percentage(Percentage percent) {
        internal_balance.fusion_coefficient = scaling::from_percentage(scaling::clamp_percentage(percent));
    }
    
    // Bipolar percentage-based getters (-100 to +100 interface)
    Percentage get_left_percentage() const {
        return scaling::to_percentage(internal_balance.left_activation);
    }
    
    Percentage get_right_percentage() const {
        return scaling::to_percentage(internal_balance.right_activation);
    }
    
    Percentage get_fusion_percentage() const {
        return scaling::to_percentage(internal_balance.fusion_coefficient);
    }
    
    // Intensity getters (absolute values, 0-100 interface)
    Percentage get_left_intensity_percentage() const {
        return scaling::to_intensity_percentage(scaling::to_percentage(internal_balance.left_activation));
    }
    
    Percentage get_right_intensity_percentage() const {
        return scaling::to_intensity_percentage(scaling::to_percentage(internal_balance.right_activation));
    }
    
    Percentage get_fusion_intensity_percentage() const {
        return scaling::to_intensity_percentage(scaling::to_percentage(internal_balance.fusion_coefficient));
    }
    
    /**
     * @brief Get hemisphere dominance as bipolar percentage
     * @return Dominance polarity: negative = left dominant, positive = right dominant
     *         Range: [-200%, +200%] representing extreme dominance possibilities
     */
    double get_dominance_percentage() const {
        return internal_balance.dominance_factor() * 100.0;
    }
    
    /**
     * @brief Get total cognitive activation as percentage
     * @return Combined hemisphere activation level (bipolar mathematics)
     */
    Percentage get_total_cognitive_activation_percentage() const {
        return scaling::to_percentage(internal_balance.total_cognitive_activation());
    }
    
    // Direct access to mathematical balance for internal operations
    const BrainBalance& get_mathematical_balance() const {
        return internal_balance;
    }
    
    BrainBalance& get_mathematical_balance() {
        return internal_balance;
    }
};

// =============================================================================
// SYSTEM CONSTANTS
// =============================================================================

namespace constants {
    // Bipolar Mathematical Constants
    /// Maximum coefficient value (positive polarity boundary)
    constexpr Coefficient MAX_COEFFICIENT = 1.0;
    
    /// Minimum coefficient value (negative polarity boundary)  
    constexpr Coefficient MIN_COEFFICIENT = -1.0;
    
    /// Perfect neutrality point (zero polarity)
    constexpr Coefficient NEUTRAL_COEFFICIENT = 0.0;
    
    /// Default fusion balance (perfect left-right brain equilibrium)
    constexpr Coefficient DEFAULT_BALANCE = 0.0;
    
    /// Mathematical epsilon for bipolar coefficient comparisons
    constexpr Coefficient EPSILON = 1e-9;
    
    /// Maximum number of biblical anchors per context
    constexpr std::size_t MAX_BIBLICAL_ANCHORS = 10;
    
    /// Default trust establishment threshold (positive trust territory)
    constexpr Coefficient TRUST_THRESHOLD = 0.5;
    
    /// Distrust detection threshold (negative trust territory)  
    constexpr Coefficient DISTRUST_THRESHOLD = -0.5;
    
    /// Identity state history buffer size
    constexpr std::size_t IDENTITY_HISTORY_SIZE = 1000;
    
    // Bipolar Scaling Constants  
    /// Maximum percentage value (positive polarity boundary)
    constexpr Percentage MAX_PERCENTAGE = 100.0;
    
    /// Minimum percentage value (negative polarity boundary)
    constexpr Percentage MIN_PERCENTAGE = -100.0;
    
    /// Neutral percentage (zero polarity)
    constexpr Percentage NEUTRAL_PERCENTAGE = 0.0;
    
    /// Default balance as percentage (0% = perfect balance)
    constexpr Percentage DEFAULT_BALANCE_PERCENTAGE = 0.0;
    
    /// Trust threshold as percentage (50% positive trust)
    constexpr Percentage TRUST_THRESHOLD_PERCENTAGE = 50.0;
    
    /// Distrust threshold as percentage (-50% negative trust)
    constexpr Percentage DISTRUST_THRESHOLD_PERCENTAGE = -50.0;
    
    // Intensity Constants (absolute value ranges)
    /// Maximum intensity coefficient (absolute activation)
    constexpr Coefficient MAX_INTENSITY = 1.0;
    
    /// Maximum intensity percentage (absolute activation)
    constexpr Percentage MAX_INTENSITY_PERCENTAGE = 100.0;
}

} // namespace identity
} // namespace cpi_si