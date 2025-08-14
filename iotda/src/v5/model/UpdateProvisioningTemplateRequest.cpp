

#include "huaweicloud/iotda/v5/model/UpdateProvisioningTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateProvisioningTemplateRequest::UpdateProvisioningTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProvisioningTemplateRequest::~UpdateProvisioningTemplateRequest() = default;

void UpdateProvisioningTemplateRequest::validate()
{
}

web::json::value UpdateProvisioningTemplateRequest::toJson() const
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
bool UpdateProvisioningTemplateRequest::fromJson(const web::json::value& val)
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
            UpdateProvisioningTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProvisioningTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateProvisioningTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateProvisioningTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateProvisioningTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateProvisioningTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void UpdateProvisioningTemplateRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateProvisioningTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateProvisioningTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

UpdateProvisioningTemplate UpdateProvisioningTemplateRequest::getBody() const
{
    return body_;
}

void UpdateProvisioningTemplateRequest::setBody(const UpdateProvisioningTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProvisioningTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProvisioningTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


