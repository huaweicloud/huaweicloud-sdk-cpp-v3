

#include "huaweicloud/codeartspipeline/v2/model/ListActionsPipelineRunsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListActionsPipelineRunsRequest::ListActionsPipelineRunsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListActionsPipelineRunsRequest::~ListActionsPipelineRunsRequest() = default;

void ListActionsPipelineRunsRequest::validate()
{
}

web::json::value ListActionsPipelineRunsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListActionsPipelineRunsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ActionsPipelineRunsQueryDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListActionsPipelineRunsRequest::getDomainId() const
{
    return domainId_;
}

void ListActionsPipelineRunsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListActionsPipelineRunsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListActionsPipelineRunsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

ActionsPipelineRunsQueryDTO ListActionsPipelineRunsRequest::getBody() const
{
    return body_;
}

void ListActionsPipelineRunsRequest::setBody(const ActionsPipelineRunsQueryDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListActionsPipelineRunsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListActionsPipelineRunsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


