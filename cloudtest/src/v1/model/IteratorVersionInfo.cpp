

#include "huaweicloud/cloudtest/v1/model/IteratorVersionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IteratorVersionInfo::IteratorVersionInfo()
{
    name_ = "";
    nameIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    iterationsIsSet_ = false;
    isMaster_ = "";
    isMasterIsSet_ = false;
    pbiId_ = "";
    pbiIdIsSet_ = false;
    pbiName_ = "";
    pbiNameIsSet_ = false;
    planStartDate_ = "";
    planStartDateIsSet_ = false;
    planStartTimestamp_ = 0L;
    planStartTimestampIsSet_ = false;
    planEndDate_ = "";
    planEndDateIsSet_ = false;
    planEndTimestamp_ = 0L;
    planEndTimestampIsSet_ = false;
    asynGit_ = "";
    asynGitIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    currentStage_ = "";
    currentStageIsSet_ = false;
    serviceTypesIsSet_ = false;
    issueListIsSet_ = false;
    riskRating_ = 0;
    riskRatingIsSet_ = false;
    riskDes_ = "";
    riskDesIsSet_ = false;
    isUpdateRisk_ = "";
    isUpdateRiskIsSet_ = false;
    piId_ = "";
    piIdIsSet_ = false;
}

IteratorVersionInfo::~IteratorVersionInfo() = default;

void IteratorVersionInfo::validate()
{
}

web::json::value IteratorVersionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(iterationsIsSet_) {
        val[utility::conversions::to_string_t("iterations")] = ModelBase::toJson(iterations_);
    }
    if(isMasterIsSet_) {
        val[utility::conversions::to_string_t("is_master")] = ModelBase::toJson(isMaster_);
    }
    if(pbiIdIsSet_) {
        val[utility::conversions::to_string_t("pbi_id")] = ModelBase::toJson(pbiId_);
    }
    if(pbiNameIsSet_) {
        val[utility::conversions::to_string_t("pbi_name")] = ModelBase::toJson(pbiName_);
    }
    if(planStartDateIsSet_) {
        val[utility::conversions::to_string_t("plan_start_date")] = ModelBase::toJson(planStartDate_);
    }
    if(planStartTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_start_timestamp")] = ModelBase::toJson(planStartTimestamp_);
    }
    if(planEndDateIsSet_) {
        val[utility::conversions::to_string_t("plan_end_date")] = ModelBase::toJson(planEndDate_);
    }
    if(planEndTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_end_timestamp")] = ModelBase::toJson(planEndTimestamp_);
    }
    if(asynGitIsSet_) {
        val[utility::conversions::to_string_t("asyn_git")] = ModelBase::toJson(asynGit_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(currentStageIsSet_) {
        val[utility::conversions::to_string_t("current_stage")] = ModelBase::toJson(currentStage_);
    }
    if(serviceTypesIsSet_) {
        val[utility::conversions::to_string_t("service_types")] = ModelBase::toJson(serviceTypes_);
    }
    if(issueListIsSet_) {
        val[utility::conversions::to_string_t("issue_list")] = ModelBase::toJson(issueList_);
    }
    if(riskRatingIsSet_) {
        val[utility::conversions::to_string_t("risk_rating")] = ModelBase::toJson(riskRating_);
    }
    if(riskDesIsSet_) {
        val[utility::conversions::to_string_t("risk_des")] = ModelBase::toJson(riskDes_);
    }
    if(isUpdateRiskIsSet_) {
        val[utility::conversions::to_string_t("is_update_risk")] = ModelBase::toJson(isUpdateRisk_);
    }
    if(piIdIsSet_) {
        val[utility::conversions::to_string_t("pi_id")] = ModelBase::toJson(piId_);
    }

    return val;
}
bool IteratorVersionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_master"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_master"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMaster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pbi_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pbi_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPbiId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pbi_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pbi_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPbiName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asyn_git"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asyn_git"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsynGit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("current_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_list"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkItemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_rating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_rating"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskRating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_des"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_des"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskDes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_update_risk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_update_risk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUpdateRisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiId(refVal);
        }
    }
    return ok;
}


std::string IteratorVersionInfo::getName() const
{
    return name_;
}

void IteratorVersionInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IteratorVersionInfo::nameIsSet() const
{
    return nameIsSet_;
}

void IteratorVersionInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string IteratorVersionInfo::getNumber() const
{
    return number_;
}

void IteratorVersionInfo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IteratorVersionInfo::numberIsSet() const
{
    return numberIsSet_;
}

void IteratorVersionInfo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string IteratorVersionInfo::getOwner() const
{
    return owner_;
}

void IteratorVersionInfo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool IteratorVersionInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void IteratorVersionInfo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string IteratorVersionInfo::getVersion() const
{
    return version_;
}

void IteratorVersionInfo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool IteratorVersionInfo::versionIsSet() const
{
    return versionIsSet_;
}

void IteratorVersionInfo::unsetversion()
{
    versionIsSet_ = false;
}

std::string IteratorVersionInfo::getDescription() const
{
    return description_;
}

void IteratorVersionInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IteratorVersionInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IteratorVersionInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& IteratorVersionInfo::getIterations()
{
    return iterations_;
}

void IteratorVersionInfo::setIterations(const std::vector<std::string>& value)
{
    iterations_ = value;
    iterationsIsSet_ = true;
}

bool IteratorVersionInfo::iterationsIsSet() const
{
    return iterationsIsSet_;
}

void IteratorVersionInfo::unsetiterations()
{
    iterationsIsSet_ = false;
}

std::string IteratorVersionInfo::getIsMaster() const
{
    return isMaster_;
}

void IteratorVersionInfo::setIsMaster(const std::string& value)
{
    isMaster_ = value;
    isMasterIsSet_ = true;
}

bool IteratorVersionInfo::isMasterIsSet() const
{
    return isMasterIsSet_;
}

void IteratorVersionInfo::unsetisMaster()
{
    isMasterIsSet_ = false;
}

std::string IteratorVersionInfo::getPbiId() const
{
    return pbiId_;
}

void IteratorVersionInfo::setPbiId(const std::string& value)
{
    pbiId_ = value;
    pbiIdIsSet_ = true;
}

bool IteratorVersionInfo::pbiIdIsSet() const
{
    return pbiIdIsSet_;
}

void IteratorVersionInfo::unsetpbiId()
{
    pbiIdIsSet_ = false;
}

std::string IteratorVersionInfo::getPbiName() const
{
    return pbiName_;
}

void IteratorVersionInfo::setPbiName(const std::string& value)
{
    pbiName_ = value;
    pbiNameIsSet_ = true;
}

bool IteratorVersionInfo::pbiNameIsSet() const
{
    return pbiNameIsSet_;
}

void IteratorVersionInfo::unsetpbiName()
{
    pbiNameIsSet_ = false;
}

std::string IteratorVersionInfo::getPlanStartDate() const
{
    return planStartDate_;
}

