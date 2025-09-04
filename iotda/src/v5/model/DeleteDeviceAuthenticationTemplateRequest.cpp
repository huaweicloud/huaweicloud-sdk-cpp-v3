

#include "huaweicloud/iotda/v5/model/DeleteDeviceAuthenticationTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceAuthenticationTemplateRequest::DeleteDeviceAuthenticationTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

DeleteDeviceAuthenticationTemplateRequest::~DeleteDeviceAuthenticationTemplateRequest() = default;

void DeleteDeviceAuthenticationTemplateRequest::validate()
{
}

web::json::value DeleteDeviceAuthenticationTemplateRequest::toJson() const
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
bool DeleteDeviceAuthenticationTemplateRequest::fromJson(const web::json::value& val)
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


std::string DeleteDeviceAuthenticationTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDeviceAuthenticationTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDeviceAuthenticationTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDeviceAuthenticationTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDeviceAuthenticationTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void DeleteDeviceAuthenticationTemplateRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeleteDeviceAuthenticationTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeleteDeviceAuthenticationTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


