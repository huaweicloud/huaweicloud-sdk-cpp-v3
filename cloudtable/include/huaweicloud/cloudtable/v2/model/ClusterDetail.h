
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
