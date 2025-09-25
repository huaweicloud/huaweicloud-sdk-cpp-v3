

#include "huaweicloud/codeartspipeline/v2/model/RetryRunActionsPipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RetryRunActionsPipelineRequest::RetryRunActionsPipelineRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

RetryRunActionsPipelineRequest::~RetryRunActionsPipelineRequest() = default;

void RetryRunActionsPipelineRequest::validate()
{
}

web::json::value RetryRunActionsPipelineRequest::toJson() const
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
bool RetryRunActionsPipelineRequest::fromJson(const web::json::value& val)
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
            ActionsReRunPipelineDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RetryRunActionsPipelineRequest::getDomainId() const
{
    return domainId_;
}

void RetryRunActionsPipelineRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RetryRunActionsPipelineRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RetryRunActionsPipelineRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

ActionsReRunPipelineDTO RetryRunActionsPipelineRequest::getBody() const
{
    return body_;
}

void RetryRunActionsPipelineRequest::setBody(const ActionsReRunPipelineDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RetryRunActionsPipelineRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RetryRunActionsPipelineRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


