
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildRecord_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildRecord_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/BuildRecord_build_record_type.h>
#include <huaweicloud/codeartsbuild/v3/model/BuildRecord_parameters.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BuildRecord
    : public ModelBase
{
public:
    BuildRecord();
    virtual ~BuildRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BuildRecord members

    /// <summary>
    /// 唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 状态码
    /// </summary>

    int32_t getStatusCode() const;
    bool statusCodeIsSet() const;
    void unsetstatusCode();
    void setStatusCode(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 等待时间
    /// </summary>

    std::string getScheduleTime() const;
    bool scheduleTimeIsSet() const;
    void unsetscheduleTime();
    void setScheduleTime(const std::string& value);

    /// <summary>
    /// 排队时间
    /// </summary>

    std::string getQueuedTime() const;
    bool queuedTimeIsSet() const;
    void unsetqueuedTime();
    void setQueuedTime(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 完成时间
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// 持续时间
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 构建时间
    /// </summary>

    int32_t getBuildDuration() const;
    bool buildDurationIsSet() const;
    void unsetbuildDuration();
    void setBuildDuration(int32_t value);

    /// <summary>
    /// 等待时间
    /// </summary>

    int32_t getPendingDuration() const;
    bool pendingDurationIsSet() const;
    void unsetpendingDuration();
    void setPendingDuration(int32_t value);

    /// <summary>
    /// 工程ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 子任务名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 触发者名称
    /// </summary>

    std::string getTriggerName() const;
    bool triggerNameIsSet() const;
    void unsettriggerName();
    void setTriggerName(const std::string& value);

    /// <summary>
    /// 分组名
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 八爪鱼任务ID
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 构建执行参数列表
    /// </summary>

    std::vector<BuildRecord_parameters>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<BuildRecord_parameters>& value);

    /// <summary>
    /// 仓库地址
    /// </summary>

    std::string getRepository() const;
    bool repositoryIsSet() const;
    void unsetrepository();
    void setRepository(const std::string& value);

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// commitId
    /// </summary>

    std::string getRevision() const;
    bool revisionIsSet() const;
    void unsetrevision();
    void setRevision(const std::string& value);

    /// <summary>
    /// yaml路径
    /// </summary>

    std::string getBuildYmlPath() const;
    bool buildYmlPathIsSet() const;
    void unsetbuildYmlPath();
    void setBuildYmlPath(const std::string& value);

    /// <summary>
    /// yaml地址
    /// </summary>

    std::string getBuildYmlUrl() const;
    bool buildYmlUrlIsSet() const;
    void unsetbuildYmlUrl();
    void setBuildYmlUrl(const std::string& value);

    /// <summary>
    /// 构建每日编号
    /// </summary>

    std::string getDailyBuildNumber() const;
    bool dailyBuildNumberIsSet() const;
    void unsetdailyBuildNumber();
    void setDailyBuildNumber(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BuildRecord_build_record_type getBuildRecordType() const;
    bool buildRecordTypeIsSet() const;
    void unsetbuildRecordType();
    void setBuildRecordType(const BuildRecord_build_record_type& value);

    /// <summary>
    /// 触发类型
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);

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
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 构建编码
    /// </summary>

    std::string getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(const std::string& value);

    /// <summary>
    /// 构建每日编号
    /// </summary>

    std::string getDailyBuildNo() const;
    bool dailyBuildNoIsSet() const;
    void unsetdailyBuildNo();
    void setDailyBuildNo(const std::string& value);

    /// <summary>
    /// 构建类型
    /// </summary>

    std::string getDevCloudBuildType() const;
    bool devCloudBuildTypeIsSet() const;
    void unsetdevCloudBuildType();
    void setDevCloudBuildType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t statusCode_;
    bool statusCodeIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string scheduleTime_;
    bool scheduleTimeIsSet_;
    std::string queuedTime_;
    bool queuedTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    int32_t buildDuration_;
    bool buildDurationIsSet_;
    int32_t pendingDuration_;
    bool pendingDurationIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string triggerName_;
    bool triggerNameIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::vector<BuildRecord_parameters> parameters_;
    bool parametersIsSet_;
    std::string repository_;
    bool repositoryIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string revision_;
    bool revisionIsSet_;
    std::string buildYmlPath_;
    bool buildYmlPathIsSet_;
    std::string buildYmlUrl_;
    bool buildYmlUrlIsSet_;
    std::string dailyBuildNumber_;
    bool dailyBuildNumberIsSet_;
    BuildRecord_build_record_type buildRecordType_;
    bool buildRecordTypeIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;
    std::string scmType_;
    bool scmTypeIsSet_;
    std::string scmWebUrl_;
    bool scmWebUrlIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string buildNo_;
    bool buildNoIsSet_;
    std::string dailyBuildNo_;
    bool dailyBuildNoIsSet_;
    std::string devCloudBuildType_;
    bool devCloudBuildTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildRecord_H_
