

#include "huaweicloud/modelarts/v1/model/ServiceLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceLimitResponse::ServiceLimitResponse()
{
    rateLimitIsSet_ = false;
    requestSizeLimit_ = 0;
    requestSizeLimitIsSet_ = false;
    requestTimeout_ = 0;
    requestTimeoutIsSet_ = false;
    ipWhiteListIsSet_ = false;
    ipBlackListIsSet_ = false;
}

ServiceLimitResponse::~ServiceLimitResponse() = default;

void ServiceLimitResponse::validate()
{
}

web::json::value ServiceLimitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rateLimitIsSet_) {
        val[utility::conversions::to_string_t("rate_limit")] = ModelBase::toJson(rateLimit_);
    }
    if(requestSizeLimitIsSet_) {
        val[utility::conversions::to_string_t("request_size_limit")] = ModelBase::toJson(requestSizeLimit_);
    }
    if(requestTimeoutIsSet_) {
        val[utility::conversions::to_string_t("request_timeout")] = ModelBase::toJson(requestTimeout_);
    }
    if(ipWhiteListIsSet_) {
        val[utility::conversions::to_string_t("ip_white_list")] = ModelBase::toJson(ipWhiteList_);
    }
    if(ipBlackListIsSet_) {
        val[utility::conversions::to_string_t("ip_black_list")] = ModelBase::toJson(ipBlackList_);
    }

    return val;
}
bool ServiceLimitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rate_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rate_limit"));
        if(!fieldValue.is_null())
        {
            RateLimitResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRateLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_size_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_size_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestSizeLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_white_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_white_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpWhiteList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_black_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_black_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpBlackList(refVal);
        }
    }
    return ok;
}


RateLimitResponse ServiceLimitResponse::getRateLimit() const
{
    return rateLimit_;
}

void ServiceLimitResponse::setRateLimit(const RateLimitResponse& value)
{
    rateLimit_ = value;
    rateLimitIsSet_ = true;
}

bool ServiceLimitResponse::rateLimitIsSet() const
{
    return rateLimitIsSet_;
}

void ServiceLimitResponse::unsetrateLimit()
{
    rateLimitIsSet_ = false;
}

int32_t ServiceLimitResponse::getRequestSizeLimit() const
{
    return requestSizeLimit_;
}

void ServiceLimitResponse::setRequestSizeLimit(int32_t value)
{
    requestSizeLimit_ = value;
    requestSizeLimitIsSet_ = true;
}

bool ServiceLimitResponse::requestSizeLimitIsSet() const
{
    return requestSizeLimitIsSet_;
}

void ServiceLimitResponse::unsetrequestSizeLimit()
{
    requestSizeLimitIsSet_ = false;
}

int32_t ServiceLimitResponse::getRequestTimeout() const
{
    return requestTimeout_;
}

void ServiceLimitResponse::setRequestTimeout(int32_t value)
{
    requestTimeout_ = value;
    requestTimeoutIsSet_ = true;
}

bool ServiceLimitResponse::requestTimeoutIsSet() const
{
    return requestTimeoutIsSet_;
}

void ServiceLimitResponse::unsetrequestTimeout()
{
    requestTimeoutIsSet_ = false;
}

std::vector<std::string>& ServiceLimitResponse::getIpWhiteList()
{
    return ipWhiteList_;
}

void ServiceLimitResponse::setIpWhiteList(const std::vector<std::string>& value)
{
    ipWhiteList_ = value;
    ipWhiteListIsSet_ = true;
}

bool ServiceLimitResponse::ipWhiteListIsSet() const
{
    return ipWhiteListIsSet_;
}

void ServiceLimitResponse::unsetipWhiteList()
{
    ipWhiteListIsSet_ = false;
}

std::vector<std::string>& ServiceLimitResponse::getIpBlackList()
{
    return ipBlackList_;
}

void ServiceLimitResponse::setIpBlackList(const std::vector<std::string>& value)
{
    ipBlackList_ = value;
    ipBlackListIsSet_ = true;
}

bool ServiceLimitResponse::ipBlackListIsSet() const
{
    return ipBlackListIsSet_;
}

void ServiceLimitResponse::unsetipBlackList()
{
    ipBlackListIsSet_ = false;
}

}
}
}
}
}


