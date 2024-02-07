

#include "huaweicloud/geip/v3/model/AttachInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AttachInternetBandwidthResponse::AttachInternetBandwidthResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AttachInternetBandwidthResponse::~AttachInternetBandwidthResponse() = default;

void AttachInternetBandwidthResponse::validate()
{
}

web::json::value AttachInternetBandwidthResponse::toJson() const
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
bool AttachInternetBandwidthResponse::fromJson(const web::json::value& val)
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
            AttachInternetBandwidthGlobalEip refVal;
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


std::string AttachInternetBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void AttachInternetBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AttachInternetBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AttachInternetBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

AttachInternetBandwidthGlobalEip AttachInternetBandwidthResponse::getGlobalEip() const
{
    return globalEip_;
}

void AttachInternetBandwidthResponse::setGlobalEip(const AttachInternetBandwidthGlobalEip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool AttachInternetBandwidthResponse::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void AttachInternetBandwidthResponse::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

std::string AttachInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void AttachInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AttachInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AttachInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


