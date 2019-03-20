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
#ifndef LIBBITCOIN__MESSAGE_SEND_COMPACT_BLOCKS_HPP
#define LIBBITCOIN__MESSAGE_SEND_COMPACT_BLOCKS_HPP

//#include <istream>
//#include <memory>
//#include <string>
#include <bitcoin/bitcoin/define.hpp>
#include <bitcoin/bitcoin/message/send_compact.hpp>
#include <utility_data_chunk.hpp>
//#include <bitcoin/bitcoin/utility/reader.hpp>
//#include <bitcoin/bitcoin/utility/writer.hpp>

namespace libbitcoin {
//namespace message {
namespace api {

class BC_API message_send_compact
{
public:
//    typedef std::shared_ptr<send_compact> ptr;
//    typedef std::shared_ptr<const send_compact> const_ptr;

    static message_send_compact factory(uint32_t version, const utility_data_chunk& data);
//    static message_send_compact factory(uint32_t version, std::istream& stream);
//    static message_send_compact factory(uint32_t version, reader& source);
    static size_t satoshi_fixed_size(uint32_t version);

    message_send_compact();
    message_send_compact(bool high_bandwidth_mode, uint64_t version);
//    message_send_compact(const message_send_compact& other);
    message_send_compact(message_send_compact&& other);

    bool high_bandwidth_mode() const;
    void set_high_bandwidth_mode(bool mode);

    uint64_t version() const;
    void set_version(uint64_t version);

    bool from_data(uint32_t version, const utility_data_chunk& data);
//    bool from_data(uint32_t version, std::istream& stream);
//    bool from_data(uint32_t version, reader& source);
    utility_data_chunk to_data(uint32_t version) const;
//    void to_data(uint32_t version, std::ostream& stream) const;
//    void to_data(uint32_t version, writer& sink) const;
    bool is_valid() const;
    void reset();
    size_t serialized_size(uint32_t version) const;

    /// This class is move assignable but not copy assignable.
//    message_send_compact& operator=(message_send_compact&& other);
    message_send_compact& assign(message_send_compact&& other);
//    void operator=(const message_send_compact&) = delete;

//    bool operator==(const message_send_compact& other) const;
    bool eq(const message_send_compact& other) const;
//    bool operator!=(const message_send_compact& other) const;

//    static const std::string command;
//    static const uint32_t version_minimum;
//    static const uint32_t version_maximum;
//
public:
    message::send_compact getValue() {
        return value;
    }

    void setValue(message::send_compact value) {
        this->value = value;
    }
private:
    message::send_compact value;
//    bool high_bandwidth_mode_;
//    uint64_t version_;
};

} // namespace api
//} // namespace message
} // namespace libbitcoin

#endif
