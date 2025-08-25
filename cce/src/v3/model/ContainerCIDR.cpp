

#include "huaweicloud/cce/v3/model/ContainerCIDR.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ContainerCIDR::ContainerCIDR()
{
    cidr_ = "";
    cidrIsSet_ = false;
}

ContainerCIDR::~ContainerCIDR() = default;

void ContainerCIDR::validate()
{
}

web::json::value ContainerCIDR::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }

    return val;
}
bool ContainerCIDR::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    return ok;
}


std::string ContainerCIDR::getCidr() const
{
    return cidr_;
}

void ContainerCIDR::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool ContainerCIDR::cidrIsSet() const
{
    return cidrIsSet_;
}

void ContainerCIDR::unsetcidr()
{
    cidrIsSet_ = false;
}

}
}
}
}
}


