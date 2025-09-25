

#include "huaweicloud/codeartspipeline/v2/model/ShowPublisherRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPublisherRequest::ShowPublisherRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowPublisherRequest::~ShowPublisherRequest() = default;

void ShowPublisherRequest::validate()
{
}

web::json::value ShowPublisherRequest::toJson() const
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
bool ShowPublisherRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowPublisherRequest::getDomainId() const
{
    return domainId_;
}

void ShowPublisherRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowPublisherRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowPublisherRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<std::string>& ShowPublisherRequest::getBody()
{
    return body_;
}

void ShowPublisherRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPublisherRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPublisherRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


