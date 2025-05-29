

#include "huaweicloud/codeartsbuild/v3/model/ShowJobInfo_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobInfo_result::ShowJobInfo_result()
{
    id_ = "";
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectPermissionSwitch_ = false;
    projectPermissionSwitchIsSet_ = false;
    buildTime_ = "";
    buildTimeIsSet_ = false;
    chargeTime_ = "";
    chargeTimeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    disabled_ = false;
    disabledIsSet_ = false;
    favorite_ = false;
    favoriteIsSet_ = false;
    sourceCode_ = "";
    sourceCodeIsSet_ = false;
    runningStatus_ = "";
    runningStatusIsSet_ = false;
    newBuild_ = false;
    newBuildIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    isCopy_ = false;
    isCopyIsSet_ = false;
    isDelete_ = false;
    isDeleteIsSet_ = false;
    isExecute_ = false;
    isExecuteIsSet_ = false;
    isForbidden_ = false;
    isForbiddenIsSet_ = false;
    isManager_ = false;
    isManagerIsSet_ = false;
    isModify_ = false;
    isModifyIsSet_ = false;
    isView_ = false;
    isViewIsSet_ = false;
    lastBuildStatus_ = "";
    lastBuildStatusIsSet_ = false;
    lastBuildTime_ = 0L;
    lastBuildTimeIsSet_ = false;
    healthScore_ = 0;
    healthScoreIsSet_ = false;
}

ShowJobInfo_result::~ShowJobInfo_result() = default;

void ShowJobInfo_result::validate()
{
}

