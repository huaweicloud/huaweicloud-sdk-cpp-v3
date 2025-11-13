
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectPublicationMonitorResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectPublicationMonitorResponse_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  CollectPublicationMonitorResponse
    : public ModelBase, public HttpResponse
{
public:
    CollectPublicationMonitorResponse();
    virtual ~CollectPublicationMonitorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CollectPublicationMonitorResponse members

    /// <summary>
    /// 发布关联的快照代理的运行状态。取值如下:  started:已启动。 succeeded:成功。 in_progress:正在运行。 idle:空闲。 retrying:重试中。 failed:失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据更改的最长延迟时间（以秒为单位）。
    /// </summary>

    int32_t getWorstLatency() const;
    bool worstLatencyIsSet() const;
    void unsetworstLatency();
    void setWorstLatency(int32_t value);

    /// <summary>
    /// 数据更改的最短延迟时间（以秒为单位）。
    /// </summary>

    int32_t getBestLatency() const;
    bool bestLatencyIsSet() const;
    void unsetbestLatency();
    void setBestLatency(int32_t value);

    /// <summary>
    /// 数据更改的平均延迟时间（以秒为单位）。
    /// </summary>

    int32_t getAverageLatency() const;
    bool averageLatencyIsSet() const;
    void unsetaverageLatency();
    void setAverageLatency(int32_t value);

    /// <summary>
    /// 上一次分发代理运行时间。格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getLastDistSync() const;
    bool lastDistSyncIsSet() const;
    void unsetlastDistSync();
    void setLastDistSync(const std::string& value);

    /// <summary>
    /// 等待传送到分发数据库的事务数。
    /// </summary>

    int32_t getReplicatedTransactions() const;
    bool replicatedTransactionsIsSet() const;
    void unsetreplicatedTransactions();
    void setReplicatedTransactions(int32_t value);

    /// <summary>
    /// 平均每秒传送到分发数据库的事务数。
    /// </summary>

    double getReplicationRateTrans() const;
    bool replicationRateTransIsSet() const;
    void unsetreplicationRateTrans();
    void setReplicationRateTrans(double value);


protected:
    std::string status_;
    bool statusIsSet_;
    int32_t worstLatency_;
    bool worstLatencyIsSet_;
    int32_t bestLatency_;
    bool bestLatencyIsSet_;
    int32_t averageLatency_;
    bool averageLatencyIsSet_;
    std::string lastDistSync_;
    bool lastDistSyncIsSet_;
    int32_t replicatedTransactions_;
    bool replicatedTransactionsIsSet_;
    double replicationRateTrans_;
    bool replicationRateTransIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectPublicationMonitorResponse_H_
