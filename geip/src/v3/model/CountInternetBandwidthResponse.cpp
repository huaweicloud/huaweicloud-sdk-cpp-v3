

#include "huaweicloud/geip/v3/model/CountInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountInternetBandwidthResponse::CountInternetBandwidthResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    internetBandwidthsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CountInternetBandwidthResponse::~CountInternetBandwidthResponse() = default;

void CountInternetBandwidthResponse::validate()
{
}

web::json::value CountInternetBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(internetBandwidthsIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidths")] = ModelBase::toJson(internetBandwidths_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CountInternetBandwidthResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidths"));
        if(!fieldValue.is_null())
        {
            CountInternetBandwidths refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidths(refVal);
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


std::string CountInternetBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void CountInternetBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CountInternetBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CountInternetBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

CountInternetBandwidths CountInternetBandwidthResponse::getInternetBandwidths() const
{
    return internetBandwidths_;
}

void CountInternetBandwidthResponse::setInternetBandwidths(const CountInternetBandwidths& value)
{
    internetBandwidths_ = value;
    internetBandwidthsIsSet_ = true;
}

bool CountInternetBandwidthResponse::internetBandwidthsIsSet() const
{
    return internetBandwidthsIsSet_;
}

void CountInternetBandwidthResponse::unsetinternetBandwidths()
{
    internetBandwidthsIsSet_ = false;
}

std::string CountInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void CountInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CountInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CountInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


