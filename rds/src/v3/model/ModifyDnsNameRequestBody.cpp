

#include "huaweicloud/rds/v3/model/ModifyDnsNameRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyDnsNameRequestBody::ModifyDnsNameRequestBody()
{
    dnsName_ = "";
    dnsNameIsSet_ = false;
}

ModifyDnsNameRequestBody::~ModifyDnsNameRequestBody() = default;

void ModifyDnsNameRequestBody::validate()
{
}

web::json::value ModifyDnsNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dnsNameIsSet_) {
        val[utility::conversions::to_string_t("dns_name")] = ModelBase::toJson(dnsName_);
    }

    return val;
}
bool ModifyDnsNameRequestBody::fromJson(const web::json::value& val)
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


std::string ModifyDnsNameRequestBody::getDnsName() const
{
    return dnsName_;
}

void ModifyDnsNameRequestBody::setDnsName(const std::string& value)
{
    dnsName_ = value;
    dnsNameIsSet_ = true;
}

bool ModifyDnsNameRequestBody::dnsNameIsSet() const
{
    return dnsNameIsSet_;
}

void ModifyDnsNameRequestBody::unsetdnsName()
{
    dnsNameIsSet_ = false;
}

}
}
}
}
}


