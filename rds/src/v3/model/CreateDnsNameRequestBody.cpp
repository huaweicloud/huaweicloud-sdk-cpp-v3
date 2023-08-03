

#include "huaweicloud/rds/v3/model/CreateDnsNameRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDnsNameRequestBody::CreateDnsNameRequestBody()
{
    dnsType_ = "";
    dnsTypeIsSet_ = false;
}

CreateDnsNameRequestBody::~CreateDnsNameRequestBody() = default;

void CreateDnsNameRequestBody::validate()
{
}

web::json::value CreateDnsNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dnsTypeIsSet_) {
        val[utility::conversions::to_string_t("dns_type")] = ModelBase::toJson(dnsType_);
    }

    return val;
}

bool CreateDnsNameRequestBody::fromJson(const web::json::value& val)
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

std::string CreateDnsNameRequestBody::getDnsType() const
{
    return dnsType_;
}

void CreateDnsNameRequestBody::setDnsType(const std::string& value)
{
    dnsType_ = value;
    dnsTypeIsSet_ = true;
}

bool CreateDnsNameRequestBody::dnsTypeIsSet() const
{
    return dnsTypeIsSet_;
}

void CreateDnsNameRequestBody::unsetdnsType()
{
    dnsTypeIsSet_ = false;
}

}
}
}
}
}


