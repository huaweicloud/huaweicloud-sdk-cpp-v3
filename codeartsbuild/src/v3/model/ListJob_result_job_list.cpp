

#include "huaweicloud/codeartsbuild/v3/model/ListJob_result_job_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListJob_result_job_list::ListJob_result_job_list()
{
    id_ = "";
    idIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobCreator_ = "";
    jobCreatorIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    lastBuildTime_ = 0.0;
    lastBuildTimeIsSet_ = false;
    healthScore_ = 0;
    healthScoreIsSet_ = false;
    sourceCode_ = "";
    sourceCodeIsSet_ = false;
    lastBuildStatus_ = "";
    lastBuildStatusIsSet_ = false;
    lastJobRunningStatus_ = "";
    lastJobRunningStatusIsSet_ = false;
    lastBuildUser_ = "";
    lastBuildUserIsSet_ = false;
    lastBuildUserId_ = "";
    lastBuildUserIdIsSet_ = false;
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
    isView_ = false;
    isViewIsSet_ = false;
    isExecute_ = false;
    isExecuteIsSet_ = false;
    isCopy_ = false;
    isCopyIsSet_ = false;
    isForbidden_ = false;
    isForbiddenIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    codeBranch_ = "";
    codeBranchIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    triggerType_ = "";
    triggerTypeIsSet_ = false;
    buildTime_ = 0.0;
    buildTimeIsSet_ = false;
    scmWebUrl_ = "";
    scmWebUrlIsSet_ = false;
    scmType_ = "";
    scmTypeIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    commitDetailUrl_ = "";
    commitDetailUrlIsSet_ = false;
    buildNumber_ = "";
    buildNumberIsSet_ = false;
    forbiddenMsg_ = "";
    forbiddenMsgIsSet_ = false;
    buildProjectId_ = "";
    buildProjectIdIsSet_ = false;
    buildType_ = "";
    buildTypeIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    projectPermissionSwitch_ = false;
    projectPermissionSwitchIsSet_ = false;
}

ListJob_result_job_list::~ListJob_result_job_list() = default;

void ListJob_result_job_list::validate()
{
}

