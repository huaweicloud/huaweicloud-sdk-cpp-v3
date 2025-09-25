

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineTemplatesRequest::ListPipelineTemplatesRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListPipelineTemplatesRequest::~ListPipelineTemplatesRequest() = default;

void ListPipelineTemplatesRequest::validate()
{
}

web::json::value ListPipelineTemplatesRequest::toJson() const
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
bool ListPipelineTemplatesRequest::fromJson(const web::json::value& val)
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
            ListPipelineTemplatesQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListPipelineTemplatesRequest::getTenantId() const
{
    return tenantId_;
}

void ListPipelineTemplatesRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListPipelineTemplatesRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListPipelineTemplatesRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

ListPipelineTemplatesQuery ListPipelineTemplatesRequest::getBody() const
{
    return body_;
}

void ListPipelineTemplatesRequest::setBody(const ListPipelineTemplatesQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPipelineTemplatesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPipelineTemplatesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


