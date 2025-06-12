
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJob_result_job_list_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJob_result_job_list_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListJob_result_job_list
    : public ModelBase
{
public:
    ListJob_result_job_list();
    virtual ~ListJob_result_job_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJob_result_job_list members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 任务创建者
    /// </summary>

    std::string getJobCreator() const;
    bool jobCreatorIsSet() const;
    void unsetjobCreator();
    void setJobCreator(const std::string& value);

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 构建任务所在项目的ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 构建任务所在项目的名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 最新执行时间
    /// </summary>

    double getLastBuildTime() const;
    bool lastBuildTimeIsSet() const;
    void unsetlastBuildTime();
    void setLastBuildTime(double value);

    /// <summary>
    /// 健康分值
    /// </summary>

    int32_t getHealthScore() const;
    bool healthScoreIsSet() const;
    void unsethealthScore();
    void setHealthScore(int32_t value);

    /// <summary>
    /// 代码来源
    /// </summary>

    std::string getSourceCode() const;
    bool sourceCodeIsSet() const;
    void unsetsourceCode();
    void setSourceCode(const std::string& value);

    /// <summary>
    /// 最新构建状态
    /// </summary>

    std::string getLastBuildStatus() const;
    bool lastBuildStatusIsSet() const;
    void unsetlastBuildStatus();
    void setLastBuildStatus(const std::string& value);

    /// <summary>
    /// 最新运行状态
    /// </summary>

    std::string getLastJobRunningStatus() const;
    bool lastJobRunningStatusIsSet() const;
    void unsetlastJobRunningStatus();
    void setLastJobRunningStatus(const std::string& value);

    /// <summary>
    /// 执行用户
    /// </summary>

    std::string getLastBuildUser() const;
    bool lastBuildUserIsSet() const;
    void unsetlastBuildUser();
    void setLastBuildUser(const std::string& value);

    /// <summary>
    /// 执行用户ID
    /// </summary>

    std::string getLastBuildUserId() const;
    bool lastBuildUserIdIsSet() const;
    void unsetlastBuildUserId();
    void setLastBuildUserId(const std::string& value);

    /// <summary>
    /// 是否已结束
    /// </summary>

    bool isIsFinished() const;
    bool isFinishedIsSet() const;
    void unsetisFinished();
    void setIsFinished(bool value);

    /// <summary>
    /// 是否已禁用
    /// </summary>

    bool isDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(bool value);

    /// <summary>
    /// 是否已收藏
    /// </summary>

    bool isFavorite() const;
    bool favoriteIsSet() const;
    void unsetfavorite();
    void setFavorite(bool value);

    /// <summary>
    /// 是否有修改任务权限
    /// </summary>

    bool isIsModify() const;
    bool isModifyIsSet() const;
    void unsetisModify();
    void setIsModify(bool value);

    /// <summary>
    /// 是否有删除任务权限
    /// </summary>

    bool isIsDelete() const;
    bool isDeleteIsSet() const;
    void unsetisDelete();
    void setIsDelete(bool value);

    /// <summary>
    /// 是否有查看任务权限
    /// </summary>

    bool isIsView() const;
    bool isViewIsSet() const;
    void unsetisView();
    void setIsView(bool value);

    /// <summary>
    /// 是否有执行任务权限
    /// </summary>

    bool isIsExecute() const;
    bool isExecuteIsSet() const;
    void unsetisExecute();
    void setIsExecute(bool value);

    /// <summary>
    /// 是否有复制任务权限
    /// </summary>

    bool isIsCopy() const;
    bool isCopyIsSet() const;
    void unsetisCopy();
    void setIsCopy(bool value);

    /// <summary>
    /// 是否有禁用任务权限
    /// </summary>

    bool isIsForbidden() const;
    bool isForbiddenIsSet() const;
    void unsetisForbidden();
    void setIsForbidden(bool value);

    /// <summary>
    /// 任务记录编号
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 代码分支
    /// </summary>

    std::string getCodeBranch() const;
    bool codeBranchIsSet() const;
    void unsetcodeBranch();
    void setCodeBranch(const std::string& value);

    /// <summary>
    /// 代码提交ID
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// 触发类型
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

    /// <summary>
    /// 执行时间
    /// </summary>

    double getBuildTime() const;
    bool buildTimeIsSet() const;
    void unsetbuildTime();
    void setBuildTime(double value);

    /// <summary>
    /// 代码源地址
    /// </summary>

    std::string getScmWebUrl() const;
    bool scmWebUrlIsSet() const;
    void unsetscmWebUrl();
    void setScmWebUrl(const std::string& value);

    /// <summary>
    /// 仓库类别，Repo、Github等
    /// </summary>

    std::string getScmType() const;
    bool scmTypeIsSet() const;
    void unsetscmType();
    void setScmType(const std::string& value);

    /// <summary>
    /// repo的id
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);

    /// <summary>
    /// 代码提交记录信息地址（代码源为Repo)
    /// </summary>

    std::string getCommitDetailUrl() const;
    bool commitDetailUrlIsSet() const;
    void unsetcommitDetailUrl();
    void setCommitDetailUrl(const std::string& value);

    /// <summary>
    /// 构建编号
    /// </summary>

    std::string getBuildNumber() const;
    bool buildNumberIsSet() const;
    void unsetbuildNumber();
    void setBuildNumber(const std::string& value);

    /// <summary>
    /// 禁用消息
    /// </summary>

    std::string getForbiddenMsg() const;
    bool forbiddenMsgIsSet() const;
    void unsetforbiddenMsg();
    void setForbiddenMsg(const std::string& value);

    /// <summary>
    /// 构建工程ID,唯一对应codeci_job_id
    /// </summary>

    std::string getBuildProjectId() const;
    bool buildProjectIdIsSet() const;
    void unsetbuildProjectId();
    void setBuildProjectId(const std::string& value);

    /// <summary>
    /// 构建类别
    /// </summary>

    std::string getBuildType() const;
    bool buildTypeIsSet() const;
    void unsetbuildType();
    void setBuildType(const std::string& value);

    /// <summary>
    /// 仓库tag
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 使用项目权限
    /// </summary>

    bool isProjectPermissionSwitch() const;
    bool projectPermissionSwitchIsSet() const;
    void unsetprojectPermissionSwitch();
    void setProjectPermissionSwitch(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string jobCreator_;
    bool jobCreatorIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    double lastBuildTime_;
    bool lastBuildTimeIsSet_;
    int32_t healthScore_;
    bool healthScoreIsSet_;
    std::string sourceCode_;
    bool sourceCodeIsSet_;
    std::string lastBuildStatus_;
    bool lastBuildStatusIsSet_;
    std::string lastJobRunningStatus_;
    bool lastJobRunningStatusIsSet_;
    std::string lastBuildUser_;
    bool lastBuildUserIsSet_;
    std::string lastBuildUserId_;
    bool lastBuildUserIdIsSet_;
    bool isFinished_;
    bool isFinishedIsSet_;
    bool disabled_;
    bool disabledIsSet_;
    bool favorite_;
    bool favoriteIsSet_;
    bool isModify_;
    bool isModifyIsSet_;
    bool isDelete_;
    bool isDeleteIsSet_;
    bool isView_;
    bool isViewIsSet_;
    bool isExecute_;
    bool isExecuteIsSet_;
    bool isCopy_;
    bool isCopyIsSet_;
    bool isForbidden_;
    bool isForbiddenIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string codeBranch_;
    bool codeBranchIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    double buildTime_;
    bool buildTimeIsSet_;
    std::string scmWebUrl_;
    bool scmWebUrlIsSet_;
    std::string scmType_;
    bool scmTypeIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;
    std::string commitDetailUrl_;
    bool commitDetailUrlIsSet_;
    std::string buildNumber_;
    bool buildNumberIsSet_;
    std::string forbiddenMsg_;
    bool forbiddenMsgIsSet_;
    std::string buildProjectId_;
    bool buildProjectIdIsSet_;
    std::string buildType_;
    bool buildTypeIsSet_;
    std::string tag_;
    bool tagIsSet_;
    bool projectPermissionSwitch_;
    bool projectPermissionSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJob_result_job_list_H_
