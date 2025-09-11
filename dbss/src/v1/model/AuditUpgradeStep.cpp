

#include "huaweicloud/dbss/v1/model/AuditUpgradeStep.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditUpgradeStep::AuditUpgradeStep()
{
    msg_ = "";
    msgIsSet_ = false;
    resultCode_ = "";
    resultCodeIsSet_ = false;
    stepName_ = "";
    stepNameIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

AuditUpgradeStep::~AuditUpgradeStep() = default;

void AuditUpgradeStep::validate()
{
}

web::json::value AuditUpgradeStep::toJson() const
{
    web::json::value val = web::json::value::object();

    if(msgIsSet_) {
        val[utility::conversions::to_string_t("msg")] = ModelBase::toJson(msg_);
    }
    if(resultCodeIsSet_) {
        val[utility::conversions::to_string_t("result_code")] = ModelBase::toJson(resultCode_);
    }
    if(stepNameIsSet_) {
        val[utility::conversions::to_string_t("step_name")] = ModelBase::toJson(stepName_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool AuditUpgradeStep::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


std::string AuditUpgradeStep::getMsg() const
{
    return msg_;
}

void AuditUpgradeStep::setMsg(const std::string& value)
{
    msg_ = value;
    msgIsSet_ = true;
}

bool AuditUpgradeStep::msgIsSet() const
{
    return msgIsSet_;
}

void AuditUpgradeStep::unsetmsg()
{
    msgIsSet_ = false;
}

std::string AuditUpgradeStep::getResultCode() const
{
    return resultCode_;
}

void AuditUpgradeStep::setResultCode(const std::string& value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool AuditUpgradeStep::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void AuditUpgradeStep::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string AuditUpgradeStep::getStepName() const
{
    return stepName_;
}

void AuditUpgradeStep::setStepName(const std::string& value)
{
    stepName_ = value;
    stepNameIsSet_ = true;
}

bool AuditUpgradeStep::stepNameIsSet() const
{
    return stepNameIsSet_;
}

void AuditUpgradeStep::unsetstepName()
{
    stepNameIsSet_ = false;
}

std::string AuditUpgradeStep::getTime() const
{
    return time_;
}

void AuditUpgradeStep::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool AuditUpgradeStep::timeIsSet() const
{
    return timeIsSet_;
}

void AuditUpgradeStep::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


