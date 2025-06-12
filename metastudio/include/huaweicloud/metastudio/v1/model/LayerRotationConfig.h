
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LayerRotationConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LayerRotationConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 图层旋转配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LayerRotationConfig
    : public ModelBase
{
public:
    LayerRotationConfig();
    virtual ~LayerRotationConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LayerRotationConfig members

    /// <summary>
    /// **参数解释**： 旋转角度。 **取值范围**： 角度范围0-360度。 **默认取值**： 0度。 **约束限制**： 以素材中心点旋转。
    /// </summary>

    int32_t getAngle() const;
    bool angleIsSet() const;
    void unsetangle();
    void setAngle(int32_t value);


protected:
    int32_t angle_;
    bool angleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LayerRotationConfig_H_
