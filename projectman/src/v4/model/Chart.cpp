

#include "huaweicloud/projectman/v4/model/Chart.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Chart::Chart()
{
    date_ = "";
    dateIsSet_ = false;
    finishedNum_ = 0;
    finishedNumIsSet_ = false;
    iterationId_ = 0;
    iterationIdIsSet_ = false;
    projectNumId_ = 0;
    projectNumIdIsSet_ = false;
    remainingNum_ = 0;
    remainingNumIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

Chart::~Chart() = default;

void Chart::validate()
{
}

web::json::value Chart::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(finishedNumIsSet_) {
        val[utility::conversions::to_string_t("finished_num")] = ModelBase::toJson(finishedNum_);
    }
    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }
    if(projectNumIdIsSet_) {
        val[utility::conversions::to_string_t("project_num_id")] = ModelBase::toJson(projectNumId_);
    }
    if(remainingNumIsSet_) {
        val[utility::conversions::to_string_t("remaining_num")] = ModelBase::toJson(remainingNum_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool Chart::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectNumId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remaining_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remaining_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainingNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::string Chart::getDate() const
{
    return date_;
}

void Chart::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool Chart::dateIsSet() const
{
    return dateIsSet_;
}

void Chart::unsetdate()
{
    dateIsSet_ = false;
}

int32_t Chart::getFinishedNum() const
{
    return finishedNum_;
}

void Chart::setFinishedNum(int32_t value)
{
    finishedNum_ = value;
    finishedNumIsSet_ = true;
}

bool Chart::finishedNumIsSet() const
{
    return finishedNumIsSet_;
}

void Chart::unsetfinishedNum()
{
    finishedNumIsSet_ = false;
}

int32_t Chart::getIterationId() const
{
    return iterationId_;
}

void Chart::setIterationId(int32_t value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool Chart::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void Chart::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

int32_t Chart::getProjectNumId() const
{
    return projectNumId_;
}

void Chart::setProjectNumId(int32_t value)
{
    projectNumId_ = value;
    projectNumIdIsSet_ = true;
}

bool Chart::projectNumIdIsSet() const
{
    return projectNumIdIsSet_;
}

void Chart::unsetprojectNumId()
{
    projectNumIdIsSet_ = false;
}

int32_t Chart::getRemainingNum() const
{
    return remainingNum_;
}

void Chart::setRemainingNum(int32_t value)
{
    remainingNum_ = value;
    remainingNumIsSet_ = true;
}

bool Chart::remainingNumIsSet() const
{
    return remainingNumIsSet_;
}

void Chart::unsetremainingNum()
{
    remainingNumIsSet_ = false;
}

int32_t Chart::getTotal() const
{
    return total_;
}

void Chart::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool Chart::totalIsSet() const
{
    return totalIsSet_;
}

void Chart::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


