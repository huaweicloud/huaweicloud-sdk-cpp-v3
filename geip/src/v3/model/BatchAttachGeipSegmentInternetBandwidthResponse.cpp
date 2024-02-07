

#include "huaweicloud/geip/v3/model/BatchAttachGeipSegmentInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchAttachGeipSegmentInternetBandwidthResponse::BatchAttachGeipSegmentInternetBandwidthResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchAttachGeipSegmentInternetBandwidthResponse::~BatchAttachGeipSegmentInternetBandwidthResponse() = default;

void BatchAttachGeipSegmentInternetBandwidthResponse::validate()
{
}

web::json::value BatchAttachGeipSegmentInternetBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchAttachGeipSegmentInternetBandwidthResponse::fromJson(const web::json::value& val)
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


std::string BatchAttachGeipSegmentInternetBandwidthResponse::getJobId() const
{
    return jobId_;
}

void BatchAttachGeipSegmentInternetBandwidthResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchAttachGeipSegmentInternetBandwidthResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchAttachGeipSegmentInternetBandwidthResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string BatchAttachGeipSegmentInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchAttachGeipSegmentInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchAttachGeipSegmentInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchAttachGeipSegmentInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


