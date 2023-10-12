

#include "huaweicloud/rds/v3/model/ShowSecondLevelMonitoringRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSecondLevelMonitoringRequest::ShowSecondLevelMonitoringRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowSecondLevelMonitoringRequest::~ShowSecondLevelMonitoringRequest() = default;

void ShowSecondLevelMonitoringRequest::validate()
{
}

web::json::value ShowSecondLevelMonitoringRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowSecondLevelMonitoringRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowSecondLevelMonitoringRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSecondLevelMonitoringRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSecondLevelMonitoringRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSecondLevelMonitoringRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowSecondLevelMonitoringRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSecondLevelMonitoringRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSecondLevelMonitoringRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSecondLevelMonitoringRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


