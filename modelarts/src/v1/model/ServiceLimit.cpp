

#include "huaweicloud/modelarts/v1/model/ServiceLimit.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceLimit::ServiceLimit()
{
    rateLimitIsSet_ = false;
    requestSizeLimit_ = 0;
    requestSizeLimitIsSet_ = false;
    requestTimeout_ = 0;
    requestTimeoutIsSet_ = false;
    ipWhiteListIsSet_ = false;
    ipBlackListIsSet_ = false;
}

ServiceLimit::~ServiceLimit() = default;

void ServiceLimit::validate()
{
}

web::json::value ServiceLimit::toJson() const
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
bool ServiceLimit::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rate_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rate_limit"));
        if(!fieldValue.is_null())
        {
            RateLimit refVal;
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


RateLimit ServiceLimit::getRateLimit() const
{
    return rateLimit_;
}

void ServiceLimit::setRateLimit(const RateLimit& value)
{
    rateLimit_ = value;
    rateLimitIsSet_ = true;
}

bool ServiceLimit::rateLimitIsSet() const
{
    return rateLimitIsSet_;
}

void ServiceLimit::unsetrateLimit()
{
    rateLimitIsSet_ = false;
}

int32_t ServiceLimit::getRequestSizeLimit() const
{
    return requestSizeLimit_;
}

void ServiceLimit::setRequestSizeLimit(int32_t value)
{
    requestSizeLimit_ = value;
    requestSizeLimitIsSet_ = true;
}

bool ServiceLimit::requestSizeLimitIsSet() const
{
    return requestSizeLimitIsSet_;
}

void ServiceLimit::unsetrequestSizeLimit()
{
    requestSizeLimitIsSet_ = false;
}

int32_t ServiceLimit::getRequestTimeout() const
{
    return requestTimeout_;
}

void ServiceLimit::setRequestTimeout(int32_t value)
{
    requestTimeout_ = value;
    requestTimeoutIsSet_ = true;
}

bool ServiceLimit::requestTimeoutIsSet() const
{
    return requestTimeoutIsSet_;
}

void ServiceLimit::unsetrequestTimeout()
{
    requestTimeoutIsSet_ = false;
}

std::vector<std::string>& ServiceLimit::getIpWhiteList()
{
    return ipWhiteList_;
}

void ServiceLimit::setIpWhiteList(const std::vector<std::string>& value)
{
    ipWhiteList_ = value;
    ipWhiteListIsSet_ = true;
}

bool ServiceLimit::ipWhiteListIsSet() const
{
    return ipWhiteListIsSet_;
}

void ServiceLimit::unsetipWhiteList()
{
    ipWhiteListIsSet_ = false;
}

std::vector<std::string>& ServiceLimit::getIpBlackList()
{
    return ipBlackList_;
}

void ServiceLimit::setIpBlackList(const std::vector<std::string>& value)
{
    ipBlackList_ = value;
    ipBlackListIsSet_ = true;
}

bool ServiceLimit::ipBlackListIsSet() const
{
    return ipBlackListIsSet_;
}

void ServiceLimit::unsetipBlackList()
{
    ipBlackListIsSet_ = false;
}

}
}
}
}
}