void IteratorVersionInfo::setPlanStartDate(const std::string& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool IteratorVersionInfo::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void IteratorVersionInfo::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

int64_t IteratorVersionInfo::getPlanStartTimestamp() const
{
    return planStartTimestamp_;
}

void IteratorVersionInfo::setPlanStartTimestamp(int64_t value)
{
    planStartTimestamp_ = value;
    planStartTimestampIsSet_ = true;
}

bool IteratorVersionInfo::planStartTimestampIsSet() const
{
    return planStartTimestampIsSet_;
}

void IteratorVersionInfo::unsetplanStartTimestamp()
{
    planStartTimestampIsSet_ = false;
}

std::string IteratorVersionInfo::getPlanEndDate() const
{
    return planEndDate_;
}

void IteratorVersionInfo::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool IteratorVersionInfo::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void IteratorVersionInfo::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

int64_t IteratorVersionInfo::getPlanEndTimestamp() const
{
    return planEndTimestamp_;
}

void IteratorVersionInfo::setPlanEndTimestamp(int64_t value)
{
    planEndTimestamp_ = value;
    planEndTimestampIsSet_ = true;
}

bool IteratorVersionInfo::planEndTimestampIsSet() const
{
    return planEndTimestampIsSet_;
}

void IteratorVersionInfo::unsetplanEndTimestamp()
{
    planEndTimestampIsSet_ = false;
}

std::string IteratorVersionInfo::getAsynGit() const
{
    return asynGit_;
}

void IteratorVersionInfo::setAsynGit(const std::string& value)
{
    asynGit_ = value;
    asynGitIsSet_ = true;
}

bool IteratorVersionInfo::asynGitIsSet() const
{
    return asynGitIsSet_;
}

void IteratorVersionInfo::unsetasynGit()
{
    asynGitIsSet_ = false;
}

std::string IteratorVersionInfo::getProjectUuid() const
{
    return projectUuid_;
}

void IteratorVersionInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool IteratorVersionInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void IteratorVersionInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string IteratorVersionInfo::getProjectName() const
{
    return projectName_;
}

void IteratorVersionInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool IteratorVersionInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void IteratorVersionInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string IteratorVersionInfo::getCurrentStage() const
{
    return currentStage_;
}

void IteratorVersionInfo::setCurrentStage(const std::string& value)
{
    currentStage_ = value;
    currentStageIsSet_ = true;
}

bool IteratorVersionInfo::currentStageIsSet() const
{
    return currentStageIsSet_;
}

void IteratorVersionInfo::unsetcurrentStage()
{
    currentStageIsSet_ = false;
}

std::vector<std::string>& IteratorVersionInfo::getServiceTypes()
{
    return serviceTypes_;
}

void IteratorVersionInfo::setServiceTypes(const std::vector<std::string>& value)
{
    serviceTypes_ = value;
    serviceTypesIsSet_ = true;
}

bool IteratorVersionInfo::serviceTypesIsSet() const
{
    return serviceTypesIsSet_;
}

void IteratorVersionInfo::unsetserviceTypes()
{
    serviceTypesIsSet_ = false;
}

std::vector<WorkItemInfo>& IteratorVersionInfo::getIssueList()
{
    return issueList_;
}

void IteratorVersionInfo::setIssueList(const std::vector<WorkItemInfo>& value)
{
    issueList_ = value;
    issueListIsSet_ = true;
}

bool IteratorVersionInfo::issueListIsSet() const
{
    return issueListIsSet_;
}

void IteratorVersionInfo::unsetissueList()
{
    issueListIsSet_ = false;
}

int32_t IteratorVersionInfo::getRiskRating() const
{
    return riskRating_;
}

void IteratorVersionInfo::setRiskRating(int32_t value)
{
    riskRating_ = value;
    riskRatingIsSet_ = true;
}

bool IteratorVersionInfo::riskRatingIsSet() const
{
    return riskRatingIsSet_;
}

void IteratorVersionInfo::unsetriskRating()
{
    riskRatingIsSet_ = false;
}

std::string IteratorVersionInfo::getRiskDes() const
{
    return riskDes_;
}

void IteratorVersionInfo::setRiskDes(const std::string& value)
{
    riskDes_ = value;
    riskDesIsSet_ = true;
}

bool IteratorVersionInfo::riskDesIsSet() const
{
    return riskDesIsSet_;
}

void IteratorVersionInfo::unsetriskDes()
{
    riskDesIsSet_ = false;
}

std::string IteratorVersionInfo::getIsUpdateRisk() const
{
    return isUpdateRisk_;
}

void IteratorVersionInfo::setIsUpdateRisk(const std::string& value)
{
    isUpdateRisk_ = value;
    isUpdateRiskIsSet_ = true;
}

bool IteratorVersionInfo::isUpdateRiskIsSet() const
{
    return isUpdateRiskIsSet_;
}

void IteratorVersionInfo::unsetisUpdateRisk()
{
    isUpdateRiskIsSet_ = false;
}

std::string IteratorVersionInfo::getPiId() const
{
    return piId_;
}

void IteratorVersionInfo::setPiId(const std::string& value)
{
    piId_ = value;
    piIdIsSet_ = true;
}

bool IteratorVersionInfo::piIdIsSet() const
{
    return piIdIsSet_;
}

void IteratorVersionInfo::unsetpiId()
{
    piIdIsSet_ = false;
}

}
}
}
}
}


