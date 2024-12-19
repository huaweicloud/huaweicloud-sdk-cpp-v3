

#include "huaweicloud/rds/v3/model/ListUpdateBackupEnhancePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListUpdateBackupEnhancePolicyRequest::ListUpdateBackupEnhancePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
}

ListUpdateBackupEnhancePolicyRequest::~ListUpdateBackupEnhancePolicyRequest() = default;

void ListUpdateBackupEnhancePolicyRequest::validate()
{
}

web::json::value ListUpdateBackupEnhancePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }

    return val;
}
bool ListUpdateBackupEnhancePolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    return ok;
}


std::string ListUpdateBackupEnhancePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ListUpdateBackupEnhancePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListUpdateBackupEnhancePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListUpdateBackupEnhancePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListUpdateBackupEnhancePolicyRequest::getTimeZone() const
{
    return timeZone_;
}

void ListUpdateBackupEnhancePolicyRequest::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool ListUpdateBackupEnhancePolicyRequest::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void ListUpdateBackupEnhancePolicyRequest::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

}
}
}
}
}


