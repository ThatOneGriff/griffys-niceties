#pragma once
#ifndef GRIFFYS_NICETIES_HPP
#define GRIFFYS_NICETIES_HPP

/* C++ headers */
#include <cstdint>     /// Neat types
#include <iostream>    /// `std::cerr`
#include <string_view> /// `std::string_view`

/// Expansion IDEAs:
/// - colored i/o (maybe with `#ifdef GRIFFYS_NICETIES_COLORED_IO`);
/// - deinit stack (like in R.S.: The Game); will it be necessary in C++?
/// - logging into files.


/* = Variables & macros = */

#define UNUSED(expr) do { static_cast<void>(expr); } while (0)
inline constexpr int EXIT_GOOD = 0; /// I don't want to include the whole `<stdlib.h>` for this.
inline constexpr int EXIT_FAIL = 1; /// I don't want to include the whole `<stdlib.h>` for this.


/* = Typedefs = */

using i8  = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

using u8  = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using f32 = float;
using f64 = double;


/* = Predefs = */

inline void log_cerr (const std::string_view err_header, const std::string_view info_log);
inline void log_cwarn(const std::string_view wrn_header, const std::string_view info_log);
inline void log_cinfo(const std::string_view inf_header, const std::string_view info_log);


/* = Body = */

inline void log_cerr(const std::string_view err_header, const std::string_view info_log)
{
    std::cerr << "= " << err_header << ":\n" << info_log << "\n\n";
    return;
}


inline void log_cwarn(const std::string_view wrn_header, const std::string_view info_log)
{
    std::cerr << "= " << wrn_header << ":\n" << info_log << "\n\n";
    return;
}


inline void log_cinfo(const std::string_view inf_header, const std::string_view info_log)
{
    std::cout << "= " << inf_header << ":\n" << info_log << "\n\n";
    return;
}


#endif /// GRIFFYS_NICETIES_HPP
