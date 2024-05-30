

#include "huaweicloud/organizations/v1/model/DelegatedAdministratorReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DelegatedAdministratorReqBody::DelegatedAdministratorReqBody()
{
    servicePrincipal_ = "";
    servicePrincipalIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
}

DelegatedAdministratorReqBody::~DelegatedAdministratorReqBody() = default;

void DelegatedAdministratorReqBody::validate()
{
}

web::json::value DelegatedAdministratorReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(servicePrincipalIsSet_) {
        val[utility::conversions::to_string_t("service_principal")] = ModelBase::toJson(servicePrincipal_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }

    return val;
}
bool DelegatedAdministratorReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServicePrincipal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    return ok;
}


std::string DelegatedAdministratorReqBody::getServicePrincipal() const
{
    return servicePrincipal_;
}

void DelegatedAdministratorReqBody::setServicePrincipal(const std::string& value)
{
    servicePrincipal_ = value;
    servicePrincipalIsSet_ = true;
}

bool DelegatedAdministratorReqBody::servicePrincipalIsSet() const
{
    return servicePrincipalIsSet_;
}

void DelegatedAdministratorReqBody::unsetservicePrincipal()
{
    servicePrincipalIsSet_ = false;
}

std::string DelegatedAdministratorReqBody::getAccountId() const
{
    return accountId_;
}

void DelegatedAdministratorReqBody::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool DelegatedAdministratorReqBody::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void DelegatedAdministratorReqBody::unsetaccountId()
{
    accountIdIsSet_ = false;
}

}
}
}
}
}


