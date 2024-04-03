

#include "huaweicloud/geip/v3/model/CountGlobalEipSegmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountGlobalEipSegmentResponse::CountGlobalEipSegmentResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    globalEipSegmentIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CountGlobalEipSegmentResponse::~CountGlobalEipSegmentResponse() = default;

void CountGlobalEipSegmentResponse::validate()
{
}

web::json::value CountGlobalEipSegmentResponse::toJson() const
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
bool CountGlobalEipSegmentResponse::fromJson(const web::json::value& val)
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
            CountGeipSegments refVal;
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


std::string CountGlobalEipSegmentResponse::getRequestId() const
{
    return requestId_;
}

void CountGlobalEipSegmentResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CountGlobalEipSegmentResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CountGlobalEipSegmentResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

CountGeipSegments CountGlobalEipSegmentResponse::getGlobalEipSegment() const
{
    return globalEipSegment_;
}

void CountGlobalEipSegmentResponse::setGlobalEipSegment(const CountGeipSegments& value)
{
    globalEipSegment_ = value;
    globalEipSegmentIsSet_ = true;
}

bool CountGlobalEipSegmentResponse::globalEipSegmentIsSet() const
{
    return globalEipSegmentIsSet_;
}

void CountGlobalEipSegmentResponse::unsetglobalEipSegment()
{
    globalEipSegmentIsSet_ = false;
}

std::string CountGlobalEipSegmentResponse::getXRequestId() const
{
    return xRequestId_;
}

void CountGlobalEipSegmentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CountGlobalEipSegmentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CountGlobalEipSegmentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


