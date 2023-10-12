

#include "huaweicloud/dds/v3/model/SwitchSlowlogDesensitizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SwitchSlowlogDesensitizationRequest::SwitchSlowlogDesensitizationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SwitchSlowlogDesensitizationRequest::~SwitchSlowlogDesensitizationRequest() = default;

void SwitchSlowlogDesensitizationRequest::validate()
{
}

web::json::value SwitchSlowlogDesensitizationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchSlowlogDesensitizationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SwitchSlowlogDesensitizationRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchSlowlogDesensitizationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchSlowlogDesensitizationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchSlowlogDesensitizationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchSlowlogDesensitizationRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchSlowlogDesensitizationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchSlowlogDesensitizationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchSlowlogDesensitizationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchSlowlogDesensitizationRequest::getStatus() const
{
    return status_;
}

void SwitchSlowlogDesensitizationRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchSlowlogDesensitizationRequest::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchSlowlogDesensitizationRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


