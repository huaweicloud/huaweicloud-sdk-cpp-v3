

#include "huaweicloud/geip/v3/model/BatchCreateInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateInternetBandwidthResponse::BatchCreateInternetBandwidthResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    internetBandwidthsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchCreateInternetBandwidthResponse::~BatchCreateInternetBandwidthResponse() = default;

void BatchCreateInternetBandwidthResponse::validate()
{
}

web::json::value BatchCreateInternetBandwidthResponse::toJson() const
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
bool BatchCreateInternetBandwidthResponse::fromJson(const web::json::value& val)
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
            std::vector<BatchCreateInternetBandwidth> refVal;
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


std::string BatchCreateInternetBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void BatchCreateInternetBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool BatchCreateInternetBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void BatchCreateInternetBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<BatchCreateInternetBandwidth>& BatchCreateInternetBandwidthResponse::getInternetBandwidths()
{
    return internetBandwidths_;
}

void BatchCreateInternetBandwidthResponse::setInternetBandwidths(const std::vector<BatchCreateInternetBandwidth>& value)
{
    internetBandwidths_ = value;
    internetBandwidthsIsSet_ = true;
}

bool BatchCreateInternetBandwidthResponse::internetBandwidthsIsSet() const
{
    return internetBandwidthsIsSet_;
}

void BatchCreateInternetBandwidthResponse::unsetinternetBandwidths()
{
    internetBandwidthsIsSet_ = false;
}

std::string BatchCreateInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchCreateInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchCreateInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchCreateInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


