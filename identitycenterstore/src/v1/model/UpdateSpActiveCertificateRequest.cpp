

#include "huaweicloud/identitycenterstore/v1/model/UpdateSpActiveCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdateSpActiveCertificateRequest::UpdateSpActiveCertificateRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
}

UpdateSpActiveCertificateRequest::~UpdateSpActiveCertificateRequest() = default;

void UpdateSpActiveCertificateRequest::validate()
{
}

web::json::value UpdateSpActiveCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }

    return val;
}
bool UpdateSpActiveCertificateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    return ok;
}


std::string UpdateSpActiveCertificateRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void UpdateSpActiveCertificateRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool UpdateSpActiveCertificateRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void UpdateSpActiveCertificateRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string UpdateSpActiveCertificateRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateSpActiveCertificateRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateSpActiveCertificateRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateSpActiveCertificateRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateSpActiveCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void UpdateSpActiveCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool UpdateSpActiveCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void UpdateSpActiveCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}


