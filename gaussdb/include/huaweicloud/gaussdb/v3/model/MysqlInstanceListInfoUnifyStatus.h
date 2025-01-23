
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceListInfoUnifyStatus_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceListInfoUnifyStatus_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlVolumeInfo.h>
#include <huaweicloud/gaussdb/v3/model/InstanceTagItem.h>
#include <huaweicloud/gaussdb/v3/model/MysqlFlavorInfo.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/MysqlBackupStrategy.h>
#include <huaweicloud/gaussdb/v3/model/MysqlChargeInfo.h>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/MysqlDatastoreWithKernelVersion.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlInstanceListInfoUnifyStatus
    : public ModelBase
{
public:
    MysqlInstanceListInfoUnifyStatus();
    virtual ~MysqlInstanceListInfoUnifyStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlInstanceListInfoUnifyStatus members

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
    /// 实例状态。  取值： - 值为“creating”，表示实例正在创建。 - 值为“normal”，表示实例正常。 - 值为“abnormal”，表示实例异常。 - 值为“createfail”，表示实例创建失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例写内网IP地址列表。弹性云服务器创建成功后该值存在，其他情况下为空字列表。
    /// </summary>

    std::vector<std::string>& getPrivateIps();
    bool privateIpsIsSet() const;
    void unsetprivateIps();
    void setPrivateIps(const std::vector<std::string>& value);

    /// <summary>
    /// 实例读写分离IP地址列表。TaurusDB实例开启代理成功后该值存在，其他情况下为空列表。
    /// </summary>

    std::vector<std::string>& getProxyIps();
    bool proxyIpsIsSet() const;
    void unsetproxyIps();
    void setProxyIps(const std::vector<std::string>& value);

    /// <summary>
    /// 实例读内网IP地址列表。弹性云服务器创建成功后该值存在，其他情况下为空列表。
    /// </summary>

    std::vector<std::string>& getReadonlyPrivateIps();
    bool readonlyPrivateIpsIsSet() const;
    void unsetreadonlyPrivateIps();
    void setReadonlyPrivateIps(const std::vector<std::string>& value);

    /// <summary>
    /// 实例外网IP地址列表。
    /// </summary>

    std::vector<std::string>& getPublicIps();
    bool publicIpsIsSet() const;
    void unsetpublicIps();
    void setPublicIps(const std::vector<std::string>& value);

    /// <summary>
    /// 数据库端口号。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 实例类型，取值为“Cluster”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

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

    MysqlDatastoreWithKernelVersion getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const MysqlDatastoreWithKernelVersion& value);

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
    /// 规格码。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlFlavorInfo getFlavorInfo() const;
    bool flavorInfoIsSet() const;
    void unsetflavorInfo();
    void setFlavorInfo(const MysqlFlavorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlVolumeInfo getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const MysqlVolumeInfo& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlBackupStrategy getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const MysqlBackupStrategy& value);

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
    /// 
    /// </summary>

    MysqlChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const MysqlChargeInfo& value);

    /// <summary>
    /// 专属资源池ID，只有数据库实例属于专属资源池才会返回该参数。
    /// </summary>

    std::string getDedicatedResourceId() const;
    bool dedicatedResourceIdIsSet() const;
    void unsetdedicatedResourceId();
    void setDedicatedResourceId(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<InstanceTagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<InstanceTagItem>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> privateIps_;
    bool privateIpsIsSet_;
    std::vector<std::string> proxyIps_;
    bool proxyIpsIsSet_;
    std::vector<std::string> readonlyPrivateIps_;
    bool readonlyPrivateIpsIsSet_;
    std::vector<std::string> publicIps_;
    bool publicIpsIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string region_;
    bool regionIsSet_;
    MysqlDatastoreWithKernelVersion datastore_;
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
    MysqlFlavorInfo flavorInfo_;
    bool flavorInfoIsSet_;
    MysqlVolumeInfo volume_;
    bool volumeIsSet_;
    MysqlBackupStrategy backupStrategy_;
    bool backupStrategyIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    MysqlChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;
    std::string dedicatedResourceId_;
    bool dedicatedResourceIdIsSet_;
    std::vector<InstanceTagItem> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceListInfoUnifyStatus_H_
