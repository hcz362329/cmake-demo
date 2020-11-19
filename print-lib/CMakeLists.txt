project(PrintUltility)
aux_source_directory(. SOURCES)

add_library(PrintUltility SHARED 
	print-source.h 
	export-print.h 
	${SOURCES})

add_custom_command(TARGET PrintUltility POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/print-lib/$<CONFIGURATION>/${PROJECT_NAME}.dll ${CMAKE_BINARY_DIR}/$<CONFIGURATION>/${PROJECT_NAME}.dll
		VERBATIM)
