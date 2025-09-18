

#include "huaweicloud/projectman/v4/model/IterationHistory.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IterationHistory::IterationHistory()
{
    iterationId_ = "";
    iterationIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    operatorIsSet_ = false;
    operate_ = "";
    operateIsSet_ = false;
    operateTime_ = "";
    operateTimeIsSet_ = false;
    detailsIsSet_ = false;
}

IterationHistory::~IterationHistory() = default;

void IterationHistory::validate()
{
}

web::json::value IterationHistory::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(operateIsSet_) {
        val[utility::conversions::to_string_t("operate")] = ModelBase::toJson(operate_);
    }
    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operate_time")] = ModelBase::toJson(operateTime_);
    }
    if(detailsIsSet_) {
        val[utility::conversions::to_string_t("details")] = ModelBase::toJson(details_);
    }

    return val;
}
bool IterationHistory::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            IterationHistory_operator refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("details"));
        if(!fieldValue.is_null())
        {
            std::vector<IterationHistory_details> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetails(refVal);
        }
    }
    return ok;
}


std::string IterationHistory::getIterationId() const
{
    return iterationId_;
}

void IterationHistory::setIterationId(const std::string& value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool IterationHistory::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void IterationHistory::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

std::string IterationHistory::getProjectId() const
{
    return projectId_;
}

void IterationHistory::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool IterationHistory::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void IterationHistory::unsetprojectId()
{
    projectIdIsSet_ = false;
}

IterationHistory_operator IterationHistory::getOperator() const
{
    return operator_;
}

void IterationHistory::setOperator(const IterationHistory_operator& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool IterationHistory::operatorIsSet() const
{
    return operatorIsSet_;
}

void IterationHistory::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string IterationHistory::getOperate() const
{
    return operate_;
}

void IterationHistory::setOperate(const std::string& value)
{
    operate_ = value;
    operateIsSet_ = true;
}

bool IterationHistory::operateIsSet() const
{
    return operateIsSet_;
}

void IterationHistory::unsetoperate()
{
    operateIsSet_ = false;
}

std::string IterationHistory::getOperateTime() const
{
    return operateTime_;
}

void IterationHistory::setOperateTime(const std::string& value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool IterationHistory::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void IterationHistory::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

std::vector<IterationHistory_details>& IterationHistory::getDetails()
{
    return details_;
}

void IterationHistory::setDetails(const std::vector<IterationHistory_details>& value)
{
    details_ = value;
    detailsIsSet_ = true;
}

bool IterationHistory::detailsIsSet() const
{
    return detailsIsSet_;
}

void IterationHistory::unsetdetails()
{
    detailsIsSet_ = false;
}

}
}
}
}
}