web::json::value ListJob_result_job_list::toJson() const
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
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
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
    if(lastJobRunningStatusIsSet_) {
        val[utility::conversions::to_string_t("last_job_running_status")] = ModelBase::toJson(lastJobRunningStatus_);
    }
    if(lastBuildUserIsSet_) {
        val[utility::conversions::to_string_t("last_build_user")] = ModelBase::toJson(lastBuildUser_);
    }
    if(lastBuildUserIdIsSet_) {
        val[utility::conversions::to_string_t("last_build_user_id")] = ModelBase::toJson(lastBuildUserId_);
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
    if(isViewIsSet_) {
        val[utility::conversions::to_string_t("is_view")] = ModelBase::toJson(isView_);
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
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(codeBranchIsSet_) {
        val[utility::conversions::to_string_t("code_branch")] = ModelBase::toJson(codeBranch_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
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
    if(commitDetailUrlIsSet_) {
        val[utility::conversions::to_string_t("commit_detail_url")] = ModelBase::toJson(commitDetailUrl_);
    }
    if(buildNumberIsSet_) {
        val[utility::conversions::to_string_t("build_number")] = ModelBase::toJson(buildNumber_);
    }
    if(forbiddenMsgIsSet_) {
        val[utility::conversions::to_string_t("forbidden_msg")] = ModelBase::toJson(forbiddenMsg_);
    }
    if(buildProjectIdIsSet_) {
        val[utility::conversions::to_string_t("build_project_id")] = ModelBase::toJson(buildProjectId_);
    }
    if(buildTypeIsSet_) {
        val[utility::conversions::to_string_t("build_type")] = ModelBase::toJson(buildType_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(projectPermissionSwitchIsSet_) {
        val[utility::conversions::to_string_t("project_permission_switch")] = ModelBase::toJson(projectPermissionSwitch_);
    }

    return val;
}
bool ListJob_result_job_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_job_running_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_job_running_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastJobRunningStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_build_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_build_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastBuildUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsView(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
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
            double refVal;
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
    if(val.has_field(utility::conversions::to_string_t("commit_detail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_detail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitDetailUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forbidden_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenMsg(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("build_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
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
    return ok;
}


std::string ListJob_result_job_list::getId() const
{
    return id_;
}

void ListJob_result_job_list::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListJob_result_job_list::idIsSet() const
{
    return idIsSet_;
}

void ListJob_result_job_list::unsetid()
{
    idIsSet_ = false;
}

std::string ListJob_result_job_list::getJobName() const
{
    return jobName_;
}

void ListJob_result_job_list::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ListJob_result_job_list::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ListJob_result_job_list::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ListJob_result_job_list::getJobCreator() const
{
    return jobCreator_;
}

void ListJob_result_job_list::setJobCreator(const std::string& value)
{
    jobCreator_ = value;
    jobCreatorIsSet_ = true;
}

bool ListJob_result_job_list::jobCreatorIsSet() const
{
    return jobCreatorIsSet_;
}

void ListJob_result_job_list::unsetjobCreator()
{
    jobCreatorIsSet_ = false;
}

std::string ListJob_result_job_list::getUserId() const
{
    return userId_;
}

void ListJob_result_job_list::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ListJob_result_job_list::userIdIsSet() const
{
    return userIdIsSet_;
}

void ListJob_result_job_list::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ListJob_result_job_list::getUserName() const
{
    return userName_;
}

void ListJob_result_job_list::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListJob_result_job_list::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListJob_result_job_list::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ListJob_result_job_list::getNickName() const
{
    return nickName_;
}

void ListJob_result_job_list::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ListJob_result_job_list::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ListJob_result_job_list::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string ListJob_result_job_list::getProjectId() const
{
    return projectId_;
}

void ListJob_result_job_list::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListJob_result_job_list::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListJob_result_job_list::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListJob_result_job_list::getProjectName() const
{
    return projectName_;
}

void ListJob_result_job_list::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ListJob_result_job_list::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ListJob_result_job_list::unsetprojectName()
{
    projectNameIsSet_ = false;
}

double ListJob_result_job_list::getLastBuildTime() const
{
    return lastBuildTime_;
}

void ListJob_result_job_list::setLastBuildTime(double value)
{
    lastBuildTime_ = value;
    lastBuildTimeIsSet_ = true;
}

bool ListJob_result_job_list::lastBuildTimeIsSet() const
{
    return lastBuildTimeIsSet_;
}

void ListJob_result_job_list::unsetlastBuildTime()
{
    lastBuildTimeIsSet_ = false;
}

int32_t ListJob_result_job_list::getHealthScore() const
{
    return healthScore_;
}

void ListJob_result_job_list::setHealthScore(int32_t value)
{
    healthScore_ = value;
    healthScoreIsSet_ = true;
}

bool ListJob_result_job_list::healthScoreIsSet() const
{
    return healthScoreIsSet_;
}

void ListJob_result_job_list::unsethealthScore()
{
    healthScoreIsSet_ = false;
}

std::string ListJob_result_job_list::getSourceCode() const
{
    return sourceCode_;
}

void ListJob_result_job_list::setSourceCode(const std::string& value)
{
    sourceCode_ = value;
    sourceCodeIsSet_ = true;
}

bool ListJob_result_job_list::sourceCodeIsSet() const
{
    return sourceCodeIsSet_;
}

void ListJob_result_job_list::unsetsourceCode()
{
    sourceCodeIsSet_ = false;
}

std::string ListJob_result_job_list::getLastBuildStatus() const
{
    return lastBuildStatus_;
}

void ListJob_result_job_list::setLastBuildStatus(const std::string& value)
{
    lastBuildStatus_ = value;
    lastBuildStatusIsSet_ = true;
}

bool ListJob_result_job_list::lastBuildStatusIsSet() const
{
    return lastBuildStatusIsSet_;
}

void ListJob_result_job_list::unsetlastBuildStatus()
{
    lastBuildStatusIsSet_ = false;
}

std::string ListJob_result_job_list::getLastJobRunningStatus() const
{
    return lastJobRunningStatus_;
}

void ListJob_result_job_list::setLastJobRunningStatus(const std::string& value)
{
    lastJobRunningStatus_ = value;
    lastJobRunningStatusIsSet_ = true;
}

bool ListJob_result_job_list::lastJobRunningStatusIsSet() const
{
    return lastJobRunningStatusIsSet_;
}

void ListJob_result_job_list::unsetlastJobRunningStatus()
{
    lastJobRunningStatusIsSet_ = false;
}

std::string ListJob_result_job_list::getLastBuildUser() const
{
    return lastBuildUser_;
}

void ListJob_result_job_list::setLastBuildUser(const std::string& value)
{
    lastBuildUser_ = value;
    lastBuildUserIsSet_ = true;
}

bool ListJob_result_job_list::lastBuildUserIsSet() const
{
    return lastBuildUserIsSet_;
}

void ListJob_result_job_list::unsetlastBuildUser()
{
    lastBuildUserIsSet_ = false;
}

std::string ListJob_result_job_list::getLastBuildUserId() const
{
    return lastBuildUserId_;
}

void ListJob_result_job_list::setLastBuildUserId(const std::string& value)
{
    lastBuildUserId_ = value;
    lastBuildUserIdIsSet_ = true;
}

bool ListJob_result_job_list::lastBuildUserIdIsSet() const
{
    return lastBuildUserIdIsSet_;
}

void ListJob_result_job_list::unsetlastBuildUserId()
{
    lastBuildUserIdIsSet_ = false;
}

bool ListJob_result_job_list::isIsFinished() const
{
    return isFinished_;
}

void ListJob_result_job_list::setIsFinished(bool value)
{
    isFinished_ = value;
    isFinishedIsSet_ = true;
}

bool ListJob_result_job_list::isFinishedIsSet() const
{
    return isFinishedIsSet_;
}

void ListJob_result_job_list::unsetisFinished()
{
    isFinishedIsSet_ = false;
}

bool ListJob_result_job_list::isDisabled() const
{
    return disabled_;
}

void ListJob_result_job_list::setDisabled(bool value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool ListJob_result_job_list::disabledIsSet() const
{
    return disabledIsSet_;
}

void ListJob_result_job_list::unsetdisabled()
{
    disabledIsSet_ = false;
}

bool ListJob_result_job_list::isFavorite() const
{
    return favorite_;
}

void ListJob_result_job_list::setFavorite(bool value)
{
    favorite_ = value;
    favoriteIsSet_ = true;
}

bool ListJob_result_job_list::favoriteIsSet() const
{
    return favoriteIsSet_;
}

void ListJob_result_job_list::unsetfavorite()
{
    favoriteIsSet_ = false;
}

bool ListJob_result_job_list::isIsModify() const
{
    return isModify_;
}

void ListJob_result_job_list::setIsModify(bool value)
{
    isModify_ = value;
    isModifyIsSet_ = true;
}

bool ListJob_result_job_list::isModifyIsSet() const
{
    return isModifyIsSet_;
}

void ListJob_result_job_list::unsetisModify()
{
    isModifyIsSet_ = false;
}

bool ListJob_result_job_list::isIsDelete() const
{
    return isDelete_;
}

void ListJob_result_job_list::setIsDelete(bool value)
{
    isDelete_ = value;
    isDeleteIsSet_ = true;
}

bool ListJob_result_job_list::isDeleteIsSet() const
{
    return isDeleteIsSet_;
}

void ListJob_result_job_list::unsetisDelete()
{
    isDeleteIsSet_ = false;
}

bool ListJob_result_job_list::isIsView() const
{
    return isView_;
}

void ListJob_result_job_list::setIsView(bool value)
{
    isView_ = value;
    isViewIsSet_ = true;
}

bool ListJob_result_job_list::isViewIsSet() const
{
    return isViewIsSet_;
}

void ListJob_result_job_list::unsetisView()
{
    isViewIsSet_ = false;
}

bool ListJob_result_job_list::isIsExecute() const
{
    return isExecute_;
}

void ListJob_result_job_list::setIsExecute(bool value)
{
    isExecute_ = value;
    isExecuteIsSet_ = true;
}

bool ListJob_result_job_list::isExecuteIsSet() const
{
    return isExecuteIsSet_;
}

void ListJob_result_job_list::unsetisExecute()
{
    isExecuteIsSet_ = false;
}

bool ListJob_result_job_list::isIsCopy() const
{
    return isCopy_;
}

void ListJob_result_job_list::setIsCopy(bool value)
{
    isCopy_ = value;
    isCopyIsSet_ = true;
}

bool ListJob_result_job_list::isCopyIsSet() const
{
    return isCopyIsSet_;
}

void ListJob_result_job_list::unsetisCopy()
{
    isCopyIsSet_ = false;
}

bool ListJob_result_job_list::isIsForbidden() const
{
    return isForbidden_;
}

void ListJob_result_job_list::setIsForbidden(bool value)
{
    isForbidden_ = value;
    isForbiddenIsSet_ = true;
}

bool ListJob_result_job_list::isForbiddenIsSet() const
{
    return isForbiddenIsSet_;
}

void ListJob_result_job_list::unsetisForbidden()
{
    isForbiddenIsSet_ = false;
}

std::string ListJob_result_job_list::getTaskId() const
{
    return taskId_;
}

void ListJob_result_job_list::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListJob_result_job_list::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListJob_result_job_list::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListJob_result_job_list::getCodeBranch() const
{
    return codeBranch_;
}

void ListJob_result_job_list::setCodeBranch(const std::string& value)
{
    codeBranch_ = value;
    codeBranchIsSet_ = true;
}

bool ListJob_result_job_list::codeBranchIsSet() const
{
    return codeBranchIsSet_;
}

void ListJob_result_job_list::unsetcodeBranch()
{
    codeBranchIsSet_ = false;
}

std::string ListJob_result_job_list::getCommitId() const
{
    return commitId_;
}

void ListJob_result_job_list::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ListJob_result_job_list::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ListJob_result_job_list::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string ListJob_result_job_list::getTriggerType() const
{
    return triggerType_;
}

void ListJob_result_job_list::setTriggerType(const std::string& value)
{
    triggerType_ = value;
    triggerTypeIsSet_ = true;
}

bool ListJob_result_job_list::triggerTypeIsSet() const
{
    return triggerTypeIsSet_;
}

void ListJob_result_job_list::unsettriggerType()
{
    triggerTypeIsSet_ = false;
}

double ListJob_result_job_list::getBuildTime() const
{
    return buildTime_;
}

void ListJob_result_job_list::setBuildTime(double value)
{
    buildTime_ = value;
    buildTimeIsSet_ = true;
}

bool ListJob_result_job_list::buildTimeIsSet() const
{
    return buildTimeIsSet_;
}

void ListJob_result_job_list::unsetbuildTime()
{
    buildTimeIsSet_ = false;
}

std::string ListJob_result_job_list::getScmWebUrl() const
{
    return scmWebUrl_;
}

void ListJob_result_job_list::setScmWebUrl(const std::string& value)
{
    scmWebUrl_ = value;
    scmWebUrlIsSet_ = true;
}

bool ListJob_result_job_list::scmWebUrlIsSet() const
{
    return scmWebUrlIsSet_;
}

void ListJob_result_job_list::unsetscmWebUrl()
{
    scmWebUrlIsSet_ = false;
}

std::string ListJob_result_job_list::getScmType() const
{
    return scmType_;
}

void ListJob_result_job_list::setScmType(const std::string& value)
{
    scmType_ = value;
    scmTypeIsSet_ = true;
}

bool ListJob_result_job_list::scmTypeIsSet() const
{
    return scmTypeIsSet_;
}

void ListJob_result_job_list::unsetscmType()
{
    scmTypeIsSet_ = false;
}

std::string ListJob_result_job_list::getRepoId() const
{
    return repoId_;
}

void ListJob_result_job_list::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool ListJob_result_job_list::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void ListJob_result_job_list::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string ListJob_result_job_list::getCommitDetailUrl() const
{
    return commitDetailUrl_;
}

void ListJob_result_job_list::setCommitDetailUrl(const std::string& value)
{
    commitDetailUrl_ = value;
    commitDetailUrlIsSet_ = true;
}

bool ListJob_result_job_list::commitDetailUrlIsSet() const
{
    return commitDetailUrlIsSet_;
}

void ListJob_result_job_list::unsetcommitDetailUrl()
{
    commitDetailUrlIsSet_ = false;
}

std::string ListJob_result_job_list::getBuildNumber() const
{
    return buildNumber_;
}

void ListJob_result_job_list::setBuildNumber(const std::string& value)
{
    buildNumber_ = value;
    buildNumberIsSet_ = true;
}

bool ListJob_result_job_list::buildNumberIsSet() const
{
    return buildNumberIsSet_;
}

void ListJob_result_job_list::unsetbuildNumber()
{
    buildNumberIsSet_ = false;
}

std::string ListJob_result_job_list::getForbiddenMsg() const
{
    return forbiddenMsg_;
}

void ListJob_result_job_list::setForbiddenMsg(const std::string& value)
{
    forbiddenMsg_ = value;
    forbiddenMsgIsSet_ = true;
}

bool ListJob_result_job_list::forbiddenMsgIsSet() const
{
    return forbiddenMsgIsSet_;
}

void ListJob_result_job_list::unsetforbiddenMsg()
{
    forbiddenMsgIsSet_ = false;
}

std::string ListJob_result_job_list::getBuildProjectId() const
{
    return buildProjectId_;
}

void ListJob_result_job_list::setBuildProjectId(const std::string& value)
{
    buildProjectId_ = value;
    buildProjectIdIsSet_ = true;
}

bool ListJob_result_job_list::buildProjectIdIsSet() const
{
    return buildProjectIdIsSet_;
}

void ListJob_result_job_list::unsetbuildProjectId()
{
    buildProjectIdIsSet_ = false;
}

std::string ListJob_result_job_list::getBuildType() const
{
    return buildType_;
}

void ListJob_result_job_list::setBuildType(const std::string& value)
{
    buildType_ = value;
    buildTypeIsSet_ = true;
}

bool ListJob_result_job_list::buildTypeIsSet() const
{
    return buildTypeIsSet_;
}

void ListJob_result_job_list::unsetbuildType()
{
    buildTypeIsSet_ = false;
}

std::string ListJob_result_job_list::getTag() const
{
    return tag_;
}

void ListJob_result_job_list::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListJob_result_job_list::tagIsSet() const
{
    return tagIsSet_;
}

void ListJob_result_job_list::unsettag()
{
    tagIsSet_ = false;
}

bool ListJob_result_job_list::isProjectPermissionSwitch() const
{
    return projectPermissionSwitch_;
}

void ListJob_result_job_list::setProjectPermissionSwitch(bool value)
{
    projectPermissionSwitch_ = value;
    projectPermissionSwitchIsSet_ = true;
}

bool ListJob_result_job_list::projectPermissionSwitchIsSet() const
{
    return projectPermissionSwitchIsSet_;
}

void ListJob_result_job_list::unsetprojectPermissionSwitch()
{
    projectPermissionSwitchIsSet_ = false;
}

}
}
}
}
}


