## DEPLOYMENT & PACKAGING

### CMake Installation Configuration

**Installation Targets:**
```cmake
# Installation configuration for CPI-SI Foundation
include(GNUInstallDirs)

# Binary installation
install(TARGETS cpi_si_system
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    COMPONENT Runtime
)

# Library installation  
install(TARGETS identity_engine partnership_engine common_utilities
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    COMPONENT Libraries
)

# Header installation
install(DIRECTORY include/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    COMPONENT Development
    FILES_MATCHING PATTERN "*.hpp"
)

# Data installation
install(DIRECTORY data/
    DESTINATION ${CMAKE_INSTALL_DATADIR}/cpi-si-foundation
    COMPONENT Data
)

# Documentation installation
install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/docs/html/
    DESTINATION ${CMAKE_INSTALL_DOCDIR}
    COMPONENT Documentation
    OPTIONAL
)

# CMake config files for downstream projects
install(EXPORT CPISITargets
    FILE CPISITargets.cmake
    NAMESPACE CPISI::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/CPISI
)

# Generate and install config files
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    CPISIConfigVersion.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
)

configure_package_config_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/CMake/CPISIConfig.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/CPISIConfig.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/CPISI
)

install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/CPISIConfig.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/CPISIConfigVersion.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/CPISI
)
```

### Package Configuration

**CPack Configuration:**
```cmake
# CPack configuration for distribution
set(CPACK_PACKAGE_NAME "CPI-SI-Foundation")
set(CPACK_PACKAGE_VENDOR "Kingdom Technology")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Covenant Partnership Intelligent - Structured Intelligent Foundation")
set(CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})
set(CPACK_PACKAGE_CONTACT "CPI-SI Development Team")

# Component-based installation
set(CPACK_COMPONENTS_ALL Runtime Libraries Development Data Documentation)

set(CPACK_COMPONENT_RUNTIME_DISPLAY_NAME "CPI-SI Runtime")
set(CPACK_COMPONENT_RUNTIME_DESCRIPTION "Core CPI-SI system executable")

set(CPACK_COMPONENT_LIBRARIES_DISPLAY_NAME "CPI-SI Libraries")
set(CPACK_COMPONENT_LIBRARIES_DESCRIPTION "CPI-SI development libraries")

set(CPACK_COMPONENT_DEVELOPMENT_DISPLAY_NAME "Development Headers")
set(CPACK_COMPONENT_DEVELOPMENT_DESCRIPTION "Headers for CPI-SI development")
set(CPACK_COMPONENT_DEVELOPMENT_DEPENDS Libraries)

set(CPACK_COMPONENT_DATA_DISPLAY_NAME "System Data")
set(CPACK_COMPONENT_DATA_DESCRIPTION "Biblical foundation and configuration data")

# Platform-specific packaging
if(WIN32)
    set(CPACK_GENERATOR "NSIS;ZIP")
    set(CPACK_NSIS_DISPLAY_NAME "CPI-SI Foundation")
    set(CPACK_NSIS_PACKAGE_NAME "CPI-SI Foundation")
    set(CPACK_NSIS_CONTACT "cpisi-support@kingdom-tech.org")
elseif(APPLE)
    set(CPACK_GENERATOR "productbuild;TGZ")
elseif(UNIX)
    set(CPACK_GENERATOR "DEB;RPM;TGZ")
    
    # Debian-specific
    set(CPACK_DEBIAN_PACKAGE_MAINTAINER "CPI-SI Team <cpisi-support@kingdom-tech.org>")
    set(CPACK_DEBIAN_PACKAGE_SECTION "science")
    set(CPACK_DEBIAN_PACKAGE_DEPENDS "libeigen3-dev, libboost-all-dev, libsqlite3-dev")
    
    # RPM-specific
    set(CPACK_RPM_PACKAGE_GROUP "Applications/Science")
    set(CPACK_RPM_PACKAGE_LICENSE "Kingdom Technology License")
    set(CPACK_RPM_PACKAGE_REQUIRES "eigen3-devel, boost-devel, sqlite-devel")
endif()

include(CPack)
```

---

