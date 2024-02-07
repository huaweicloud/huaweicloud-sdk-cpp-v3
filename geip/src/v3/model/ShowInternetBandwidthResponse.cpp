

#include "huaweicloud/geip/v3/model/ShowInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowInternetBandwidthResponse::ShowInternetBandwidthResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    internetBandwidthIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowInternetBandwidthResponse::~ShowInternetBandwidthResponse() = default;

void ShowInternetBandwidthResponse::validate()
{
}

web::json::value ShowInternetBandwidthResponse::toJson() const
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
bool ShowInternetBandwidthResponse::fromJson(const web::json::value& val)
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
            ShowInternetBandwidth refVal;
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


std::string ShowInternetBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void ShowInternetBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowInternetBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowInternetBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

ShowInternetBandwidth ShowInternetBandwidthResponse::getInternetBandwidth() const
{
    return internetBandwidth_;
}

void ShowInternetBandwidthResponse::setInternetBandwidth(const ShowInternetBandwidth& value)
{
    internetBandwidth_ = value;
    internetBandwidthIsSet_ = true;
}

bool ShowInternetBandwidthResponse::internetBandwidthIsSet() const
{
    return internetBandwidthIsSet_;
}

void ShowInternetBandwidthResponse::unsetinternetBandwidth()
{
    internetBandwidthIsSet_ = false;
}

std::string ShowInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


