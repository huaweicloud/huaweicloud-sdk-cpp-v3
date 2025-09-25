

#include "huaweicloud/gaussdbforopengauss/v3/model/CollectAspRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CollectAspRequestBody::CollectAspRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

CollectAspRequestBody::~CollectAspRequestBody() = default;

void CollectAspRequestBody::validate()
{
}

web::json::value CollectAspRequestBody::toJson() const
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
bool CollectAspRequestBody::fromJson(const web::json::value& val)
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


std::string CollectAspRequestBody::getStartTime() const
{
    return startTime_;
}

void CollectAspRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CollectAspRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CollectAspRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CollectAspRequestBody::getEndTime() const
{
    return endTime_;
}

void CollectAspRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CollectAspRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CollectAspRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


