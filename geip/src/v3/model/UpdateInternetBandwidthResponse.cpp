

#include "huaweicloud/geip/v3/model/UpdateInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateInternetBandwidthResponse::UpdateInternetBandwidthResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    internetBandwidthIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateInternetBandwidthResponse::~UpdateInternetBandwidthResponse() = default;

void UpdateInternetBandwidthResponse::validate()
{
}

web::json::value UpdateInternetBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(internetBandwidthIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth")] = ModelBase::toJson(internetBandwidth_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateInternetBandwidthResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth"));
        if(!fieldValue.is_null())
        {
            UpdateInternetBandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidth(refVal);
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


std::string UpdateInternetBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void UpdateInternetBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateInternetBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateInternetBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

UpdateInternetBandwidth UpdateInternetBandwidthResponse::getInternetBandwidth() const
{
    return internetBandwidth_;
}

void UpdateInternetBandwidthResponse::setInternetBandwidth(const UpdateInternetBandwidth& value)
{
    internetBandwidth_ = value;
    internetBandwidthIsSet_ = true;
}

bool UpdateInternetBandwidthResponse::internetBandwidthIsSet() const
{
    return internetBandwidthIsSet_;
}

void UpdateInternetBandwidthResponse::unsetinternetBandwidth()
{
    internetBandwidthIsSet_ = false;
}

std::string UpdateInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


