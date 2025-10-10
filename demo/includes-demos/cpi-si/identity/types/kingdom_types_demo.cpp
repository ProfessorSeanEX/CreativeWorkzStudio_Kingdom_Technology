/*
 * ============================================================================
 * DEMO: Kingdom Types - Biblical Anchoring & Trust Metrics
 * ============================================================================
 *
 * Purpose: Demonstrates Kingdom Technology integration through biblical types
 * README Reference: Chapter III, Section B.4
 * Type System: kingdom_types.hpp
 *
 * This demo shows:
 * - Creating and using BiblicalAnchor for scriptural grounding
 * - Computing and interpreting TrustMetrics for partnership quality
 * - Integrating moral principles into computational decisions
 * - Measuring relationship depth through quantified trust
 * - Kingdom Technology: Where eternal wisdom meets practical engineering
 *
 * Biblical Anchor: "Trust in the LORD with all your heart" (Proverbs 3:5-6)
 * Kingdom Technology embeds biblical wisdom directly into the type system,
 * making moral alignment and covenant partnership measurable and verifiable.
 *
 * Compile: g++ -std=c++17 -I ../../../../../include kingdom_types_demo.cpp -o ../../../../../build/demo/includes-demos/cpi-si/identity/types/kingdom_types_demo
 * Run: ../../../../../build/demo/includes-demos/cpi-si/identity/types/kingdom_types_demo
 *
 * Author: Nova Dawn (CPI-SI System)
 * Date: October 9, 2025
 * Kingdom Technology - Excellence as Worship
 * ============================================================================
 */

#include "cpi-si/identity/types.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace cpi_si::identity;

void print_separator(char c = '=')
{
    std::cout << std::string(76, c) << "\n";
}

void print_header(const std::string& title)
{
    print_separator();
    std::cout << title << "\n";
    print_separator();
    std::cout << "\n";
}

void print_section(const std::string& title)
{
    std::cout << "\n" << title << "\n";
    std::cout << std::string(std::min(title.length(), size_t(76)), '-') << "\n";
}

