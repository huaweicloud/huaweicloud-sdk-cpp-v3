

#include "huaweicloud/cdn/v1/model/ShowHttpInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowHttpInfoResponse::ShowHttpInfoResponse()
{
    httpsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowHttpInfoResponse::~ShowHttpInfoResponse() = default;

void ShowHttpInfoResponse::validate()
{
}

web::json::value ShowHttpInfoResponse::toJson() const
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
bool ShowHttpInfoResponse::fromJson(const web::json::value& val)
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


HttpInfoResponseBody ShowHttpInfoResponse::getHttps() const
{
    return https_;
}

void ShowHttpInfoResponse::setHttps(const HttpInfoResponseBody& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool ShowHttpInfoResponse::httpsIsSet() const
{
    return httpsIsSet_;
}

void ShowHttpInfoResponse::unsethttps()
{
    httpsIsSet_ = false;
}

std::string ShowHttpInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowHttpInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowHttpInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowHttpInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


