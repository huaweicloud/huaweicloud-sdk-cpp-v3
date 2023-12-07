
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceInfoDetailUnifyStatus_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceInfoDetailUnifyStatus_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlInstanceChargeInfo.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/MysqlBackupStrategy.h>
#include <huaweicloud/gaussdb/v3/model/MysqlProxyInfo.h>
#include <huaweicloud/gaussdb/v3/model/MysqlTags.h>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/MysqlDatastoreWithKernelVersion.h>
#include <huaweicloud/gaussdb/v3/model/MysqlInstanceNodeInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlInstanceInfoDetailUnifyStatus
    : public ModelBase
{
public:
    MysqlInstanceInfoDetailUnifyStatus();
    virtual ~MysqlInstanceInfoDetailUnifyStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlInstanceInfoDetailUnifyStatus members

    /// <summary>
    /// 实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 创建的实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 租户在某一Region下的project ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 实例状态。  取值： - 值为“creating”，表示实例正在创建。 - 值为“normal”，表示实例正常。 - 值为“abnormal”，表示实例异常。 - 值为“createfail”，表示实例创建失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库端口号。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 实例备注
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 实例类型，取Cluster”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlInstanceChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const MysqlInstanceChargeInfo& value);

    /// <summary>
    /// 节点个数。
    /// </summary>

    int32_t getNodeCount() const;
    bool nodeCountIsSet() const;
    void unsetnodeCount();
    void setNodeCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    MysqlDatastoreWithKernelVersion getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const MysqlDatastoreWithKernelVersion& value);

    /// <summary>
    /// 备份空间使用大小，单位为GB。
    /// </summary>

    double getBackupUsedSpace() const;
    bool backupUsedSpaceIsSet() const;
    void unsetbackupUsedSpace();
    void setBackupUsedSpace(double value);

    /// <summary>
    /// 创建时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 更新时间，格式与\&quot;created\&quot;字段对应格式完全相同。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 实例的写内网IP地址。
    /// </summary>

    std::vector<std::string>& getPrivateWriteIps();
    bool privateWriteIpsIsSet() const;
    void unsetprivateWriteIps();
    void setPrivateWriteIps(const std::vector<std::string>& value);

    /// <summary>
    /// 实例内网域名列表。实例创建成功后，需要手动申请内网域名，否则查询内网域名为空。
    /// </summary>

    std::vector<std::string>& getPrivateDnsNames();
    bool privateDnsNamesIsSet() const;
    void unsetprivateDnsNames();
    void setPrivateDnsNames(const std::vector<std::string>& value);

    /// <summary>
    /// 实例的公网IP地址。
    /// </summary>

    std::string getPublicIps() const;
    bool publicIpsIsSet() const;
    void unsetpublicIps();
    void setPublicIps(const std::string& value);

    /// <summary>
    /// 默认用户名。
    /// </summary>

    std::string getDbUserName() const;
    bool dbUserNameIsSet() const;
    void unsetdbUserName();
    void setDbUserName(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网的网络ID信息。
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
    /// 实例创建的模板ID，或者应用到实例的最新参数组模板ID。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlBackupStrategy getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const MysqlBackupStrategy& value);

    /// <summary>
    /// 节点信息。
    /// </summary>

    std::vector<MysqlInstanceNodeInfo>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<MysqlInstanceNodeInfo>& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 时区。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// 可用区模式。  取值范围： - single：单可用区。 - multi：多可用区。
    /// </summary>

    std::string getAzMode() const;
    bool azModeIsSet() const;
    void unsetazMode();
    void setAzMode(const std::string& value);

    /// <summary>
    /// 主可用区。
    /// </summary>

    std::string getMasterAzCode() const;
    bool masterAzCodeIsSet() const;
    void unsetmasterAzCode();
    void setMasterAzCode(const std::string& value);

    /// <summary>
    /// 可维护时间窗，为UTC时间。
    /// </summary>

    std::string getMaintenanceWindow() const;
    bool maintenanceWindowIsSet() const;
    void unsetmaintenanceWindow();
    void setMaintenanceWindow(const std::string& value);

    /// <summary>
    /// 实例标签。
    /// </summary>

    std::vector<MysqlTags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<MysqlTags>& value);

    /// <summary>
    /// 专属资源池ID，只有数据库实例属于专属资源池才会返回该参数。
    /// </summary>

    std::string getDedicatedResourceId() const;
    bool dedicatedResourceIdIsSet() const;
    void unsetdedicatedResourceId();
    void setDedicatedResourceId(const std::string& value);

    /// <summary>
    /// 代理信息。
    /// </summary>

    std::vector<MysqlProxyInfo>& getProxies();
    bool proxiesIsSet() const;
    void unsetproxies();
    void setProxies(const std::vector<MysqlProxyInfo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    std::string type_;
    bool typeIsSet_;
    MysqlInstanceChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;
    int32_t nodeCount_;
    bool nodeCountIsSet_;
    MysqlDatastoreWithKernelVersion datastore_;
    bool datastoreIsSet_;
    double backupUsedSpace_;
    bool backupUsedSpaceIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::vector<std::string> privateWriteIps_;
    bool privateWriteIpsIsSet_;
    std::vector<std::string> privateDnsNames_;
    bool privateDnsNamesIsSet_;
    std::string publicIps_;
    bool publicIpsIsSet_;
    std::string dbUserName_;
    bool dbUserNameIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;
    MysqlBackupStrategy backupStrategy_;
    bool backupStrategyIsSet_;
    std::vector<MysqlInstanceNodeInfo> nodes_;
    bool nodesIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::string azMode_;
    bool azModeIsSet_;
    std::string masterAzCode_;
    bool masterAzCodeIsSet_;
    std::string maintenanceWindow_;
    bool maintenanceWindowIsSet_;
    std::vector<MysqlTags> tags_;
    bool tagsIsSet_;
    std::string dedicatedResourceId_;
    bool dedicatedResourceIdIsSet_;
    std::vector<MysqlProxyInfo> proxies_;
    bool proxiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceInfoDetailUnifyStatus_H_
