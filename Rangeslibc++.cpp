// In C++20, the <ranges> header introduces the Ranges library, which provides a set of components for working with ranges of elements. Ranges are a way to express sequences of elements, such as arrays, containers, or views of data, and provide a more expressive and composable way to work with collections.
// Range Concepts: Concepts in the Ranges library define requirements on types and expressions, allowing for compile-time checks to ensure that operations are valid for the given types. Some key concepts include:

// To work with, we need to include 
#include <ranges>
#include <iostream>

using namespace std;


// range: Represents a sequence of elements.
// sized_range: Represents a range that knows its size.
// view: Represents a non-owning view of a range.
// input_range, forward_range, bidirectional_range, random_access_range: Define requirements on ranges based on their traversal and manipulation capabilities.
// Range Adaptors: Range adaptors are functions that transform or filter ranges to produce new ranges. Some common adaptors include:

// std::views::filter: Filters elements of a range based on a predicate.
// std::views::transform: Transforms elements of a range using a unary function.
// std::views::reverse: Reverses the order of elements in a range.
// std::views::take, std::views::drop: Take or drop a specified number of elements from the beginning of a range.
// std::views::split: Splits a range into subranges based on a delimiter.
// Range Algorithms: Range algorithms operate on ranges and perform various operations like sorting, searching, and transforming elements. These algorithms are often more expressive and concise compared to their counterparts in the C++ Standard Library. Some common algorithms include:

// std::ranges::find: Finds the first occurrence of a value in a range.
// std::ranges::sort: Sorts elements in a range.
// std::ranges::transform: Transforms elements in a range using a unary function.
// std::ranges::copy: Copies elements from a source range to a destination range.
// std::ranges::accumulate: Computes the sum of elements in a range.
// std::ranges::count_if: Counts elements in a range that satisfy a predicate.
// Views vs. Containers: Views are non-owning ranges that provide a view into existing data, while containers are owning ranges that manage their own memory. Views are lightweight and efficient for composing operations on data without copying or modifying the original data.

// Lazy Evaluation: Many range operations are evaluated lazily, meaning that the actual computation is deferred until the result is needed. This allows for efficient composition of operations without unnecessary intermediate data structures.
