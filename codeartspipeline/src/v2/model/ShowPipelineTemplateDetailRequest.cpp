

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineTemplateDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineTemplateDetailRequest::ShowPipelineTemplateDetailRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

ShowPipelineTemplateDetailRequest::~ShowPipelineTemplateDetailRequest() = default;

void ShowPipelineTemplateDetailRequest::validate()
{
}

web::json::value ShowPipelineTemplateDetailRequest::toJson() const
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
bool ShowPipelineTemplateDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowPipelineTemplateDetailRequest::getTenantId() const
{
    return tenantId_;
}

void ShowPipelineTemplateDetailRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowPipelineTemplateDetailRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowPipelineTemplateDetailRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowPipelineTemplateDetailRequest::getTemplateId() const
{
    return templateId_;
}

void ShowPipelineTemplateDetailRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowPipelineTemplateDetailRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowPipelineTemplateDetailRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


