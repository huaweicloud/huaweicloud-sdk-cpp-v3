

#include "huaweicloud/live/v1/model/BatchShowIpBelongsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




BatchShowIpBelongsResponse::BatchShowIpBelongsResponse()
{
    cdnIpsIsSet_ = false;
}

BatchShowIpBelongsResponse::~BatchShowIpBelongsResponse() = default;

void BatchShowIpBelongsResponse::validate()
{
}

web::json::value BatchShowIpBelongsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cdnIpsIsSet_) {
        val[utility::conversions::to_string_t("cdn_ips")] = ModelBase::toJson(cdnIps_);
    }

    return val;
}

bool BatchShowIpBelongsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cdn_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cdn_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<CdnIp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCdnIps(refVal);
        }
    }
    return ok;
}

std::vector<CdnIp>& BatchShowIpBelongsResponse::getCdnIps()
{
    return cdnIps_;
}

void BatchShowIpBelongsResponse::setCdnIps(const std::vector<CdnIp>& value)
{
    cdnIps_ = value;
    cdnIpsIsSet_ = true;
}

bool BatchShowIpBelongsResponse::cdnIpsIsSet() const
{
    return cdnIpsIsSet_;
}

void BatchShowIpBelongsResponse::unsetcdnIps()
{
    cdnIpsIsSet_ = false;
}

}
}
}
}
}


