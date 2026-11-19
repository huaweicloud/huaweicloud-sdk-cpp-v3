

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyOpsWindowRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyOpsWindowRequestBody::ModifyOpsWindowRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ModifyOpsWindowRequestBody::~ModifyOpsWindowRequestBody() = default;

void ModifyOpsWindowRequestBody::validate()
{
}

web::json::value ModifyOpsWindowRequestBody::toJson() const
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
bool ModifyOpsWindowRequestBody::fromJson(const web::json::value& val)
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


std::string ModifyOpsWindowRequestBody::getStartTime() const
{
    return startTime_;
}

void ModifyOpsWindowRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ModifyOpsWindowRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ModifyOpsWindowRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ModifyOpsWindowRequestBody::getEndTime() const
{
    return endTime_;
}

void ModifyOpsWindowRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ModifyOpsWindowRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ModifyOpsWindowRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


