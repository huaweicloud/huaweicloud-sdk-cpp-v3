

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
    globalEipSegmentsIsSet_ = false;
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
    if(globalEipSegmentsIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segments")] = ModelBase::toJson(globalEipSegments_);
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
    if(val.has_field(utility::conversions::to_string_t("global_eip_segments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segments"));
        if(!fieldValue.is_null())
        {
            CountGeipSegments refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegments(refVal);
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

CountGeipSegments CountGlobalEipSegmentResponse::getGlobalEipSegments() const
{
    return globalEipSegments_;
}

void CountGlobalEipSegmentResponse::setGlobalEipSegments(const CountGeipSegments& value)
{
    globalEipSegments_ = value;
    globalEipSegmentsIsSet_ = true;
}

bool CountGlobalEipSegmentResponse::globalEipSegmentsIsSet() const
{
    return globalEipSegmentsIsSet_;
}

void CountGlobalEipSegmentResponse::unsetglobalEipSegments()
{
    globalEipSegmentsIsSet_ = false;
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


