

#include "huaweicloud/cdn/v1/model/UpdateHttpsInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateHttpsInfoResponse::UpdateHttpsInfoResponse()
{
    httpsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
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

std::string UpdateHttpsInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateHttpsInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateHttpsInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateHttpsInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


