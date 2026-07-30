
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResource_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResource_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Taints.h>
#include <huaweicloud/modelarts/v1/model/RootVolume.h>
#include <huaweicloud/modelarts/v1/model/Os.h>
#include <huaweicloud/modelarts/v1/model/DataVolumeItem.h>
#include <huaweicloud/modelarts/v1/model/VolumeGroupConfig.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/NodeNetwork.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ResourceExtendParams.h>
#include <huaweicloud/modelarts/v1/model/UserTags.h>
#include <huaweicloud/modelarts/v1/model/PoolNodeAz.h>
#include <huaweicloud/modelarts/v1/model/CreatingStep.h>
#include <map>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源池资源规格资源量及节点池配置数据模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolResource
    : public ModelBase
{
public:
    PoolResource();
    virtual ~PoolResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolResource members

    /// <summary>
    /// **参数解释**：资源规格名称，比如：modelarts.vm.gpu.t4u8。 **取值范围**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：规格保障使用量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：资源规格的弹性使用量，物理池该值和count相同[，逻辑池该值大于等于count](tag:hcs,hcso)。 **取值范围**：不涉及。
    /// </summary>

    int32_t getMaxCount() const;
    bool maxCountIsSet() const;
    void unsetmaxCount();
    void setMaxCount(int32_t value);

    /// <summary>
    /// **参数解释**：资源池中节点的AZ信息。
    /// </summary>

    std::vector<PoolNodeAz>& getAzs();
    bool azsIsSet() const;
    void unsetazs();
    void setAzs(const std::vector<PoolNodeAz>& value);

    /// <summary>
    /// **参数解释**：节点池名称。比如：nodePool-1。 **取值范围**：不涉及。
    /// </summary>

    std::string getNodePool() const;
    bool nodePoolIsSet() const;
    void unsetnodePool();
    void setNodePool(const std::string& value);

    /// <summary>
    /// **参数解释**：支持给创建出来的节点加taints来设置反亲和性，非特权池不能指定。
    /// </summary>

    std::vector<Taints>& getTaints();
    bool taintsIsSet() const;
    void unsettaints();
    void setTaints(const std::vector<Taints>& value);

    /// <summary>
    /// **参数解释**：k8s标签，格式为key/value键值对。
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**：资源标签，非特权池不能指定。
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

    /// <summary>
    /// 
    /// </summary>

    CreatingStep getCreatingStep() const;
    bool creatingStepIsSet() const;
    void unsetcreatingStep();
    void setCreatingStep(const CreatingStep& value);

    /// <summary>
    /// 
    /// </summary>

    RootVolume getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const RootVolume& value);

    /// <summary>
    /// **参数解释**：自定义数据盘（云硬盘）列表信息。
    /// </summary>

    std::vector<DataVolumeItem>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<DataVolumeItem>& value);

    /// <summary>
    /// **参数解释**：磁盘高级配置。存在自定义数据盘时必须指定对应的高级配置。
    /// </summary>

    std::vector<VolumeGroupConfig>& getVolumeGroupConfigs();
    bool volumeGroupConfigsIsSet() const;
    void unsetvolumeGroupConfigs();
    void setVolumeGroupConfigs(const std::vector<VolumeGroupConfig>& value);

    /// <summary>
    /// 
    /// </summary>

    Os getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const Os& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t maxCount_;
    bool maxCountIsSet_;
    std::vector<PoolNodeAz> azs_;
    bool azsIsSet_;
    std::string nodePool_;
    bool nodePoolIsSet_;
    std::vector<Taints> taints_;
    bool taintsIsSet_;
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;
    std::vector<UserTags> tags_;
    bool tagsIsSet_;
    NodeNetwork network_;
    bool networkIsSet_;
    ResourceExtendParams extendParams_;
    bool extendParamsIsSet_;
    CreatingStep creatingStep_;
    bool creatingStepIsSet_;
    RootVolume rootVolume_;
    bool rootVolumeIsSet_;
    std::vector<DataVolumeItem> dataVolumes_;
    bool dataVolumesIsSet_;
    std::vector<VolumeGroupConfig> volumeGroupConfigs_;
    bool volumeGroupConfigsIsSet_;
    Os os_;
    bool osIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResource_H_
