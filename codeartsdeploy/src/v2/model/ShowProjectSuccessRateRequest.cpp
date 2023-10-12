

#include "huaweicloud/codeartsdeploy/v2/model/ShowProjectSuccessRateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowProjectSuccessRateRequest::ShowProjectSuccessRateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
}

ShowProjectSuccessRateRequest::~ShowProjectSuccessRateRequest() = default;

void ShowProjectSuccessRateRequest::validate()
{
}

web::json::value ShowProjectSuccessRateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }

    return val;
}
bool ShowProjectSuccessRateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    return ok;
}


std::string ShowProjectSuccessRateRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectSuccessRateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectSuccessRateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectSuccessRateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowProjectSuccessRateRequest::getStartDate() const
{
    return startDate_;
}

void ShowProjectSuccessRateRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ShowProjectSuccessRateRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ShowProjectSuccessRateRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ShowProjectSuccessRateRequest::getEndDate() const
{
    return endDate_;
}

void ShowProjectSuccessRateRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ShowProjectSuccessRateRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ShowProjectSuccessRateRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

}
}
}
}
}


