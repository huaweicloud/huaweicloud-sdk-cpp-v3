

#include "huaweicloud/iotda/v5/model/ShowDeviceAuthenticationTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceAuthenticationTemplateRequest::ShowDeviceAuthenticationTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

ShowDeviceAuthenticationTemplateRequest::~ShowDeviceAuthenticationTemplateRequest() = default;

void ShowDeviceAuthenticationTemplateRequest::validate()
{
}

web::json::value ShowDeviceAuthenticationTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool ShowDeviceAuthenticationTemplateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDeviceAuthenticationTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeviceAuthenticationTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeviceAuthenticationTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeviceAuthenticationTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeviceAuthenticationTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void ShowDeviceAuthenticationTemplateRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowDeviceAuthenticationTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowDeviceAuthenticationTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


