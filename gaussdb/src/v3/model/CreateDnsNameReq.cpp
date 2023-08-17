

#include "huaweicloud/gaussdb/v3/model/CreateDnsNameReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateDnsNameReq::CreateDnsNameReq()
{
    dnsType_ = "";
    dnsTypeIsSet_ = false;
}

CreateDnsNameReq::~CreateDnsNameReq() = default;

void CreateDnsNameReq::validate()
{
}

web::json::value CreateDnsNameReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dnsTypeIsSet_) {
        val[utility::conversions::to_string_t("dns_type")] = ModelBase::toJson(dnsType_);
    }

    return val;
}

bool CreateDnsNameReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dns_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsType(refVal);
        }
    }
    return ok;
}

std::string CreateDnsNameReq::getDnsType() const
{
    return dnsType_;
}

void CreateDnsNameReq::setDnsType(const std::string& value)
{
    dnsType_ = value;
    dnsTypeIsSet_ = true;
}

bool CreateDnsNameReq::dnsTypeIsSet() const
{
    return dnsTypeIsSet_;
}

void CreateDnsNameReq::unsetdnsType()
{
    dnsTypeIsSet_ = false;
}

}
}
}
}
}


