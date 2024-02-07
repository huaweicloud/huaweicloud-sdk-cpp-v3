

#include "huaweicloud/geip/v3/model/BatchDetachInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDetachInternetBandwidthResponse::BatchDetachInternetBandwidthResponse()
{
    body_ = "";
    bodyIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchDetachInternetBandwidthResponse::~BatchDetachInternetBandwidthResponse() = default;

void BatchDetachInternetBandwidthResponse::validate()
{
}

web::json::value BatchDetachInternetBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchDetachInternetBandwidthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
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


std::string BatchDetachInternetBandwidthResponse::getBody() const
{
    return body_;
}

void BatchDetachInternetBandwidthResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDetachInternetBandwidthResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDetachInternetBandwidthResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string BatchDetachInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchDetachInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDetachInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDetachInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


