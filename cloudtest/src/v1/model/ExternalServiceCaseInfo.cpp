

#include "huaweicloud/cloudtest/v1/model/ExternalServiceCaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExternalServiceCaseInfo::ExternalServiceCaseInfo()
{
    description_ = "";
    descriptionIsSet_ = false;
    preparation_ = "";
    preparationIsSet_ = false;
    stepsIsSet_ = false;
    labelListIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    testVersionId_ = "";
    testVersionIdIsSet_ = false;
    fixVersionId_ = "";
    fixVersionIdIsSet_ = false;
    assignedId_ = "";
    assignedIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
}

ExternalServiceCaseInfo::~ExternalServiceCaseInfo() = default;

void ExternalServiceCaseInfo::validate()
{
}

web::json::value ExternalServiceCaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(preparationIsSet_) {
        val[utility::conversions::to_string_t("preparation")] = ModelBase::toJson(preparation_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(labelListIsSet_) {
        val[utility::conversions::to_string_t("label_list")] = ModelBase::toJson(labelList_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(testVersionIdIsSet_) {
        val[utility::conversions::to_string_t("test_version_id")] = ModelBase::toJson(testVersionId_);
    }
    if(fixVersionIdIsSet_) {
        val[utility::conversions::to_string_t("fix_version_id")] = ModelBase::toJson(fixVersionId_);
    }
    if(assignedIdIsSet_) {
        val[utility::conversions::to_string_t("assigned_id")] = ModelBase::toJson(assignedId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }

    return val;
}
bool ExternalServiceCaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preparation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preparation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreparation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<ExternalServiceCaseStep> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fix_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fix_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assigned_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    return ok;
}


std::string ExternalServiceCaseInfo::getDescription() const
{
    return description_;
}

void ExternalServiceCaseInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExternalServiceCaseInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExternalServiceCaseInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ExternalServiceCaseInfo::getPreparation() const
{
    return preparation_;
}

void ExternalServiceCaseInfo::setPreparation(const std::string& value)
{
    preparation_ = value;
    preparationIsSet_ = true;
}

bool ExternalServiceCaseInfo::preparationIsSet() const
{
    return preparationIsSet_;
}

void ExternalServiceCaseInfo::unsetpreparation()
{
    preparationIsSet_ = false;
}

std::vector<ExternalServiceCaseStep>& ExternalServiceCaseInfo::getSteps()
{
    return steps_;
}

void ExternalServiceCaseInfo::setSteps(const std::vector<ExternalServiceCaseStep>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ExternalServiceCaseInfo::stepsIsSet() const
{
    return stepsIsSet_;
}

void ExternalServiceCaseInfo::unsetsteps()
{
    stepsIsSet_ = false;
}

std::vector<std::string>& ExternalServiceCaseInfo::getLabelList()
{
    return labelList_;
}

void ExternalServiceCaseInfo::setLabelList(const std::vector<std::string>& value)
{
    labelList_ = value;
    labelListIsSet_ = true;
}

bool ExternalServiceCaseInfo::labelListIsSet() const
{
    return labelListIsSet_;
}

void ExternalServiceCaseInfo::unsetlabelList()
{
    labelListIsSet_ = false;
}

std::string ExternalServiceCaseInfo::getModuleId() const
{
    return moduleId_;
}

void ExternalServiceCaseInfo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool ExternalServiceCaseInfo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void ExternalServiceCaseInfo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string ExternalServiceCaseInfo::getTestVersionId() const
{
    return testVersionId_;
}

void ExternalServiceCaseInfo::setTestVersionId(const std::string& value)
{
    testVersionId_ = value;
    testVersionIdIsSet_ = true;
}

bool ExternalServiceCaseInfo::testVersionIdIsSet() const
{
    return testVersionIdIsSet_;
}

void ExternalServiceCaseInfo::unsettestVersionId()
{
    testVersionIdIsSet_ = false;
}

std::string ExternalServiceCaseInfo::getFixVersionId() const
{
    return fixVersionId_;
}

void ExternalServiceCaseInfo::setFixVersionId(const std::string& value)
{
    fixVersionId_ = value;
    fixVersionIdIsSet_ = true;
}

bool ExternalServiceCaseInfo::fixVersionIdIsSet() const
{
    return fixVersionIdIsSet_;
}

void ExternalServiceCaseInfo::unsetfixVersionId()
{
    fixVersionIdIsSet_ = false;
}

std::string ExternalServiceCaseInfo::getAssignedId() const
{
    return assignedId_;
}

void ExternalServiceCaseInfo::setAssignedId(const std::string& value)
{
    assignedId_ = value;
    assignedIdIsSet_ = true;
}

bool ExternalServiceCaseInfo::assignedIdIsSet() const
{
    return assignedIdIsSet_;
}

void ExternalServiceCaseInfo::unsetassignedId()
{
    assignedIdIsSet_ = false;
}

std::string ExternalServiceCaseInfo::getIssueId() const
{
    return issueId_;
}

void ExternalServiceCaseInfo::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ExternalServiceCaseInfo::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ExternalServiceCaseInfo::unsetissueId()
{
    issueIdIsSet_ = false;
}

}
}
}
}
}


