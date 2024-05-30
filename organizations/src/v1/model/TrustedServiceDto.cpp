

#include "huaweicloud/organizations/v1/model/TrustedServiceDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




TrustedServiceDto::TrustedServiceDto()
{
    servicePrincipal_ = "";
    servicePrincipalIsSet_ = false;
    enabledAt_ = utility::datetime();
    enabledAtIsSet_ = false;
}

TrustedServiceDto::~TrustedServiceDto() = default;

void TrustedServiceDto::validate()
{
}

web::json::value TrustedServiceDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(servicePrincipalIsSet_) {
        val[utility::conversions::to_string_t("service_principal")] = ModelBase::toJson(servicePrincipal_);
    }
    if(enabledAtIsSet_) {
        val[utility::conversions::to_string_t("enabled_at")] = ModelBase::toJson(enabledAt_);
    }

    return val;
}
bool TrustedServiceDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enabled_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabledAt(refVal);
        }
    }
    return ok;
}


std::string TrustedServiceDto::getServicePrincipal() const
{
    return servicePrincipal_;
}

void TrustedServiceDto::setServicePrincipal(const std::string& value)
{
    servicePrincipal_ = value;
    servicePrincipalIsSet_ = true;
}

bool TrustedServiceDto::servicePrincipalIsSet() const
{
    return servicePrincipalIsSet_;
}

void TrustedServiceDto::unsetservicePrincipal()
{
    servicePrincipalIsSet_ = false;
}

utility::datetime TrustedServiceDto::getEnabledAt() const
{
    return enabledAt_;
}

void TrustedServiceDto::setEnabledAt(const utility::datetime& value)
{
    enabledAt_ = value;
    enabledAtIsSet_ = true;
}

bool TrustedServiceDto::enabledAtIsSet() const
{
    return enabledAtIsSet_;
}

void TrustedServiceDto::unsetenabledAt()
{
    enabledAtIsSet_ = false;
}

}
}
}
}
}


