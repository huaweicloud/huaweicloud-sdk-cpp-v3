

#include "huaweicloud/geip/v3/model/BatchDetachGeipSegmentInternetBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDetachGeipSegmentInternetBandwidthResponse::BatchDetachGeipSegmentInternetBandwidthResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchDetachGeipSegmentInternetBandwidthResponse::~BatchDetachGeipSegmentInternetBandwidthResponse() = default;

void BatchDetachGeipSegmentInternetBandwidthResponse::validate()
{
}

web::json::value BatchDetachGeipSegmentInternetBandwidthResponse::toJson() const
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
bool BatchDetachGeipSegmentInternetBandwidthResponse::fromJson(const web::json::value& val)
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


std::string BatchDetachGeipSegmentInternetBandwidthResponse::getJobId() const
{
    return jobId_;
}

void BatchDetachGeipSegmentInternetBandwidthResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchDetachGeipSegmentInternetBandwidthResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchDetachGeipSegmentInternetBandwidthResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string BatchDetachGeipSegmentInternetBandwidthResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchDetachGeipSegmentInternetBandwidthResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDetachGeipSegmentInternetBandwidthResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDetachGeipSegmentInternetBandwidthResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


