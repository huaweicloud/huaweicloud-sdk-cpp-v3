

#include "huaweicloud/codeartspipeline/v2/model/UploadPublisherIconRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UploadPublisherIconRequest::UploadPublisherIconRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    publisherEnName_ = "";
    publisherEnNameIsSet_ = false;
    bodyIsSet_ = false;
}

UploadPublisherIconRequest::~UploadPublisherIconRequest() = default;

void UploadPublisherIconRequest::validate()
{
}

web::json::value UploadPublisherIconRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(publisherEnNameIsSet_) {
        val[utility::conversions::to_string_t("publisher_en_name")] = ModelBase::toJson(publisherEnName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadPublisherIconRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publisher_en_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher_en_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisherEnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadPublisherIconRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadPublisherIconRequest::getDomainId() const
{
    return domainId_;
}

void UploadPublisherIconRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UploadPublisherIconRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UploadPublisherIconRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UploadPublisherIconRequest::getPublisherEnName() const
{
    return publisherEnName_;
}

void UploadPublisherIconRequest::setPublisherEnName(const std::string& value)
{
    publisherEnName_ = value;
    publisherEnNameIsSet_ = true;
}

bool UploadPublisherIconRequest::publisherEnNameIsSet() const
{
    return publisherEnNameIsSet_;
}

void UploadPublisherIconRequest::unsetpublisherEnName()
{
    publisherEnNameIsSet_ = false;
}

UploadPublisherIconRequestBody UploadPublisherIconRequest::getBody() const
{
    return body_;
}

void UploadPublisherIconRequest::setBody(const UploadPublisherIconRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadPublisherIconRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadPublisherIconRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


