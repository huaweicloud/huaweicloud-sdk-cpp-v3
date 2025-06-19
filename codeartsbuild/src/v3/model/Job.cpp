

#include "huaweicloud/codeartsbuild/v3/model/Job.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




Job::Job()
{
    id_ = "";
    idIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobCreator_ = "";
    jobCreatorIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    lastBuildTime_ = 0.0;
    lastBuildTimeIsSet_ = false;
    healthScore_ = 0;
    healthScoreIsSet_ = false;
    sourceCode_ = "";
    sourceCodeIsSet_ = false;
    lastBuildStatus_ = "";
    lastBuildStatusIsSet_ = false;
    isFinished_ = false;
    isFinishedIsSet_ = false;
    disabled_ = false;
    disabledIsSet_ = false;
    favorite_ = false;
    favoriteIsSet_ = false;
    isModify_ = false;
    isModifyIsSet_ = false;
    isDelete_ = false;
    isDeleteIsSet_ = false;
    isExecute_ = false;
    isExecuteIsSet_ = false;
    isCopy_ = false;
    isCopyIsSet_ = false;
    isForbidden_ = false;
    isForbiddenIsSet_ = false;
    isView_ = false;
    isViewIsSet_ = false;
    lastBuildUser_ = "";
    lastBuildUserIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    buildTime_ = 0L;
    buildTimeIsSet_ = false;
    scmWebUrl_ = "";
    scmWebUrlIsSet_ = false;
    scmType_ = "";
    scmTypeIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    buildProjectId_ = "";
    buildProjectIdIsSet_ = false;
    lastJobRunningStatus_ = "";
    lastJobRunningStatusIsSet_ = false;
    lastBuildUserId_ = "";
    lastBuildUserIdIsSet_ = false;
}

Job::~Job() = default;

void Job::validate()
{
}

