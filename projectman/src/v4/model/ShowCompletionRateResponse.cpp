

#include "huaweicloud/projectman/v4/model/ShowCompletionRateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowCompletionRateResponse::ShowCompletionRateResponse()
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

ShowCompletionRateResponse::~ShowCompletionRateResponse() = default;

void ShowCompletionRateResponse::validate()
{
}

web::json::value ShowCompletionRateResponse::toJson() const
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
bool ShowCompletionRateResponse::fromJson(const web::json::value& val)
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


std::string ShowCompletionRateResponse::getDividendValue() const
{
    return dividendValue_;
}

void ShowCompletionRateResponse::setDividendValue(const std::string& value)
{
    dividendValue_ = value;
    dividendValueIsSet_ = true;
}

bool ShowCompletionRateResponse::dividendValueIsSet() const
{
    return dividendValueIsSet_;
}

void ShowCompletionRateResponse::unsetdividendValue()
{
    dividendValueIsSet_ = false;
}

std::string ShowCompletionRateResponse::getDivisorValue() const
{
    return divisorValue_;
}

void ShowCompletionRateResponse::setDivisorValue(const std::string& value)
{
    divisorValue_ = value;
    divisorValueIsSet_ = true;
}

bool ShowCompletionRateResponse::divisorValueIsSet() const
{
    return divisorValueIsSet_;
}

void ShowCompletionRateResponse::unsetdivisorValue()
{
    divisorValueIsSet_ = false;
}

std::string ShowCompletionRateResponse::getMetricName() const
{
    return metricName_;
}

void ShowCompletionRateResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowCompletionRateResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowCompletionRateResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::string ShowCompletionRateResponse::getMetricValue() const
{
    return metricValue_;
}

void ShowCompletionRateResponse::setMetricValue(const std::string& value)
{
    metricValue_ = value;
    metricValueIsSet_ = true;
}

bool ShowCompletionRateResponse::metricValueIsSet() const
{
    return metricValueIsSet_;
}

void ShowCompletionRateResponse::unsetmetricValue()
{
    metricValueIsSet_ = false;
}

std::string ShowCompletionRateResponse::getProjectId() const
{
    return projectId_;
}

void ShowCompletionRateResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowCompletionRateResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowCompletionRateResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowCompletionRateResponse::getProjectName() const
{
    return projectName_;
}

void ShowCompletionRateResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowCompletionRateResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowCompletionRateResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


