

#include "huaweicloud/geip/v3/model/UpdateGlobalEipSegmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateGlobalEipSegmentResponse::UpdateGlobalEipSegmentResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    globalEipSegmentIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateGlobalEipSegmentResponse::~UpdateGlobalEipSegmentResponse() = default;

void UpdateGlobalEipSegmentResponse::validate()
{
}

web::json::value UpdateGlobalEipSegmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(globalEipSegmentIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment")] = ModelBase::toJson(globalEipSegment_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateGlobalEipSegmentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global_eip_segment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segment"));
        if(!fieldValue.is_null())
        {
            ShortGlobalEipSegment refVal;
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


std::string UpdateGlobalEipSegmentResponse::getJobId() const
{
    return jobId_;
}

void UpdateGlobalEipSegmentResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateGlobalEipSegmentResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateGlobalEipSegmentResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

ShortGlobalEipSegment UpdateGlobalEipSegmentResponse::getGlobalEipSegment() const
{
    return globalEipSegment_;
}

void UpdateGlobalEipSegmentResponse::setGlobalEipSegment(const ShortGlobalEipSegment& value)
{
    globalEipSegment_ = value;
    globalEipSegmentIsSet_ = true;
}

bool UpdateGlobalEipSegmentResponse::globalEipSegmentIsSet() const
{
    return globalEipSegmentIsSet_;
}

void UpdateGlobalEipSegmentResponse::unsetglobalEipSegment()
{
    globalEipSegmentIsSet_ = false;
}

std::string UpdateGlobalEipSegmentResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateGlobalEipSegmentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateGlobalEipSegmentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateGlobalEipSegmentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


