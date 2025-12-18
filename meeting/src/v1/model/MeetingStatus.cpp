

#include "huaweicloud/meeting/v1/model/MeetingStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {



MeetingStatus::MeetingStatus()
{
}

MeetingStatus::~MeetingStatus()
{
}

void MeetingStatus::validate()
{
}

web::json::value MeetingStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eMeetingStatus::MeetingStatus_schedule) val = web::json::value::string(U("schedule"));
    if (value_ == eMeetingStatus::MeetingStatus_created) val = web::json::value::string(U("created"));
    if (value_ == eMeetingStatus::MeetingStatus_destroyed) val = web::json::value::string(U("destroyed"));

    return val;
}

bool MeetingStatus::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("schedule")) value_ = eMeetingStatus::MeetingStatus_schedule;
    if (s == utility::conversions::to_string_t("created")) value_ = eMeetingStatus::MeetingStatus_created;
    if (s == utility::conversions::to_string_t("destroyed")) value_ = eMeetingStatus::MeetingStatus_destroyed;
    return true;
}

MeetingStatus::eMeetingStatus MeetingStatus::getValue() const
{
   return value_;
}

void MeetingStatus::setValue(MeetingStatus::eMeetingStatus const value)
{
   value_ = value;
}


}
}
}
}
}


