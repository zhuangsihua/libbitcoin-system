/**
 * Copyright (c) 2011-2017 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN__CONFIG_BASE58_HPP
#define LIBBITCOIN__CONFIG_BASE58_HPP

#include <iostream>
#include <string>
#include <bitcoin/bitcoin/define.hpp>
#include <bitcoin/bitcoin/config/base58.hpp>
#include <bitcoin/utility_data_slice.hpp>
#include <bitcoin/utility_data_chunk.hpp>

namespace libbitcoin {
namespace config {
namespace api {

/**
 * Serialization helper for base58 encoded text.
 */
class BC_API config_base58 : public config::base58
{
public:

    /**
     * Default constructor.
     */
    config_base58();

    /**
     * Initialization constructor.
     * @param[in]  base58  The value to initialize with.
     */
    config_base58(const std::string& base58);

    /**
     * Initialization constructor.
     * @param[in]  value  The value to initialize with.
     */
    config_base58(const libbitcoin::api::utility_data_chunk& value);

    /**
     * Copy constructor.
     * @param[in]  other  The object to copy into self on construct.
     */
    config_base58(const config_base58& other);

    /**
     * Overload cast to internal type.
     * @return  This object's value cast to internal type reference.
     */
//    operator const data_chunk&() const;
    const libbitcoin::api::utility_data_chunk& to_data_chunk() const;

    /**
     * Overload cast to generic data reference.
     * @return  This object's value cast to a generic data.
     */
//    operator data_slice() const;
    libbitcoin::api::utility_data_slice to_data_slice() const;

    /**
     * Overload stream in. Throws if input is invalid.
     * @param[in]   input     The input stream to read the value from.
     * @param[out]  argument  The object to receive the read value.
     * @return                The input stream reference.
     */
//    friend std::istream& operator>>(std::istream& input, base58& argument);

    /**
     * Overload stream out.
     * @param[in]   output    The output stream to write the value to.
     * @param[out]  argument  The object from which to obtain the value.
     * @return                The output stream reference.
     */
//    friend std::ostream& operator<<(std::ostream& output, const base58& argument);

//private:
//
//    /**
//     * The state of this object.
//     */
//    data_chunk value_;
};

} // namespace api
} // namespace config
} // namespace libbitcoin

#endif