## 🎯 The Fundamental Principle

**Opening Block = "Here's what exists and what it CAN do"**  
**Body Block = "Here's the code that actually USES those capabilities"**

The distinction is NOT based on whether code contains logic, but on whether it **defines capabilities** or **exercises capabilities**.

### The Core Distinction in Practice

**Ask yourself:** "If I deleted everything after this section, would I have:"
- ✅ **Opening Block** — A complete catalog of tools, types, and capabilities (what's possible)
- ✅ **Body Block** — Actual work being performed using those tools (what's happening)

**The Litmus Test:**

| **Code Characteristic**                | **Opening or Body?** | **Why?**                                      |
| -------------------------------------- | -------------------- | --------------------------------------------- |
| Defines a struct with methods          | Opening              | Establishing capability, not using it         |
| Creates an instance of that struct     | Body                 | Exercising the capability                     |
| Declares a function signature          | Opening              | Announcing what CAN be called                 |
| Calls that function                    | Body                 | Actually calling it (making something happen) |
| Establishes a constant value           | Opening              | Defining what exists                          |
| Uses that constant in a calculation    | Body                 | Exercising the defined value                  |
| Includes a library                     | Opening              | Making capabilities available                 |
| Uses library functions to process data | Body                 | Exercising those capabilities                 |

**Key Insight:** Complexity is irrelevant. A 1000-line struct with intricate methods is Opening (defines capability). A 3-line function that creates an instance is Body (exercises capability).

### Architectural Flow Visualization

```mermaid
graph LR
    subgraph "Opening Block: CAPABILITY DECLARATION"
        D1[Define Types<br/>structs, enums, aliases]
        D2[Declare Functions<br/>method signatures]
        D3[Establish Constants<br/>immutable values]
        D4[Include Dependencies<br/>enable features]
    end
    
    subgraph "Body Block: CAPABILITY EXECUTION"
        E1[Create Instances<br/>instantiate types]
        E2[Call Methods<br/>invoke functions]
        E3[Manipulate Data<br/>transform state]
        E4[Control Flow<br/>conditional logic]
    end
    
    D1 -.->|enables| E1
    D2 -.->|enables| E2
    D3 -.->|enables| E3
    D4 -.->|enables| E4
    
    E1 -->|uses| D1
    E2 -->|uses| D2
    E3 -->|uses| D3
    E4 -->|uses| D4

    style D1 fill:#e1f5ff,stroke:#0066cc,stroke-width:2px
    style D2 fill:#e1f5ff,stroke:#0066cc,stroke-width:2px
    style D3 fill:#e1f5ff,stroke:#0066cc,stroke-width:2px
    style D4 fill:#e1f5ff,stroke:#0066cc,stroke-width:2px
    style E1 fill:#d4edda,stroke:#28a745,stroke-width:2px
    style E2 fill:#d4edda,stroke:#28a745,stroke-width:2px
    style E3 fill:#d4edda,stroke:#28a745,stroke-width:2px
    style E4 fill:#d4edda,stroke:#28a745,stroke-width:2px
```

> [!NOTE]
> **Bidirectional Relationship**  
> Opening block **enables** the body block (provides capabilities), and body block **uses** the opening block (exercises capabilities). They form a complete architectural system.

