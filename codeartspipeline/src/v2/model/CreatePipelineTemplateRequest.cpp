

#include "huaweicloud/codeartspipeline/v2/model/CreatePipelineTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePipelineTemplateRequest::CreatePipelineTemplateRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePipelineTemplateRequest::~CreatePipelineTemplateRequest() = default;

void CreatePipelineTemplateRequest::validate()
{
}

web::json::value CreatePipelineTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePipelineTemplateRequest::fromJson(const web::json::value& val)
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


std::string CreatePipelineTemplateRequest::getTenantId() const
{
    return tenantId_;
}

void CreatePipelineTemplateRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool CreatePipelineTemplateRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void CreatePipelineTemplateRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

PipelineTemplateDTO CreatePipelineTemplateRequest::getBody() const
{
    return body_;
}

void CreatePipelineTemplateRequest::setBody(const PipelineTemplateDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePipelineTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePipelineTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


