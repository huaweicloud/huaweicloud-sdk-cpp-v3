

#include "huaweicloud/dbss/v1/model/JobBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




JobBean::JobBean()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    serverName_ = "";
    serverNameIsSet_ = false;
    beginTime_ = 0L;
    beginTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    haId_ = "";
    haIdIsSet_ = false;
    haName_ = "";
    haNameIsSet_ = false;
}

JobBean::~JobBean() = default;

void JobBean::validate()
{
}

web::json::value JobBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(serverNameIsSet_) {
        val[utility::conversions::to_string_t("server_name")] = ModelBase::toJson(serverName_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(haIdIsSet_) {
        val[utility::conversions::to_string_t("ha_id")] = ModelBase::toJson(haId_);
    }
    if(haNameIsSet_) {
        val[utility::conversions::to_string_t("ha_name")] = ModelBase::toJson(haName_);
    }

    return val;
}
bool JobBean::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaName(refVal);
        }
    }
    return ok;
}


std::string JobBean::getJobId() const
{
    return jobId_;
}

void JobBean::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool JobBean::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void JobBean::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string JobBean::getStatus() const
{
    return status_;
}

void JobBean::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobBean::statusIsSet() const
{
    return statusIsSet_;
}

void JobBean::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobBean::getJobType() const
{
    return jobType_;
}

void JobBean::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool JobBean::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void JobBean::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string JobBean::getServerId() const
{
    return serverId_;
}

void JobBean::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool JobBean::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void JobBean::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string JobBean::getServerName() const
{
    return serverName_;
}

void JobBean::setServerName(const std::string& value)
{
    serverName_ = value;
    serverNameIsSet_ = true;
}

bool JobBean::serverNameIsSet() const
{
    return serverNameIsSet_;
}

void JobBean::unsetserverName()
{
    serverNameIsSet_ = false;
}

int64_t JobBean::getBeginTime() const
{
    return beginTime_;
}

void JobBean::setBeginTime(int64_t value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool JobBean::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void JobBean::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int64_t JobBean::getEndTime() const
{
    return endTime_;
}

void JobBean::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool JobBean::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void JobBean::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string JobBean::getChargeMode() const
{
    return chargeMode_;
}

void JobBean::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool JobBean::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void JobBean::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string JobBean::getErrorCode() const
{
    return errorCode_;
}

void JobBean::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool JobBean::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void JobBean::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string JobBean::getFailReason() const
{
    return failReason_;
}

void JobBean::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool JobBean::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void JobBean::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string JobBean::getHaId() const
{
    return haId_;
}

void JobBean::setHaId(const std::string& value)
{
    haId_ = value;
    haIdIsSet_ = true;
}

bool JobBean::haIdIsSet() const
{
    return haIdIsSet_;
}

void JobBean::unsethaId()
{
    haIdIsSet_ = false;
}

std::string JobBean::getHaName() const
{
    return haName_;
}

void JobBean::setHaName(const std::string& value)
{
    haName_ = value;
    haNameIsSet_ = true;
}

bool JobBean::haNameIsSet() const
{
    return haNameIsSet_;
}

void JobBean::unsethaName()
{
    haNameIsSet_ = false;
}

}
}
}
}
}


