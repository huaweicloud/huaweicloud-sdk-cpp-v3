

#include "huaweicloud/modelarts/v1/model/RecoverRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RecoverRecord::RecoverRecord()
{
    recoverStartAt_ = 0L;
    recoverStartAtIsSet_ = false;
    recoverEndAt_ = 0L;
    recoverEndAtIsSet_ = false;
    recover_ = "";
    recoverIsSet_ = false;
    faultScenario_ = "";
    faultScenarioIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    relatedTask_ = "";
    relatedTaskIsSet_ = false;
    recoverResult_ = "";
    recoverResultIsSet_ = false;
}

RecoverRecord::~RecoverRecord() = default;

void RecoverRecord::validate()
{
}

web::json::value RecoverRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recoverStartAtIsSet_) {
        val[utility::conversions::to_string_t("recover_start_at")] = ModelBase::toJson(recoverStartAt_);
    }
    if(recoverEndAtIsSet_) {
        val[utility::conversions::to_string_t("recover_end_at")] = ModelBase::toJson(recoverEndAt_);
    }
    if(recoverIsSet_) {
        val[utility::conversions::to_string_t("recover")] = ModelBase::toJson(recover_);
    }
    if(faultScenarioIsSet_) {
        val[utility::conversions::to_string_t("fault_scenario")] = ModelBase::toJson(faultScenario_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(relatedTaskIsSet_) {
        val[utility::conversions::to_string_t("related_task")] = ModelBase::toJson(relatedTask_);
    }
    if(recoverResultIsSet_) {
        val[utility::conversions::to_string_t("recover_result")] = ModelBase::toJson(recoverResult_);
    }

    return val;
}
bool RecoverRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recover_start_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recover_start_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoverStartAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recover_end_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recover_end_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoverEndAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recover"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recover"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecover(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fault_scenario"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fault_scenario"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaultScenario(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recover_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recover_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoverResult(refVal);
        }
    }
    return ok;
}


int64_t RecoverRecord::getRecoverStartAt() const
{
    return recoverStartAt_;
}

void RecoverRecord::setRecoverStartAt(int64_t value)
{
    recoverStartAt_ = value;
    recoverStartAtIsSet_ = true;
}

bool RecoverRecord::recoverStartAtIsSet() const
{
    return recoverStartAtIsSet_;
}

void RecoverRecord::unsetrecoverStartAt()
{
    recoverStartAtIsSet_ = false;
}

int64_t RecoverRecord::getRecoverEndAt() const
{
    return recoverEndAt_;
}

void RecoverRecord::setRecoverEndAt(int64_t value)
{
    recoverEndAt_ = value;
    recoverEndAtIsSet_ = true;
}

bool RecoverRecord::recoverEndAtIsSet() const
{
    return recoverEndAtIsSet_;
}

void RecoverRecord::unsetrecoverEndAt()
{
    recoverEndAtIsSet_ = false;
}

std::string RecoverRecord::getRecover() const
{
    return recover_;
}

void RecoverRecord::setRecover(const std::string& value)
{
    recover_ = value;
    recoverIsSet_ = true;
}

bool RecoverRecord::recoverIsSet() const
{
    return recoverIsSet_;
}

void RecoverRecord::unsetrecover()
{
    recoverIsSet_ = false;
}

std::string RecoverRecord::getFaultScenario() const
{
    return faultScenario_;
}

void RecoverRecord::setFaultScenario(const std::string& value)
{
    faultScenario_ = value;
    faultScenarioIsSet_ = true;
}

bool RecoverRecord::faultScenarioIsSet() const
{
    return faultScenarioIsSet_;
}

void RecoverRecord::unsetfaultScenario()
{
    faultScenarioIsSet_ = false;
}

std::string RecoverRecord::getReason() const
{
    return reason_;
}

void RecoverRecord::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool RecoverRecord::reasonIsSet() const
{
    return reasonIsSet_;
}

void RecoverRecord::unsetreason()
{
    reasonIsSet_ = false;
}

std::string RecoverRecord::getRelatedTask() const
{
    return relatedTask_;
}

void RecoverRecord::setRelatedTask(const std::string& value)
{
    relatedTask_ = value;
    relatedTaskIsSet_ = true;
}

bool RecoverRecord::relatedTaskIsSet() const
{
    return relatedTaskIsSet_;
}

void RecoverRecord::unsetrelatedTask()
{
    relatedTaskIsSet_ = false;
}

std::string RecoverRecord::getRecoverResult() const
{
    return recoverResult_;
}

void RecoverRecord::setRecoverResult(const std::string& value)
{
    recoverResult_ = value;
    recoverResultIsSet_ = true;
}

bool RecoverRecord::recoverResultIsSet() const
{
    return recoverResultIsSet_;
}

void RecoverRecord::unsetrecoverResult()
{
    recoverResultIsSet_ = false;
}

}
}
}
}
}


