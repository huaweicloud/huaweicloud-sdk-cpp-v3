

#include "huaweicloud/projectman/v4/model/BatchUpdateResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateResponse_result::BatchUpdateResponse_result()
{
    projectIsSet_ = false;
    journalIdsIsSet_ = false;
    errorIssuesIsSet_ = false;
    versionsIssuesIsSet_ = false;
    successIssuesIsSet_ = false;
}

BatchUpdateResponse_result::~BatchUpdateResponse_result() = default;

void BatchUpdateResponse_result::validate()
{
}

web::json::value BatchUpdateResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }
    if(journalIdsIsSet_) {
        val[utility::conversions::to_string_t("journal_ids")] = ModelBase::toJson(journalIds_);
    }
    if(errorIssuesIsSet_) {
        val[utility::conversions::to_string_t("error_issues")] = ModelBase::toJson(errorIssues_);
    }
    if(versionsIssuesIsSet_) {
        val[utility::conversions::to_string_t("versions_issues")] = ModelBase::toJson(versionsIssues_);
    }
    if(successIssuesIsSet_) {
        val[utility::conversions::to_string_t("success_issues")] = ModelBase::toJson(successIssues_);
    }

    return val;
}
bool BatchUpdateResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            BatchUpdateResponse_result_project refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("journal_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("journal_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJournalIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_issues"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorIssues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("versions_issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions_issues"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionsIssues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_issues"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessIssues(refVal);
        }
    }
    return ok;
}


BatchUpdateResponse_result_project BatchUpdateResponse_result::getProject() const
{
    return project_;
}

void BatchUpdateResponse_result::setProject(const BatchUpdateResponse_result_project& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool BatchUpdateResponse_result::projectIsSet() const
{
    return projectIsSet_;
}

void BatchUpdateResponse_result::unsetproject()
{
    projectIsSet_ = false;
}

std::vector<std::string>& BatchUpdateResponse_result::getJournalIds()
{
    return journalIds_;
}

void BatchUpdateResponse_result::setJournalIds(const std::vector<std::string>& value)
{
    journalIds_ = value;
    journalIdsIsSet_ = true;
}

bool BatchUpdateResponse_result::journalIdsIsSet() const
{
    return journalIdsIsSet_;
}

void BatchUpdateResponse_result::unsetjournalIds()
{
    journalIdsIsSet_ = false;
}

std::vector<int32_t>& BatchUpdateResponse_result::getErrorIssues()
{
    return errorIssues_;
}

void BatchUpdateResponse_result::setErrorIssues(std::vector<int32_t> value)
{
    errorIssues_ = value;
    errorIssuesIsSet_ = true;
}

bool BatchUpdateResponse_result::errorIssuesIsSet() const
{
    return errorIssuesIsSet_;
}

void BatchUpdateResponse_result::unseterrorIssues()
{
    errorIssuesIsSet_ = false;
}

std::vector<std::string>& BatchUpdateResponse_result::getVersionsIssues()
{
    return versionsIssues_;
}

void BatchUpdateResponse_result::setVersionsIssues(const std::vector<std::string>& value)
{
    versionsIssues_ = value;
    versionsIssuesIsSet_ = true;
}

bool BatchUpdateResponse_result::versionsIssuesIsSet() const
{
    return versionsIssuesIsSet_;
}

void BatchUpdateResponse_result::unsetversionsIssues()
{
    versionsIssuesIsSet_ = false;
}

std::vector<std::string>& BatchUpdateResponse_result::getSuccessIssues()
{
    return successIssues_;
}

void BatchUpdateResponse_result::setSuccessIssues(const std::vector<std::string>& value)
{
    successIssues_ = value;
    successIssuesIsSet_ = true;
}

bool BatchUpdateResponse_result::successIssuesIsSet() const
{
    return successIssuesIsSet_;
}

void BatchUpdateResponse_result::unsetsuccessIssues()
{
    successIssuesIsSet_ = false;
}

}
}
}
}
}


