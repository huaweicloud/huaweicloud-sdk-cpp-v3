

#include "huaweicloud/rds/v3/model/SetSecondLevelMonitorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetSecondLevelMonitorRequest::SetSecondLevelMonitorRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SetSecondLevelMonitorRequest::~SetSecondLevelMonitorRequest() = default;

void SetSecondLevelMonitorRequest::validate()
{
}

web::json::value SetSecondLevelMonitorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetSecondLevelMonitorRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SecondMonitor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetSecondLevelMonitorRequest::getInstanceId() const
{
    return instanceId_;
}

void SetSecondLevelMonitorRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetSecondLevelMonitorRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetSecondLevelMonitorRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetSecondLevelMonitorRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetSecondLevelMonitorRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetSecondLevelMonitorRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetSecondLevelMonitorRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SecondMonitor SetSecondLevelMonitorRequest::getBody() const
{
    return body_;
}

void SetSecondLevelMonitorRequest::setBody(const SecondMonitor& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetSecondLevelMonitorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetSecondLevelMonitorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


