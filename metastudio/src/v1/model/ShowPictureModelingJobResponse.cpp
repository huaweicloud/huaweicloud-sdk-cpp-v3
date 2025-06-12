

#include "huaweicloud/metastudio/v1/model/ShowPictureModelingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPictureModelingJobResponse::ShowPictureModelingJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    errorInfoIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    styleId_ = "";
    styleIdIsSet_ = false;
    modelCoverUrl_ = "";
    modelCoverUrlIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPictureModelingJobResponse::~ShowPictureModelingJobResponse() = default;

void ShowPictureModelingJobResponse::validate()
{
}

web::json::value ShowPictureModelingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(styleIdIsSet_) {
        val[utility::conversions::to_string_t("style_id")] = ModelBase::toJson(styleId_);
    }
    if(modelCoverUrlIsSet_) {
        val[utility::conversions::to_string_t("model_cover_url")] = ModelBase::toJson(modelCoverUrl_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPictureModelingJobResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("model_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("style_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelCoverUrl(refVal);
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


std::string ShowPictureModelingJobResponse::getJobId() const
{
    return jobId_;
}

void ShowPictureModelingJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowPictureModelingJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowPictureModelingJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowPictureModelingJobResponse::getState() const
{
    return state_;
}

void ShowPictureModelingJobResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowPictureModelingJobResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowPictureModelingJobResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowPictureModelingJobResponse::getStartTime() const
{
    return startTime_;
}

void ShowPictureModelingJobResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowPictureModelingJobResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowPictureModelingJobResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowPictureModelingJobResponse::getEndTime() const
{
    return endTime_;
}

void ShowPictureModelingJobResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowPictureModelingJobResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowPictureModelingJobResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

ErrorResponse ShowPictureModelingJobResponse::getErrorInfo() const
{
    return errorInfo_;
}

void ShowPictureModelingJobResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool ShowPictureModelingJobResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void ShowPictureModelingJobResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string ShowPictureModelingJobResponse::getModelAssetId() const
{
    return modelAssetId_;
}

void ShowPictureModelingJobResponse::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool ShowPictureModelingJobResponse::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void ShowPictureModelingJobResponse::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string ShowPictureModelingJobResponse::getName() const
{
    return name_;
}

void ShowPictureModelingJobResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPictureModelingJobResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPictureModelingJobResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowPictureModelingJobResponse::getStyleId() const
{
    return styleId_;
}

void ShowPictureModelingJobResponse::setStyleId(const std::string& value)
{
    styleId_ = value;
    styleIdIsSet_ = true;
}

bool ShowPictureModelingJobResponse::styleIdIsSet() const
{
    return styleIdIsSet_;
}

void ShowPictureModelingJobResponse::unsetstyleId()
{
    styleIdIsSet_ = false;
}

std::string ShowPictureModelingJobResponse::getModelCoverUrl() const
{
    return modelCoverUrl_;
}

void ShowPictureModelingJobResponse::setModelCoverUrl(const std::string& value)
{
    modelCoverUrl_ = value;
    modelCoverUrlIsSet_ = true;
}

bool ShowPictureModelingJobResponse::modelCoverUrlIsSet() const
{
    return modelCoverUrlIsSet_;
}

void ShowPictureModelingJobResponse::unsetmodelCoverUrl()
{
    modelCoverUrlIsSet_ = false;
}

std::string ShowPictureModelingJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPictureModelingJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPictureModelingJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPictureModelingJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


