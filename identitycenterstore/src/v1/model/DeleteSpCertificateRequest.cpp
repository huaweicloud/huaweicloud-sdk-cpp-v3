

#include "huaweicloud/identitycenterstore/v1/model/DeleteSpCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DeleteSpCertificateRequest::DeleteSpCertificateRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
}

DeleteSpCertificateRequest::~DeleteSpCertificateRequest() = default;

void DeleteSpCertificateRequest::validate()
{
}

web::json::value DeleteSpCertificateRequest::toJson() const
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
bool DeleteSpCertificateRequest::fromJson(const web::json::value& val)
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


std::string DeleteSpCertificateRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DeleteSpCertificateRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DeleteSpCertificateRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DeleteSpCertificateRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DeleteSpCertificateRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteSpCertificateRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteSpCertificateRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteSpCertificateRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteSpCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void DeleteSpCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool DeleteSpCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void DeleteSpCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}


