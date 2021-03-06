#ifndef APOENA_MSI_MARKETDATA_MESSAGES_BID_HPP
#define APOENA_MSI_MARKETDATA_MESSAGES_BID_HPP

#include <bitset>
#include <utility>
#include <vector>
#include <map>
#include <msi/decimal/decimal.hpp>
#include <msi/marketdata/messages/marketdata_messages_export.hpp>
#include <msi/marketdata/messages/field_values.hpp>


namespace apoena
{
namespace msi
{
namespace marketdata
{
namespace messages
{

class MARKETDATA_MESSAGES_Export bid
{
public:
  enum field_index
  {
    ix_seqnum = 0,
    ix_update_action,
    ix_security_id,
    ix_entry_price,
    ix_entry_size,
    ix_entry_date,
    ix_entry_time,
    ix_buyer,
    ix_position,
    ix_order_id,
    ix_field_count
  };

  void reset();

  std::pair<bool, uint32_t> seqnum() const;
  void set_seqnum( uint32_t val );

  std::pair<bool, uint32_t> update_action() const;
  void set_update_action( uint32_t val );

  std::pair<bool, uint64_t> security_id() const;
  void set_security_id( uint64_t val );

  std::pair<bool, decimal> entry_price() const;
  void set_entry_price( decimal val );

  std::pair<bool, int64_t> entry_size() const;
  void set_entry_size( int64_t val );

  std::pair<bool, uint32_t> entry_date() const;
  void set_entry_date( uint32_t val );

  std::pair<bool, uint32_t> entry_time() const;
  void set_entry_time( uint32_t val );

  std::pair<bool, const std::string&> buyer() const;
  void set_buyer( const std::string& val );

  std::pair<bool, uint32_t> position() const;
  void set_position( uint32_t val );

  std::pair<bool, const std::string&> order_id() const;
  void set_order_id( const std::string& val );

  const std::bitset<ix_field_count>& presence_map() const;
  void set_presence_map( uint32_t val );

private:

  std::bitset<ix_field_count> presence_map_;

  uint32_t seqnum_;
  uint32_t update_action_;
  uint64_t security_id_;
  decimal entry_price_;
  int64_t entry_size_;
  uint32_t entry_date_;
  uint32_t entry_time_;
  std::string buyer_;
  uint32_t position_;
  std::string order_id_;

};

} //end of namespace
} //end of namespace
} //end of namespace
} //end of namespace

#endif /* APOENA_MSI_MARKETDATA_MESSAGES_BID_HPP */

