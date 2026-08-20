
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Status_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Status_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/RunningRecord.h>
#include <huaweicloud/modelarts/v1/model/TaskIP.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/TaskStatuses.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业状态信息。创建作业无需填写。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Status
    : public ModelBase
{
public:
    Status();
    virtual ~Status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Status members

    /// <summary>
    /// 训练作业一级状态。可选值如下： - Creating：创建中 - Pending：等待中 - Running：运行中 - Failed：运行失败 - Completed：已完成 - Terminating：停止中 - Terminated：已停止 - Abnormal：异常
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// 训练作业二级状态为内部详细状态，可能会增加、修改、删除，不建议依赖。可选值如下： - Creating：创建中 - Queuing：排队中 - Running：运行中 - Failed：运行失败 - Completed：已完成 - Terminating：停止中 - Terminated：已停止 - CreateFailed：创建失败 - TerminatedFailed：停止失败 - Unknown：未知状态 - Lost：异常
    /// </summary>

    std::string getSecondaryPhase() const;
    bool secondaryPhaseIsSet() const;
    void unsetsecondaryPhase();
    void setSecondaryPhase(const std::string& value);

    /// <summary>
    /// 训练作业运行时长，单位为毫秒。
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);

    /// <summary>
    /// 训练作业运行时节点数变化指标。
    /// </summary>

    std::vector<std::vector<int32_t>>& getNodeCountMetrics();
    bool nodeCountMetricsIsSet() const;
    void unsetnodeCountMetrics();
    void setNodeCountMetrics(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 训练作业子任务名称。
    /// </summary>

    std::vector<std::string>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<std::string>& value);

    /// <summary>
    /// 训练作业开始时间，格式为时间戳。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 训练在子任务状态信息。
    /// </summary>

    std::vector<TaskStatuses>& getTaskStatuses();
    bool taskStatusesIsSet() const;
    void unsettaskStatuses();
    void setTaskStatuses(const std::vector<TaskStatuses>& value);

    /// <summary>
    /// 训练作业运行及故障恢复记录。
    /// </summary>

    std::vector<RunningRecord>& getRunningRecords();
    bool runningRecordsIsSet() const;
    void unsetrunningRecords();
    void setRunningRecords(const std::vector<RunningRecord>& value);

    /// <summary>
    /// **参数解释**：作业已经保留时长。  **约束限制**：仅当创建训练作业时，设置了&#x60;reserved_time&#x60;时返回。  **取值范围**：不涉及。    **默认取值**：不涉及。
    /// </summary>

    int32_t getRetentionTime() const;
    bool retentionTimeIsSet() const;
    void unsetretentionTime();
    void setRetentionTime(int32_t value);

    /// <summary>
    /// **参数解释**：训练作业各 Task 的 IP 信息。 **约束限制**：仅当查询请求携带 &#x60;host_ips&#x60; 时返回；且仅返回与筛选 IP 匹配的记录。 **取值范围**：不涉及。 **默认取值**：不传 &#x60;host_ips&#x60; 时不返回。
    /// </summary>

    std::vector<TaskIP>& getTaskIps();
    bool taskIpsIsSet() const;
    void unsettaskIps();
    void setTaskIps(const std::vector<TaskIP>& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string secondaryPhase_;
    bool secondaryPhaseIsSet_;
    int64_t duration_;
    bool durationIsSet_;
    std::vector<std::vector<int32_t>> nodeCountMetrics_;
    bool nodeCountMetricsIsSet_;
    std::vector<std::string> tasks_;
    bool tasksIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    std::vector<TaskStatuses> taskStatuses_;
    bool taskStatusesIsSet_;
    std::vector<RunningRecord> runningRecords_;
    bool runningRecordsIsSet_;
    int32_t retentionTime_;
    bool retentionTimeIsSet_;
    std::vector<TaskIP> taskIps_;
    bool taskIpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Status_H_
