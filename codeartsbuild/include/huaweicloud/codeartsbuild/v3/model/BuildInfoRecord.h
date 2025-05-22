
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildInfoRecord_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildInfoRecord_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/BuildInfoRecord_commit_info.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 构建历史详情
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BuildInfoRecord
    : public ModelBase
{
public:
    BuildInfoRecord();
    virtual ~BuildInfoRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BuildInfoRecord members

    /// <summary>
    /// 构建编号
    /// </summary>

    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(int32_t value);

    /// <summary>
    /// 执行时间
    /// </summary>

    int32_t getBuildTime() const;
    bool buildTimeIsSet() const;
    void unsetbuildTime();
    void setBuildTime(int32_t value);

    /// <summary>
    /// 开始时间，时间戳
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 运行状态
    /// </summary>

    std::string getJobRunningStatus() const;
    bool jobRunningStatusIsSet() const;
    void unsetjobRunningStatus();
    void setJobRunningStatus(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// IAM用户ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 触发构建用户
    /// </summary>

    std::string getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const std::string& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getNickname() const;
    bool nicknameIsSet() const;
    void unsetnickname();
    void setNickname(const std::string& value);

    /// <summary>
    /// 构建编号，每日从1开始
    /// </summary>

    std::string getDailyBuildNumber() const;
    bool dailyBuildNumberIsSet() const;
    void unsetdailyBuildNumber();
    void setDailyBuildNumber(const std::string& value);

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

    int32_t getCostTime() const;
    bool costTimeIsSet() const;
    void unsetcostTime();
    void setCostTime(int32_t value);

    /// <summary>
    /// 代码提交的commit id
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BuildInfoRecord_commit_info getCommitInfo() const;
    bool commitInfoIsSet() const;
    void unsetcommitInfo();
    void setCommitInfo(const BuildInfoRecord_commit_info& value);

    /// <summary>
    /// 构建类型
    /// </summary>

    std::string getBuildType() const;
    bool buildTypeIsSet() const;
    void unsetbuildType();
    void setBuildType(const std::string& value);

    /// <summary>
    /// 代码仓分支
    /// </summary>

    std::string getCodeBranch() const;
    bool codeBranchIsSet() const;
    void unsetcodeBranch();
    void setCodeBranch(const std::string& value);

    /// <summary>
    /// 代码源类型
    /// </summary>

    std::string getScmType() const;
    bool scmTypeIsSet() const;
    void unsetscmType();
    void setScmType(const std::string& value);

    /// <summary>
    /// 代码源地址
    /// </summary>

    std::string getScmWebUrl() const;
    bool scmWebUrlIsSet() const;
    void unsetscmWebUrl();
    void setScmWebUrl(const std::string& value);

    /// <summary>
    /// 代码提交记录信息地址（代码源为Repo)
    /// </summary>

    std::string getCommitDetailUrl() const;
    bool commitDetailUrlIsSet() const;
    void unsetcommitDetailUrl();
    void setCommitDetailUrl(const std::string& value);


protected:
    int32_t number_;
    bool numberIsSet_;
    int32_t buildTime_;
    bool buildTimeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    std::string jobRunningStatus_;
    bool jobRunningStatusIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string executor_;
    bool executorIsSet_;
    std::string nickname_;
    bool nicknameIsSet_;
    std::string dailyBuildNumber_;
    bool dailyBuildNumberIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    int32_t costTime_;
    bool costTimeIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    BuildInfoRecord_commit_info commitInfo_;
    bool commitInfoIsSet_;
    std::string buildType_;
    bool buildTypeIsSet_;
    std::string codeBranch_;
    bool codeBranchIsSet_;
    std::string scmType_;
    bool scmTypeIsSet_;
    std::string scmWebUrl_;
    bool scmWebUrlIsSet_;
    std::string commitDetailUrl_;
    bool commitDetailUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildInfoRecord_H_
