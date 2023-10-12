
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/BackupStrategyForResponse.h>
#include <huaweicloud/rds/v3/model/TagResponse.h>
#include <huaweicloud/rds/v3/model/Volume.h>
#include <huaweicloud/rds/v3/model/RelatedInstance.h>
#include <string>
#include <huaweicloud/rds/v3/model/NodeResponse.h>
#include <huaweicloud/rds/v3/model/HaResponse.h>
#include <huaweicloud/rds/v3/model/Datastore.h>
#include <vector>
#include <huaweicloud/rds/v3/model/ChargeInfoResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  InstanceResponse
    : public ModelBase
{
public:
    InstanceResponse();
    virtual ~InstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceResponse members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例状态。 - 值为“BUILD”，表示实例正在创建。 - 值为“ACTIVE”，表示实例正常。 - 值为“FAILED”，表示实例异常。 - 值为“FROZEN”，表示实例冻结。 - 值为“MODIFYING”，表示实例正在扩容。 - 值为“REBOOTING”，表示实例正在重启。 - 值为“RESTORING”，表示实例正在恢复。 - 值为“MODIFYING INSTANCE TYPE”，表示实例正在转主备。 - 值为“SWITCHOVER”，表示实例正在主备切换。 - 值为“MIGRATING”，表示实例正在迁移。 - 值为“BACKING UP”，表示实例正在进行备份。 - 值为“MODIFYING DATABASE PORT”，表示实例正在修改数据库端口。 - 值为“STORAGE FULL”，表示实例磁盘空间满。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例是否开启SSL，取值为\&quot;true\&quot;表示实例开启了SSL，取值为\&quot;false\&quot;表示实例未开启SSL。
    /// </summary>

    bool isEnableSsl() const;
    bool enableSslIsSet() const;
    void unsetenableSsl();
    void setEnableSsl(bool value);

    /// <summary>
    /// 实例内网IP地址列表。弹性云服务器创建成功后该值存在，其他情况下为空字符串。
    /// </summary>

    std::vector<std::string>& getPrivateIps();
    bool privateIpsIsSet() const;
    void unsetprivateIps();
    void setPrivateIps(const std::vector<std::string>& value);

    /// <summary>
    /// 内网域名列表
    /// </summary>

    std::vector<std::string>& getPrivateDnsNames();
    bool privateDnsNamesIsSet() const;
    void unsetprivateDnsNames();
    void setPrivateDnsNames(const std::vector<std::string>& value);

    /// <summary>
    /// 公网域名列表
    /// </summary>

    std::vector<std::string>& getPublicDnsNames();
    bool publicDnsNamesIsSet() const;
    void unsetpublicDnsNames();
    void setPublicDnsNames(const std::vector<std::string>& value);

    /// <summary>
    /// 实例外网IP地址列表。
    /// </summary>

    std::vector<std::string>& getPublicIps();
    bool publicIpsIsSet() const;
    void unsetpublicIps();
    void setPublicIps(const std::vector<std::string>& value);

    /// <summary>
    /// 实例类型，取值为“Single”，“Ha”或“Replica”，分别对应于单机实例、主备实例、只读实例。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 创建时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。  说明：创建时返回值为空，数据库实例创建成功后该值不为空。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 更新时间，格式与“created”字段对应格式完全相同。  说明：创建时返回值为空，数据库实例创建成功后该值不为空。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 默认用户名。
    /// </summary>

    std::string getDbUserName() const;
    bool dbUserNameIsSet() const;
    void unsetdbUserName();
    void setDbUserName(const std::string& value);

    /// <summary>
    /// 数据库切换策略。取值为“reliability”或“availability”，分别对应于可靠性优先和可用性优先。
    /// </summary>

    std::string getSwitchStrategy() const;
    bool switchStrategyIsSet() const;
    void unsetswitchStrategy();
    void setSwitchStrategy(const std::string& value);

    /// <summary>
    /// 客户设置实例只读API的状态信息。仅支持RDS for MySQL引擎。 - true，表示该实例为客户设置的只读状态 - false， 表示该实例未被客户设置只读
    /// </summary>

    bool isReadOnlyByUser() const;
    bool readOnlyByUserIsSet() const;
    void unsetreadOnlyByUser();
    void setReadOnlyByUser(bool value);

    /// <summary>
    /// 可维护时间窗，为UTC时间。
    /// </summary>

    std::string getMaintenanceWindow() const;
    bool maintenanceWindowIsSet() const;
    void unsetmaintenanceWindow();
    void setMaintenanceWindow(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<NodeResponse>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<NodeResponse>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<RelatedInstance>& getRelatedInstance();
    bool relatedInstanceIsSet() const;
    void unsetrelatedInstance();
    void setRelatedInstance(const std::vector<RelatedInstance>& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const Datastore& value);

    /// <summary>
    /// 
    /// </summary>

    HaResponse getHa() const;
    bool haIsSet() const;
    void unsetha();
    void setHa(const HaResponse& value);

    /// <summary>
    /// 数据库端口信息。  - MySQL数据库端口设置范围为1024～65535（其中12017和33071被RDS系统占用不可设置）。 - PostgreSQL数据库端口修改范围为2100～9500。 - Microsoft SQL Server实例的端口设置范围为1433和2100~9500（其中5355和5985不可设置。对于2017 EE版，5050、5353和5986不可设置）。  当不传该参数时，默认端口如下：  - MySQL默认3306。 - PostgreSQL默认5432。 - Microsoft SQL Server默认1433。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    BackupStrategyForResponse getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const BackupStrategyForResponse& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 用于磁盘加密的密钥ID。
    /// </summary>

    std::string getDiskEncryptionId() const;
    bool diskEncryptionIdIsSet() const;
    void unsetdiskEncryptionId();
    void setDiskEncryptionId(const std::string& value);

    /// <summary>
    /// 规格码。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// CPU大小。例如，1表示1U。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// 内存大小（单位：GB）。
    /// </summary>

    std::string getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Volume getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const Volume& value);

    /// <summary>
    /// 区域ID。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 安全组ID。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChargeInfoResponse getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const ChargeInfoResponse& value);

    /// <summary>
    /// 时区。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<TagResponse>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagResponse>& value);

    /// <summary>
    /// 备份空间使用量，单位GB。  该字段仅用于查询指定SQL Server实例信息时返回。
    /// </summary>

    double getBackupUsedSpace() const;
    bool backupUsedSpaceIsSet() const;
    void unsetbackupUsedSpace();
    void setBackupUsedSpace(double value);

    /// <summary>
    /// 磁盘空间使用量，单位GB。  该字段仅用于查询指定SQL Server实例信息时返回。
    /// </summary>

    double getStorageUsedSpace() const;
    bool storageUsedSpaceIsSet() const;
    void unsetstorageUsedSpace();
    void setStorageUsedSpace(double value);

    /// <summary>
    /// 订单ID，仅包周期场景返回。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 是否已被DDM实例关联。
    /// </summary>

    bool isAssociatedWithDdm() const;
    bool associatedWithDdmIsSet() const;
    void unsetassociatedWithDdm();
    void setAssociatedWithDdm(bool value);

    /// <summary>
    /// 实例的备注信息。
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 实例磁盘的最大IOPS值。  当前该字段仅对于SQL Server引擎实例返回。
    /// </summary>

    int64_t getMaxIops() const;
    bool maxIopsIsSet() const;
    void unsetmaxIops();
    void setMaxIops(int64_t value);

    /// <summary>
    /// 实例的到期时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  仅包周期场景返回。
    /// </summary>

    std::string getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool enableSsl_;
    bool enableSslIsSet_;
    std::vector<std::string> privateIps_;
    bool privateIpsIsSet_;
    std::vector<std::string> privateDnsNames_;
    bool privateDnsNamesIsSet_;
    std::vector<std::string> publicDnsNames_;
    bool publicDnsNamesIsSet_;
    std::vector<std::string> publicIps_;
    bool publicIpsIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string dbUserName_;
    bool dbUserNameIsSet_;
    std::string switchStrategy_;
    bool switchStrategyIsSet_;
    bool readOnlyByUser_;
    bool readOnlyByUserIsSet_;
    std::string maintenanceWindow_;
    bool maintenanceWindowIsSet_;
    std::vector<NodeResponse> nodes_;
    bool nodesIsSet_;
    std::vector<RelatedInstance> relatedInstance_;
    bool relatedInstanceIsSet_;
    std::string name_;
    bool nameIsSet_;
    Datastore datastore_;
    bool datastoreIsSet_;
    HaResponse ha_;
    bool haIsSet_;
    int32_t port_;
    bool portIsSet_;
    BackupStrategyForResponse backupStrategy_;
    bool backupStrategyIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string diskEncryptionId_;
    bool diskEncryptionIdIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string cpu_;
    bool cpuIsSet_;
    std::string mem_;
    bool memIsSet_;
    Volume volume_;
    bool volumeIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    ChargeInfoResponse chargeInfo_;
    bool chargeInfoIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::vector<TagResponse> tags_;
    bool tagsIsSet_;
    double backupUsedSpace_;
    bool backupUsedSpaceIsSet_;
    double storageUsedSpace_;
    bool storageUsedSpaceIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    bool associatedWithDdm_;
    bool associatedWithDdmIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    int64_t maxIops_;
    bool maxIopsIsSet_;
    std::string expirationTime_;
    bool expirationTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceResponse_H_
