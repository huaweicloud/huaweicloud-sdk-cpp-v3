

#include "huaweicloud/organizations/v1/model/TrustedServiceReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




TrustedServiceReqBody::TrustedServiceReqBody()
{
    servicePrincipal_ = "";
    servicePrincipalIsSet_ = false;
}

TrustedServiceReqBody::~TrustedServiceReqBody() = default;

void TrustedServiceReqBody::validate()
{
}

web::json::value TrustedServiceReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(servicePrincipalIsSet_) {
        val[utility::conversions::to_string_t("service_principal")] = ModelBase::toJson(servicePrincipal_);
    }

    return val;
}
bool TrustedServiceReqBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TrustedServiceReqBody::getServicePrincipal() const
{
    return servicePrincipal_;
}

void TrustedServiceReqBody::setServicePrincipal(const std::string& value)
{
    servicePrincipal_ = value;
    servicePrincipalIsSet_ = true;
}

bool TrustedServiceReqBody::servicePrincipalIsSet() const
{
    return servicePrincipalIsSet_;
}

void TrustedServiceReqBody::unsetservicePrincipal()
{
    servicePrincipalIsSet_ = false;
}

}
}
}
}
}


