
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_volumeGroupConfigs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_volumeGroupConfigs_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/PoolSpecModel_volumeGroupConfigs_lvmConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：磁盘高级配置信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecModel_volumeGroupConfigs
    : public ModelBase
{
public:
    PoolSpecModel_volumeGroupConfigs();
    virtual ~PoolSpecModel_volumeGroupConfigs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecModel_volumeGroupConfigs members

    /// <summary>
    /// **参数解释**：磁盘分组名称。作为dataVolumes中volumeGroup的索引。 **取值范围**：不涉及。
    /// </summary>

    std::string getVolumeGroup() const;
    bool volumeGroupIsSet() const;
    void unsetvolumeGroup();
    void setVolumeGroup(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池节点容器盘占数据盘的百分比。仅磁盘分组名称为vgpaas时，即容器盘，才可指定此参数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getDockerThinPool() const;
    bool dockerThinPoolIsSet() const;
    void unsetdockerThinPool();
    void setDockerThinPool(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecModel_volumeGroupConfigs_lvmConfig getLvmConfig() const;
    bool lvmConfigIsSet() const;
    void unsetlvmConfig();
    void setLvmConfig(const PoolSpecModel_volumeGroupConfigs_lvmConfig& value);


protected:
    std::string volumeGroup_;
    bool volumeGroupIsSet_;
    int32_t dockerThinPool_;
    bool dockerThinPoolIsSet_;
    PoolSpecModel_volumeGroupConfigs_lvmConfig lvmConfig_;
    bool lvmConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_volumeGroupConfigs_H_
