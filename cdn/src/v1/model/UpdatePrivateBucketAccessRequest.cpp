

#include "huaweicloud/cdn/v1/model/UpdatePrivateBucketAccessRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdatePrivateBucketAccessRequest::UpdatePrivateBucketAccessRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePrivateBucketAccessRequest::~UpdatePrivateBucketAccessRequest() = default;

void UpdatePrivateBucketAccessRequest::validate()
{
}

web::json::value UpdatePrivateBucketAccessRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePrivateBucketAccessRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
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
            UpdatePrivateBucketAccessBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePrivateBucketAccessRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdatePrivateBucketAccessRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdatePrivateBucketAccessRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdatePrivateBucketAccessRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdatePrivateBucketAccessRequest::getDomainId() const
{
    return domainId_;
}

void UpdatePrivateBucketAccessRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdatePrivateBucketAccessRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdatePrivateBucketAccessRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

UpdatePrivateBucketAccessBody UpdatePrivateBucketAccessRequest::getBody() const
{
    return body_;
}

void UpdatePrivateBucketAccessRequest::setBody(const UpdatePrivateBucketAccessBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePrivateBucketAccessRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePrivateBucketAccessRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


