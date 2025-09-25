

#include "huaweicloud/codeartspipeline/v2/model/DeletePipelineTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePipelineTemplateRequest::DeletePipelineTemplateRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

DeletePipelineTemplateRequest::~DeletePipelineTemplateRequest() = default;

void DeletePipelineTemplateRequest::validate()
{
}

web::json::value DeletePipelineTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool DeletePipelineTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
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


std::string DeletePipelineTemplateRequest::getTenantId() const
{
    return tenantId_;
}

void DeletePipelineTemplateRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool DeletePipelineTemplateRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void DeletePipelineTemplateRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string DeletePipelineTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void DeletePipelineTemplateRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeletePipelineTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeletePipelineTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


