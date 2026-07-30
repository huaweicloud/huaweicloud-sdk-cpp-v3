
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MigrateResourceSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MigrateResourceSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Taints.h>
#include <huaweicloud/modelarts/v1/model/RootVolume.h>
#include <huaweicloud/modelarts/v1/model/DataVolumeItem.h>
#include <huaweicloud/modelarts/v1/model/VolumeGroupConfig.h>
#include <huaweicloud/modelarts/v1/model/UserTags.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/NodeNetwork.h>
#include <huaweicloud/modelarts/v1/model/CreatingStep.h>
#include <map>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ResourceExtendParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 跨资源池迁移节点时目标资源池中节点的配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  MigrateResourceSpec
    : public ModelBase
{
public:
    MigrateResourceSpec();
    virtual ~MigrateResourceSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateResourceSpec members

    /// <summary>
    /// **参数解释**：资源规格名称，跨资源池迁移时该参数必传。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreatingStep getCreatingStep() const;
    bool creatingStepIsSet() const;
    void unsetcreatingStep();
    void setCreatingStep(const CreatingStep& value);

    /// <summary>
    /// **参数解释**：资源迁移的目标节点池名称。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNodePool() const;
    bool nodePoolIsSet() const;
    void unsetnodePool();
    void setNodePool(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RootVolume getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const RootVolume& value);

    /// <summary>
    /// **参数解释**：目标节点池的数据盘盘信息，新建节点池时有效。 **约束限制**：不涉及。
    /// </summary>

    std::vector<DataVolumeItem>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<DataVolumeItem>& value);

    /// <summary>
    /// **参数解释**：磁盘高级配置。存在自定义数据盘时必须指定对应的高级配置，新建节点池时有效。 **约束限制**：不涉及。
    /// </summary>

    std::vector<VolumeGroupConfig>& getVolumeGroupConfigs();
    bool volumeGroupConfigsIsSet() const;
    void unsetvolumeGroupConfigs();
    void setVolumeGroupConfigs(const std::vector<VolumeGroupConfig>& value);

    /// <summary>
    /// **参数解释**：k8s标签，格式为key/value键值对，非特权池不能指定。新建节点池时有效。 **约束限制**：不涉及。
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**：支持给创建出来的节点加taints来设置反亲和性，非特权池不能指定。新建节点池时有效。 **约束限制**：不涉及。
    /// </summary>

    std::vector<Taints>& getTaints();
    bool taintsIsSet() const;
    void unsettaints();
    void setTaints(const std::vector<Taints>& value);

    /// <summary>
    /// **参数解释**：资源标签。新建节点池时有效。 **约束限制**：不涉及。
    /// </summary>

    std::vector<UserTags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<UserTags>& value);

    /// <summary>
    /// 
    /// </summary>

    NodeNetwork getNetwork() const;
    bool networkIsSet() const;
    void unsetnetwork();
    void setNetwork(const NodeNetwork& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceExtendParams getExtendParams() const;
    bool extendParamsIsSet() const;
    void unsetextendParams();
    void setExtendParams(const ResourceExtendParams& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    CreatingStep creatingStep_;
    bool creatingStepIsSet_;
    std::string nodePool_;
    bool nodePoolIsSet_;
    RootVolume rootVolume_;
    bool rootVolumeIsSet_;
    std::vector<DataVolumeItem> dataVolumes_;
    bool dataVolumesIsSet_;
    std::vector<VolumeGroupConfig> volumeGroupConfigs_;
    bool volumeGroupConfigsIsSet_;
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;
    std::vector<Taints> taints_;
    bool taintsIsSet_;
    std::vector<UserTags> tags_;
    bool tagsIsSet_;
    NodeNetwork network_;
    bool networkIsSet_;
    ResourceExtendParams extendParams_;
    bool extendParamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MigrateResourceSpec_H_