web::json::value ShowJobInfo_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectPermissionSwitchIsSet_) {
        val[utility::conversions::to_string_t("project_permission_switch")] = ModelBase::toJson(projectPermissionSwitch_);
    }
    if(buildTimeIsSet_) {
        val[utility::conversions::to_string_t("build_time")] = ModelBase::toJson(buildTime_);
    }
    if(chargeTimeIsSet_) {
        val[utility::conversions::to_string_t("charge_time")] = ModelBase::toJson(chargeTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }
    if(favoriteIsSet_) {
        val[utility::conversions::to_string_t("favorite")] = ModelBase::toJson(favorite_);
    }
    if(sourceCodeIsSet_) {
        val[utility::conversions::to_string_t("source_code")] = ModelBase::toJson(sourceCode_);
    }
    if(runningStatusIsSet_) {
        val[utility::conversions::to_string_t("running_status")] = ModelBase::toJson(runningStatus_);
    }
    if(newBuildIsSet_) {
        val[utility::conversions::to_string_t("new_build")] = ModelBase::toJson(newBuild_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(isCopyIsSet_) {
        val[utility::conversions::to_string_t("is_copy")] = ModelBase::toJson(isCopy_);
    }
    if(isDeleteIsSet_) {
        val[utility::conversions::to_string_t("is_delete")] = ModelBase::toJson(isDelete_);
    }
    if(isExecuteIsSet_) {
        val[utility::conversions::to_string_t("is_execute")] = ModelBase::toJson(isExecute_);
    }
    if(isForbiddenIsSet_) {
        val[utility::conversions::to_string_t("is_forbidden")] = ModelBase::toJson(isForbidden_);
    }
    if(isManagerIsSet_) {
        val[utility::conversions::to_string_t("is_manager")] = ModelBase::toJson(isManager_);
    }
    if(isModifyIsSet_) {
        val[utility::conversions::to_string_t("is_modify")] = ModelBase::toJson(isModify_);
    }
    if(isViewIsSet_) {
        val[utility::conversions::to_string_t("is_view")] = ModelBase::toJson(isView_);
    }
    if(lastBuildStatusIsSet_) {
        val[utility::conversions::to_string_t("last_build_status")] = ModelBase::toJson(lastBuildStatus_);
    }
    if(lastBuildTimeIsSet_) {
        val[utility::conversions::to_string_t("last_build_time")] = ModelBase::toJson(lastBuildTime_);
    }
    if(healthScoreIsSet_) {
        val[utility::conversions::to_string_t("health_score")] = ModelBase::toJson(healthScore_);
    }

    return val;
}
bool ShowJobInfo_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_permission_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_permission_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectPermissionSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("favorite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("favorite"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFavorite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("running_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_build"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_build"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewBuild(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCopy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_execute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_execute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExecute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_forbidden"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_forbidden"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsForbidden(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_manager"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_manager"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsManager(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsModify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_build_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_build_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastBuildStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_build_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastBuildTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("health_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthScore(refVal);
        }
    }
    return ok;
}


std::string ShowJobInfo_result::getId() const
{
    return id_;
}

void ShowJobInfo_result::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowJobInfo_result::idIsSet() const
{
    return idIsSet_;
}

void ShowJobInfo_result::unsetid()
{
    idIsSet_ = false;
}

std::string ShowJobInfo_result::getProjectId() const
{
    return projectId_;
}

void ShowJobInfo_result::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowJobInfo_result::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowJobInfo_result::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool ShowJobInfo_result::isProjectPermissionSwitch() const
{
    return projectPermissionSwitch_;
}

void ShowJobInfo_result::setProjectPermissionSwitch(bool value)
{
    projectPermissionSwitch_ = value;
    projectPermissionSwitchIsSet_ = true;
}

bool ShowJobInfo_result::projectPermissionSwitchIsSet() const
{
    return projectPermissionSwitchIsSet_;
}

void ShowJobInfo_result::unsetprojectPermissionSwitch()
{
    projectPermissionSwitchIsSet_ = false;
}

std::string ShowJobInfo_result::getBuildTime() const
{
    return buildTime_;
}

void ShowJobInfo_result::setBuildTime(const std::string& value)
{
    buildTime_ = value;
    buildTimeIsSet_ = true;
}

bool ShowJobInfo_result::buildTimeIsSet() const
{
    return buildTimeIsSet_;
}

void ShowJobInfo_result::unsetbuildTime()
{
    buildTimeIsSet_ = false;
}

std::string ShowJobInfo_result::getChargeTime() const
{
    return chargeTime_;
}

void ShowJobInfo_result::setChargeTime(const std::string& value)
{
    chargeTime_ = value;
    chargeTimeIsSet_ = true;
}

bool ShowJobInfo_result::chargeTimeIsSet() const
{
    return chargeTimeIsSet_;
}

void ShowJobInfo_result::unsetchargeTime()
{
    chargeTimeIsSet_ = false;
}

int64_t ShowJobInfo_result::getCreateTime() const
{
    return createTime_;
}

void ShowJobInfo_result::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowJobInfo_result::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowJobInfo_result::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

bool ShowJobInfo_result::isDisabled() const
{
    return disabled_;
}

void ShowJobInfo_result::setDisabled(bool value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool ShowJobInfo_result::disabledIsSet() const
{
    return disabledIsSet_;
}

void ShowJobInfo_result::unsetdisabled()
{
    disabledIsSet_ = false;
}

bool ShowJobInfo_result::isFavorite() const
{
    return favorite_;
}

void ShowJobInfo_result::setFavorite(bool value)
{
    favorite_ = value;
    favoriteIsSet_ = true;
}

bool ShowJobInfo_result::favoriteIsSet() const
{
    return favoriteIsSet_;
}

void ShowJobInfo_result::unsetfavorite()
{
    favoriteIsSet_ = false;
}

std::string ShowJobInfo_result::getSourceCode() const
{
    return sourceCode_;
}

void ShowJobInfo_result::setSourceCode(const std::string& value)
{
    sourceCode_ = value;
    sourceCodeIsSet_ = true;
}

bool ShowJobInfo_result::sourceCodeIsSet() const
{
    return sourceCodeIsSet_;
}

void ShowJobInfo_result::unsetsourceCode()
{
    sourceCodeIsSet_ = false;
}

std::string ShowJobInfo_result::getRunningStatus() const
{
    return runningStatus_;
}

void ShowJobInfo_result::setRunningStatus(const std::string& value)
{
    runningStatus_ = value;
    runningStatusIsSet_ = true;
}

bool ShowJobInfo_result::runningStatusIsSet() const
{
    return runningStatusIsSet_;
}

void ShowJobInfo_result::unsetrunningStatus()
{
    runningStatusIsSet_ = false;
}

bool ShowJobInfo_result::isNewBuild() const
{
    return newBuild_;
}

void ShowJobInfo_result::setNewBuild(bool value)
{
    newBuild_ = value;
    newBuildIsSet_ = true;
}

bool ShowJobInfo_result::newBuildIsSet() const
{
    return newBuildIsSet_;
}

void ShowJobInfo_result::unsetnewBuild()
{
    newBuildIsSet_ = false;
}

std::string ShowJobInfo_result::getJobName() const
{
    return jobName_;
}

void ShowJobInfo_result::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ShowJobInfo_result::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ShowJobInfo_result::unsetjobName()
{
    jobNameIsSet_ = false;
}

bool ShowJobInfo_result::isIsCopy() const
{
    return isCopy_;
}

void ShowJobInfo_result::setIsCopy(bool value)
{
    isCopy_ = value;
    isCopyIsSet_ = true;
}

bool ShowJobInfo_result::isCopyIsSet() const
{
    return isCopyIsSet_;
}

void ShowJobInfo_result::unsetisCopy()
{
    isCopyIsSet_ = false;
}

bool ShowJobInfo_result::isIsDelete() const
{
    return isDelete_;
}

void ShowJobInfo_result::setIsDelete(bool value)
{
    isDelete_ = value;
    isDeleteIsSet_ = true;
}

bool ShowJobInfo_result::isDeleteIsSet() const
{
    return isDeleteIsSet_;
}

void ShowJobInfo_result::unsetisDelete()
{
    isDeleteIsSet_ = false;
}

bool ShowJobInfo_result::isIsExecute() const
{
    return isExecute_;
}

void ShowJobInfo_result::setIsExecute(bool value)
{
    isExecute_ = value;
    isExecuteIsSet_ = true;
}

bool ShowJobInfo_result::isExecuteIsSet() const
{
    return isExecuteIsSet_;
}

void ShowJobInfo_result::unsetisExecute()
{
    isExecuteIsSet_ = false;
}

bool ShowJobInfo_result::isIsForbidden() const
{
    return isForbidden_;
}

void ShowJobInfo_result::setIsForbidden(bool value)
{
    isForbidden_ = value;
    isForbiddenIsSet_ = true;
}

bool ShowJobInfo_result::isForbiddenIsSet() const
{
    return isForbiddenIsSet_;
}

void ShowJobInfo_result::unsetisForbidden()
{
    isForbiddenIsSet_ = false;
}

bool ShowJobInfo_result::isIsManager() const
{
    return isManager_;
}

void ShowJobInfo_result::setIsManager(bool value)
{
    isManager_ = value;
    isManagerIsSet_ = true;
}

bool ShowJobInfo_result::isManagerIsSet() const
{
    return isManagerIsSet_;
}

void ShowJobInfo_result::unsetisManager()
{
    isManagerIsSet_ = false;
}

bool ShowJobInfo_result::isIsModify() const
{
    return isModify_;
}

void ShowJobInfo_result::setIsModify(bool value)
{
    isModify_ = value;
    isModifyIsSet_ = true;
}

bool ShowJobInfo_result::isModifyIsSet() const
{
    return isModifyIsSet_;
}

void ShowJobInfo_result::unsetisModify()
{
    isModifyIsSet_ = false;
}

bool ShowJobInfo_result::isIsView() const
{
    return isView_;
}

void ShowJobInfo_result::setIsView(bool value)
{
    isView_ = value;
    isViewIsSet_ = true;
}

bool ShowJobInfo_result::isViewIsSet() const
{
    return isViewIsSet_;
}

void ShowJobInfo_result::unsetisView()
{
    isViewIsSet_ = false;
}

std::string ShowJobInfo_result::getLastBuildStatus() const
{
    return lastBuildStatus_;
}

void ShowJobInfo_result::setLastBuildStatus(const std::string& value)
{
    lastBuildStatus_ = value;
    lastBuildStatusIsSet_ = true;
}

bool ShowJobInfo_result::lastBuildStatusIsSet() const
{
    return lastBuildStatusIsSet_;
}

void ShowJobInfo_result::unsetlastBuildStatus()
{
    lastBuildStatusIsSet_ = false;
}

int64_t ShowJobInfo_result::getLastBuildTime() const
{
    return lastBuildTime_;
}

void ShowJobInfo_result::setLastBuildTime(int64_t value)
{
    lastBuildTime_ = value;
    lastBuildTimeIsSet_ = true;
}

bool ShowJobInfo_result::lastBuildTimeIsSet() const
{
    return lastBuildTimeIsSet_;
}

void ShowJobInfo_result::unsetlastBuildTime()
{
    lastBuildTimeIsSet_ = false;
}

int32_t ShowJobInfo_result::getHealthScore() const
{
    return healthScore_;
}

void ShowJobInfo_result::setHealthScore(int32_t value)
{
    healthScore_ = value;
    healthScoreIsSet_ = true;
}

bool ShowJobInfo_result::healthScoreIsSet() const
{
    return healthScoreIsSet_;
}

void ShowJobInfo_result::unsethealthScore()
{
    healthScoreIsSet_ = false;
}

}
}
}
}
}


