

#include "huaweicloud/cdn/v1/model/UpdateHttpsInfoResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateHttpsInfoResponse::UpdateHttpsInfoResponse()
{
    httpsIsSet_ = false;
}

UpdateHttpsInfoResponse::~UpdateHttpsInfoResponse() = default;

void UpdateHttpsInfoResponse::validate()
{
}

web::json::value UpdateHttpsInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpsIsSet_) {
        val[utility::conversions::to_string_t("https")] = ModelBase::toJson(https_);
    }

    return val;
}

bool UpdateHttpsInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https"));
        if(!fieldValue.is_null())
        {
            HttpInfoResponseBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttps(refVal);
        }
    }
    return ok;
}

HttpInfoResponseBody UpdateHttpsInfoResponse::getHttps() const
{
    return https_;
}

void UpdateHttpsInfoResponse::setHttps(const HttpInfoResponseBody& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool UpdateHttpsInfoResponse::httpsIsSet() const
{
    return httpsIsSet_;
}

void UpdateHttpsInfoResponse::unsethttps()
{
    httpsIsSet_ = false;
}

}
}
}
}
}


