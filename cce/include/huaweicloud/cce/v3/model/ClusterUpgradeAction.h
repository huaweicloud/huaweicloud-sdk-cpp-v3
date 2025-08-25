
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterUpgradeAction_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterUpgradeAction_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodePriority.h>
#include <string>
#include <huaweicloud/cce/v3/model/UpgradeStrategy.h>
#include <huaweicloud/cce/v3/model/UpgradeAddonConfig.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterUpgradeAction
    : public ModelBase
{
public:
    ClusterUpgradeAction();
    virtual ~ClusterUpgradeAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterUpgradeAction members

    /// <summary>
    /// 插件配置列表
    /// </summary>

    std::vector<UpgradeAddonConfig>& getAddons();
    bool addonsIsSet() const;
    void unsetaddons();
    void setAddons(const std::vector<UpgradeAddonConfig>& value);

    /// <summary>
    /// 节点池内节点升级顺序配置。 &gt; key表示节点池ID，默认节点池取值为\&quot;DefaultPool\&quot; 
    /// </summary>

    std::map<std::string, std::vector<NodePriority>>& getNodeOrder();
    bool nodeOrderIsSet() const;
    void unsetnodeOrder();
    void setNodeOrder(const std::map<std::string, std::vector<NodePriority>>& value);

    /// <summary>
    /// 节点池升级顺序配置，key/value对格式。 &gt; key表示节点池ID，默认节点池取值为\&quot;DefaultPool\&quot; &gt; value表示对应节点池的优先级，默认值为0，优先级最低，数值越大优先级越高 
    /// </summary>

    std::map<std::string, int32_t>& getNodePoolOrder();
    bool nodePoolOrderIsSet() const;
    void unsetnodePoolOrder();
    void setNodePoolOrder(std::map<std::string, int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    UpgradeStrategy getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const UpgradeStrategy& value);

    /// <summary>
    /// 目标集群版本，例如\&quot;v1.23\&quot;
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 是否在集群升级流程中执行升级前检查。默认为false，表示会执行升级前检查，如果您在集群升级编排中调用了升级前检查的API，则升级时可用将该字段置为false，不再额外执行一次检查
    /// </summary>

    bool isIsOnlyUpgrade() const;
    bool isOnlyUpgradeIsSet() const;
    void unsetisOnlyUpgrade();
    void setIsOnlyUpgrade(bool value);


protected:
    std::vector<UpgradeAddonConfig> addons_;
    bool addonsIsSet_;
    std::map<std::string, std::vector<NodePriority>> nodeOrder_;
    bool nodeOrderIsSet_;
    std::map<std::string, int32_t> nodePoolOrder_;
    bool nodePoolOrderIsSet_;
    UpgradeStrategy strategy_;
    bool strategyIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    bool isOnlyUpgrade_;
    bool isOnlyUpgradeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterUpgradeAction_H_
