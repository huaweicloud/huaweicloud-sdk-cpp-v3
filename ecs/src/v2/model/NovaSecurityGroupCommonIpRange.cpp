

#include "huaweicloud/ecs/v2/model/NovaSecurityGroupCommonIpRange.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaSecurityGroupCommonIpRange::NovaSecurityGroupCommonIpRange()
{
    cidr_ = "";
    cidrIsSet_ = false;
}

NovaSecurityGroupCommonIpRange::~NovaSecurityGroupCommonIpRange() = default;

void NovaSecurityGroupCommonIpRange::validate()
{
}

web::json::value NovaSecurityGroupCommonIpRange::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }

    return val;
}

bool NovaSecurityGroupCommonIpRange::fromJson(const web::json::value& val)
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

std::string NovaSecurityGroupCommonIpRange::getCidr() const
{
    return cidr_;
}

void NovaSecurityGroupCommonIpRange::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool NovaSecurityGroupCommonIpRange::cidrIsSet() const
{
    return cidrIsSet_;
}

void NovaSecurityGroupCommonIpRange::unsetcidr()
{
    cidrIsSet_ = false;
}

}
}
}
}
}


