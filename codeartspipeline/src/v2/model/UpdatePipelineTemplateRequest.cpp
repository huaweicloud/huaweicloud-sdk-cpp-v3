

#include "huaweicloud/codeartspipeline/v2/model/UpdatePipelineTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePipelineTemplateRequest::UpdatePipelineTemplateRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePipelineTemplateRequest::~UpdatePipelineTemplateRequest() = default;

void UpdatePipelineTemplateRequest::validate()
{
}

web::json::value UpdatePipelineTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePipelineTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PipelineTemplateDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePipelineTemplateRequest::getTenantId() const
{
    return tenantId_;
}

void UpdatePipelineTemplateRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool UpdatePipelineTemplateRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void UpdatePipelineTemplateRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string UpdatePipelineTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void UpdatePipelineTemplateRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdatePipelineTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdatePipelineTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

PipelineTemplateDTO UpdatePipelineTemplateRequest::getBody() const
{
    return body_;
}

void UpdatePipelineTemplateRequest::setBody(const PipelineTemplateDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePipelineTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePipelineTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


