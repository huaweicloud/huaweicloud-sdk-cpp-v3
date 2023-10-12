

#include "huaweicloud/cts/v3/model/CheckObsBucketsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CheckObsBucketsRequest::CheckObsBucketsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

CheckObsBucketsRequest::~CheckObsBucketsRequest() = default;

void CheckObsBucketsRequest::validate()
{
}

web::json::value CheckObsBucketsRequest::toJson() const
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
bool CheckObsBucketsRequest::fromJson(const web::json::value& val)
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
            CheckObsBucketsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckObsBucketsRequest::getDomainId() const
{
    return domainId_;
}

void CheckObsBucketsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CheckObsBucketsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CheckObsBucketsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

CheckObsBucketsRequestBody CheckObsBucketsRequest::getBody() const
{
    return body_;
}

void CheckObsBucketsRequest::setBody(const CheckObsBucketsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckObsBucketsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckObsBucketsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


