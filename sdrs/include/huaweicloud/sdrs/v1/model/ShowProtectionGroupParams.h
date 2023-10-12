
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectionGroupParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectionGroupParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询保护组数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowProtectionGroupParams
    : public ModelBase
{
public:
    ShowProtectionGroupParams();
    virtual ~ShowProtectionGroupParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProtectionGroupParams members

    /// <summary>
    /// 保护组的ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 保护组的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 保护组的描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 保护组的状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 保护组的同步进度。单位：百分比（%）。
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 保护组创建时的生产站点可用区名称。注意：保护组切换、故障切换后，该值不变。
    /// </summary>

    std::string getSourceAvailabilityZone() const;
    bool sourceAvailabilityZoneIsSet() const;
    void unsetsourceAvailabilityZone();
    void setSourceAvailabilityZone(const std::string& value);

    /// <summary>
    /// 保护组创建时的容灾站点可用区名称。注意：保护组切换、故障切换后，该值不变。
    /// </summary>

    std::string getTargetAvailabilityZone() const;
    bool targetAvailabilityZoneIsSet() const;
    void unsettargetAvailabilityZone();
    void setTargetAvailabilityZone(const std::string& value);

    /// <summary>
    /// 双活域ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 双活域名称。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 用于标识保护组的当前生产站点。 source：表示当前生产站点可用区为source_availability_zone的值。 target：表示当前生产站点可用区为target_availability_zone的值。
    /// </summary>

    std::string getPriorityStation() const;
    bool priorityStationIsSet() const;
    void unsetpriorityStation();
    void setPriorityStation(const std::string& value);

    /// <summary>
    /// 该保护组中保护实例的个数。
    /// </summary>

    int32_t getProtectedInstanceNum() const;
    bool protectedInstanceNumIsSet() const;
    void unsetprotectedInstanceNum();
    void setProtectedInstanceNum(int32_t value);

    /// <summary>
    /// 该保护组中复制对的个数。
    /// </summary>

    int32_t getReplicationNum() const;
    bool replicationNumIsSet() const;
    void unsetreplicationNum();
    void setReplicationNum(int32_t value);

    /// <summary>
    /// 该保护组中容灾演练的个数。
    /// </summary>

    int32_t getDisasterRecoveryDrillNum() const;
    bool disasterRecoveryDrillNumIsSet() const;
    void unsetdisasterRecoveryDrillNum();
    void setDisasterRecoveryDrillNum(int32_t value);

    /// <summary>
    /// 保护状态。started：表示该保护组开始保护。stopped：表示该保护组停止保护。 说明:系统近期进行了升级，对于升级后创建的保护组，该字段值为null，无实际意义。
    /// </summary>

    std::string getProtectedStatus() const;
    bool protectedStatusIsSet() const;
    void unsetprotectedStatus();
    void setProtectedStatus(const std::string& value);

    /// <summary>
    /// 数据同步状态。 active：表示数据已同步完成。 inactive：表示数据未同步。 copying：表示数据正在同步。 active-stopped：表示数据已停止同步。  说明:系统近期进行了升级，对于升级后创建的保护组，该字段值为null，无实际意义。
    /// </summary>

    std::string getReplicationStatus() const;
    bool replicationStatusIsSet() const;
    void unsetreplicationStatus();
    void setReplicationStatus(const std::string& value);

    /// <summary>
    /// 健康状态。 normal：表示该保护组处于正常状态。 abnormal：表示该保护组处于非正常状态。  说明:系统近期进行了升级，对于升级后创建的保护组，该字段值为null，无实际意义。
    /// </summary>

    std::string getHealthStatus() const;
    bool healthStatusIsSet() const;
    void unsethealthStatus();
    void setHealthStatus(const std::string& value);

    /// <summary>
    /// 生产站点虚拟私有云ID。
    /// </summary>

    std::string getSourceVpcId() const;
    bool sourceVpcIdIsSet() const;
    void unsetsourceVpcId();
    void setSourceVpcId(const std::string& value);

    /// <summary>
    /// 容灾站点虚拟私有云ID。
    /// </summary>

    std::string getTargetVpcId() const;
    bool targetVpcIdIsSet() const;
    void unsettargetVpcId();
    void setTargetVpcId(const std::string& value);

    /// <summary>
    /// 容灾演练虚拟私有云ID。（该参数暂未使用）
    /// </summary>

    std::string getTestVpcId() const;
    bool testVpcIdIsSet() const;
    void unsettestVpcId();
    void setTestVpcId(const std::string& value);

    /// <summary>
    /// 部署模式。默认值为“migration”，migration表示VPC内迁移。
    /// </summary>

    std::string getDrType() const;
    bool drTypeIsSet() const;
    void unsetdrType();
    void setDrType(const std::string& value);

    /// <summary>
    /// 创建时间。默认格式为：\&quot;yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSSZ\&quot;，例：\&quot;2019-04-01T12:00:00.000Z\&quot;。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间。默认格式为：\&quot;yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSSZ\&quot;，例：\&quot;2019-04-01T12:00:00.000Z\&quot;。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 保护模式。 replication-pair：表示以复制对为单位进行数据同步。 null：表示将保护组中的所有复制对作为一个整体进行数据同步。  说明:当保护组中的所有复制对作为一个整体进行数据同步时，如果数据同步失败，保护组中的所有复制对都会受到影响。因此，SDRS服务对系统做了优化升级： 对于升级后创建的资源，默认以复制对为单位进行数据同步，返回值为replication-pair； 对于已有资源，仍以一个整体进行数据同步，返回值为null。
    /// </summary>

    std::string getProtectionType() const;
    bool protectionTypeIsSet() const;
    void unsetprotectionType();
    void setProtectionType(const std::string& value);

    /// <summary>
    /// 复制类型。 说明:预留参数，暂未启用。
    /// </summary>

    std::string getReplicationModel() const;
    bool replicationModelIsSet() const;
    void unsetreplicationModel();
    void setReplicationModel(const std::string& value);

    /// <summary>
    /// 管理的服务器类型 ECS：表示管理的服务器类型为云服务器。
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::string sourceAvailabilityZone_;
    bool sourceAvailabilityZoneIsSet_;
    std::string targetAvailabilityZone_;
    bool targetAvailabilityZoneIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string priorityStation_;
    bool priorityStationIsSet_;
    int32_t protectedInstanceNum_;
    bool protectedInstanceNumIsSet_;
    int32_t replicationNum_;
    bool replicationNumIsSet_;
    int32_t disasterRecoveryDrillNum_;
    bool disasterRecoveryDrillNumIsSet_;
    std::string protectedStatus_;
    bool protectedStatusIsSet_;
    std::string replicationStatus_;
    bool replicationStatusIsSet_;
    std::string healthStatus_;
    bool healthStatusIsSet_;
    std::string sourceVpcId_;
    bool sourceVpcIdIsSet_;
    std::string targetVpcId_;
    bool targetVpcIdIsSet_;
    std::string testVpcId_;
    bool testVpcIdIsSet_;
    std::string drType_;
    bool drTypeIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string protectionType_;
    bool protectionTypeIsSet_;
    std::string replicationModel_;
    bool replicationModelIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectionGroupParams_H_
