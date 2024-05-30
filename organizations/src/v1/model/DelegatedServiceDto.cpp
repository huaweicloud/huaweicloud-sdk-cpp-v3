

#include "huaweicloud/organizations/v1/model/DelegatedServiceDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DelegatedServiceDto::DelegatedServiceDto()
{
    servicePrincipal_ = "";
    servicePrincipalIsSet_ = false;
    delegationEnabledAt_ = utility::datetime();
    delegationEnabledAtIsSet_ = false;
}

DelegatedServiceDto::~DelegatedServiceDto() = default;

void DelegatedServiceDto::validate()
{
}

web::json::value DelegatedServiceDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(servicePrincipalIsSet_) {
        val[utility::conversions::to_string_t("service_principal")] = ModelBase::toJson(servicePrincipal_);
    }
    if(delegationEnabledAtIsSet_) {
        val[utility::conversions::to_string_t("delegation_enabled_at")] = ModelBase::toJson(delegationEnabledAt_);
    }

    return val;
}
bool DelegatedServiceDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("delegation_enabled_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delegation_enabled_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelegationEnabledAt(refVal);
        }
    }
    return ok;
}


std::string DelegatedServiceDto::getServicePrincipal() const
{
    return servicePrincipal_;
}

void DelegatedServiceDto::setServicePrincipal(const std::string& value)
{
    servicePrincipal_ = value;
    servicePrincipalIsSet_ = true;
}

bool DelegatedServiceDto::servicePrincipalIsSet() const
{
    return servicePrincipalIsSet_;
}

void DelegatedServiceDto::unsetservicePrincipal()
{
    servicePrincipalIsSet_ = false;
}

utility::datetime DelegatedServiceDto::getDelegationEnabledAt() const
{
    return delegationEnabledAt_;
}

void DelegatedServiceDto::setDelegationEnabledAt(const utility::datetime& value)
{
    delegationEnabledAt_ = value;
    delegationEnabledAtIsSet_ = true;
}

bool DelegatedServiceDto::delegationEnabledAtIsSet() const
{
    return delegationEnabledAtIsSet_;
}

void DelegatedServiceDto::unsetdelegationEnabledAt()
{
    delegationEnabledAtIsSet_ = false;
}

}
}
}
}
}


