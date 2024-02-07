

#include "huaweicloud/geip/v3/model/ShowGlobalEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowGlobalEipResponse::ShowGlobalEipResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowGlobalEipResponse::~ShowGlobalEipResponse() = default;

void ShowGlobalEipResponse::validate()
{
}

web::json::value ShowGlobalEipResponse::toJson() const
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
bool ShowGlobalEipResponse::fromJson(const web::json::value& val)
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
            ShowGlobalEip refVal;
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


std::string ShowGlobalEipResponse::getRequestId() const
{
    return requestId_;
}

void ShowGlobalEipResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowGlobalEipResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowGlobalEipResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

ShowGlobalEip ShowGlobalEipResponse::getGlobalEip() const
{
    return globalEip_;
}

void ShowGlobalEipResponse::setGlobalEip(const ShowGlobalEip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool ShowGlobalEipResponse::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void ShowGlobalEipResponse::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

std::string ShowGlobalEipResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowGlobalEipResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowGlobalEipResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowGlobalEipResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


