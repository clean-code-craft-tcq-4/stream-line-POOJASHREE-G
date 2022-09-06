#include <sstream>
#include <cassert>
#include "Sender.hpp"

void testMyFunctionDisplay()
{
    // Arrange
    std::ostringstream output_buffer;

    // Act
    toBeTested(output_buffer);

    // Assert
    assert(output_buffer.str() == "This is the correct output.");
}