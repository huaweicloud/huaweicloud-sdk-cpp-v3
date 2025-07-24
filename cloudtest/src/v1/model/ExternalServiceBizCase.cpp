

#include "huaweicloud/cloudtest/v1/model/ExternalServiceBizCase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExternalServiceBizCase::ExternalServiceBizCase()
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
    statusId_ = "";
    statusIdIsSet_ = false;
    defectIdListIsSet_ = false;
}

ExternalServiceBizCase::~ExternalServiceBizCase() = default;

void ExternalServiceBizCase::validate()
{
}

web::json::value ExternalServiceBizCase::toJson() const
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
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(defectIdListIsSet_) {
        val[utility::conversions::to_string_t("defect_id_list")] = ModelBase::toJson(defectIdList_);
    }

    return val;
}
bool ExternalServiceBizCase::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defect_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectIdList(refVal);
        }
    }
    return ok;
}


std::string ExternalServiceBizCase::getDescription() const
{
    return description_;
}

void ExternalServiceBizCase::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExternalServiceBizCase::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExternalServiceBizCase::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ExternalServiceBizCase::getPreparation() const
{
    return preparation_;
}

void ExternalServiceBizCase::setPreparation(const std::string& value)
{
    preparation_ = value;
    preparationIsSet_ = true;
}

bool ExternalServiceBizCase::preparationIsSet() const
{
    return preparationIsSet_;
}

void ExternalServiceBizCase::unsetpreparation()
{
    preparationIsSet_ = false;
}

std::vector<ExternalServiceCaseStep>& ExternalServiceBizCase::getSteps()
{
    return steps_;
}

void ExternalServiceBizCase::setSteps(const std::vector<ExternalServiceCaseStep>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ExternalServiceBizCase::stepsIsSet() const
{
    return stepsIsSet_;
}

void ExternalServiceBizCase::unsetsteps()
{
    stepsIsSet_ = false;
}

std::vector<std::string>& ExternalServiceBizCase::getLabelList()
{
    return labelList_;
}

void ExternalServiceBizCase::setLabelList(const std::vector<std::string>& value)
{
    labelList_ = value;
    labelListIsSet_ = true;
}

bool ExternalServiceBizCase::labelListIsSet() const
{
    return labelListIsSet_;
}

void ExternalServiceBizCase::unsetlabelList()
{
    labelListIsSet_ = false;
}

std::string ExternalServiceBizCase::getModuleId() const
{
    return moduleId_;
}

void ExternalServiceBizCase::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool ExternalServiceBizCase::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void ExternalServiceBizCase::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string ExternalServiceBizCase::getTestVersionId() const
{
    return testVersionId_;
}

void ExternalServiceBizCase::setTestVersionId(const std::string& value)
{
    testVersionId_ = value;
    testVersionIdIsSet_ = true;
}

bool ExternalServiceBizCase::testVersionIdIsSet() const
{
    return testVersionIdIsSet_;
}

void ExternalServiceBizCase::unsettestVersionId()
{
    testVersionIdIsSet_ = false;
}

std::string ExternalServiceBizCase::getFixVersionId() const
{
    return fixVersionId_;
}

void ExternalServiceBizCase::setFixVersionId(const std::string& value)
{
    fixVersionId_ = value;
    fixVersionIdIsSet_ = true;
}

bool ExternalServiceBizCase::fixVersionIdIsSet() const
{
    return fixVersionIdIsSet_;
}

void ExternalServiceBizCase::unsetfixVersionId()
{
    fixVersionIdIsSet_ = false;
}

std::string ExternalServiceBizCase::getAssignedId() const
{
    return assignedId_;
}

void ExternalServiceBizCase::setAssignedId(const std::string& value)
{
    assignedId_ = value;
    assignedIdIsSet_ = true;
}

bool ExternalServiceBizCase::assignedIdIsSet() const
{
    return assignedIdIsSet_;
}

void ExternalServiceBizCase::unsetassignedId()
{
    assignedIdIsSet_ = false;
}

std::string ExternalServiceBizCase::getIssueId() const
{
    return issueId_;
}

void ExternalServiceBizCase::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ExternalServiceBizCase::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ExternalServiceBizCase::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string ExternalServiceBizCase::getStatusId() const
{
    return statusId_;
}

void ExternalServiceBizCase::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool ExternalServiceBizCase::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void ExternalServiceBizCase::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::vector<std::string>& ExternalServiceBizCase::getDefectIdList()
{
    return defectIdList_;
}

void ExternalServiceBizCase::setDefectIdList(const std::vector<std::string>& value)
{
    defectIdList_ = value;
    defectIdListIsSet_ = true;
}

bool ExternalServiceBizCase::defectIdListIsSet() const
{
    return defectIdListIsSet_;
}

void ExternalServiceBizCase::unsetdefectIdList()
{
    defectIdListIsSet_ = false;
}

}
}
}
}
}


