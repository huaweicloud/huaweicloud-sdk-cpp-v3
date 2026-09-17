
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_VolumeConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_VolumeConfig_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点池同步场景磁盘配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  VolumeConfig
    : public ModelBase
{
public:
    VolumeConfig();
    virtual ~VolumeConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeConfig members

    /// <summary>
    /// **参数解释**： 节点重置时磁盘数据的保留策略。 不传或该字段为空时，默认使用reset_managed_volumes策略清空由CCE管理的数据盘。 **约束限制**： 当保留自定义挂载卷时，挂载到指定目录与作为持久存储卷的高级配置不允许修改。 **取值范围**： - reset_managed_volumes：清空由CCE管理的数据盘。 - retain_custom_volumes：保留用户自定义挂载卷（包括挂载到指定目录的卷和用作本地持久卷的卷），集群版本需为v1.29.15-r90、v1.30.14-r90、v1.31.14-r50、v1.32.13-r20、v1.33.12-r0、v1.34.8-r0、v1.35.5-r0、v1.36.1-r10或以上版本。  **默认取值**： reset_managed_volumes
    /// </summary>

    std::string getVolumeResetPolicy() const;
    bool volumeResetPolicyIsSet() const;
    void unsetvolumeResetPolicy();
    void setVolumeResetPolicy(const std::string& value);


protected:
    std::string volumeResetPolicy_;
    bool volumeResetPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_VolumeConfig_H_
