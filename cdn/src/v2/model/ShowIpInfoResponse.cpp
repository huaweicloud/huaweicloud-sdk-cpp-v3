

#include "huaweicloud/cdn/v2/model/ShowIpInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowIpInfoResponse::ShowIpInfoResponse()
{
    cdnIpsIsSet_ = false;
}

ShowIpInfoResponse::~ShowIpInfoResponse() = default;

void ShowIpInfoResponse::validate()
{
}

web::json::value ShowIpInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cdnIpsIsSet_) {
        val[utility::conversions::to_string_t("cdn_ips")] = ModelBase::toJson(cdnIps_);
    }

    return val;
}
bool ShowIpInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cdn_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cdn_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<CdnIps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCdnIps(refVal);
        }
    }
    return ok;
}


std::vector<CdnIps>& ShowIpInfoResponse::getCdnIps()
{
    return cdnIps_;
}

void ShowIpInfoResponse::setCdnIps(const std::vector<CdnIps>& value)
{
    cdnIps_ = value;
    cdnIpsIsSet_ = true;
}

bool ShowIpInfoResponse::cdnIpsIsSet() const
{
    return cdnIpsIsSet_;
}

void ShowIpInfoResponse::unsetcdnIps()
{
    cdnIpsIsSet_ = false;
}

}
}
}
}
}


