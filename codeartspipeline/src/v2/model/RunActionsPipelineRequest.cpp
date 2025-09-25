

#include "huaweicloud/codeartspipeline/v2/model/RunActionsPipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunActionsPipelineRequest::RunActionsPipelineRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

RunActionsPipelineRequest::~RunActionsPipelineRequest() = default;

void RunActionsPipelineRequest::validate()
{
}

web::json::value RunActionsPipelineRequest::toJson() const
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
bool RunActionsPipelineRequest::fromJson(const web::json::value& val)
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
            ActionsManualRunPipelineDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RunActionsPipelineRequest::getDomainId() const
{
    return domainId_;
}

void RunActionsPipelineRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool RunActionsPipelineRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void RunActionsPipelineRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

ActionsManualRunPipelineDTO RunActionsPipelineRequest::getBody() const
{
    return body_;
}

void RunActionsPipelineRequest::setBody(const ActionsManualRunPipelineDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunActionsPipelineRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunActionsPipelineRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


