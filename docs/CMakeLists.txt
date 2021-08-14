file(GLOB DOCS_LIST CONFIGURE_DEPENDS "*.md")

foreach(file ${SOURCE_LIST})
    source_group (TREE ${CMAKE_CURRENT_LIST_DIR}
        PREFIX "docs"               
        FILES  ${file}
    )
endforeach()