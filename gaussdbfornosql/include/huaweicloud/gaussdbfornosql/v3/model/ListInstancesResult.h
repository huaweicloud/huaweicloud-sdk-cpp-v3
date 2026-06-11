
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesResult_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/DualActiveInfo.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BackupSpaceUsage.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesDatastoreResult.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CertInfoOption.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesGroupResult.h>
#include <string>
#include <vector>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesBackupStrategyResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 实例信息。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListInstancesResult
    : public ModelBase
{
public:
    ListInstancesResult();
    virtual ~ListInstancesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesResult members

    /// <summary>
    /// **参数解释：** 实例ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例状态。 **取值范围：** - normal，表示实例正常。 - abnormal，表示实例异常。 - creating，表示实例创建中。 - frozen，表示实例被冻结。 - data_disk_full，表示实例磁盘已满。 - createfail，表示实例创建失败。 - enlargefail，表示实例扩容节点个数失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 数据库端口。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例所在区域。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListInstancesDatastoreResult getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const ListInstancesDatastoreResult& value);

    /// <summary>
    /// **参数解释：** 实例类型。 **取值范围：** 与请求参数相同。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 产品类型。 **取值范围：** GeminiDB Redis云原生部署模式集群涉及此字段，取值：   -  Standard 标准型   -  Capacity 容量型
    /// </summary>

    std::string getProductType() const;
    bool productTypeIsSet() const;
    void unsetproductType();
    void setProductType(const std::string& value);

    /// <summary>
    /// **参数解释：** 存储引擎。 **取值范围：** 取值为“rocksDB”。
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例创建时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例操作最新变更的时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// **参数解释：** 默认用户名。 **取值范围：** 取值为“rwuser”。
    /// </summary>

    std::string getDbUserName() const;
    bool dbUserNameIsSet() const;
    void unsetdbUserName();
    void setDbUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 虚拟私有云ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释：** 子网ID。 **取值范围：** GeminiDB Cassandra 实例使用多个子网的场景，请参见表 ListInstancesNodeResult字段数据结构说明中的“subnet_id”。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释：** 安全组ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListInstancesBackupStrategyResult getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const ListInstancesBackupStrategyResult& value);

    /// <summary>
    /// **参数解释：** 计费方式。 **取值范围：** - 取值为“0”，表示按需计费。 - 取值为“1”，表示包年/包月计费。
    /// </summary>

    std::string getPayMode() const;
    bool payModeIsSet() const;
    void unsetpayMode();
    void setPayMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 系统可维护时间窗。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMaintenanceWindow() const;
    bool maintenanceWindowIsSet() const;
    void unsetmaintenanceWindow();
    void setMaintenanceWindow(const std::string& value);

    /// <summary>
    /// **参数解释：** 组信息。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<ListInstancesGroupResult>& getGroups();
    bool groupsIsSet() const;
    void unsetgroups();
    void setGroups(const std::vector<ListInstancesGroupResult>& value);

    /// <summary>
    /// **参数解释：** 企业项目ID。 **取值范围：** 取值为“0”，表示为default企业项目。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 专属资源ID。只有数据库实例属于专属资源池才会返回该参数。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDedicatedResourceId() const;
    bool dedicatedResourceIdIsSet() const;
    void unsetdedicatedResourceId();
    void setDedicatedResourceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 时区。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例正在执行的动作。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 磁盘加密时的密钥ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDiskEncryptionId() const;
    bool diskEncryptionIdIsSet() const;
    void unsetdiskEncryptionId();
    void setDiskEncryptionId(const std::string& value);

    /// <summary>
    /// **参数解释：** 负载均衡ip。 **取值范围：** 只有存在负载均衡ip，才会返回该参数。
    /// </summary>

    std::string getLbIpAddress() const;
    bool lbIpAddressIsSet() const;
    void unsetlbIpAddress();
    void setLbIpAddress(const std::string& value);

    /// <summary>
    /// **参数解释：** 负载均衡端口。 **取值范围：** 只有存在负载均衡ip，才会返回该参数。
    /// </summary>

    std::string getLbPort() const;
    bool lbPortIsSet() const;
    void unsetlbPort();
    void setLbPort(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例可用区。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释：** 容灾实例ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDrInstanceId() const;
    bool drInstanceIdIsSet() const;
    void unsetdrInstanceId();
    void setDrInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DualActiveInfo getDualActiveInfo() const;
    bool dualActiveInfoIsSet() const;
    void unsetdualActiveInfo();
    void setDualActiveInfo(const DualActiveInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CertInfoOption getCcmCertInfo() const;
    bool ccmCertInfoIsSet() const;
    void unsetccmCertInfo();
    void setCcmCertInfo(const CertInfoOption& value);

    /// <summary>
    /// **参数解释：** SSL安全连接启用情况。 **取值范围：** - 取值为“0”表示未启用。 - 取值为“1”表示已启用。
    /// </summary>

    std::string getSsl() const;
    bool sslIsSet() const;
    void unsetssl();
    void setSsl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BackupSpaceUsage getBackupSpaceUsage() const;
    bool backupSpaceUsageIsSet() const;
    void unsetbackupSpaceUsage();
    void setBackupSpaceUsage(const BackupSpaceUsage& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string region_;
    bool regionIsSet_;
    ListInstancesDatastoreResult datastore_;
    bool datastoreIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string productType_;
    bool productTypeIsSet_;
    std::string engine_;
    bool engineIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string dbUserName_;
    bool dbUserNameIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    ListInstancesBackupStrategyResult backupStrategy_;
    bool backupStrategyIsSet_;
    std::string payMode_;
    bool payModeIsSet_;
    std::string maintenanceWindow_;
    bool maintenanceWindowIsSet_;
    std::vector<ListInstancesGroupResult> groups_;
    bool groupsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string dedicatedResourceId_;
    bool dedicatedResourceIdIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;
    std::string diskEncryptionId_;
    bool diskEncryptionIdIsSet_;
    std::string lbIpAddress_;
    bool lbIpAddressIsSet_;
    std::string lbPort_;
    bool lbPortIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string drInstanceId_;
    bool drInstanceIdIsSet_;
    DualActiveInfo dualActiveInfo_;
    bool dualActiveInfoIsSet_;
    CertInfoOption ccmCertInfo_;
    bool ccmCertInfoIsSet_;
    std::string ssl_;
    bool sslIsSet_;
    BackupSpaceUsage backupSpaceUsage_;
    bool backupSpaceUsageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInstancesResult_H_
