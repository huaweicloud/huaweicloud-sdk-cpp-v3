

#include "huaweicloud/aad/v1/model/ListSourceIpsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListSourceIpsResponse::ListSourceIpsResponse()
{
    ipsIsSet_ = false;
}

ListSourceIpsResponse::~ListSourceIpsResponse() = default;

void ListSourceIpsResponse::validate()
{
}

web::json::value ListSourceIpsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }

    return val;
}
bool ListSourceIpsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListSourceIpsResponse::getIps()
{
    return ips_;
}

void ListSourceIpsResponse::setIps(const std::vector<std::string>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool ListSourceIpsResponse::ipsIsSet() const
{
    return ipsIsSet_;
}

void ListSourceIpsResponse::unsetips()
{
    ipsIsSet_ = false;
}

}
}
}
}
}


