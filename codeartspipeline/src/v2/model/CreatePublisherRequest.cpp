

#include "huaweicloud/codeartspipeline/v2/model/CreatePublisherRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePublisherRequest::CreatePublisherRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePublisherRequest::~CreatePublisherRequest() = default;

void CreatePublisherRequest::validate()
{
}

web::json::value CreatePublisherRequest::toJson() const
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
bool CreatePublisherRequest::fromJson(const web::json::value& val)
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
            PublisherRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePublisherRequest::getDomainId() const
{
    return domainId_;
}

void CreatePublisherRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreatePublisherRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreatePublisherRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PublisherRequest CreatePublisherRequest::getBody() const
{
    return body_;
}

void CreatePublisherRequest::setBody(const PublisherRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePublisherRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePublisherRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


