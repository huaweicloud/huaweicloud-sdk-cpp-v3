
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeGroupConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeGroupConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/LvmConfig.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  VolumeGroupConfig
    : public ModelBase
{
public:
    VolumeGroupConfig();
    virtual ~VolumeGroupConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeGroupConfig members

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

    LvmConfig getLvmConfig() const;
    bool lvmConfigIsSet() const;
    void unsetlvmConfig();
    void setLvmConfig(const LvmConfig& value);

    /// <summary>
    /// **参数解释**：存储类型。可选项如下： - volume：云硬盘。当指定dataVolumes时，该值为缺省值。 - local：本地盘。使用本地盘必须指定该字段。
    /// </summary>

    std::vector<std::string>& getTypes();
    bool typesIsSet() const;
    void unsettypes();
    void setTypes(const std::vector<std::string>& value);


protected:
    std::string volumeGroup_;
    bool volumeGroupIsSet_;
    int32_t dockerThinPool_;
    bool dockerThinPoolIsSet_;
    LvmConfig lvmConfig_;
    bool lvmConfigIsSet_;
    std::vector<std::string> types_;
    bool typesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_VolumeGroupConfig_H_
