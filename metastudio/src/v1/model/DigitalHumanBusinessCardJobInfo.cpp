

#include "huaweicloud/metastudio/v1/model/DigitalHumanBusinessCardJobInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DigitalHumanBusinessCardJobInfo::DigitalHumanBusinessCardJobInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    outputAssetConfigIsSet_ = false;
    errorInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastupdateTime_ = "";
    lastupdateTimeIsSet_ = false;
    businessCardType_ = "";
    businessCardTypeIsSet_ = false;
}

DigitalHumanBusinessCardJobInfo::~DigitalHumanBusinessCardJobInfo() = default;

void DigitalHumanBusinessCardJobInfo::validate()
{
}

web::json::value DigitalHumanBusinessCardJobInfo::toJson() const
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
    if(outputAssetConfigIsSet_) {
        val[utility::conversions::to_string_t("output_asset_config")] = ModelBase::toJson(outputAssetConfig_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastupdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastupdate_time")] = ModelBase::toJson(lastupdateTime_);
    }
    if(businessCardTypeIsSet_) {
        val[utility::conversions::to_string_t("business_card_type")] = ModelBase::toJson(businessCardType_);
    }

    return val;
}
bool DigitalHumanBusinessCardJobInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("output_asset_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_asset_config"));
        if(!fieldValue.is_null())
        {
            OutputAssetInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputAssetConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lastupdate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastupdate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastupdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_card_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_card_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessCardType(refVal);
        }
    }
    return ok;
}


std::string DigitalHumanBusinessCardJobInfo::getJobId() const
{
    return jobId_;
}

void DigitalHumanBusinessCardJobInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DigitalHumanBusinessCardJobInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DigitalHumanBusinessCardJobInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DigitalHumanBusinessCardJobInfo::getState() const
{
    return state_;
}

void DigitalHumanBusinessCardJobInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool DigitalHumanBusinessCardJobInfo::stateIsSet() const
{
    return stateIsSet_;
}

void DigitalHumanBusinessCardJobInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string DigitalHumanBusinessCardJobInfo::getStartTime() const
{
    return startTime_;
}

void DigitalHumanBusinessCardJobInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DigitalHumanBusinessCardJobInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DigitalHumanBusinessCardJobInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string DigitalHumanBusinessCardJobInfo::getEndTime() const
{
    return endTime_;
}

void DigitalHumanBusinessCardJobInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DigitalHumanBusinessCardJobInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DigitalHumanBusinessCardJobInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

OutputAssetInfo DigitalHumanBusinessCardJobInfo::getOutputAssetConfig() const
{
    return outputAssetConfig_;
}

void DigitalHumanBusinessCardJobInfo::setOutputAssetConfig(const OutputAssetInfo& value)
{
    outputAssetConfig_ = value;
    outputAssetConfigIsSet_ = true;
}

bool DigitalHumanBusinessCardJobInfo::outputAssetConfigIsSet() const
{
    return outputAssetConfigIsSet_;
}

void DigitalHumanBusinessCardJobInfo::unsetoutputAssetConfig()
{
    outputAssetConfigIsSet_ = false;
}

ErrorResponse DigitalHumanBusinessCardJobInfo::getErrorInfo() const
{
    return errorInfo_;
}

void DigitalHumanBusinessCardJobInfo::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool DigitalHumanBusinessCardJobInfo::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void DigitalHumanBusinessCardJobInfo::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string DigitalHumanBusinessCardJobInfo::getCreateTime() const
{
    return createTime_;
}

void DigitalHumanBusinessCardJobInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DigitalHumanBusinessCardJobInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DigitalHumanBusinessCardJobInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DigitalHumanBusinessCardJobInfo::getLastupdateTime() const
{
    return lastupdateTime_;
}

void DigitalHumanBusinessCardJobInfo::setLastupdateTime(const std::string& value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool DigitalHumanBusinessCardJobInfo::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void DigitalHumanBusinessCardJobInfo::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

std::string DigitalHumanBusinessCardJobInfo::getBusinessCardType() const
{
    return businessCardType_;
}

void DigitalHumanBusinessCardJobInfo::setBusinessCardType(const std::string& value)
{
    businessCardType_ = value;
    businessCardTypeIsSet_ = true;
}

bool DigitalHumanBusinessCardJobInfo::businessCardTypeIsSet() const
{
    return businessCardTypeIsSet_;
}

void DigitalHumanBusinessCardJobInfo::unsetbusinessCardType()
{
    businessCardTypeIsSet_ = false;
}

}
}
}
}
}


