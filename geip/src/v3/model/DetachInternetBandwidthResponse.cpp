

#include "huaweicloud/geip/v3/model/DetachInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DetachInternetBandwidthResponse::DetachInternetBandwidthResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DetachInternetBandwidthResponse::~DetachInternetBandwidthResponse() = default;

void DetachInternetBandwidthResponse::validate()
{
}

web::json::value DetachInternetBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(globalEipIsSet_) {
        val[utility::conversions::to_string_t("global_eip")] = ModelBase::toJson(globalEip_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DetachInternetBandwidthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip"));
        if(!fieldValue.is_null())
        {
            DetachInternetBandwidthGlobalEips refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEip(refVal);
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


std::string DetachInternetBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void DetachInternetBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DetachInternetBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DetachInternetBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

DetachInternetBandwidthGlobalEips DetachInternetBandwidthResponse::getGlobalEip() const
{
    return globalEip_;
}

void DetachInternetBandwidthResponse::setGlobalEip(const DetachInternetBandwidthGlobalEips& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool DetachInternetBandwidthResponse::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void DetachInternetBandwidthResponse::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

std::string DetachInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void DetachInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DetachInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DetachInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


