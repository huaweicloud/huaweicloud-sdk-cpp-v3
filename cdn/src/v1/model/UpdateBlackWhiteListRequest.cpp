

#include "huaweicloud/cdn/v1/model/UpdateBlackWhiteListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateBlackWhiteListRequest::UpdateBlackWhiteListRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBlackWhiteListRequest::~UpdateBlackWhiteListRequest() = default;

void UpdateBlackWhiteListRequest::validate()
{
}

web::json::value UpdateBlackWhiteListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateBlackWhiteListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BlackWhiteListBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBlackWhiteListRequest::getDomainId() const
{
    return domainId_;
}

void UpdateBlackWhiteListRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateBlackWhiteListRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateBlackWhiteListRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateBlackWhiteListRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateBlackWhiteListRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateBlackWhiteListRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateBlackWhiteListRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

BlackWhiteListBody UpdateBlackWhiteListRequest::getBody() const
{
    return body_;
}

void UpdateBlackWhiteListRequest::setBody(const BlackWhiteListBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBlackWhiteListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBlackWhiteListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


