

#include "huaweicloud/rds/v3/model/UpdateInstanceConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstanceConfigurationRequest::UpdateInstanceConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceConfigurationRequest::~UpdateInstanceConfigurationRequest() = default;

void UpdateInstanceConfigurationRequest::validate()
{
}

web::json::value UpdateInstanceConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateInstanceConfigurationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateInstanceConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateInstanceConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateInstanceConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateInstanceConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateInstanceConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateInstanceConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateInstanceConfigurationRequestBody UpdateInstanceConfigurationRequest::getBody() const
{
    return body_;
}

void UpdateInstanceConfigurationRequest::setBody(const UpdateInstanceConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


