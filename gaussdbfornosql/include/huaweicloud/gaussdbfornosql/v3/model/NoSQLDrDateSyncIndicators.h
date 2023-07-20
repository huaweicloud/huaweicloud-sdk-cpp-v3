
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSQLDrDateSyncIndicators_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSQLDrDateSyncIndicators_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 双活实例rsync同步状态指标值
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  NoSQLDrDateSyncIndicators
    : public ModelBase
{
public:
    NoSQLDrDateSyncIndicators();
    virtual ~NoSQLDrDateSyncIndicators();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NoSQLDrDateSyncIndicators members

    /// <summary>
    /// 节点内同步命令的执行速率,每秒多少条数据；
    /// </summary>

    int64_t getRsyncOps() const;
    bool rsyncOpsIsSet() const;
    void unsetrsyncOps();
    void setRsyncOps(int64_t value);

    /// <summary>
    /// 节点内的同步WAL堆积大小,单位MB；
    /// </summary>

    int64_t getRsyncWalSize() const;
    bool rsyncWalSizeIsSet() const;
    void unsetrsyncWalSize();
    void setRsyncWalSize(int64_t value);

    /// <summary>
    /// 同步消息从放入消息队列，直到收到对端响应的平均耗时，单位us；
    /// </summary>

    int64_t getRsyncPushCost() const;
    bool rsyncPushCostIsSet() const;
    void unsetrsyncPushCost();
    void setRsyncPushCost(int64_t value);

    /// <summary>
    /// 同步消息从消息队列取出，直到收到对端响应的平均耗时，单位us；
    /// </summary>

    int64_t getRsyncSendCost() const;
    bool rsyncSendCostIsSet() const;
    void unsetrsyncSendCost();
    void setRsyncSendCost(int64_t value);

    /// <summary>
    /// 采集周期内rsync的同步推送耗时最大值，单位us;
    /// </summary>

    int64_t getRsyncMaxPushCost() const;
    bool rsyncMaxPushCostIsSet() const;
    void unsetrsyncMaxPushCost();
    void setRsyncMaxPushCost(int64_t value);

    /// <summary>
    /// 采集周期内rsync的同步发送耗时最大值，单位us;
    /// </summary>

    int64_t getRsyncMaxSendCost() const;
    bool rsyncMaxSendCostIsSet() const;
    void unsetrsyncMaxSendCost();
    void setRsyncMaxSendCost(int64_t value);

    /// <summary>
    /// rsync的同步状态，1表示正在同步，0表示没有同步;
    /// </summary>

    int32_t getRsyncStatus() const;
    bool rsyncStatusIsSet() const;
    void unsetrsyncStatus();
    void setRsyncStatus(int32_t value);


protected:
    int64_t rsyncOps_;
    bool rsyncOpsIsSet_;
    int64_t rsyncWalSize_;
    bool rsyncWalSizeIsSet_;
    int64_t rsyncPushCost_;
    bool rsyncPushCostIsSet_;
    int64_t rsyncSendCost_;
    bool rsyncSendCostIsSet_;
    int64_t rsyncMaxPushCost_;
    bool rsyncMaxPushCostIsSet_;
    int64_t rsyncMaxSendCost_;
    bool rsyncMaxSendCostIsSet_;
    int32_t rsyncStatus_;
    bool rsyncStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSQLDrDateSyncIndicators_H_
