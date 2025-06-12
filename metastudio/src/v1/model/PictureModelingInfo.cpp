

#include "huaweicloud/metastudio/v1/model/PictureModelingInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PictureModelingInfo::PictureModelingInfo()
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
}

PictureModelingInfo::~PictureModelingInfo() = default;

void PictureModelingInfo::validate()
{
}

web::json::value PictureModelingInfo::toJson() const
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

    return val;
}
bool PictureModelingInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string PictureModelingInfo::getJobId() const
{
    return jobId_;
}

void PictureModelingInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool PictureModelingInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void PictureModelingInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string PictureModelingInfo::getState() const
{
    return state_;
}

void PictureModelingInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool PictureModelingInfo::stateIsSet() const
{
    return stateIsSet_;
}

void PictureModelingInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string PictureModelingInfo::getStartTime() const
{
    return startTime_;
}

void PictureModelingInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool PictureModelingInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void PictureModelingInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string PictureModelingInfo::getEndTime() const
{
    return endTime_;
}

void PictureModelingInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool PictureModelingInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void PictureModelingInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

ErrorResponse PictureModelingInfo::getErrorInfo() const
{
    return errorInfo_;
}

void PictureModelingInfo::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool PictureModelingInfo::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void PictureModelingInfo::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string PictureModelingInfo::getModelAssetId() const
{
    return modelAssetId_;
}

void PictureModelingInfo::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool PictureModelingInfo::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void PictureModelingInfo::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string PictureModelingInfo::getName() const
{
    return name_;
}

void PictureModelingInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PictureModelingInfo::nameIsSet() const
{
    return nameIsSet_;
}

void PictureModelingInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string PictureModelingInfo::getStyleId() const
{
    return styleId_;
}

void PictureModelingInfo::setStyleId(const std::string& value)
{
    styleId_ = value;
    styleIdIsSet_ = true;
}

bool PictureModelingInfo::styleIdIsSet() const
{
    return styleIdIsSet_;
}

void PictureModelingInfo::unsetstyleId()
{
    styleIdIsSet_ = false;
}

std::string PictureModelingInfo::getModelCoverUrl() const
{
    return modelCoverUrl_;
}

void PictureModelingInfo::setModelCoverUrl(const std::string& value)
{
    modelCoverUrl_ = value;
    modelCoverUrlIsSet_ = true;
}

bool PictureModelingInfo::modelCoverUrlIsSet() const
{
    return modelCoverUrlIsSet_;
}

void PictureModelingInfo::unsetmodelCoverUrl()
{
    modelCoverUrlIsSet_ = false;
}

}
}
}
}
}


