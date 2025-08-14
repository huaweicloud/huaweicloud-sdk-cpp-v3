

#include "huaweicloud/iotda/v5/model/DeleteProvisioningTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteProvisioningTemplateRequest::DeleteProvisioningTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

DeleteProvisioningTemplateRequest::~DeleteProvisioningTemplateRequest() = default;

void DeleteProvisioningTemplateRequest::validate()
{
}

web::json::value DeleteProvisioningTemplateRequest::toJson() const
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
bool DeleteProvisioningTemplateRequest::fromJson(const web::json::value& val)
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


std::string DeleteProvisioningTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteProvisioningTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteProvisioningTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteProvisioningTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteProvisioningTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void DeleteProvisioningTemplateRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeleteProvisioningTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeleteProvisioningTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


