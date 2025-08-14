

#include "huaweicloud/identitycenterstore/v1/model/ListSpCertificatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListSpCertificatesRequest::ListSpCertificatesRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ListSpCertificatesRequest::~ListSpCertificatesRequest() = default;

void ListSpCertificatesRequest::validate()
{
}

web::json::value ListSpCertificatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool ListSpCertificatesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListSpCertificatesRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ListSpCertificatesRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ListSpCertificatesRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ListSpCertificatesRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string ListSpCertificatesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListSpCertificatesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListSpCertificatesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListSpCertificatesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


