
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_volumeGroupConfigs_lvmConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_volumeGroupConfigs_lvmConfig_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：LVM配置管理。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecModel_volumeGroupConfigs_lvmConfig
    : public ModelBase
{
public:
    PoolSpecModel_volumeGroupConfigs_lvmConfig();
    virtual ~PoolSpecModel_volumeGroupConfigs_lvmConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecModel_volumeGroupConfigs_lvmConfig members

    /// <summary>
    /// **参数解释**：LVM写入模式 **取值范围**：可选项如下： - linear：线性模式。 - striped：条带模式，使用多块磁盘组成条带模式，能够提升磁盘性能。
    /// </summary>

    std::string getLvType() const;
    bool lvTypeIsSet() const;
    void unsetlvType();
    void setLvType(const std::string& value);


protected:
    std::string lvType_;
    bool lvTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_volumeGroupConfigs_lvmConfig_H_
