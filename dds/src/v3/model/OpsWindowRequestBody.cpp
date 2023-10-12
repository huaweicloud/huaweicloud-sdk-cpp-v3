

#include "huaweicloud/dds/v3/model/OpsWindowRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




OpsWindowRequestBody::OpsWindowRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

OpsWindowRequestBody::~OpsWindowRequestBody() = default;

void OpsWindowRequestBody::validate()
{
}

web::json::value OpsWindowRequestBody::toJson() const
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
bool OpsWindowRequestBody::fromJson(const web::json::value& val)
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


std::string OpsWindowRequestBody::getStartTime() const
{
    return startTime_;
}

void OpsWindowRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpsWindowRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpsWindowRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string OpsWindowRequestBody::getEndTime() const
{
    return endTime_;
}

void OpsWindowRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool OpsWindowRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void OpsWindowRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


