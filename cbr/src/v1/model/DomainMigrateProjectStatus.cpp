

#include "huaweicloud/cbr/v1/model/DomainMigrateProjectStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DomainMigrateProjectStatus::DomainMigrateProjectStatus()
{
    status_ = "";
    statusIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    failCode_ = 0;
    failCodeIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
}

DomainMigrateProjectStatus::~DomainMigrateProjectStatus() = default;

void DomainMigrateProjectStatus::validate()
{
}

web::json::value DomainMigrateProjectStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(failCodeIsSet_) {
        val[utility::conversions::to_string_t("fail_code")] = ModelBase::toJson(failCode_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }

    return val;
}
bool DomainMigrateProjectStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    return ok;
}


std::string DomainMigrateProjectStatus::getStatus() const
{
    return status_;
}

void DomainMigrateProjectStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DomainMigrateProjectStatus::statusIsSet() const
{
    return statusIsSet_;
}

void DomainMigrateProjectStatus::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DomainMigrateProjectStatus::getProjectId() const
{
    return projectId_;
}

void DomainMigrateProjectStatus::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DomainMigrateProjectStatus::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DomainMigrateProjectStatus::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DomainMigrateProjectStatus::getProjectName() const
{
    return projectName_;
}

void DomainMigrateProjectStatus::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool DomainMigrateProjectStatus::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void DomainMigrateProjectStatus::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string DomainMigrateProjectStatus::getRegionId() const
{
    return regionId_;
}

void DomainMigrateProjectStatus::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool DomainMigrateProjectStatus::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void DomainMigrateProjectStatus::unsetregionId()
{
    regionIdIsSet_ = false;
}

int32_t DomainMigrateProjectStatus::getProgress() const
{
    return progress_;
}

void DomainMigrateProjectStatus::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool DomainMigrateProjectStatus::progressIsSet() const
{
    return progressIsSet_;
}

void DomainMigrateProjectStatus::unsetprogress()
{
    progressIsSet_ = false;
}

int32_t DomainMigrateProjectStatus::getFailCode() const
{
    return failCode_;
}

void DomainMigrateProjectStatus::setFailCode(int32_t value)
{
    failCode_ = value;
    failCodeIsSet_ = true;
}

bool DomainMigrateProjectStatus::failCodeIsSet() const
{
    return failCodeIsSet_;
}

void DomainMigrateProjectStatus::unsetfailCode()
{
    failCodeIsSet_ = false;
}

std::string DomainMigrateProjectStatus::getFailReason() const
{
    return failReason_;
}

void DomainMigrateProjectStatus::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool DomainMigrateProjectStatus::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void DomainMigrateProjectStatus::unsetfailReason()
{
    failReasonIsSet_ = false;
}

}
}
}
}
}


