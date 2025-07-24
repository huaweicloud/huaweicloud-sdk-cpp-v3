

#include "huaweicloud/cloudtest/v1/model/QueryTaskTestCasesVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryTaskTestCasesVo::QueryTaskTestCasesVo()
{
    relatedCaseUrisIsSet_ = false;
    notRelatedCaseUrisIsSet_ = false;
    caseTaskInfoIsSet_ = false;
}

QueryTaskTestCasesVo::~QueryTaskTestCasesVo() = default;

void QueryTaskTestCasesVo::validate()
{
}

web::json::value QueryTaskTestCasesVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(relatedCaseUrisIsSet_) {
        val[utility::conversions::to_string_t("related_case_uris")] = ModelBase::toJson(relatedCaseUris_);
    }
    if(notRelatedCaseUrisIsSet_) {
        val[utility::conversions::to_string_t("not_related_case_uris")] = ModelBase::toJson(notRelatedCaseUris_);
    }
    if(caseTaskInfoIsSet_) {
        val[utility::conversions::to_string_t("case_task_info")] = ModelBase::toJson(caseTaskInfo_);
    }

    return val;
}
bool QueryTaskTestCasesVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("related_case_uris"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_case_uris"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedCaseUris(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_related_case_uris"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_related_case_uris"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotRelatedCaseUris(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_task_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_task_info"));
        if(!fieldValue.is_null())
        {
            std::vector<RelateTaskTestCasesVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseTaskInfo(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& QueryTaskTestCasesVo::getRelatedCaseUris()
{
    return relatedCaseUris_;
}

void QueryTaskTestCasesVo::setRelatedCaseUris(const std::vector<std::string>& value)
{
    relatedCaseUris_ = value;
    relatedCaseUrisIsSet_ = true;
}

bool QueryTaskTestCasesVo::relatedCaseUrisIsSet() const
{
    return relatedCaseUrisIsSet_;
}

void QueryTaskTestCasesVo::unsetrelatedCaseUris()
{
    relatedCaseUrisIsSet_ = false;
}

std::vector<std::string>& QueryTaskTestCasesVo::getNotRelatedCaseUris()
{
    return notRelatedCaseUris_;
}

void QueryTaskTestCasesVo::setNotRelatedCaseUris(const std::vector<std::string>& value)
{
    notRelatedCaseUris_ = value;
    notRelatedCaseUrisIsSet_ = true;
}

bool QueryTaskTestCasesVo::notRelatedCaseUrisIsSet() const
{
    return notRelatedCaseUrisIsSet_;
}

void QueryTaskTestCasesVo::unsetnotRelatedCaseUris()
{
    notRelatedCaseUrisIsSet_ = false;
}

std::vector<RelateTaskTestCasesVo>& QueryTaskTestCasesVo::getCaseTaskInfo()
{
    return caseTaskInfo_;
}

void QueryTaskTestCasesVo::setCaseTaskInfo(const std::vector<RelateTaskTestCasesVo>& value)
{
    caseTaskInfo_ = value;
    caseTaskInfoIsSet_ = true;
}

bool QueryTaskTestCasesVo::caseTaskInfoIsSet() const
{
    return caseTaskInfoIsSet_;
}

void QueryTaskTestCasesVo::unsetcaseTaskInfo()
{
    caseTaskInfoIsSet_ = false;
}

}
}
}
}
}


