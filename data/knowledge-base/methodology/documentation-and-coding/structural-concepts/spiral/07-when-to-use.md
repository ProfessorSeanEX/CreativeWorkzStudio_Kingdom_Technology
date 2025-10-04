## 🔍 When to Use Spirals

### Spiral-Appropriate Scenarios:

```yaml
Use_Spiral_When:
  complex_concepts:
    description: Concept too rich for single explanation
    approach: Introduce simply, revisit with more depth later
    example: "Functions" concept introduced basic, then parameters, then first-class usage
  
  progressive_complexity:
    description: Understanding builds through application
    approach: Teach concept, apply it, revisit with application insights
    example: "Dependency injection" basic, then in practice, then architectural implications
  
  layered_systems:
    description: Each system layer reveals new aspects
    approach: Introduce module, build on it, revisit enhanced version at higher layer
    example: "Authentication" at basic level, then with sessions, then with distributed systems
  
  iterative_refinement:
    description: Understanding deepens through iteration
    approach: Rough concept, apply, refine understanding, apply again
    example: "Test-driven development" concept, first attempt, lessons learned, deeper application
```

---

### Anti-Patterns to Avoid:

```yaml
Avoid_These_Patterns:
  same_level_circle:
    problem: "A→B→C→A" all at same depth
    fix: If revisiting A, must be at NEW depth (A₂ not A₁)
  
  endless_spiraling:
    problem: Revisiting same concept infinitely without progression
    fix: Each revisit must ADD significant new understanding
  
  spiral_without_ladder:
    problem: Deepening without clear directional structure
    fix: Spiral must be WITHIN ladder framework (maintain up/down direction)
  
  premature_spiraling:
    problem: Revisiting before enough new context accumulated
    fix: Only spiral when significant new understanding available
```

---

