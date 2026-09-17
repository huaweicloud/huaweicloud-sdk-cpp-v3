
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
/// **参数解释：** 集群升级动作定义，包含目标版本、升级策略、插件配置等。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
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
    /// **参数解释：** 插件配置列表，CCE会在集群升级过程中按照配置对插件进行升级 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::vector<UpgradeAddonConfig>& getAddons();
    bool addonsIsSet() const;
    void unsetaddons();
    void setAddons(const std::vector<UpgradeAddonConfig>& value);

    /// <summary>
    /// **参数解释：** 节点池内节点升级顺序配置。key表示节点池ID，默认节点池取值为\&quot;DefaultPool\&quot; **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::map<std::string, std::vector<NodePriority>>& getNodeOrder();
    bool nodeOrderIsSet() const;
    void unsetnodeOrder();
    void setNodeOrder(const std::map<std::string, std::vector<NodePriority>>& value);

    /// <summary>
    /// **参数解释：** 节点池升级顺序配置，key/value对格式。key表示节点池ID，默认节点池取值为\&quot;DefaultPool\&quot;，value表示对应节点池的优先级，默认值为0，优先级最低，数值越大优先级越高 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
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
    /// **参数解释：** 升级的目标集群版本，例如\&quot;v1.23\&quot; **约束限制：** 只能升级到高版本，不允许填写等于或低于当前集群版本的值 **取值范围：** CCE支持的集群版本 **默认取值：** 不涉及
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否在集群升级流程中跳过升级前检查。 **约束限制：** 不涉及 **取值范围：** - false：表示在集群升级流程中会执行升级前检查。 - true：表示在集群升级流程中跳过升级前检查。  **默认取值：** false
    /// </summary>

    bool isIsOnlyUpgrade() const;
    bool isOnlyUpgradeIsSet() const;
    void unsetisOnlyUpgrade();
    void setIsOnlyUpgrade(bool value);

    /// <summary>
    /// **参数解释：** 指定集群使用的委托。该委托用于生成集群中组件使用的临时访问凭证，在集群中自动创建其他相关云服务的资源时会使用该委托权限。 当不传时，集群将优先继承原有配置，若原先未配置，则自动选择使用CCE的默认委托CCEAutoClusterAgency；当传空时，自动选择使用CCE的默认委托CCEAutoClusterAgency。  [ &gt; 关于CCE系统委托的说明详情参见[系统委托说明](https://support.huaweicloud.com/usermanual-cce/cce_10_0556.html)](tag:hws) [ &gt; 关于CCE系统委托的说明详情参见[系统委托说明](https://support.huaweicloud.com/intl/zh-cn/usermanual-cce/cce_10_0556.html)](tag:hws_hk)  **约束限制：** 仅v1.28.15-r90、v1.29.15-r50、v1.30.14-r50、v1.31.14-r10、v1.32.9-r10、v1.33.7-r10、v1.34.3-r0及以上版本集群支持该参数 **取值范围：** 不涉及 **默认取值：** 空
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);


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
    std::string agencyName_;
    bool agencyNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterUpgradeAction_H_
