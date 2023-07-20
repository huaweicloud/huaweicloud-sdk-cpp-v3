
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListTasksRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListTasksRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListTasksRequest
    : public ModelBase
{
public:
    ListTasksRequest();
    virtual ~ListTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTasksRequest members

    /// <summary>
    /// 查询开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始，Z指时区偏移量
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 查询结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”，且大于查询开始时间，时间跨度不超过30天。 其中，T指某个时间的开始，Z指时区偏移量。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 任务状态： 取值为“Running”为执行中； 取值为“Completed”为完成； 取值为“Failed” 为失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务名称。对应取值如下： - \&quot;CreateMongoDB\&quot;：创建集群实例 - \&quot;CreateMongoDBReplica\&quot;：创建副本集实例 - \&quot;CreateMongoDBReplicaSingle\&quot;：创建单节点实例 - \&quot;EnlargeMongoDBVolume\&quot;：磁盘扩容 - \&quot;ResizeMongoDBInstance\&quot;：社区版实例规格变更 - \&quot;ResizeDfvMongoDBInstance\&quot;：社区增强版实例规格变更 - \&quot;EnlargeMongoDBGroup\&quot;：添加节点 - \&quot;ReplicaSetEnlargeNode\&quot;：副本集添加备节点 - \&quot;AddReadonlyNode\&quot;：添加只读节点 - \&quot;RestartInstance\&quot;：重启集群实例 - \&quot;RestartGroup\&quot;：重启集群节点组 - \&quot;RestartNode\&quot;：重启集群节点 - \&quot;RestartReplicaSetInstance\&quot;：重启副本集实例 - \&quot;RestartReplicaSingleInstance\&quot;：重启单节点实例 - \&quot;SwitchPrimary\&quot;：主备切换 - \&quot;ModifyIp\&quot;：修改内网地址 - \&quot;ModifySecurityGroup\&quot;：修改安全组 - \&quot;ModifyPort\&quot;：修改数据库端口 - \&quot;BindPublicIP\&quot;：绑定弹性IP - \&quot;UnbindPublicIP\&quot;：解绑弹性IP - \&quot;SwitchInstanceSSL\&quot;：切换SSL - \&quot;AzMigrate\&quot;：迁移可用区 - \&quot;CreateIp\&quot;：显示shard/config IP - \&quot;ModifyOpLogSize\&quot;：修改oplog大小 - \&quot;RestoreMongoDB\&quot;：集群恢复到新实例 - \&quot;RestoreMongoDB_Replica\&quot;：副本集恢复到新实例 - \&quot;RestoreMongoDB_Replica_Single\&quot;：单节点恢复到新实例 - \&quot;RestoreMongoDB_Replica_PITR\&quot;：副本集恢复到指定时间点 - \&quot;MongodbSnapshotBackup\&quot;：创建物理备份 - \&quot;MongodbSnapshotEBackup\&quot;：创建快照备份 - \&quot;MongodbRestoreData2CurrentInstance\&quot;：备份恢复到当前实例 - \&quot;MongodbRestoreData2NewInstance\&quot;：备份恢复到新实例 - \&quot;MongodbPitr2CurrentInstance\&quot;：备份恢复到当前实例指定时间点 - \&quot;MongodbPitr2NewInstance\&quot;：备份恢复到新实例指定时间点 - \&quot;MongodbRecycleBackup\&quot;：备份回收 - \&quot;MongodbRestoreTable\&quot;：库表级时间点恢复 - \&quot;UpgradeDatabaseVersion\&quot;：升级数据库补丁
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。默认为100，不能为负数，最小值为1，最大值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTasksRequest& dereference_from_shared_ptr(std::shared_ptr<ListTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListTasksRequest_H_
