

#include "huaweicloud/metastudio/v1/model/CreateSubtitleFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSubtitleFileResponse::CreateSubtitleFileResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateSubtitleFileResponse::~CreateSubtitleFileResponse() = default;

void CreateSubtitleFileResponse::validate()
{
}

web::json::value CreateSubtitleFileResponse::toJson() const
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
bool CreateSubtitleFileResponse::fromJson(const web::json::value& val)
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


std::string CreateSubtitleFileResponse::getJobId() const
{
    return jobId_;
}

void CreateSubtitleFileResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateSubtitleFileResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateSubtitleFileResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateSubtitleFileResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateSubtitleFileResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateSubtitleFileResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateSubtitleFileResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


