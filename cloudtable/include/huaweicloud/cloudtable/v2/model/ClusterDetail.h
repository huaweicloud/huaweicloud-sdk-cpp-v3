
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ClusterDetail_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ClusterDetail_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtable/v2/model/ActionProgress.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 集群详情信息对象。
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  ClusterDetail
    : public ModelBase
{
public:
    ClusterDetail();
    virtual ~ClusterDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterDetail members

    /// <summary>
    /// 
    /// </summary>

    ActionProgress getActionProgress() const;
    bool actionProgressIsSet() const;
    void unsetactionProgress();
    void setActionProgress(const ActionProgress& value);

    /// <summary>
    /// 集群操作记录
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);

    /// <summary>
    /// 是否开启hdfs。 - false：不开启 - true：开启
    /// </summary>

    bool isLocalHdfs() const;
    bool localHdfsIsSet() const;
    void unsetlocalHdfs();
    void setLocalHdfs(bool value);

    /// <summary>
    /// 是否开222版本特性。 - false：不开启 - true：开启
    /// </summary>

    std::string getIsShow222VersionFeature() const;
    bool isShow222VersionFeatureIsSet() const;
    void unsetisShow222VersionFeature();
    void setIsShow222VersionFeature(const std::string& value);

    /// <summary>
    /// 集群操作记录
    /// </summary>

    std::vector<std::string>& getActionsCount();
    bool actionsCountIsSet() const;
    void unsetactionsCount();
    void setActionsCount(const std::vector<std::string>& value);

    /// <summary>
    /// 是否支持开启认证。 - false：不支持 - true：支持
    /// </summary>

    bool isSupportAuth() const;
    bool supportAuthIsSet() const;
    void unsetsupportAuth();
    void setSupportAuth(bool value);

    /// <summary>
    /// eps_id。
    /// </summary>

    std::string getEpsId() const;
    bool epsIdIsSet() const;
    void unsetepsId();
    void setEpsId(const std::string& value);

    /// <summary>
    /// 集群类型。
    /// </summary>

    std::string getClusterType() const;
    bool clusterTypeIsSet() const;
    void unsetclusterType();
    void setClusterType(const std::string& value);

    /// <summary>
    /// 包周期订单号。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 包周期订单状态。
    /// </summary>

    std::string getOrderStatus() const;
    bool orderStatusIsSet() const;
    void unsetorderStatus();
    void setOrderStatus(const std::string& value);

    /// <summary>
    /// 是否开启hdfs。 - false：不开启 - true：开启
    /// </summary>

    bool isIsLocalHdfs() const;
    bool isLocalHdfsIsSet() const;
    void unsetisLocalHdfs();
    void setIsLocalHdfs(bool value);

    /// <summary>
    /// ClickHouse部署模式。
    /// </summary>

    std::string getCkDeployMode() const;
    bool ckDeployModeIsSet() const;
    void unsetckDeployMode();
    void setCkDeployMode(const std::string& value);

    /// <summary>
    /// 节点磁盘类型。
    /// </summary>

    std::string getFlavorTypeEn() const;
    bool flavorTypeEnIsSet() const;
    void unsetflavorTypeEn();
    void setFlavorTypeEn(const std::string& value);

    /// <summary>
    /// 集群是否支持开启冷热分离。
    /// </summary>

    std::string getEnableHotColdFeatureCluster() const;
    bool enableHotColdFeatureClusterIsSet() const;
    void unsetenableHotColdFeatureCluster();
    void setEnableHotColdFeatureCluster(const std::string& value);

    /// <summary>
    /// 集群是否开启冷热分离。
    /// </summary>

    std::string getEnableHotColdFeature() const;
    bool enableHotColdFeatureIsSet() const;
    void unsetenableHotColdFeature();
    void setEnableHotColdFeature(const std::string& value);

    /// <summary>
    /// 数据节点规格。
    /// </summary>

    std::string getDataFlavor() const;
    bool dataFlavorIsSet() const;
    void unsetdataFlavor();
    void setDataFlavor(const std::string& value);

    /// <summary>
    /// 数据同步节点规格。
    /// </summary>

    std::string getControlFlavor() const;
    bool controlFlavorIsSet() const;
    void unsetcontrolFlavor();
    void setControlFlavor(const std::string& value);

    /// <summary>
    /// 数据节点个数。
    /// </summary>

    std::string getDataNodeNum() const;
    bool dataNodeNumIsSet() const;
    void unsetdataNodeNum();
    void setDataNodeNum(const std::string& value);

    /// <summary>
    /// 数据同步节点个数。
    /// </summary>

    std::string getControlNodeNum() const;
    bool controlNodeNumIsSet() const;
    void unsetcontrolNodeNum();
    void setControlNodeNum(const std::string& value);

    /// <summary>
    /// 数据节点磁盘容量。
    /// </summary>

    std::string getDataNodeTotalStorageSize() const;
    bool dataNodeTotalStorageSizeIsSet() const;
    void unsetdataNodeTotalStorageSize();
    void setDataNodeTotalStorageSize(const std::string& value);

    /// <summary>
    /// 数据同步节点磁盘容量。
    /// </summary>

    std::string getControlNodeTotalStorageSize() const;
    bool controlNodeTotalStorageSizeIsSet() const;
    void unsetcontrolNodeTotalStorageSize();
    void setControlNodeTotalStorageSize(const std::string& value);

    /// <summary>
    /// 冷存储使用量。
    /// </summary>

    std::string getColdStorageUsedSize() const;
    bool coldStorageUsedSizeIsSet() const;
    void unsetcoldStorageUsedSize();
    void setColdStorageUsedSize(const std::string& value);

    /// <summary>
    /// 数据节点磁盘类型。
    /// </summary>

    std::string getDataNodeVolumeType() const;
    bool dataNodeVolumeTypeIsSet() const;
    void unsetdataNodeVolumeType();
    void setDataNodeVolumeType(const std::string& value);

    /// <summary>
    /// 数据同步节点磁盘类型。
    /// </summary>

    std::string getControlNodeVolumeType() const;
    bool controlNodeVolumeTypeIsSet() const;
    void unsetcontrolNodeVolumeType();
    void setControlNodeVolumeType(const std::string& value);

    /// <summary>
    /// 是否开启IAM权限认证。 - false：不开启 - true：开启
    /// </summary>

    std::string getAuthMode() const;
    bool authModeIsSet() const;
    void unsetauthMode();
    void setAuthMode(const std::string& value);

    /// <summary>
    /// 集群所在的可用区（AZ)。
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);

    /// <summary>
    /// 集群ID，集群唯一标识。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// CloudTable集群名称。
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// 集群创建时间。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 是否开启DFV。 - false：不开启 - true：开启
    /// </summary>

    std::string getEnableDfv() const;
    bool enableDfvIsSet() const;
    void unsetenableDfv();
    void setEnableDfv(const std::string& value);

    /// <summary>
    /// 集群是否免费。 - false：不免费 - true：免费
    /// </summary>

    std::string getEnableFree() const;
    bool enableFreeIsSet() const;
    void unsetenableFree();
    void setEnableFree(const std::string& value);

    /// <summary>
    /// 是否开启Lemon。 - false：不开启 - true：开启
    /// </summary>

    std::string getEnableLemon() const;
    bool enableLemonIsSet() const;
    void unsetenableLemon();
    void setEnableLemon(const std::string& value);

    /// <summary>
    /// 是否开启OpenTSDB。 - false：不开启 - true：开启
    /// </summary>

    std::string getEnableOpenTSDB() const;
    bool enableOpenTSDBIsSet() const;
    void unsetenableOpenTSDB();
    void setEnableOpenTSDB(const std::string& value);

    /// <summary>
    /// 集群状态： - 200：集群正常 - 300：集群异常 - 303：集群创建失败 - 400：集群已删除
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 集群标识符。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 集群版本号。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// CloudTable集群ZooKeeper的链接地址。例如：cloudtable-3058-zk3-Dqcwuh6R.mycloudtable.com:2181,cloudtable-3058-zk2-TCwkZEie.mycloudtable.com:2181,cloudtable-3058-zk1-TBELUFOK.mycloudtable.com:2181
    /// </summary>

    std::string getZookeeperLink() const;
    bool zookeeperLinkIsSet() const;
    void unsetzookeeperLink();
    void setZookeeperLink(const std::string& value);


