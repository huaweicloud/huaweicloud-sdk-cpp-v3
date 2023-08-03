

#include "huaweicloud/rds/v3/model/OpsWindowRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OpsWindowRequest::OpsWindowRequest()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

OpsWindowRequest::~OpsWindowRequest() = default;

void OpsWindowRequest::validate()
{
}

web::json::value OpsWindowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool OpsWindowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

std::string OpsWindowRequest::getStartTime() const
{
    return startTime_;
}

void OpsWindowRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpsWindowRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpsWindowRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string OpsWindowRequest::getEndTime() const
{
    return endTime_;
}

void OpsWindowRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool OpsWindowRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void OpsWindowRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


