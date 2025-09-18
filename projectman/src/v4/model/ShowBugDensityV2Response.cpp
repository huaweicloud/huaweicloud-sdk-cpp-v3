

#include "huaweicloud/projectman/v4/model/ShowBugDensityV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowBugDensityV2Response::ShowBugDensityV2Response()
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

ShowBugDensityV2Response::~ShowBugDensityV2Response() = default;

void ShowBugDensityV2Response::validate()
{
}

web::json::value ShowBugDensityV2Response::toJson() const
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
bool ShowBugDensityV2Response::fromJson(const web::json::value& val)
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


std::string ShowBugDensityV2Response::getDividendValue() const
{
    return dividendValue_;
}

void ShowBugDensityV2Response::setDividendValue(const std::string& value)
{
    dividendValue_ = value;
    dividendValueIsSet_ = true;
}

bool ShowBugDensityV2Response::dividendValueIsSet() const
{
    return dividendValueIsSet_;
}

void ShowBugDensityV2Response::unsetdividendValue()
{
    dividendValueIsSet_ = false;
}

std::string ShowBugDensityV2Response::getDivisorValue() const
{
    return divisorValue_;
}

void ShowBugDensityV2Response::setDivisorValue(const std::string& value)
{
    divisorValue_ = value;
    divisorValueIsSet_ = true;
}

bool ShowBugDensityV2Response::divisorValueIsSet() const
{
    return divisorValueIsSet_;
}

void ShowBugDensityV2Response::unsetdivisorValue()
{
    divisorValueIsSet_ = false;
}

std::string ShowBugDensityV2Response::getMetricName() const
{
    return metricName_;
}

void ShowBugDensityV2Response::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowBugDensityV2Response::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowBugDensityV2Response::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::string ShowBugDensityV2Response::getMetricValue() const
{
    return metricValue_;
}

void ShowBugDensityV2Response::setMetricValue(const std::string& value)
{
    metricValue_ = value;
    metricValueIsSet_ = true;
}

bool ShowBugDensityV2Response::metricValueIsSet() const
{
    return metricValueIsSet_;
}

void ShowBugDensityV2Response::unsetmetricValue()
{
    metricValueIsSet_ = false;
}

std::string ShowBugDensityV2Response::getProjectId() const
{
    return projectId_;
}

void ShowBugDensityV2Response::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowBugDensityV2Response::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowBugDensityV2Response::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowBugDensityV2Response::getProjectName() const
{
    return projectName_;
}

void ShowBugDensityV2Response::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowBugDensityV2Response::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowBugDensityV2Response::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


