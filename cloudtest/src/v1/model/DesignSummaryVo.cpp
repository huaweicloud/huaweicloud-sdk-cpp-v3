

#include "huaweicloud/cloudtest/v1/model/DesignSummaryVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DesignSummaryVo::DesignSummaryVo()
{
    issueNum_ = 0;
    issueNumIsSet_ = false;
    issueCoverNum_ = 0;
    issueCoverNumIsSet_ = false;
    caseNum_ = 0;
    caseNumIsSet_ = false;
}

DesignSummaryVo::~DesignSummaryVo() = default;

void DesignSummaryVo::validate()
{
}

web::json::value DesignSummaryVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueNumIsSet_) {
        val[utility::conversions::to_string_t("issue_num")] = ModelBase::toJson(issueNum_);
    }
    if(issueCoverNumIsSet_) {
        val[utility::conversions::to_string_t("issue_cover_num")] = ModelBase::toJson(issueCoverNum_);
    }
    if(caseNumIsSet_) {
        val[utility::conversions::to_string_t("case_num")] = ModelBase::toJson(caseNum_);
    }

    return val;
}
bool DesignSummaryVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_cover_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_cover_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueCoverNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseNum(refVal);
        }
    }
    return ok;
}


int32_t DesignSummaryVo::getIssueNum() const
{
    return issueNum_;
}

void DesignSummaryVo::setIssueNum(int32_t value)
{
    issueNum_ = value;
    issueNumIsSet_ = true;
}

bool DesignSummaryVo::issueNumIsSet() const
{
    return issueNumIsSet_;
}

void DesignSummaryVo::unsetissueNum()
{
    issueNumIsSet_ = false;
}

int32_t DesignSummaryVo::getIssueCoverNum() const
{
    return issueCoverNum_;
}

void DesignSummaryVo::setIssueCoverNum(int32_t value)
{
    issueCoverNum_ = value;
    issueCoverNumIsSet_ = true;
}

bool DesignSummaryVo::issueCoverNumIsSet() const
{
    return issueCoverNumIsSet_;
}

void DesignSummaryVo::unsetissueCoverNum()
{
    issueCoverNumIsSet_ = false;
}

int32_t DesignSummaryVo::getCaseNum() const
{
    return caseNum_;
}

void DesignSummaryVo::setCaseNum(int32_t value)
{
    caseNum_ = value;
    caseNumIsSet_ = true;
}

bool DesignSummaryVo::caseNumIsSet() const
{
    return caseNumIsSet_;
}

void DesignSummaryVo::unsetcaseNum()
{
    caseNumIsSet_ = false;
}

}
}
}
}
}


