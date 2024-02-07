

#include "huaweicloud/geip/v3/model/ShowJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowJobsResponse::ShowJobsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    jobIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowJobsResponse::~ShowJobsResponse() = default;

void ShowJobsResponse::validate()
{
}

web::json::value ShowJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowJobsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            ShowJob refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
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


std::string ShowJobsResponse::getRequestId() const
{
    return requestId_;
}

void ShowJobsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowJobsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowJobsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

ShowJob ShowJobsResponse::getJob() const
{
    return job_;
}

void ShowJobsResponse::setJob(const ShowJob& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool ShowJobsResponse::jobIsSet() const
{
    return jobIsSet_;
}

void ShowJobsResponse::unsetjob()
{
    jobIsSet_ = false;
}

std::string ShowJobsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowJobsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowJobsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowJobsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


