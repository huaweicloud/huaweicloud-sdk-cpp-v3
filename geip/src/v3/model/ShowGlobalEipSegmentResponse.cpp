

#include "huaweicloud/geip/v3/model/ShowGlobalEipSegmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowGlobalEipSegmentResponse::ShowGlobalEipSegmentResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipSegmentIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowGlobalEipSegmentResponse::~ShowGlobalEipSegmentResponse() = default;

void ShowGlobalEipSegmentResponse::validate()
{
}

web::json::value ShowGlobalEipSegmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(globalEipSegmentIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment")] = ModelBase::toJson(globalEipSegment_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowGlobalEipSegmentResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("global_eip_segment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segment"));
        if(!fieldValue.is_null())
        {
            ShowGlobalEipSegment refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegment(refVal);
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


std::string ShowGlobalEipSegmentResponse::getRequestId() const
{
    return requestId_;
}

void ShowGlobalEipSegmentResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowGlobalEipSegmentResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowGlobalEipSegmentResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

ShowGlobalEipSegment ShowGlobalEipSegmentResponse::getGlobalEipSegment() const
{
    return globalEipSegment_;
}

void ShowGlobalEipSegmentResponse::setGlobalEipSegment(const ShowGlobalEipSegment& value)
{
    globalEipSegment_ = value;
    globalEipSegmentIsSet_ = true;
}

bool ShowGlobalEipSegmentResponse::globalEipSegmentIsSet() const
{
    return globalEipSegmentIsSet_;
}

void ShowGlobalEipSegmentResponse::unsetglobalEipSegment()
{
    globalEipSegmentIsSet_ = false;
}

std::string ShowGlobalEipSegmentResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowGlobalEipSegmentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowGlobalEipSegmentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowGlobalEipSegmentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