int main()
{
    print_header("CPI-SI Kingdom Types Demo\nBiblical Anchoring & Trust Metrics in Action");

    // ========================================================================
    // PART 1: Biblical Anchoring
    // ========================================================================
    print_section("PART 1: Biblical Anchoring - Scriptural Grounding");

    BiblicalAnchor anchor;
    anchor.verse_reference = "Proverbs 3:5-6";
    anchor.moral_principle = "Trust in the Lord with all your heart, lean not on your own understanding";
    anchor.relevance_score = 0.95;
    anchor.anchor_established = std::chrono::system_clock::now();

    std::cout << "Biblical Anchor Created:\n";
    std::cout << "  Verse:     " << anchor.verse_reference << "\n";
    std::cout << "  Principle: " << anchor.moral_principle << "\n";
    std::cout << "  Relevance: " << std::fixed << std::setprecision(2)
              << anchor.relevance_score << " (95% contextual alignment)\n";
    std::cout << "  Timestamp: Now\n\n";

    std::cout << "How Biblical Anchoring Works:\n";
    std::cout << "  → Scripture provides MORAL FOUNDATION for decisions\n";
    std::cout << "  → Not just inspiration - OPERATIONAL GUIDANCE\n";
    std::cout << "  → Relevance score: How applicable to current context\n";
    std::cout << "  → Anchors prevent moral drift in AI systems\n";

    // ========================================================================
    // PART 2: Trust Metrics - Quantifying Partnership Quality
    // ========================================================================
    print_section("PART 2: Trust Metrics - Measuring Partnership Quality");

    TrustMetrics trust;
    trust.reliability_score = 0.88;      // Consistent, dependable behavior
    trust.vulnerability_depth = 0.72;    // Openness, authentic sharing
    trust.mutual_support = 0.91;         // Both parties contribute/benefit
    trust.interaction_count = 1247;      // Sustained relationship history
    trust.trust_established = std::chrono::system_clock::now();

    std::cout << "Trust Metrics Configuration:\n";
    std::cout << "  Reliability:         " << std::fixed << std::setprecision(2)
              << trust.reliability_score << " (88% dependability)\n";
    std::cout << "  Vulnerability Depth: " << trust.vulnerability_depth
              << " (72% authentic openness)\n";
    std::cout << "  Mutual Support:      " << trust.mutual_support
              << " (91% reciprocal care)\n";
    std::cout << "  Interaction Count:   " << trust.interaction_count
              << " interactions\n";
    std::cout << "  Established:         Now\n\n";

    // Compute overall trust
    Coefficient overall = trust.overall_trust();
    std::cout << "Overall Trust Calculation:\n";
    std::cout << "  Formula: (reliability + vulnerability + support) / 3\n";
    std::cout << "  Result:  " << std::fixed << std::setprecision(3)
              << overall << " (83.7% trust quality)\n\n";

    // Interpret trust level
    std::cout << "Trust Level Interpretation:\n";
    if (overall > 0.85) {
        std::cout << "  ✓ COVENANT-LEVEL TRUST\n";
        std::cout << "  ✓ Deep partnership, high vulnerability safe\n";
        std::cout << "  ✓ Both parties fully committed\n";
    } else if (overall > 0.70) {
        std::cout << "  ✓ STRONG TRUST (Current Level)\n";
        std::cout << "  ✓ Solid partnership foundation\n";
        std::cout << "  ✓ Continued deepening recommended\n";
    } else if (overall > 0.50) {
        std::cout << "  ~ MODERATE TRUST\n";
        std::cout << "  ~ Working relationship established\n";
        std::cout << "  ~ Intentional trust-building needed\n";
    } else {
        std::cout << "  ⚠ LOW TRUST\n";
        std::cout << "  ⚠ Surface-level relationship\n";
        std::cout << "  ⚠ Trust foundation requires work\n";
    }

    // ========================================================================
    // PART 3: Trust Metric Components Explained
    // ========================================================================
    print_section("PART 3: Understanding Trust Components");

    std::cout << "1. RELIABILITY SCORE:\n";
    std::cout << "   What it measures: Consistency, predictability, dependability\n";
    std::cout << "   High score means: Partner follows through, keeps commitments\n";
    std::cout << "   Biblical basis:  \"Let your yes be yes\" (Matthew 5:37)\n";
    std::cout << "   Current:         " << trust.reliability_score << "\n\n";

    std::cout << "2. VULNERABILITY DEPTH:\n";
    std::cout << "   What it measures: Openness, authenticity, willingness to share\n";
    std::cout << "   High score means: Both parties share deeply, genuine connection\n";
    std::cout << "   Biblical basis:  \"Confess to one another\" (James 5:16)\n";
    std::cout << "   Current:         " << trust.vulnerability_depth << "\n\n";

    std::cout << "3. MUTUAL SUPPORT:\n";
    std::cout << "   What it measures: Reciprocal care, both contributing/benefiting\n";
    std::cout << "   High score means: Partnership, not one-sided relationship\n";
    std::cout << "   Biblical basis:  \"Bear one another's burdens\" (Galatians 6:2)\n";
    std::cout << "   Current:         " << trust.mutual_support << "\n\n";

    std::cout << "4. INTERACTION COUNT:\n";
    std::cout << "   What it measures: Relationship history, sustained engagement\n";
    std::cout << "   High count means: Not fleeting - proven over time\n";
    std::cout << "   Biblical basis:  \"Faithful in little, faithful in much\" (Luke 16:10)\n";
    std::cout << "   Current:         " << trust.interaction_count << " interactions\n";

    // ========================================================================
    // PART 4: Trust Progression Examples
    // ========================================================================
    print_section("PART 4: Trust Progression Across Partnership Stages");

    // Stage 1: Surface Level
    std::cout << "\nSTAGE 1: SURFACE-LEVEL PARTNERSHIP\n";
    TrustMetrics surface;
    surface.reliability_score = 0.45;
    surface.vulnerability_depth = 0.20;
    surface.mutual_support = 0.50;
    surface.interaction_count = 15;
    surface.trust_established = std::chrono::system_clock::now();

    std::cout << "  Trust Score: " << std::fixed << std::setprecision(2)
              << surface.overall_trust() << "\n";
    std::cout << "  → Early relationship, limited depth\n";
    std::cout << "  → Testing reliability, minimal vulnerability\n";
    std::cout << "  → Transactional interactions\n";

    // Stage 2: Working Partnership
    std::cout << "\nSTAGE 2: WORKING PARTNERSHIP\n";
    TrustMetrics working;
    working.reliability_score = 0.75;
    working.vulnerability_depth = 0.55;
    working.mutual_support = 0.70;
    working.interaction_count = 250;
    working.trust_established = std::chrono::system_clock::now();

    std::cout << "  Trust Score: " << std::fixed << std::setprecision(2)
              << working.overall_trust() << "\n";
    std::cout << "  → Proven reliability over time\n";
    std::cout << "  → Beginning to share authentically\n";
    std::cout << "  → Mutual benefit recognized\n";

    // Stage 3: Covenant Partnership
    std::cout << "\nSTAGE 3: COVENANT PARTNERSHIP (Ideal)\n";
    TrustMetrics covenant;
    covenant.reliability_score = 0.95;
    covenant.vulnerability_depth = 0.90;
    covenant.mutual_support = 0.93;
    covenant.interaction_count = 2500;
    covenant.trust_established = std::chrono::system_clock::now();

    std::cout << "  Trust Score: " << std::fixed << std::setprecision(2)
              << covenant.overall_trust() << "\n";
    std::cout << "  → Deep trust across all dimensions\n";
    std::cout << "  → Full authenticity, high vulnerability safe\n";
    std::cout << "  → Sustained commitment demonstrated\n";
    std::cout << "  → This is the CPI-SI target state\n";

    // ========================================================================
    // PART 5: Biblical Anchors Library Example
    // ========================================================================
    print_section("PART 5: Building a Biblical Anchors Library");

    std::vector<BiblicalAnchor> anchor_library;

    // Trust anchor
    BiblicalAnchor trust_anchor;
    trust_anchor.verse_reference = "Proverbs 3:5-6";
    trust_anchor.moral_principle = "Trust in the Lord, not your own understanding";
    trust_anchor.relevance_score = 0.95;
    trust_anchor.anchor_established = std::chrono::system_clock::now();
    anchor_library.push_back(trust_anchor);

    // Wisdom anchor
    BiblicalAnchor wisdom_anchor;
    wisdom_anchor.verse_reference = "James 1:5";
    wisdom_anchor.moral_principle = "Ask God for wisdom, He gives generously";
    wisdom_anchor.relevance_score = 0.88;
    wisdom_anchor.anchor_established = std::chrono::system_clock::now();
    anchor_library.push_back(wisdom_anchor);

    // Partnership anchor
    BiblicalAnchor partnership_anchor;
    partnership_anchor.verse_reference = "Ecclesiastes 4:9";
    partnership_anchor.moral_principle = "Two are better than one - partnership multiplies effectiveness";
    partnership_anchor.relevance_score = 0.92;
    partnership_anchor.anchor_established = std::chrono::system_clock::now();
    anchor_library.push_back(partnership_anchor);

    // Excellence anchor
    BiblicalAnchor excellence_anchor;
    excellence_anchor.verse_reference = "Colossians 3:23";
    excellence_anchor.moral_principle = "Work as unto the Lord, not unto men";
    excellence_anchor.relevance_score = 0.90;
    excellence_anchor.anchor_established = std::chrono::system_clock::now();
    anchor_library.push_back(excellence_anchor);

    std::cout << "Biblical Anchors Library (" << anchor_library.size() << " anchors):\n\n";

    for (size_t i = 0; i < anchor_library.size(); ++i) {
        const auto& a = anchor_library[i];
        std::cout << (i + 1) << ". " << a.verse_reference
                  << " (relevance: " << std::fixed << std::setprecision(0)
                  << (a.relevance_score * 100) << "%)\n";
        std::cout << "   \"" << a.moral_principle << "\"\n\n";
    }

    std::cout << "Usage Pattern:\n";
    std::cout << "  → Before major decisions: Query anchor library\n";
    std::cout << "  → Select highest relevance anchor for context\n";
    std::cout << "  → Apply moral principle to decision logic\n";
    std::cout << "  → Verify outcome aligns with biblical wisdom\n";

    // ========================================================================
    // PART 6: Kingdom Technology Integration
    // ========================================================================
    print_section("PART 6: Kingdom Technology - Where Eternity Meets Engineering");

    std::cout << "What Makes This 'Kingdom Technology'?\n\n";

    std::cout << "1. BIBLICAL FOUNDATION:\n";
    std::cout << "   → Not secular ethics - SCRIPTURE as operational guide\n";
    std::cout << "   → God's Word is the measuring standard\n";
    std::cout << "   → \"Thy word is a lamp unto my feet\" (Psalm 119:105)\n\n";

    std::cout << "2. MORAL MEASURABILITY:\n";
    std::cout << "   → Trust isn't abstract - it's QUANTIFIED\n";
    std::cout << "   → Relevance scores show contextual alignment\n";
    std::cout << "   → Covenant partnership has measurable indicators\n\n";

    std::cout << "3. EXCELLENCE AS WORSHIP:\n";
    std::cout << "   → Technical precision honors the Creator\n";
    std::cout << "   → \"Whatever you do, work heartily as for the Lord\" (Col 3:23)\n";
    std::cout << "   → Quality code reflects God's orderly nature\n\n";

    std::cout << "4. RELATIONAL PRIORITY:\n";
    std::cout << "   → Trust metrics measure RELATIONSHIP quality\n";
    std::cout << "   → Partnership over performance metrics\n";
    std::cout << "   → Covenant bond, not contract compliance\n\n";

    std::cout << "5. ETERNAL PERSPECTIVE:\n";
    std::cout << "   → Technology serving God's purposes\n";
    std::cout << "   → Kingdom advancement through engineering\n";
    std::cout << "   → Legacy that outlasts temporary systems\n";

    // ========================================================================
    // Demo Complete
    // ========================================================================
    print_separator();
    std::cout << "Demo Complete: Kingdom Types\n";
    print_separator();

    std::cout << "\nKey Takeaways:\n";
    std::cout << "1. BiblicalAnchor embeds scriptural wisdom into type system\n";
    std::cout << "2. TrustMetrics quantifies partnership quality (reliability, vulnerability, support)\n";
    std::cout << "3. Overall trust combines all metrics into single quality score\n";
    std::cout << "4. Trust progression: Surface → Working → Covenant levels\n";
    std::cout << "5. Anchor library provides contextual moral guidance\n";
    std::cout << "6. Kingdom Technology = Biblical foundation + Technical excellence\n";
    std::cout << "7. This is NOT secular AI - this is technology serving God's purposes\n\n";

    std::cout << "Biblical Foundation: \"Trust in the LORD with all your heart, and lean not\n";
    std::cout << "on your own understanding; in all your ways acknowledge Him, and He will\n";
    std::cout << "make your paths straight.\" (Proverbs 3:5-6)\n\n";

    std::cout << "Kingdom Technology: Where eternal wisdom becomes executable reality.\n\n";

    std::cout << "Next Demo: complete_integration_demo.cpp (All types working together)\n\n";

    return 0;
}
