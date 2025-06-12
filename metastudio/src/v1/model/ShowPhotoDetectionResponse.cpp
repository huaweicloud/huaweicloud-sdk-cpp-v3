

#include "huaweicloud/metastudio/v1/model/ShowPhotoDetectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPhotoDetectionResponse::ShowPhotoDetectionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    errorInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPhotoDetectionResponse::~ShowPhotoDetectionResponse() = default;

void ShowPhotoDetectionResponse::validate()
{
}

web::json::value ShowPhotoDetectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPhotoDetectionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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


std::string ShowPhotoDetectionResponse::getJobId() const
{
    return jobId_;
}

void ShowPhotoDetectionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowPhotoDetectionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowPhotoDetectionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowPhotoDetectionResponse::getState() const
{
    return state_;
}

void ShowPhotoDetectionResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowPhotoDetectionResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowPhotoDetectionResponse::unsetstate()
{
    stateIsSet_ = false;
}

ErrorResponse ShowPhotoDetectionResponse::getErrorInfo() const
{
    return errorInfo_;
}

void ShowPhotoDetectionResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool ShowPhotoDetectionResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void ShowPhotoDetectionResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string ShowPhotoDetectionResponse::getCreateTime() const
{
    return createTime_;
}

void ShowPhotoDetectionResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowPhotoDetectionResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowPhotoDetectionResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowPhotoDetectionResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPhotoDetectionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPhotoDetectionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPhotoDetectionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


