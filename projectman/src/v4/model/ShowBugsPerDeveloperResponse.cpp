

#include "huaweicloud/projectman/v4/model/ShowBugsPerDeveloperResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowBugsPerDeveloperResponse::ShowBugsPerDeveloperResponse()
{
    dividendValue_ = "";
    dividendValueIsSet_ = false;
    divisorValue_ = "";
    divisorValueIsSet_ = false;
    metricName_ = "";
    metricNameIsSet_ = false;
    metricValue_ = "";
    metricValueIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
}

ShowBugsPerDeveloperResponse::~ShowBugsPerDeveloperResponse() = default;

void ShowBugsPerDeveloperResponse::validate()
{
}

web::json::value ShowBugsPerDeveloperResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dividendValueIsSet_) {
        val[utility::conversions::to_string_t("dividend_value")] = ModelBase::toJson(dividendValue_);
    }
    if(divisorValueIsSet_) {
        val[utility::conversions::to_string_t("divisor_value")] = ModelBase::toJson(divisorValue_);
    }
    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(metricValueIsSet_) {
        val[utility::conversions::to_string_t("metric_value")] = ModelBase::toJson(metricValue_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}
bool ShowBugsPerDeveloperResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dividend_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dividend_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDividendValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("divisor_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("divisor_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDivisorValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricValue(refVal);
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
    return ok;
}


std::string ShowBugsPerDeveloperResponse::getDividendValue() const
{
    return dividendValue_;
}

void ShowBugsPerDeveloperResponse::setDividendValue(const std::string& value)
{
    dividendValue_ = value;
    dividendValueIsSet_ = true;
}

bool ShowBugsPerDeveloperResponse::dividendValueIsSet() const
{
    return dividendValueIsSet_;
}

void ShowBugsPerDeveloperResponse::unsetdividendValue()
{
    dividendValueIsSet_ = false;
}

std::string ShowBugsPerDeveloperResponse::getDivisorValue() const
{
    return divisorValue_;
}

void ShowBugsPerDeveloperResponse::setDivisorValue(const std::string& value)
{
    divisorValue_ = value;
    divisorValueIsSet_ = true;
}

bool ShowBugsPerDeveloperResponse::divisorValueIsSet() const
{
    return divisorValueIsSet_;
}

void ShowBugsPerDeveloperResponse::unsetdivisorValue()
{
    divisorValueIsSet_ = false;
}

std::string ShowBugsPerDeveloperResponse::getMetricName() const
{
    return metricName_;
}

void ShowBugsPerDeveloperResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowBugsPerDeveloperResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowBugsPerDeveloperResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::string ShowBugsPerDeveloperResponse::getMetricValue() const
{
    return metricValue_;
}

void ShowBugsPerDeveloperResponse::setMetricValue(const std::string& value)
{
    metricValue_ = value;
    metricValueIsSet_ = true;
}

bool ShowBugsPerDeveloperResponse::metricValueIsSet() const
{
    return metricValueIsSet_;
}

void ShowBugsPerDeveloperResponse::unsetmetricValue()
{
    metricValueIsSet_ = false;
}

std::string ShowBugsPerDeveloperResponse::getProjectId() const
{
    return projectId_;
}

void ShowBugsPerDeveloperResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowBugsPerDeveloperResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowBugsPerDeveloperResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowBugsPerDeveloperResponse::getProjectName() const
{
    return projectName_;
}

void ShowBugsPerDeveloperResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowBugsPerDeveloperResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowBugsPerDeveloperResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


