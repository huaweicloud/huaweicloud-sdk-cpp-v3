

#include "huaweicloud/cdn/v1/model/UpdateDomainMultiCertificatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateDomainMultiCertificatesRequest::UpdateDomainMultiCertificatesRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainMultiCertificatesRequest::~UpdateDomainMultiCertificatesRequest() = default;

void UpdateDomainMultiCertificatesRequest::validate()
{
}

web::json::value UpdateDomainMultiCertificatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDomainMultiCertificatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDomainMultiCertificatesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainMultiCertificatesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateDomainMultiCertificatesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateDomainMultiCertificatesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

UpdateDomainMultiCertificatesRequestBody UpdateDomainMultiCertificatesRequest::getBody() const
{
    return body_;
}

void UpdateDomainMultiCertificatesRequest::setBody(const UpdateDomainMultiCertificatesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainMultiCertificatesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainMultiCertificatesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


