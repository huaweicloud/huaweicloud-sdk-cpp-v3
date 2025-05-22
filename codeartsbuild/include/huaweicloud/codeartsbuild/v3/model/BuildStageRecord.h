
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildStageRecord_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildStageRecord_H_


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
/// 构建步骤
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BuildStageRecord
    : public ModelBase
{
public:
    BuildStageRecord();
    virtual ~BuildStageRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BuildStageRecord members

    /// <summary>
    /// 步骤编号
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 步骤状态
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
    /// 日志状态
    /// </summary>

    std::string getLogStatus() const;
    bool logStatusIsSet() const;
    void unsetlogStatus();
    void setLogStatus(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 构建下发时间
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
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间
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
    /// 子任务构建耗时
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
    /// 构建记录ID
    /// </summary>

    std::string getBuildRecordId() const;
    bool buildRecordIdIsSet() const;
    void unsetbuildRecordId();
    void setBuildRecordId(const std::string& value);

    /// <summary>
    /// 八爪鱼任务ID
    /// </summary>

    std::string getExecutionId() const;
    bool executionIdIsSet() const;
    void unsetexecutionId();
    void setExecutionId(const std::string& value);

    /// <summary>
    /// 步骤名称
    /// </summary>

    std::string getExecutionStageName() const;
    bool executionStageNameIsSet() const;
    void unsetexecutionStageName();
    void setExecutionStageName(const std::string& value);

    /// <summary>
    /// 步骤名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 节点ID
    /// </summary>

    int32_t getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(int32_t value);

    /// <summary>
    /// 序号
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t statusCode_;
    bool statusCodeIsSet_;
    std::string logStatus_;
    bool logStatusIsSet_;
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
    std::string buildRecordId_;
    bool buildRecordIdIsSet_;
    std::string executionId_;
    bool executionIdIsSet_;
    std::string executionStageName_;
    bool executionStageNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    int32_t nodeId_;
    bool nodeIdIsSet_;
    int32_t sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildStageRecord_H_
