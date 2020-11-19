project(MathUltility)
aux_source_directory(. SOURCES)

add_library(MathUltility  SHARED 
	add-source.h 
	export-add.h 
	${SOURCES})
add_custom_command(TARGET MathUltility POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/add-lib/$<CONFIGURATION>/${PROJECT_NAME}.dll ${CMAKE_BINARY_DIR}/$<CONFIGURATION>/${PROJECT_NAME}.dll
		VERBATIM)
	




