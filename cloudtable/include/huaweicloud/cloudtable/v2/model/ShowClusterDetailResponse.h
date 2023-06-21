
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ShowClusterDetailResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ShowClusterDetailResponse_H_

#include <huaweicloud/cloudtable/v2/CloudtableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtable/v2/model/Datastore.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  ShowClusterDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowClusterDetailResponse();
    virtual ~ShowClusterDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowClusterDetailResponse members

    /// <summary>
    /// 集群当前状态列表： - 创建中 - 扩容中 - 重启中 - 开启opentsdb - 扩容失败 - 重启失败 - 开启opentsdb失败
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const Datastore& value);

    /// <summary>
    /// 是否打开openTSDB特性。 - false：不开启 - true：开启
    /// </summary>

    bool isEnableOpenTSDB() const;
    bool enableOpenTSDBIsSet() const;
    void unsetenableOpenTSDB();
    void setEnableOpenTSDB(bool value);

    /// <summary>
    /// 是否打开SQL查询特性。 - false：不开启 - true：开启
    /// </summary>

    bool isEnableLemon() const;
    bool enableLemonIsSet() const;
    void unsetenableLemon();
    void setEnableLemon(bool value);

    /// <summary>
    /// 集群名称。
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// RegionServer个数。
    /// </summary>

    std::string getCuNum() const;
    bool cuNumIsSet() const;
    void unsetcuNum();
    void setCuNum(const std::string& value);

    /// <summary>
    /// TSD节点个数。
    /// </summary>

    std::string getTsdNum() const;
    bool tsdNumIsSet() const;
    void unsettsdNum();
    void setTsdNum(const std::string& value);

    /// <summary>
    /// Lemon节点个数。
    /// </summary>

    std::string getLemonNum() const;
    bool lemonNumIsSet() const;
    void unsetlemonNum();
    void setLemonNum(const std::string& value);

    /// <summary>
    /// 集群底层存储类型： - OBS - HDFS
    /// </summary>

    std::string getStorageType() const;
    bool storageTypeIsSet() const;
    void unsetstorageType();
    void setStorageType(const std::string& value);

    /// <summary>
    /// 集群存储配额。
    /// </summary>

    std::string getStorageQuota() const;
    bool storageQuotaIsSet() const;
    void unsetstorageQuota();
    void setStorageQuota(const std::string& value);

    /// <summary>
    /// 当前使用存储空间。
    /// </summary>

    std::string getUsedStorageSize() const;
    bool usedStorageSizeIsSet() const;
    void unsetusedStorageSize();
    void setUsedStorageSize(const std::string& value);

    /// <summary>
    /// 是否打开IAM认证。 - false：不开启 - true：开启
    /// </summary>

    bool isAuthMode() const;
    bool authModeIsSet() const;
    void unsetauthMode();
    void setAuthMode(bool value);

    /// <summary>
    /// 是否打开dfv
    /// </summary>

    bool isEnableDfv() const;
    bool enableDfvIsSet() const;
    void unsetenableDfv();
    void setEnableDfv(bool value);

    /// <summary>
    /// 集群更新时间。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 集群创建时间。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 集群唯一标识，集群ID。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群当前状态： - 200：集群正常 - 300：集群异常 - 400：集群已删除 - 303：集群创建失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 内网OpenTSDB连接访问地址。
    /// </summary>

    std::string getOpenTSDBLink() const;
    bool openTSDBLinkIsSet() const;
    void unsetopenTSDBLink();
    void setOpenTSDBLink(const std::string& value);

    /// <summary>
    /// OpenTSDB公网endpoint地址
    /// </summary>

    std::string getTsdPublicEndpoint() const;
    bool tsdPublicEndpointIsSet() const;
    void unsettsdPublicEndpoint();
    void setTsdPublicEndpoint(const std::string& value);

    /// <summary>
    /// 内网Lemon连接访问地址。
    /// </summary>

    std::string getLemonLink() const;
    bool lemonLinkIsSet() const;
    void unsetlemonLink();
    void setLemonLink(const std::string& value);

    /// <summary>
    /// 内网ZooKeeper连接访问地址。
    /// </summary>

    std::string getZookeeperLink() const;
    bool zookeeperLinkIsSet() const;
    void unsetzookeeperLink();
    void setZookeeperLink(const std::string& value);

    /// <summary>
    /// 公网HBase连接访问地址。
    /// </summary>

    std::string getHbasePublicEndpoint() const;
    bool hbasePublicEndpointIsSet() const;
    void unsethbasePublicEndpoint();
    void setHbasePublicEndpoint(const std::string& value);

    /// <summary>
    /// 集群是否被冻结。 - false：不冻结 - true：冻结
    /// </summary>

    std::string getIsFrozen() const;
    bool isFrozenIsSet() const;
    void unsetisFrozen();
    void setIsFrozen(const std::string& value);

    /// <summary>
    /// VPC ID，创建集群节点所在的虚拟私有ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网ID，创建集群所在子网段。
    /// </summary>

    std::string getSubNetId() const;
    bool subNetIdIsSet() const;
    void unsetsubNetId();
    void setSubNetId(const std::string& value);

    /// <summary>
    /// 安全组对应的ID。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 集群所属的可用区。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


protected:
    std::vector<std::string> actions_;
    bool actionsIsSet_;
    Datastore datastore_;
    bool datastoreIsSet_;
    bool enableOpenTSDB_;
    bool enableOpenTSDBIsSet_;
    bool enableLemon_;
    bool enableLemonIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string cuNum_;
    bool cuNumIsSet_;
    std::string tsdNum_;
    bool tsdNumIsSet_;
    std::string lemonNum_;
    bool lemonNumIsSet_;
    std::string storageType_;
    bool storageTypeIsSet_;
    std::string storageQuota_;
    bool storageQuotaIsSet_;
    std::string usedStorageSize_;
    bool usedStorageSizeIsSet_;
    bool authMode_;
    bool authModeIsSet_;
    bool enableDfv_;
    bool enableDfvIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string openTSDBLink_;
    bool openTSDBLinkIsSet_;
    std::string tsdPublicEndpoint_;
    bool tsdPublicEndpointIsSet_;
    std::string lemonLink_;
    bool lemonLinkIsSet_;
    std::string zookeeperLink_;
    bool zookeeperLinkIsSet_;
    std::string hbasePublicEndpoint_;
    bool hbasePublicEndpointIsSet_;
    std::string isFrozen_;
    bool isFrozenIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subNetId_;
    bool subNetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ShowClusterDetailResponse_H_
