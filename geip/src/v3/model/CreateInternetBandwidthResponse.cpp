

#include "huaweicloud/geip/v3/model/CreateInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateInternetBandwidthResponse::CreateInternetBandwidthResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    internetBandwidthIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateInternetBandwidthResponse::~CreateInternetBandwidthResponse() = default;

void CreateInternetBandwidthResponse::validate()
{
}

web::json::value CreateInternetBandwidthResponse::toJson() const
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
bool CreateInternetBandwidthResponse::fromJson(const web::json::value& val)
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
            CreateInternetBandwidth refVal;
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


std::string CreateInternetBandwidthResponse::getRequestId() const
{
    return requestId_;
}

void CreateInternetBandwidthResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateInternetBandwidthResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateInternetBandwidthResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

CreateInternetBandwidth CreateInternetBandwidthResponse::getInternetBandwidth() const
{
    return internetBandwidth_;
}

void CreateInternetBandwidthResponse::setInternetBandwidth(const CreateInternetBandwidth& value)
{
    internetBandwidth_ = value;
    internetBandwidthIsSet_ = true;
}

bool CreateInternetBandwidthResponse::internetBandwidthIsSet() const
{
    return internetBandwidthIsSet_;
}

void CreateInternetBandwidthResponse::unsetinternetBandwidth()
{
    internetBandwidthIsSet_ = false;
}

std::string CreateInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


