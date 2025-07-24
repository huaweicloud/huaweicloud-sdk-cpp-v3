

#include "huaweicloud/cloudtest/v1/model/DnsMapping.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DnsMapping::DnsMapping()
{
    dnsIsSet_ = false;
}

DnsMapping::~DnsMapping() = default;

void DnsMapping::validate()
{
}

web::json::value DnsMapping::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dnsIsSet_) {
        val[utility::conversions::to_string_t("dns")] = ModelBase::toJson(dns_);
    }

    return val;
}
bool DnsMapping::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns"));
        if(!fieldValue.is_null())
        {
            std::vector<DnsMappingNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDns(refVal);
        }
    }
    return ok;
}


std::vector<DnsMappingNode>& DnsMapping::getDns()
{
    return dns_;
}

void DnsMapping::setDns(const std::vector<DnsMappingNode>& value)
{
    dns_ = value;
    dnsIsSet_ = true;
}

bool DnsMapping::dnsIsSet() const
{
    return dnsIsSet_;
}

void DnsMapping::unsetdns()
{
    dnsIsSet_ = false;
}

}
}
}
}
}


