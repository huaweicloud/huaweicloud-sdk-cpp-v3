

#include "huaweicloud/iotda/v5/model/ShowProvisioningTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowProvisioningTemplateRequest::ShowProvisioningTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

ShowProvisioningTemplateRequest::~ShowProvisioningTemplateRequest() = default;

void ShowProvisioningTemplateRequest::validate()
{
}

web::json::value ShowProvisioningTemplateRequest::toJson() const
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
bool ShowProvisioningTemplateRequest::fromJson(const web::json::value& val)
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


std::string ShowProvisioningTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowProvisioningTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowProvisioningTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowProvisioningTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowProvisioningTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void ShowProvisioningTemplateRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowProvisioningTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowProvisioningTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


