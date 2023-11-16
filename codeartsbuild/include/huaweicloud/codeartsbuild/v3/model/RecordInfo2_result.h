
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RecordInfo2_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RecordInfo2_result_H_


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
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  RecordInfo2_result
    : public ModelBase
{
public:
    RecordInfo2_result();
    virtual ~RecordInfo2_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecordInfo2_result members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 构建工程ID,唯一对应codeci_job_id
    /// </summary>

    std::string getBuildProjectId() const;
    bool buildProjectIdIsSet() const;
    void unsetbuildProjectId();
    void setBuildProjectId(const std::string& value);

    /// <summary>
    /// 构建记录ID
    /// </summary>

    std::string getBuildRecordId() const;
    bool buildRecordIdIsSet() const;
    void unsetbuildRecordId();
    void setBuildRecordId(const std::string& value);

    /// <summary>
    /// 父构建记录ID
    /// </summary>

    std::string getParentRecordId() const;
    bool parentRecordIdIsSet() const;
    void unsetparentRecordId();
    void setParentRecordId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getDevcloudProjectId() const;
    bool devcloudProjectIdIsSet() const;
    void unsetdevcloudProjectId();
    void setDevcloudProjectId(const std::string& value);

    /// <summary>
    /// codeci任务ID,唯一对应build_project_id
    /// </summary>

    std::string getCodeciJobId() const;
    bool codeciJobIdIsSet() const;
    void unsetcodeciJobId();
    void setCodeciJobId(const std::string& value);

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 构建编号
    /// </summary>

    int32_t getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(int32_t value);

    /// <summary>
    /// 每日构建编号，每日从1开始
    /// </summary>

    std::string getDailyBuildNum() const;
    bool dailyBuildNumIsSet() const;
    void unsetdailyBuildNum();
    void setDailyBuildNum(const std::string& value);

    /// <summary>
    /// 八爪鱼任务ID
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 仓库名称
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// 仓库id
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);

    /// <summary>
    /// 仓库分支
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 仓库tag
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 仓库commit ID
    /// </summary>

    std::string getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const std::string& value);

    /// <summary>
    /// 仓库commit提交信息
    /// </summary>

    std::string getCommitMessage() const;
    bool commitMessageIsSet() const;
    void unsetcommitMessage();
    void setCommitMessage(const std::string& value);

    /// <summary>
    /// commit创建时间
    /// </summary>

    std::string getCommitCreateTime() const;
    bool commitCreateTimeIsSet() const;
    void unsetcommitCreateTime();
    void setCommitCreateTime(const std::string& value);

    /// <summary>
    /// 触发类型
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

    /// <summary>
    /// 构建类型
    /// </summary>

    std::string getBuildType() const;
    bool buildTypeIsSet() const;
    void unsetbuildType();
    void setBuildType(const std::string& value);

    /// <summary>
    /// 构建状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 任务创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 构建下发耗时
    /// </summary>

    std::string getScheduleTime() const;
    bool scheduleTimeIsSet() const;
    void unsetscheduleTime();
    void setScheduleTime(const std::string& value);

    /// <summary>
    /// 构建排队耗时
    /// </summary>

    std::string getQueuedTime() const;
    bool queuedTimeIsSet() const;
    void unsetqueuedTime();
    void setQueuedTime(const std::string& value);

    /// <summary>
    /// 开始构建时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 八爪鱼真正开始构建时间
    /// </summary>

    std::string getRunnableTime() const;
    bool runnableTimeIsSet() const;
    void unsetrunnableTime();
    void setRunnableTime(const std::string& value);

    /// <summary>
    /// 构建结束时间
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// 构建时长
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// record状态
    /// </summary>

    std::string getRecordStatus() const;
    bool recordStatusIsSet() const;
    void unsetrecordStatus();
    void setRecordStatus(const std::string& value);

    /// <summary>
    /// 是否使用自定义执行机
    /// </summary>

    int32_t getUsePrivateSlave() const;
    bool usePrivateSlaveIsSet() const;
    void unsetusePrivateSlave();
    void setUsePrivateSlave(int32_t value);

    /// <summary>
    /// 租户所在region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrMsg() const;
    bool errMsgIsSet() const;
    void unseterrMsg();
    void setErrMsg(const std::string& value);

    /// <summary>
    /// 构建配置类型，YAML或ACTION
    /// </summary>

    std::string getBuildConfigType() const;
    bool buildConfigTypeIsSet() const;
    void unsetbuildConfigType();
    void setBuildConfigType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string buildProjectId_;
    bool buildProjectIdIsSet_;
    std::string buildRecordId_;
    bool buildRecordIdIsSet_;
    std::string parentRecordId_;
    bool parentRecordIdIsSet_;
    std::string devcloudProjectId_;
    bool devcloudProjectIdIsSet_;
    std::string codeciJobId_;
    bool codeciJobIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    int32_t buildNo_;
    bool buildNoIsSet_;
    std::string dailyBuildNum_;
    bool dailyBuildNumIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string commit_;
    bool commitIsSet_;
    std::string commitMessage_;
    bool commitMessageIsSet_;
    std::string commitCreateTime_;
    bool commitCreateTimeIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    std::string buildType_;
    bool buildTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string scheduleTime_;
    bool scheduleTimeIsSet_;
    std::string queuedTime_;
    bool queuedTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string runnableTime_;
    bool runnableTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string recordStatus_;
    bool recordStatusIsSet_;
    int32_t usePrivateSlave_;
    bool usePrivateSlaveIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string errMsg_;
    bool errMsgIsSet_;
    std::string buildConfigType_;
    bool buildConfigTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RecordInfo2_result_H_
