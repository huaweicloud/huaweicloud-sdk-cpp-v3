
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectSubscriptionMonitorResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectSubscriptionMonitorResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CollectSubscriptionMonitorResponse
    : public ModelBase, public HttpResponse
{
public:
    CollectSubscriptionMonitorResponse();
    virtual ~CollectSubscriptionMonitorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CollectSubscriptionMonitorResponse members

    /// <summary>
    /// 订阅关联的快照代理的运行状态。取值如下:  started:已启动。 succeeded:成功。 in_progress:正在运行。 idle:空闲。 retrying:重试中。 failed:失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据更改的最长延迟时间（以秒为单位）。
    /// </summary>

    int32_t getLatency() const;
    bool latencyIsSet() const;
    void unsetlatency();
    void setLatency(int32_t value);

    /// <summary>
    /// 上一次分发代理运行时间。格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getLastDistSync() const;
    bool lastDistSyncIsSet() const;
    void unsetlastDistSync();
    void setLastDistSync(const std::string& value);

    /// <summary>
    /// 代理未运行的时长（以小时为单位）。
    /// </summary>

    int32_t getAgentNotRunning() const;
    bool agentNotRunningIsSet() const;
    void unsetagentNotRunning();
    void setAgentNotRunning(int32_t value);

    /// <summary>
    /// 订阅未执行的命令数。
    /// </summary>

    int32_t getPendingCmdCount() const;
    bool pendingCmdCountIsSet() const;
    void unsetpendingCmdCount();
    void setPendingCmdCount(int32_t value);

    /// <summary>
    /// 预计执行完未执行的命令数所需时间（以秒为单位）。
    /// </summary>

    int32_t getEstimatedProcessTime() const;
    bool estimatedProcessTimeIsSet() const;
    void unsetestimatedProcessTime();
    void setEstimatedProcessTime(int32_t value);


protected:
    std::string status_;
    bool statusIsSet_;
    int32_t latency_;
    bool latencyIsSet_;
    std::string lastDistSync_;
    bool lastDistSyncIsSet_;
    int32_t agentNotRunning_;
    bool agentNotRunningIsSet_;
    int32_t pendingCmdCount_;
    bool pendingCmdCountIsSet_;
    int32_t estimatedProcessTime_;
    bool estimatedProcessTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectSubscriptionMonitorResponse_H_
