

#include "huaweicloud/cloudtest/v1/model/CaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CaseInfo::CaseInfo()
{
    caseId_ = "";
    caseIdIsSet_ = false;
    scriptUrl_ = "";
    scriptUrlIsSet_ = false;
}

CaseInfo::~CaseInfo() = default;

void CaseInfo::validate()
{
}

web::json::value CaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseIdIsSet_) {
        val[utility::conversions::to_string_t("case_id")] = ModelBase::toJson(caseId_);
    }
    if(scriptUrlIsSet_) {
        val[utility::conversions::to_string_t("script_url")] = ModelBase::toJson(scriptUrl_);
    }

    return val;
}
bool CaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("script_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptUrl(refVal);
        }
    }
    return ok;
}


std::string CaseInfo::getCaseId() const
{
    return caseId_;
}

void CaseInfo::setCaseId(const std::string& value)
{
    caseId_ = value;
    caseIdIsSet_ = true;
}

bool CaseInfo::caseIdIsSet() const
{
    return caseIdIsSet_;
}

void CaseInfo::unsetcaseId()
{
    caseIdIsSet_ = false;
}

std::string CaseInfo::getScriptUrl() const
{
    return scriptUrl_;
}

void CaseInfo::setScriptUrl(const std::string& value)
{
    scriptUrl_ = value;
    scriptUrlIsSet_ = true;
}

bool CaseInfo::scriptUrlIsSet() const
{
    return scriptUrlIsSet_;
}

void CaseInfo::unsetscriptUrl()
{
    scriptUrlIsSet_ = false;
}

}
}
}
}
}


