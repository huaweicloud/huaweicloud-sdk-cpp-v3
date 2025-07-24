

#include "huaweicloud/cloudtest/v1/model/ExternalTestCaseHistoryVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExternalTestCaseHistoryVo::ExternalTestCaseHistoryVo()
{
    author_ = "";
    authorIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    changesIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
    creationDate_ = utility::datetime();
    creationDateIsSet_ = false;
    createDateTimestamp_ = 0L;
    createDateTimestampIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ExternalTestCaseHistoryVo::~ExternalTestCaseHistoryVo() = default;

void ExternalTestCaseHistoryVo::validate()
{
}

web::json::value ExternalTestCaseHistoryVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(changesIsSet_) {
        val[utility::conversions::to_string_t("changes")] = ModelBase::toJson(changes_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(createDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("create_date_timestamp")] = ModelBase::toJson(createDateTimestamp_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ExternalTestCaseHistoryVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("changes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("changes"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceChangeExternalVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChanges(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
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
    return ok;
}


std::string ExternalTestCaseHistoryVo::getAuthor() const
{
    return author_;
}

void ExternalTestCaseHistoryVo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool ExternalTestCaseHistoryVo::authorIsSet() const
{
    return authorIsSet_;
}

void ExternalTestCaseHistoryVo::unsetauthor()
{
    authorIsSet_ = false;
}

std::string ExternalTestCaseHistoryVo::getRegion() const
{
    return region_;
}

void ExternalTestCaseHistoryVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ExternalTestCaseHistoryVo::regionIsSet() const
{
    return regionIsSet_;
}

void ExternalTestCaseHistoryVo::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<ResourceChangeExternalVo>& ExternalTestCaseHistoryVo::getChanges()
{
    return changes_;
}

void ExternalTestCaseHistoryVo::setChanges(const std::vector<ResourceChangeExternalVo>& value)
{
    changes_ = value;
    changesIsSet_ = true;
}

bool ExternalTestCaseHistoryVo::changesIsSet() const
{
    return changesIsSet_;
}

void ExternalTestCaseHistoryVo::unsetchanges()
{
    changesIsSet_ = false;
}

std::string ExternalTestCaseHistoryVo::getId() const
{
    return id_;
}

void ExternalTestCaseHistoryVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExternalTestCaseHistoryVo::idIsSet() const
{
    return idIsSet_;
}

void ExternalTestCaseHistoryVo::unsetid()
{
    idIsSet_ = false;
}

std::string ExternalTestCaseHistoryVo::getTestcaseId() const
{
    return testcaseId_;
}

void ExternalTestCaseHistoryVo::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool ExternalTestCaseHistoryVo::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void ExternalTestCaseHistoryVo::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

utility::datetime ExternalTestCaseHistoryVo::getCreationDate() const
{
    return creationDate_;
}

void ExternalTestCaseHistoryVo::setCreationDate(const utility::datetime& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool ExternalTestCaseHistoryVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void ExternalTestCaseHistoryVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t ExternalTestCaseHistoryVo::getCreateDateTimestamp() const
{
    return createDateTimestamp_;
}

void ExternalTestCaseHistoryVo::setCreateDateTimestamp(int64_t value)
{
    createDateTimestamp_ = value;
    createDateTimestampIsSet_ = true;
}

bool ExternalTestCaseHistoryVo::createDateTimestampIsSet() const
{
    return createDateTimestampIsSet_;
}

void ExternalTestCaseHistoryVo::unsetcreateDateTimestamp()
{
    createDateTimestampIsSet_ = false;
}

std::string ExternalTestCaseHistoryVo::getAuthorName() const
{
    return authorName_;
}

void ExternalTestCaseHistoryVo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool ExternalTestCaseHistoryVo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void ExternalTestCaseHistoryVo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

std::string ExternalTestCaseHistoryVo::getProjectId() const
{
    return projectId_;
}

void ExternalTestCaseHistoryVo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ExternalTestCaseHistoryVo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ExternalTestCaseHistoryVo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


