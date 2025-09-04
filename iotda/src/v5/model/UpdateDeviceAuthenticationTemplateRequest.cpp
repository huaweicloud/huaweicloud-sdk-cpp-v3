

#include "huaweicloud/iotda/v5/model/UpdateDeviceAuthenticationTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceAuthenticationTemplateRequest::UpdateDeviceAuthenticationTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeviceAuthenticationTemplateRequest::~UpdateDeviceAuthenticationTemplateRequest() = default;

void UpdateDeviceAuthenticationTemplateRequest::validate()
{
}

web::json::value UpdateDeviceAuthenticationTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDeviceAuthenticationTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAuthenticationTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceAuthenticationTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDeviceAuthenticationTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDeviceAuthenticationTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDeviceAuthenticationTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void UpdateDeviceAuthenticationTemplateRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateDeviceAuthenticationTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

UpdateAuthenticationTemplate UpdateDeviceAuthenticationTemplateRequest::getBody() const
{
    return body_;
}

void UpdateDeviceAuthenticationTemplateRequest::setBody(const UpdateAuthenticationTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeviceAuthenticationTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeviceAuthenticationTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


