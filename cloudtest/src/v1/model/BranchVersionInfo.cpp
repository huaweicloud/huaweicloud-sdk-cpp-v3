

#include "huaweicloud/cloudtest/v1/model/BranchVersionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BranchVersionInfo::BranchVersionInfo()
{
    name_ = "";
    nameIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
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
}

BranchVersionInfo::~BranchVersionInfo() = default;

void BranchVersionInfo::validate()
{
}

web::json::value BranchVersionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
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

    return val;
}
bool BranchVersionInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string BranchVersionInfo::getName() const
{
    return name_;
}

void BranchVersionInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BranchVersionInfo::nameIsSet() const
{
    return nameIsSet_;
}

void BranchVersionInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string BranchVersionInfo::getNumber() const
{
    return number_;
}

void BranchVersionInfo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool BranchVersionInfo::numberIsSet() const
{
    return numberIsSet_;
}

void BranchVersionInfo::unsetnumber()
{
    numberIsSet_ = false;
}

std::string BranchVersionInfo::getIsMaster() const
{
    return isMaster_;
}

void BranchVersionInfo::setIsMaster(const std::string& value)
{
    isMaster_ = value;
    isMasterIsSet_ = true;
}

bool BranchVersionInfo::isMasterIsSet() const
{
    return isMasterIsSet_;
}

void BranchVersionInfo::unsetisMaster()
{
    isMasterIsSet_ = false;
}

std::string BranchVersionInfo::getPbiId() const
{
    return pbiId_;
}

void BranchVersionInfo::setPbiId(const std::string& value)
{
    pbiId_ = value;
    pbiIdIsSet_ = true;
}

bool BranchVersionInfo::pbiIdIsSet() const
{
    return pbiIdIsSet_;
}

void BranchVersionInfo::unsetpbiId()
{
    pbiIdIsSet_ = false;
}

std::string BranchVersionInfo::getPbiName() const
{
    return pbiName_;
}

void BranchVersionInfo::setPbiName(const std::string& value)
{
    pbiName_ = value;
    pbiNameIsSet_ = true;
}

bool BranchVersionInfo::pbiNameIsSet() const
{
    return pbiNameIsSet_;
}

void BranchVersionInfo::unsetpbiName()
{
    pbiNameIsSet_ = false;
}

std::string BranchVersionInfo::getPlanStartDate() const
{
    return planStartDate_;
}

void BranchVersionInfo::setPlanStartDate(const std::string& value)
{
    planStartDate_ = value;
    planStartDateIsSet_ = true;
}

bool BranchVersionInfo::planStartDateIsSet() const
{
    return planStartDateIsSet_;
}

void BranchVersionInfo::unsetplanStartDate()
{
    planStartDateIsSet_ = false;
}

int64_t BranchVersionInfo::getPlanStartTimestamp() const
{
    return planStartTimestamp_;
}

void BranchVersionInfo::setPlanStartTimestamp(int64_t value)
{
    planStartTimestamp_ = value;
    planStartTimestampIsSet_ = true;
}

bool BranchVersionInfo::planStartTimestampIsSet() const
{
    return planStartTimestampIsSet_;
}

void BranchVersionInfo::unsetplanStartTimestamp()
{
    planStartTimestampIsSet_ = false;
}

std::string BranchVersionInfo::getPlanEndDate() const
{
    return planEndDate_;
}

void BranchVersionInfo::setPlanEndDate(const std::string& value)
{
    planEndDate_ = value;
    planEndDateIsSet_ = true;
}

bool BranchVersionInfo::planEndDateIsSet() const
{
    return planEndDateIsSet_;
}

void BranchVersionInfo::unsetplanEndDate()
{
    planEndDateIsSet_ = false;
}

int64_t BranchVersionInfo::getPlanEndTimestamp() const
{
    return planEndTimestamp_;
}

void BranchVersionInfo::setPlanEndTimestamp(int64_t value)
{
    planEndTimestamp_ = value;
    planEndTimestampIsSet_ = true;
}

bool BranchVersionInfo::planEndTimestampIsSet() const
{
    return planEndTimestampIsSet_;
}

void BranchVersionInfo::unsetplanEndTimestamp()
{
    planEndTimestampIsSet_ = false;
}

std::string BranchVersionInfo::getAsynGit() const
{
    return asynGit_;
}

void BranchVersionInfo::setAsynGit(const std::string& value)
{
    asynGit_ = value;
    asynGitIsSet_ = true;
}

bool BranchVersionInfo::asynGitIsSet() const
{
    return asynGitIsSet_;
}

void BranchVersionInfo::unsetasynGit()
{
    asynGitIsSet_ = false;
}

std::string BranchVersionInfo::getProjectUuid() const
{
    return projectUuid_;
}

void BranchVersionInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool BranchVersionInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void BranchVersionInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string BranchVersionInfo::getProjectName() const
{
    return projectName_;
}

void BranchVersionInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool BranchVersionInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void BranchVersionInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


