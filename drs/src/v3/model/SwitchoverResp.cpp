

#include "huaweicloud/drs/v3/model/SwitchoverResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




SwitchoverResp::SwitchoverResp()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    sourceDbIsSet_ = false;
    targetDbIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    isTargetReadonly_ = false;
    isTargetReadonlyIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
}

SwitchoverResp::~SwitchoverResp() = default;

void SwitchoverResp::validate()
{
}

web::json::value SwitchoverResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(sourceDbIsSet_) {
        val[utility::conversions::to_string_t("source_db")] = ModelBase::toJson(sourceDb_);
    }
    if(targetDbIsSet_) {
        val[utility::conversions::to_string_t("target_db")] = ModelBase::toJson(targetDb_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(isTargetReadonlyIsSet_) {
        val[utility::conversions::to_string_t("is_target_readonly")] = ModelBase::toJson(isTargetReadonly_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }

    return val;
}

bool SwitchoverResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db"));
        if(!fieldValue.is_null())
        {
            EndpointVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db"));
        if(!fieldValue.is_null())
        {
            EndpointVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_target_readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_target_readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTargetReadonly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    return ok;
}

std::string SwitchoverResp::getJobId() const
{
    return jobId_;
}

void SwitchoverResp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchoverResp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchoverResp::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SwitchoverResp::getUpdatedAt() const
{
    return updatedAt_;
}

void SwitchoverResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool SwitchoverResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void SwitchoverResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

EndpointVO SwitchoverResp::getSourceDb() const
{
    return sourceDb_;
}

void SwitchoverResp::setSourceDb(const EndpointVO& value)
{
    sourceDb_ = value;
    sourceDbIsSet_ = true;
}

bool SwitchoverResp::sourceDbIsSet() const
{
    return sourceDbIsSet_;
}

void SwitchoverResp::unsetsourceDb()
{
    sourceDbIsSet_ = false;
}

EndpointVO SwitchoverResp::getTargetDb() const
{
    return targetDb_;
}

void SwitchoverResp::setTargetDb(const EndpointVO& value)
{
    targetDb_ = value;
    targetDbIsSet_ = true;
}

bool SwitchoverResp::targetDbIsSet() const
{
    return targetDbIsSet_;
}

void SwitchoverResp::unsettargetDb()
{
    targetDbIsSet_ = false;
}

std::string SwitchoverResp::getJobDirection() const
{
    return jobDirection_;
}

void SwitchoverResp::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool SwitchoverResp::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void SwitchoverResp::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

bool SwitchoverResp::isIsTargetReadonly() const
{
    return isTargetReadonly_;
}

void SwitchoverResp::setIsTargetReadonly(bool value)
{
    isTargetReadonly_ = value;
    isTargetReadonlyIsSet_ = true;
}

bool SwitchoverResp::isTargetReadonlyIsSet() const
{
    return isTargetReadonlyIsSet_;
}

void SwitchoverResp::unsetisTargetReadonly()
{
    isTargetReadonlyIsSet_ = false;
}

std::string SwitchoverResp::getErrorMsg() const
{
    return errorMsg_;
}

void SwitchoverResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool SwitchoverResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void SwitchoverResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

std::string SwitchoverResp::getErrorCode() const
{
    return errorCode_;
}

void SwitchoverResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool SwitchoverResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void SwitchoverResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


