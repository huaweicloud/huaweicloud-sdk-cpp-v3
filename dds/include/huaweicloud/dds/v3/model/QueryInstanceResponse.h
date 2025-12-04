
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_QueryInstanceResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_QueryInstanceResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/TagResponse.h>
#include <huaweicloud/dds/v3/model/GroupResponseItem.h>
#include <string>
#include <huaweicloud/dds/v3/model/DatastoreItem.h>
#include <vector>
#include <huaweicloud/dds/v3/model/BackupStrategyForItemResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  QueryInstanceResponse
    : public ModelBase
{
public:
    QueryInstanceResponse();
    virtual ~QueryInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryInstanceResponse members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例备注。
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// 实例状态。 取值： - normal，表示实例正常。 - abnormal，表示实例异常。 - creating，表示实例创建中。 - frozen，表示实例被冻结。 - data_disk_full，表示实例磁盘已满。 - createfail，表示实例创建失败。 - enlargefail，表示实例扩容节点个数失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据库端口号。文档数据库实例支持的端口号范围为2100～9500。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 实例类型。与请求参数相同。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 实例所在区域。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DatastoreItem getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const DatastoreItem& value);

    /// <summary>
    /// 存储引擎。取值为“wiredTiger”。
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);

    /// <summary>
    /// 实例创建时间。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 实例操作最新变更的时间。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 默认用户名。取值为“rwuser”。
    /// </summary>

    std::string getDbUserName() const;
    bool dbUserNameIsSet() const;
    void unsetdbUserName();
    void setDbUserName(const std::string& value);

    /// <summary>
    /// 是否开启SSL安全连接。 - 取值为“1”，表示开启。 - 取值为“0”，表示不开启。
    /// </summary>

    int32_t getSsl() const;
    bool sslIsSet() const;
    void unsetssl();
    void setSsl(int32_t value);

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

    BackupStrategyForItemResponse getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const BackupStrategyForItemResponse& value);

    /// <summary>
    /// 计费方式。 - 取值为“0”，表示按需计费。 - 取值为“1”，表示包年/包月计费。
    /// </summary>

    std::string getPayMode() const;
    bool payModeIsSet() const;
    void unsetpayMode();
    void setPayMode(const std::string& value);

    /// <summary>
    /// 系统可维护时间窗。
    /// </summary>

    std::string getMaintenanceWindow() const;
    bool maintenanceWindowIsSet() const;
    void unsetmaintenanceWindow();
    void setMaintenanceWindow(const std::string& value);

    /// <summary>
    /// 组信息。
    /// </summary>

    std::vector<GroupResponseItem>& getGroups();
    bool groupsIsSet() const;
    void unsetgroups();
    void setGroups(const std::vector<GroupResponseItem>& value);

    /// <summary>
    /// 磁盘加密的密钥ID。
    /// </summary>

    std::string getDiskEncryptionId() const;
    bool diskEncryptionIdIsSet() const;
    void unsetdiskEncryptionId();
    void setDiskEncryptionId(const std::string& value);

    /// <summary>
    /// 企业项目ID。取值为“0”，表示为default企业项目。
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
    /// 专属存储池ID。
    /// </summary>

    std::string getDssPoolId() const;
    bool dssPoolIdIsSet() const;
    void unsetdssPoolId();
    void setDssPoolId(const std::string& value);

    /// <summary>
    /// 实例正在执行的动作。
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);

    /// <summary>
    /// 订单ID，仅包周期场景返回。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<TagResponse>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagResponse>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string region_;
    bool regionIsSet_;
    DatastoreItem datastore_;
    bool datastoreIsSet_;
    std::string engine_;
    bool engineIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string dbUserName_;
    bool dbUserNameIsSet_;
    int32_t ssl_;
    bool sslIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    BackupStrategyForItemResponse backupStrategy_;
    bool backupStrategyIsSet_;
    std::string payMode_;
    bool payModeIsSet_;
    std::string maintenanceWindow_;
    bool maintenanceWindowIsSet_;
    std::vector<GroupResponseItem> groups_;
    bool groupsIsSet_;
    std::string diskEncryptionId_;
    bool diskEncryptionIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::string dssPoolId_;
    bool dssPoolIdIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::vector<TagResponse> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_QueryInstanceResponse_H_
