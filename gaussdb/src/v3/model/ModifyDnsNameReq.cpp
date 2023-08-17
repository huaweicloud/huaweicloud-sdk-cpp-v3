

#include "huaweicloud/gaussdb/v3/model/ModifyDnsNameReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyDnsNameReq::ModifyDnsNameReq()
{
    dnsName_ = "";
    dnsNameIsSet_ = false;
}

ModifyDnsNameReq::~ModifyDnsNameReq() = default;

void ModifyDnsNameReq::validate()
{
}

web::json::value ModifyDnsNameReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dnsNameIsSet_) {
        val[utility::conversions::to_string_t("dns_name")] = ModelBase::toJson(dnsName_);
    }

    return val;
}

bool ModifyDnsNameReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dns_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsName(refVal);
        }
    }
    return ok;
}

std::string ModifyDnsNameReq::getDnsName() const
{
    return dnsName_;
}

void ModifyDnsNameReq::setDnsName(const std::string& value)
{
    dnsName_ = value;
    dnsNameIsSet_ = true;
}

bool ModifyDnsNameReq::dnsNameIsSet() const
{
    return dnsNameIsSet_;
}

void ModifyDnsNameReq::unsetdnsName()
{
    dnsNameIsSet_ = false;
}

}
}
}
}
}


