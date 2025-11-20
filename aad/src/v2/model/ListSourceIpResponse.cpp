

#include "huaweicloud/aad/v2/model/ListSourceIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListSourceIpResponse::ListSourceIpResponse()
{
    ipsIsSet_ = false;
}

ListSourceIpResponse::~ListSourceIpResponse() = default;

void ListSourceIpResponse::validate()
{
}

web::json::value ListSourceIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }

    return val;
}
bool ListSourceIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<SourceIp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
        }
    }
    return ok;
}


std::vector<SourceIp>& ListSourceIpResponse::getIps()
{
    return ips_;
}

void ListSourceIpResponse::setIps(const std::vector<SourceIp>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool ListSourceIpResponse::ipsIsSet() const
{
    return ipsIsSet_;
}

void ListSourceIpResponse::unsetips()
{
    ipsIsSet_ = false;
}

}
}
}
}
}


