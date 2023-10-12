
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListInstanceResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListInstanceResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatastore.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFlavorInfo.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussBackupStrategyForListResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListVolume.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListHa.h>
#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussChargeInfoListResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListInstanceResponse
    : public ModelBase
{
public:
    ListInstanceResponse();
    virtual ~ListInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceResponse members

    /// <summary>
    /// 实例ID。
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
    /// 实例状态。  取值：  值为“BUILD”，表示实例正在创建。  值为“ACTIVE”，表示实例正常。  值为“FAILED”，表示实例异常。  值为“FROZEN”，表示实例冻结。  值为“EXPANDING”，表示实例正在扩容CN或DN。  值为“REBOOTING”，表示实例正在重启。  值为“UPGRADING”，表示实例正在升级。  值为“RESTORING”，表示实例正在恢复。  值为“BACKING UP”，表示实例正在进行备份。  值为“REDUCING REPLICATION”，表示实例正在降副本。  值为“STORAGE FULL”，表示实例磁盘空间满。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例内网IP地址列表。分布式CN所在的弹性云服务器创建成功后该值存在，主备版DN所在的弹性云服务器创建成功后该值存在，其他情况下为空字符串。
    /// </summary>

    std::vector<std::string>& getPrivateIps();
    bool privateIpsIsSet() const;
    void unsetprivateIps();
    void setPrivateIps(const std::vector<std::string>& value);

    /// <summary>
    /// 实例外网IP地址列表。绑定弹性公网IP后，该值不为空。
    /// </summary>

    std::vector<std::string>& getPublicIps();
    bool publicIpsIsSet() const;
    void unsetpublicIps();
    void setPublicIps(const std::vector<std::string>& value);

    /// <summary>
    /// 数据库端口号。GaussDB 数据库端口设置范围为1024~39998（其中2378,2379,2380,4999,5000,5999,6000,6001,8097,8098,20049,20050,21731,21732被系统占用不可设置）。  当不传该参数时，默认端口如下：8000。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);

    /// <summary>
    /// 实例类型，取值为 \&quot;enterprise\&quot;，对应于分布式实例（企业版）。取值为\&quot;Ha\&quot;，对应于主备版实例。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListHa getHa() const;
    bool haIsSet() const;
    void unsetha();
    void setHa(const ListHa& value);

    /// <summary>
    /// 实例副本数。
    /// </summary>

    int32_t getReplicaNum() const;
    bool replicaNumIsSet() const;
    void unsetreplicaNum();
    void setReplicaNum(int32_t value);

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

    ListDatastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const ListDatastore& value);

    /// <summary>
    /// 创建时间，格式为“yyyy-mm-dd hh:mm:ss timezone”。  其中timezone是指时区。  说明：创建时该值为实例下发创建的时间，创建完成后，该值为创建完成时间。
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
    /// 规格码。参考[表1](https://support.huaweicloud.com/api-opengauss/opengauss_api_0037.html#opengauss_api_0037__ted9b9d433c8a4c52884e199e17f94479)中GaussDB 的“规格编码”列内容获取。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListFlavorInfo getFlavorInfo() const;
    bool flavorInfoIsSet() const;
    void unsetflavorInfo();
    void setFlavorInfo(const ListFlavorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ListVolume getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const ListVolume& value);

    /// <summary>
    /// 数据库切换策略。取值为“reliability”或“availability”，分别对应于可靠性优先和可用性优先。 若创建时没有选择切换策略，则不予显示。
    /// </summary>

    std::string getSwitchStrategy() const;
    bool switchStrategyIsSet() const;
    void unsetswitchStrategy();
    void setSwitchStrategy(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussBackupStrategyForListResponse getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const OpenGaussBackupStrategyForListResponse& value);

    /// <summary>
    /// 可维护时间窗，为UTC时间。
    /// </summary>

    std::string getMaintenanceWindow() const;
    bool maintenanceWindowIsSet() const;
    void unsetmaintenanceWindow();
    void setMaintenanceWindow(const std::string& value);

    /// <summary>
    /// 实例节点信息。
    /// </summary>

    std::vector<Object>& getNodes();
    bool nodesIsSet() const;
    void unsetnodes();
    void setNodes(const std::vector<Object>& value);

    /// <summary>
    /// 企业项目标签ID。非企业项目账号的实例，企业项目默认0。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// basic为基础版 ，enterprise为企业版。
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);

    /// <summary>
    /// 磁盘加密密钥ID。只有创建磁盘加密实例才会显示该参数。
    /// </summary>

    std::string getDiskEncryptionId() const;
    bool diskEncryptionIdIsSet() const;
    void unsetdiskEncryptionId();
    void setDiskEncryptionId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussChargeInfoListResponse getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const OpenGaussChargeInfoListResponse& value);

    /// <summary>
    /// 时区。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// 标签列表，没有标签不返回该参数。
    /// </summary>

    std::vector<Object>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Object>& value);

    /// <summary>
    /// 备份空间使用量，单位KB。
    /// </summary>

    std::string getBackupUsedSpace() const;
    bool backupUsedSpaceIsSet() const;
    void unsetbackupUsedSpace();
    void setBackupUsedSpace(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> privateIps_;
    bool privateIpsIsSet_;
    std::vector<std::string> publicIps_;
    bool publicIpsIsSet_;
    int32_t port_;
    bool portIsSet_;
    std::string type_;
    bool typeIsSet_;
    ListHa ha_;
    bool haIsSet_;
    int32_t replicaNum_;
    bool replicaNumIsSet_;
    std::string region_;
    bool regionIsSet_;
    ListDatastore datastore_;
    bool datastoreIsSet_;
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
    std::string flavorRef_;
    bool flavorRefIsSet_;
    ListFlavorInfo flavorInfo_;
    bool flavorInfoIsSet_;
    ListVolume volume_;
    bool volumeIsSet_;
    std::string switchStrategy_;
    bool switchStrategyIsSet_;
    OpenGaussBackupStrategyForListResponse backupStrategy_;
    bool backupStrategyIsSet_;
    std::string maintenanceWindow_;
    bool maintenanceWindowIsSet_;
    std::vector<Object> nodes_;
    bool nodesIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;
    std::string diskEncryptionId_;
    bool diskEncryptionIdIsSet_;
    OpenGaussChargeInfoListResponse chargeInfo_;
    bool chargeInfoIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::vector<Object> tags_;
    bool tagsIsSet_;
    std::string backupUsedSpace_;
    bool backupUsedSpaceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListInstanceResponse_H_
