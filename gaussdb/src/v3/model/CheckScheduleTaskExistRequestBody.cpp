

#include "huaweicloud/gaussdb/v3/model/CheckScheduleTaskExistRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckScheduleTaskExistRequestBody::CheckScheduleTaskExistRequestBody()
{
    scheduleType_ = "";
    scheduleTypeIsSet_ = false;
    proxyId_ = "";
    proxyIdIsSet_ = false;
}

CheckScheduleTaskExistRequestBody::~CheckScheduleTaskExistRequestBody() = default;

void CheckScheduleTaskExistRequestBody::validate()
{
}

web::json::value CheckScheduleTaskExistRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleTypeIsSet_) {
        val[utility::conversions::to_string_t("schedule_type")] = ModelBase::toJson(scheduleType_);
    }
    if(proxyIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_id")] = ModelBase::toJson(proxyId_);
    }

    return val;
}
bool CheckScheduleTaskExistRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schedule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyId(refVal);
        }
    }
    return ok;
}


std::string CheckScheduleTaskExistRequestBody::getScheduleType() const
{
    return scheduleType_;
}

void CheckScheduleTaskExistRequestBody::setScheduleType(const std::string& value)
{
    scheduleType_ = value;
    scheduleTypeIsSet_ = true;
}

bool CheckScheduleTaskExistRequestBody::scheduleTypeIsSet() const
{
    return scheduleTypeIsSet_;
}

void CheckScheduleTaskExistRequestBody::unsetscheduleType()
{
    scheduleTypeIsSet_ = false;
}

std::string CheckScheduleTaskExistRequestBody::getProxyId() const
{
    return proxyId_;
}

void CheckScheduleTaskExistRequestBody::setProxyId(const std::string& value)
{
    proxyId_ = value;
    proxyIdIsSet_ = true;
}

bool CheckScheduleTaskExistRequestBody::proxyIdIsSet() const
{
    return proxyIdIsSet_;
}

void CheckScheduleTaskExistRequestBody::unsetproxyId()
{
    proxyIdIsSet_ = false;
}

}
}
}
}
}


