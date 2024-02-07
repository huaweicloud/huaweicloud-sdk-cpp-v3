

#include "huaweicloud/geip/v3/model/AssociateGeipSegmentInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateGeipSegmentInstanceResponse::AssociateGeipSegmentInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    globalEipSegmentIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

AssociateGeipSegmentInstanceResponse::~AssociateGeipSegmentInstanceResponse() = default;

void AssociateGeipSegmentInstanceResponse::validate()
{
}

web::json::value AssociateGeipSegmentInstanceResponse::toJson() const
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
bool AssociateGeipSegmentInstanceResponse::fromJson(const web::json::value& val)
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


std::string AssociateGeipSegmentInstanceResponse::getJobId() const
{
    return jobId_;
}

void AssociateGeipSegmentInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AssociateGeipSegmentInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AssociateGeipSegmentInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

ShortGlobalEipSegment AssociateGeipSegmentInstanceResponse::getGlobalEipSegment() const
{
    return globalEipSegment_;
}

void AssociateGeipSegmentInstanceResponse::setGlobalEipSegment(const ShortGlobalEipSegment& value)
{
    globalEipSegment_ = value;
    globalEipSegmentIsSet_ = true;
}

bool AssociateGeipSegmentInstanceResponse::globalEipSegmentIsSet() const
{
    return globalEipSegmentIsSet_;
}

void AssociateGeipSegmentInstanceResponse::unsetglobalEipSegment()
{
    globalEipSegmentIsSet_ = false;
}

std::string AssociateGeipSegmentInstanceResponse::getXRequestId() const
{
    return xRequestId_;
}

void AssociateGeipSegmentInstanceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool AssociateGeipSegmentInstanceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void AssociateGeipSegmentInstanceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


