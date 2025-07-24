

#include "huaweicloud/cloudtest/v1/model/ShowProjectDataDashboardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowProjectDataDashboardResponse::ShowProjectDataDashboardResponse()
{
    defectIsSet_ = false;
    casePassRateIsSet_ = false;
    caseCompletionRateIsSet_ = false;
    projectType_ = "";
    projectTypeIsSet_ = false;
    issueCoverRateIsSet_ = false;
}

ShowProjectDataDashboardResponse::~ShowProjectDataDashboardResponse() = default;

void ShowProjectDataDashboardResponse::validate()
{
}

web::json::value ShowProjectDataDashboardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defectIsSet_) {
        val[utility::conversions::to_string_t("defect")] = ModelBase::toJson(defect_);
    }
    if(casePassRateIsSet_) {
        val[utility::conversions::to_string_t("case_pass_rate")] = ModelBase::toJson(casePassRate_);
    }
    if(caseCompletionRateIsSet_) {
        val[utility::conversions::to_string_t("case_completion_rate")] = ModelBase::toJson(caseCompletionRate_);
    }
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }
    if(issueCoverRateIsSet_) {
        val[utility::conversions::to_string_t("issue_cover_rate")] = ModelBase::toJson(issueCoverRate_);
    }

    return val;
}
bool ShowProjectDataDashboardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("defect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect"));
        if(!fieldValue.is_null())
        {
            DefectVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_pass_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_pass_rate"));
        if(!fieldValue.is_null())
        {
            CasePassRateVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePassRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_completion_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_completion_rate"));
        if(!fieldValue.is_null())
        {
            CaseCompletionRateVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseCompletionRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_cover_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_cover_rate"));
        if(!fieldValue.is_null())
        {
            IssueCoverRateVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCoverRate(refVal);
        }
    }
    return ok;
}


DefectVo ShowProjectDataDashboardResponse::getDefect() const
{
    return defect_;
}

void ShowProjectDataDashboardResponse::setDefect(const DefectVo& value)
{
    defect_ = value;
    defectIsSet_ = true;
}

bool ShowProjectDataDashboardResponse::defectIsSet() const
{
    return defectIsSet_;
}

void ShowProjectDataDashboardResponse::unsetdefect()
{
    defectIsSet_ = false;
}

CasePassRateVo ShowProjectDataDashboardResponse::getCasePassRate() const
{
    return casePassRate_;
}

void ShowProjectDataDashboardResponse::setCasePassRate(const CasePassRateVo& value)
{
    casePassRate_ = value;
    casePassRateIsSet_ = true;
}

bool ShowProjectDataDashboardResponse::casePassRateIsSet() const
{
    return casePassRateIsSet_;
}

void ShowProjectDataDashboardResponse::unsetcasePassRate()
{
    casePassRateIsSet_ = false;
}

CaseCompletionRateVo ShowProjectDataDashboardResponse::getCaseCompletionRate() const
{
    return caseCompletionRate_;
}

void ShowProjectDataDashboardResponse::setCaseCompletionRate(const CaseCompletionRateVo& value)
{
    caseCompletionRate_ = value;
    caseCompletionRateIsSet_ = true;
}

bool ShowProjectDataDashboardResponse::caseCompletionRateIsSet() const
{
    return caseCompletionRateIsSet_;
}

void ShowProjectDataDashboardResponse::unsetcaseCompletionRate()
{
    caseCompletionRateIsSet_ = false;
}

std::string ShowProjectDataDashboardResponse::getProjectType() const
{
    return projectType_;
}

void ShowProjectDataDashboardResponse::setProjectType(const std::string& value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool ShowProjectDataDashboardResponse::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void ShowProjectDataDashboardResponse::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

IssueCoverRateVo ShowProjectDataDashboardResponse::getIssueCoverRate() const
{
    return issueCoverRate_;
}

void ShowProjectDataDashboardResponse::setIssueCoverRate(const IssueCoverRateVo& value)
{
    issueCoverRate_ = value;
    issueCoverRateIsSet_ = true;
}

bool ShowProjectDataDashboardResponse::issueCoverRateIsSet() const
{
    return issueCoverRateIsSet_;
}

void ShowProjectDataDashboardResponse::unsetissueCoverRate()
{
    issueCoverRateIsSet_ = false;
}

}
}
}
}
}


