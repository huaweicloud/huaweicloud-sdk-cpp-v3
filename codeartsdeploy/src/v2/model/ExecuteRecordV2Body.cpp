

#include "huaweicloud/codeartsdeploy/v2/model/ExecuteRecordV2Body.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ExecuteRecordV2Body::ExecuteRecordV2Body()
{
    duration_ = "";
    durationIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    nickname_ = "";
    nicknameIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    releaseId_ = 0L;
    releaseIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ExecuteRecordV2Body::~ExecuteRecordV2Body() = default;

void ExecuteRecordV2Body::validate()
{
}

web::json::value ExecuteRecordV2Body::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(nicknameIsSet_) {
        val[utility::conversions::to_string_t("nickname")] = ModelBase::toJson(nickname_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(releaseIdIsSet_) {
        val[utility::conversions::to_string_t("release_id")] = ModelBase::toJson(releaseId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ExecuteRecordV2Body::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nickname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nickname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickname(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("release_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ExecuteRecordV2Body::getDuration() const
{
    return duration_;
}

void ExecuteRecordV2Body::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ExecuteRecordV2Body::durationIsSet() const
{
    return durationIsSet_;
}

void ExecuteRecordV2Body::unsetduration()
{
    durationIsSet_ = false;
}

std::string ExecuteRecordV2Body::getState() const
{
    return state_;
}

void ExecuteRecordV2Body::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ExecuteRecordV2Body::stateIsSet() const
{
    return stateIsSet_;
}

void ExecuteRecordV2Body::unsetstate()
{
    stateIsSet_ = false;
}

std::string ExecuteRecordV2Body::getOperator() const
{
    return operator_;
}

void ExecuteRecordV2Body::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool ExecuteRecordV2Body::operatorIsSet() const
{
    return operatorIsSet_;
}

void ExecuteRecordV2Body::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string ExecuteRecordV2Body::getExecutionId() const
{
    return executionId_;
}

void ExecuteRecordV2Body::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool ExecuteRecordV2Body::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void ExecuteRecordV2Body::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string ExecuteRecordV2Body::getStartTime() const
{
    return startTime_;
}

void ExecuteRecordV2Body::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ExecuteRecordV2Body::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ExecuteRecordV2Body::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ExecuteRecordV2Body::getNickname() const
{
    return nickname_;
}

void ExecuteRecordV2Body::setNickname(const std::string& value)
{
    nickname_ = value;
    nicknameIsSet_ = true;
}

bool ExecuteRecordV2Body::nicknameIsSet() const
{
    return nicknameIsSet_;
}

void ExecuteRecordV2Body::unsetnickname()
{
    nicknameIsSet_ = false;
}

std::string ExecuteRecordV2Body::getEndTime() const
{
    return endTime_;
}

void ExecuteRecordV2Body::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExecuteRecordV2Body::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExecuteRecordV2Body::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t ExecuteRecordV2Body::getReleaseId() const
{
    return releaseId_;
}

void ExecuteRecordV2Body::setReleaseId(int64_t value)
{
    releaseId_ = value;
    releaseIdIsSet_ = true;
}

bool ExecuteRecordV2Body::releaseIdIsSet() const
{
    return releaseIdIsSet_;
}

void ExecuteRecordV2Body::unsetreleaseId()
{
    releaseIdIsSet_ = false;
}

std::string ExecuteRecordV2Body::getType() const
{
    return type_;
}

void ExecuteRecordV2Body::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ExecuteRecordV2Body::typeIsSet() const
{
    return typeIsSet_;
}

void ExecuteRecordV2Body::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


