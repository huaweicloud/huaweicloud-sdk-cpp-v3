

#include "huaweicloud/projectman/v4/model/IssueOperateResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueOperateResult::IssueOperateResult()
{
    id_ = "";
    idIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    operateTime_ = "";
    operateTimeIsSet_ = false;
}

IssueOperateResult::~IssueOperateResult() = default;

void IssueOperateResult::validate()
{
}

web::json::value IssueOperateResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operate_time")] = ModelBase::toJson(operateTime_);
    }

    return val;
}
bool IssueOperateResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTime(refVal);
        }
    }
    return ok;
}


std::string IssueOperateResult::getId() const
{
    return id_;
}

void IssueOperateResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueOperateResult::idIsSet() const
{
    return idIsSet_;
}

void IssueOperateResult::unsetid()
{
    idIsSet_ = false;
}

std::string IssueOperateResult::getOperator() const
{
    return operator_;
}

void IssueOperateResult::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool IssueOperateResult::operatorIsSet() const
{
    return operatorIsSet_;
}

void IssueOperateResult::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string IssueOperateResult::getState() const
{
    return state_;
}

void IssueOperateResult::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool IssueOperateResult::stateIsSet() const
{
    return stateIsSet_;
}

void IssueOperateResult::unsetstate()
{
    stateIsSet_ = false;
}

std::string IssueOperateResult::getOperateTime() const
{
    return operateTime_;
}

void IssueOperateResult::setOperateTime(const std::string& value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool IssueOperateResult::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void IssueOperateResult::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

}
}
}
}
}


