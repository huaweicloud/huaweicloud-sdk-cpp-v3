

#include "huaweicloud/geip/v3/model/ListInternetBandwidthLimitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListInternetBandwidthLimitsResponse::ListInternetBandwidthLimitsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    internetBandwidthLimitsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListInternetBandwidthLimitsResponse::~ListInternetBandwidthLimitsResponse() = default;

void ListInternetBandwidthLimitsResponse::validate()
{
}

web::json::value ListInternetBandwidthLimitsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(internetBandwidthLimitsIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_limits")] = ModelBase::toJson(internetBandwidthLimits_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListInternetBandwidthLimitsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_limits"));
        if(!fieldValue.is_null())
        {
            std::vector<ListInternetBandwidthLimits> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthLimits(refVal);
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


std::string ListInternetBandwidthLimitsResponse::getRequestId() const
{
    return requestId_;
}

void ListInternetBandwidthLimitsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListInternetBandwidthLimitsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListInternetBandwidthLimitsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListInternetBandwidthLimits>& ListInternetBandwidthLimitsResponse::getInternetBandwidthLimits()
{
    return internetBandwidthLimits_;
}

void ListInternetBandwidthLimitsResponse::setInternetBandwidthLimits(const std::vector<ListInternetBandwidthLimits>& value)
{
    internetBandwidthLimits_ = value;
    internetBandwidthLimitsIsSet_ = true;
}

bool ListInternetBandwidthLimitsResponse::internetBandwidthLimitsIsSet() const
{
    return internetBandwidthLimitsIsSet_;
}

void ListInternetBandwidthLimitsResponse::unsetinternetBandwidthLimits()
{
    internetBandwidthLimitsIsSet_ = false;
}

std::string ListInternetBandwidthLimitsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListInternetBandwidthLimitsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListInternetBandwidthLimitsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListInternetBandwidthLimitsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


