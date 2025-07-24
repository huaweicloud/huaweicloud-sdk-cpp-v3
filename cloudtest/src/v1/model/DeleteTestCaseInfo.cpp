

#include "huaweicloud/cloudtest/v1/model/DeleteTestCaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteTestCaseInfo::DeleteTestCaseInfo()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    caseIdsIsSet_ = false;
}

DeleteTestCaseInfo::~DeleteTestCaseInfo() = default;

void DeleteTestCaseInfo::validate()
{
}

web::json::value DeleteTestCaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(caseIdsIsSet_) {
        val[utility::conversions::to_string_t("case_ids")] = ModelBase::toJson(caseIds_);
    }

    return val;
}
bool DeleteTestCaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseIds(refVal);
        }
    }
    return ok;
}


std::string DeleteTestCaseInfo::getProjectUuid() const
{
    return projectUuid_;
}

void DeleteTestCaseInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool DeleteTestCaseInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void DeleteTestCaseInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string DeleteTestCaseInfo::getVersionUri() const
{
    return versionUri_;
}

void DeleteTestCaseInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool DeleteTestCaseInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void DeleteTestCaseInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::vector<std::string>& DeleteTestCaseInfo::getCaseIds()
{
    return caseIds_;
}

void DeleteTestCaseInfo::setCaseIds(const std::vector<std::string>& value)
{
    caseIds_ = value;
    caseIdsIsSet_ = true;
}

bool DeleteTestCaseInfo::caseIdsIsSet() const
{
    return caseIdsIsSet_;
}

void DeleteTestCaseInfo::unsetcaseIds()
{
    caseIdsIsSet_ = false;
}

}
}
}
}
}