protected:
    ActionProgress actionProgress_;
    bool actionProgressIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;
    bool localHdfs_;
    bool localHdfsIsSet_;
    std::string isShow222VersionFeature_;
    bool isShow222VersionFeatureIsSet_;
    std::vector<std::string> actionsCount_;
    bool actionsCountIsSet_;
    bool supportAuth_;
    bool supportAuthIsSet_;
    std::string epsId_;
    bool epsIdIsSet_;
    std::string clusterType_;
    bool clusterTypeIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string orderStatus_;
    bool orderStatusIsSet_;
    bool isLocalHdfs_;
    bool isLocalHdfsIsSet_;
    std::string ckDeployMode_;
    bool ckDeployModeIsSet_;
    std::string flavorTypeEn_;
    bool flavorTypeEnIsSet_;
    std::string enableHotColdFeatureCluster_;
    bool enableHotColdFeatureClusterIsSet_;
    std::string enableHotColdFeature_;
    bool enableHotColdFeatureIsSet_;
    std::string dataFlavor_;
    bool dataFlavorIsSet_;
    std::string controlFlavor_;
    bool controlFlavorIsSet_;
    std::string dataNodeNum_;
    bool dataNodeNumIsSet_;
    std::string controlNodeNum_;
    bool controlNodeNumIsSet_;
    std::string dataNodeTotalStorageSize_;
    bool dataNodeTotalStorageSizeIsSet_;
    std::string controlNodeTotalStorageSize_;
    bool controlNodeTotalStorageSizeIsSet_;
    std::string coldStorageUsedSize_;
    bool coldStorageUsedSizeIsSet_;
    std::string dataNodeVolumeType_;
    bool dataNodeVolumeTypeIsSet_;
    std::string controlNodeVolumeType_;
    bool controlNodeVolumeTypeIsSet_;
    std::string authMode_;
    bool authModeIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string enableDfv_;
    bool enableDfvIsSet_;
    std::string enableFree_;
    bool enableFreeIsSet_;
    std::string enableLemon_;
    bool enableLemonIsSet_;
    std::string enableOpenTSDB_;
    bool enableOpenTSDBIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string zookeeperLink_;
    bool zookeeperLinkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ClusterDetail_H_
