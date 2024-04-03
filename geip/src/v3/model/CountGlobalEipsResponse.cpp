

#include "huaweicloud/geip/v3/model/CountGlobalEipsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountGlobalEipsResponse::CountGlobalEipsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CountGlobalEipsResponse::~CountGlobalEipsResponse() = default;

void CountGlobalEipsResponse::validate()
{
}

web::json::value CountGlobalEipsResponse::toJson() const
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
bool CountGlobalEipsResponse::fromJson(const web::json::value& val)
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
            CountGlobalEips refVal;
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


std::string CountGlobalEipsResponse::getRequestId() const
{
    return requestId_;
}

void CountGlobalEipsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CountGlobalEipsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CountGlobalEipsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

CountGlobalEips CountGlobalEipsResponse::getGlobalEip() const
{
    return globalEip_;
}

void CountGlobalEipsResponse::setGlobalEip(const CountGlobalEips& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool CountGlobalEipsResponse::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void CountGlobalEipsResponse::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

std::string CountGlobalEipsResponse::getXRequestId() const
{
    return xRequestId_;
}

void CountGlobalEipsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CountGlobalEipsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CountGlobalEipsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


