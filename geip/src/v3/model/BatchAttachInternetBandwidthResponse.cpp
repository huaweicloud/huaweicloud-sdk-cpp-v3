

#include "huaweicloud/geip/v3/model/BatchAttachInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchAttachInternetBandwidthResponse::BatchAttachInternetBandwidthResponse()
{
    body_ = "";
    bodyIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchAttachInternetBandwidthResponse::~BatchAttachInternetBandwidthResponse() = default;

void BatchAttachInternetBandwidthResponse::validate()
{
}

web::json::value BatchAttachInternetBandwidthResponse::toJson() const
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
bool BatchAttachInternetBandwidthResponse::fromJson(const web::json::value& val)
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


std::string BatchAttachInternetBandwidthResponse::getBody() const
{
    return body_;
}

void BatchAttachInternetBandwidthResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAttachInternetBandwidthResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAttachInternetBandwidthResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string BatchAttachInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchAttachInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchAttachInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchAttachInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