web::json::value Job::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobCreatorIsSet_) {
        val[utility::conversions::to_string_t("job_creator")] = ModelBase::toJson(jobCreator_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(lastBuildTimeIsSet_) {
        val[utility::conversions::to_string_t("last_build_time")] = ModelBase::toJson(lastBuildTime_);
    }
    if(healthScoreIsSet_) {
        val[utility::conversions::to_string_t("health_score")] = ModelBase::toJson(healthScore_);
    }
    if(sourceCodeIsSet_) {
        val[utility::conversions::to_string_t("source_code")] = ModelBase::toJson(sourceCode_);
    }
    if(lastBuildStatusIsSet_) {
        val[utility::conversions::to_string_t("last_build_status")] = ModelBase::toJson(lastBuildStatus_);
    }
    if(isFinishedIsSet_) {
        val[utility::conversions::to_string_t("is_finished")] = ModelBase::toJson(isFinished_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }
    if(favoriteIsSet_) {
        val[utility::conversions::to_string_t("favorite")] = ModelBase::toJson(favorite_);
    }
    if(isModifyIsSet_) {
        val[utility::conversions::to_string_t("is_modify")] = ModelBase::toJson(isModify_);
    }
    if(isDeleteIsSet_) {
        val[utility::conversions::to_string_t("is_delete")] = ModelBase::toJson(isDelete_);
    }
    if(isExecuteIsSet_) {
        val[utility::conversions::to_string_t("is_execute")] = ModelBase::toJson(isExecute_);
    }
    if(isCopyIsSet_) {
        val[utility::conversions::to_string_t("is_copy")] = ModelBase::toJson(isCopy_);
    }
    if(isForbiddenIsSet_) {
        val[utility::conversions::to_string_t("is_forbidden")] = ModelBase::toJson(isForbidden_);
    }
    if(isViewIsSet_) {
        val[utility::conversions::to_string_t("is_view")] = ModelBase::toJson(isView_);
    }
    if(lastBuildUserIsSet_) {
        val[utility::conversions::to_string_t("last_build_user")] = ModelBase::toJson(lastBuildUser_);
    }
    if(triggerTypeIsSet_) {
        val[utility::conversions::to_string_t("trigger_type")] = ModelBase::toJson(triggerType_);
    }
    if(buildTimeIsSet_) {
        val[utility::conversions::to_string_t("build_time")] = ModelBase::toJson(buildTime_);
    }
    if(scmWebUrlIsSet_) {
        val[utility::conversions::to_string_t("scm_web_url")] = ModelBase::toJson(scmWebUrl_);
    }
    if(scmTypeIsSet_) {
        val[utility::conversions::to_string_t("scm_type")] = ModelBase::toJson(scmType_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(buildProjectIdIsSet_) {
        val[utility::conversions::to_string_t("build_project_id")] = ModelBase::toJson(buildProjectId_);
    }
    if(lastJobRunningStatusIsSet_) {
        val[utility::conversions::to_string_t("last_job_running_status")] = ModelBase::toJson(lastJobRunningStatus_);
    }
    if(lastBuildUserIdIsSet_) {
        val[utility::conversions::to_string_t("last_build_user_id")] = ModelBase::toJson(lastBuildUserId_);
    }

    return val;
}
bool Job::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_build_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
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
    if(val.has_field(utility::conversions::to_string_t("source_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_finished"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_finished"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFinished(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsModify(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCopy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_build_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_build_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastBuildUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scm_web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmWebUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_job_running_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_job_running_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastJobRunningStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_build_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_build_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastBuildUserId(refVal);
        }
    }
    return ok;
}


std::string Job::getId() const
{
    return id_;
}

void Job::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Job::idIsSet() const
{
    return idIsSet_;
}

void Job::unsetid()
{
    idIsSet_ = false;
}

std::string Job::getJobName() const
{
    return jobName_;
}

void Job::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool Job::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void Job::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string Job::getJobCreator() const
{
    return jobCreator_;
}

void Job::setJobCreator(const std::string& value)
{
    jobCreator_ = value;
    jobCreatorIsSet_ = true;
}

bool Job::jobCreatorIsSet() const
{
    return jobCreatorIsSet_;
}

void Job::unsetjobCreator()
{
    jobCreatorIsSet_ = false;
}

std::string Job::getUserName() const
{
    return userName_;
}

void Job::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool Job::userNameIsSet() const
{
    return userNameIsSet_;
}

void Job::unsetuserName()
{
    userNameIsSet_ = false;
}

double Job::getLastBuildTime() const
{
    return lastBuildTime_;
}

void Job::setLastBuildTime(double value)
{
    lastBuildTime_ = value;
    lastBuildTimeIsSet_ = true;
}

bool Job::lastBuildTimeIsSet() const
{
    return lastBuildTimeIsSet_;
}

void Job::unsetlastBuildTime()
{
    lastBuildTimeIsSet_ = false;
}

int32_t Job::getHealthScore() const
{
    return healthScore_;
}

void Job::setHealthScore(int32_t value)
{
    healthScore_ = value;
    healthScoreIsSet_ = true;
}

bool Job::healthScoreIsSet() const
{
    return healthScoreIsSet_;
}

void Job::unsethealthScore()
{
    healthScoreIsSet_ = false;
}

std::string Job::getSourceCode() const
{
    return sourceCode_;
}

void Job::setSourceCode(const std::string& value)
{
    sourceCode_ = value;
    sourceCodeIsSet_ = true;
}

bool Job::sourceCodeIsSet() const
{
    return sourceCodeIsSet_;
}

void Job::unsetsourceCode()
{
    sourceCodeIsSet_ = false;
}

std::string Job::getLastBuildStatus() const
{
    return lastBuildStatus_;
}

void Job::setLastBuildStatus(const std::string& value)
{
    lastBuildStatus_ = value;
    lastBuildStatusIsSet_ = true;
}

bool Job::lastBuildStatusIsSet() const
{
    return lastBuildStatusIsSet_;
}

void Job::unsetlastBuildStatus()
{
    lastBuildStatusIsSet_ = false;
}

bool Job::isIsFinished() const
{
    return isFinished_;
}

void Job::setIsFinished(bool value)
{
    isFinished_ = value;
    isFinishedIsSet_ = true;
}

bool Job::isFinishedIsSet() const
{
    return isFinishedIsSet_;
}

void Job::unsetisFinished()
{
    isFinishedIsSet_ = false;
}

bool Job::isDisabled() const
{
    return disabled_;
}

void Job::setDisabled(bool value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool Job::disabledIsSet() const
{
    return disabledIsSet_;
}

void Job::unsetdisabled()
{
    disabledIsSet_ = false;
}

bool Job::isFavorite() const
{
    return favorite_;
}

void Job::setFavorite(bool value)
{
    favorite_ = value;
    favoriteIsSet_ = true;
}

bool Job::favoriteIsSet() const
{
    return favoriteIsSet_;
}

void Job::unsetfavorite()
{
    favoriteIsSet_ = false;
}

bool Job::isIsModify() const
{
    return isModify_;
}

void Job::setIsModify(bool value)
{
    isModify_ = value;
    isModifyIsSet_ = true;
}

bool Job::isModifyIsSet() const
{
    return isModifyIsSet_;
}

void Job::unsetisModify()
{
    isModifyIsSet_ = false;
}

bool Job::isIsDelete() const
{
    return isDelete_;
}

void Job::setIsDelete(bool value)
{
    isDelete_ = value;
    isDeleteIsSet_ = true;
}

bool Job::isDeleteIsSet() const
{
    return isDeleteIsSet_;
}

void Job::unsetisDelete()
{
    isDeleteIsSet_ = false;
}

bool Job::isIsExecute() const
{
    return isExecute_;
}

void Job::setIsExecute(bool value)
{
    isExecute_ = value;
    isExecuteIsSet_ = true;
}

bool Job::isExecuteIsSet() const
{
    return isExecuteIsSet_;
}

void Job::unsetisExecute()
{
    isExecuteIsSet_ = false;
}

bool Job::isIsCopy() const
{
    return isCopy_;
}

void Job::setIsCopy(bool value)
{
    isCopy_ = value;
    isCopyIsSet_ = true;
}

bool Job::isCopyIsSet() const
{
    return isCopyIsSet_;
}

void Job::unsetisCopy()
{
    isCopyIsSet_ = false;
}

bool Job::isIsForbidden() const
{
    return isForbidden_;
}

void Job::setIsForbidden(bool value)
{
    isForbidden_ = value;
    isForbiddenIsSet_ = true;
}

bool Job::isForbiddenIsSet() const
{
    return isForbiddenIsSet_;
}

void Job::unsetisForbidden()
{
    isForbiddenIsSet_ = false;
}

bool Job::isIsView() const
{
    return isView_;
}

void Job::setIsView(bool value)
{
    isView_ = value;
    isViewIsSet_ = true;
}

bool Job::isViewIsSet() const
{
    return isViewIsSet_;
}

void Job::unsetisView()
{
    isViewIsSet_ = false;
}

std::string Job::getLastBuildUser() const
{
    return lastBuildUser_;
}

void Job::setLastBuildUser(const std::string& value)
{
    lastBuildUser_ = value;
    lastBuildUserIsSet_ = true;
}

bool Job::lastBuildUserIsSet() const
{
    return lastBuildUserIsSet_;
}

void Job::unsetlastBuildUser()
{
    lastBuildUserIsSet_ = false;
}

std::string Job::getTriggerType() const
{
    return triggerType_;
}

void Job::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool Job::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void Job::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

int64_t Job::getBuildTime() const
{
    return buildTime_;
}

void Job::setBuildTime(int64_t value)
{
    buildTime_ = value;
    buildTimeIsSet_ = true;
}

bool Job::buildTimeIsSet() const
{
    return buildTimeIsSet_;
}

void Job::unsetbuildTime()
{
    buildTimeIsSet_ = false;
}

std::string Job::getScmWebUrl() const
{
    return scmWebUrl_;
}

void Job::setScmWebUrl(const std::string& value)
{
    scmWebUrl_ = value;
    scmWebUrlIsSet_ = true;
}

bool Job::scmWebUrlIsSet() const
{
    return scmWebUrlIsSet_;
}

void Job::unsetscmWebUrl()
{
    scmWebUrlIsSet_ = false;
}

std::string Job::getScmType() const
{
    return scmType_;
}

void Job::setScmType(const std::string& value)
{
    scmType_ = value;
    scmTypeIsSet_ = true;
}

bool Job::scmTypeIsSet() const
{
    return scmTypeIsSet_;
}

void Job::unsetscmType()
{
    scmTypeIsSet_ = false;
}

std::string Job::getRepoId() const
{
    return repoId_;
}

void Job::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool Job::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void Job::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string Job::getBuildProjectId() const
{
    return buildProjectId_;
}

void Job::setBuildProjectId(const std::string& value)
{
    buildProjectId_ = value;
    buildProjectIdIsSet_ = true;
}

bool Job::buildProjectIdIsSet() const
{
    return buildProjectIdIsSet_;
}

void Job::unsetbuildProjectId()
{
    buildProjectIdIsSet_ = false;
}

std::string Job::getLastJobRunningStatus() const
{
    return lastJobRunningStatus_;
}

void Job::setLastJobRunningStatus(const std::string& value)
{
    lastJobRunningStatus_ = value;
    lastJobRunningStatusIsSet_ = true;
}

bool Job::lastJobRunningStatusIsSet() const
{
    return lastJobRunningStatusIsSet_;
}

void Job::unsetlastJobRunningStatus()
{
    lastJobRunningStatusIsSet_ = false;
}

std::string Job::getLastBuildUserId() const
{
    return lastBuildUserId_;
}

void Job::setLastBuildUserId(const std::string& value)
{
    lastBuildUserId_ = value;
    lastBuildUserIdIsSet_ = true;
}

bool Job::lastBuildUserIdIsSet() const
{
    return lastBuildUserIdIsSet_;
}

void Job::unsetlastBuildUserId()
{
    lastBuildUserIdIsSet_ = false;
}

}
}
}
}
}


