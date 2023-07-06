

#include "huaweicloud/sdrs/v1/model/ReverseProtectionGroupRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ReverseProtectionGroupRequestParams::ReverseProtectionGroupRequestParams()
{
    priorityStation_ = "";
    priorityStationIsSet_ = false;
}

ReverseProtectionGroupRequestParams::~ReverseProtectionGroupRequestParams() = default;

void ReverseProtectionGroupRequestParams::validate()
{
}

web::json::value ReverseProtectionGroupRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(priorityStationIsSet_) {
        val[utility::conversions::to_string_t("priority_station")] = ModelBase::toJson(priorityStation_);
    }

    return val;
}

bool ReverseProtectionGroupRequestParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("priority_station"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority_station"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriorityStation(refVal);
        }
    }
    return ok;
}

std::string ReverseProtectionGroupRequestParams::getPriorityStation() const
{
    return priorityStation_;
}

void ReverseProtectionGroupRequestParams::setPriorityStation(const std::string& value)
{
    priorityStation_ = value;
    priorityStationIsSet_ = true;
}

bool ReverseProtectionGroupRequestParams::priorityStationIsSet() const
{
    return priorityStationIsSet_;
}

void ReverseProtectionGroupRequestParams::unsetpriorityStation()
{
    priorityStationIsSet_ = false;
}

}
}
}
}
}


