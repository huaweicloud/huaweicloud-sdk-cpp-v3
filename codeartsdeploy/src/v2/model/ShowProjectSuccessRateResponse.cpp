

#include "huaweicloud/codeartsdeploy/v2/model/ShowProjectSuccessRateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowProjectSuccessRateResponse::ShowProjectSuccessRateResponse()
{
    successRate_ = "";
    successRateIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    taskCount_ = 0;
    taskCountIsSet_ = false;
    recordCount_ = 0;
    recordCountIsSet_ = false;
    successRecordCount_ = 0;
    successRecordCountIsSet_ = false;
}

ShowProjectSuccessRateResponse::~ShowProjectSuccessRateResponse() = default;

void ShowProjectSuccessRateResponse::validate()
{
}

web::json::value ShowProjectSuccessRateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successRateIsSet_) {
        val[utility::conversions::to_string_t("success_rate")] = ModelBase::toJson(successRate_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(taskCountIsSet_) {
        val[utility::conversions::to_string_t("task_count")] = ModelBase::toJson(taskCount_);
    }
    if(recordCountIsSet_) {
        val[utility::conversions::to_string_t("record_count")] = ModelBase::toJson(recordCount_);
    }
    if(successRecordCountIsSet_) {
        val[utility::conversions::to_string_t("success_record_count")] = ModelBase::toJson(successRecordCount_);
    }

    return val;
}
bool ShowProjectSuccessRateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessRate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_record_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_record_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessRecordCount(refVal);
        }
    }
    return ok;
}


std::string ShowProjectSuccessRateResponse::getSuccessRate() const
{
    return successRate_;
}

void ShowProjectSuccessRateResponse::setSuccessRate(const std::string& value)
{
    successRate_ = value;
    successRateIsSet_ = true;
}

bool ShowProjectSuccessRateResponse::successRateIsSet() const
{
    return successRateIsSet_;
}

void ShowProjectSuccessRateResponse::unsetsuccessRate()
{
    successRateIsSet_ = false;
}

std::string ShowProjectSuccessRateResponse::getProjectId() const
{
    return projectId_;
}

void ShowProjectSuccessRateResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectSuccessRateResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectSuccessRateResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowProjectSuccessRateResponse::getProjectName() const
{
    return projectName_;
}

void ShowProjectSuccessRateResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowProjectSuccessRateResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowProjectSuccessRateResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ShowProjectSuccessRateResponse::getStartDate() const
{
    return startDate_;
}

void ShowProjectSuccessRateResponse::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ShowProjectSuccessRateResponse::startDateIsSet() const
{
    return startDateIsSet_;
}

void ShowProjectSuccessRateResponse::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ShowProjectSuccessRateResponse::getEndDate() const
{
    return endDate_;
}

void ShowProjectSuccessRateResponse::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ShowProjectSuccessRateResponse::endDateIsSet() const
{
    return endDateIsSet_;
}

void ShowProjectSuccessRateResponse::unsetendDate()
{
    endDateIsSet_ = false;
}

int32_t ShowProjectSuccessRateResponse::getTaskCount() const
{
    return taskCount_;
}

void ShowProjectSuccessRateResponse::setTaskCount(int32_t value)
{
    taskCount_ = value;
    taskCountIsSet_ = true;
}

bool ShowProjectSuccessRateResponse::taskCountIsSet() const
{
    return taskCountIsSet_;
}

void ShowProjectSuccessRateResponse::unsettaskCount()
{
    taskCountIsSet_ = false;
}

int32_t ShowProjectSuccessRateResponse::getRecordCount() const
{
    return recordCount_;
}

void ShowProjectSuccessRateResponse::setRecordCount(int32_t value)
{
    recordCount_ = value;
    recordCountIsSet_ = true;
}

bool ShowProjectSuccessRateResponse::recordCountIsSet() const
{
    return recordCountIsSet_;
}

void ShowProjectSuccessRateResponse::unsetrecordCount()
{
    recordCountIsSet_ = false;
}

int32_t ShowProjectSuccessRateResponse::getSuccessRecordCount() const
{
    return successRecordCount_;
}

void ShowProjectSuccessRateResponse::setSuccessRecordCount(int32_t value)
{
    successRecordCount_ = value;
    successRecordCountIsSet_ = true;
}

bool ShowProjectSuccessRateResponse::successRecordCountIsSet() const
{
    return successRecordCountIsSet_;
}

void ShowProjectSuccessRateResponse::unsetsuccessRecordCount()
{
    successRecordCountIsSet_ = false;
}

}
}
}
}
}


