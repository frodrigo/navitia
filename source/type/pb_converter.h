#pragma once
#include "data.h"
#include "type/type.pb.h"


#define null_time_period boost::posix_time::time_period(boost::posix_time::not_a_date_time, boost::posix_time::seconds(0))

namespace navitia{
void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::City* city, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::StopArea* stop_area, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::StopPoint* stop_point, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::Address* address, int house_number,type::GeographicalCoord& coord,
        int max_depth = 0, const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::Line* line, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::JourneyPattern* journey_pattern, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::Route* journey_pattern, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::Network* network, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::CommercialMode * commercial_mode, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::PhysicalMode * physical_mode, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::Connection * connection, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::JourneyPatternPoint * journey_pattern_point, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::Company * company, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::StopDateTime *stop_time, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::VehicleJourney *vehicle_journey, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::StopTime *stop_time, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_placemark(const type::StopPoint & stop_point, const type::Data &data, pbnavitia::PlaceMark* pm, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_street_section(const georef::Path & path, const type::Data &data, pbnavitia::Section* section, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_message(const type::Message & message, const type::Data &data, pbnavitia::Message* pb_message, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void create_pb(const navitia::georef::Path& path, const navitia::type::Data& data, pbnavitia::StreetNetwork* sn,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

void fill_pb_object(type::idx_t idx, const type::Data &data, pbnavitia::Poi* poi, int max_depth = 0,
        const boost::posix_time::ptime& now = boost::posix_time::not_a_date_time,
        const boost::posix_time::time_period& action_period = null_time_period);

}//namespace navitia
