
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SystemProperty_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SystemProperty_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SystemProperty
    : public ModelBase
{
public:
    SystemProperty();
    virtual ~SystemProperty();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SystemProperty members

    /// <summary>
    /// **参数解释**： 操作。 **约束限制**： 系统属性仅为系统设置，普通用户无法修改。 **取值范围**： * ADD：增加 * DELETE：删除  **默认取值**： 不涉及
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**： 系统属性条目。 **约束限制**： 系统属性仅为系统设置，普通用户无法修改。 **取值范围**： 公共资产属性： * BACKGROUND_IMG：视频制作的背景图片。value设置成Yes * CREATED_BY_PLATFORM: 是否平台生成。  分身数字人资产属性： * MATERIAL_IMG：素材图片，用作图片图层。value设置成Yes，否则控制台视频制作、直播等界面的贴图区域，将无法看到此图片。 * MATERIAL_VIDEO：素材视频，用作视频图层。value设置成Yes，否则控制台视频制作、直播等界面的视频区域，将无法看到此视频。 * DIGITAL_HUMAN_2D_VIDEO：分身数字人视频。 * DIGITAL_HUMAN_3D_VIDEO：3D数字人视频。 * BUSINESS_CARD_VIDEO：名片视频。 * BUSSINESS_CARD_VIDEO：名片视频(过期) * PHOTO_VIDEO：照片数字人视频。   视频翻译资产属性： * TO_BE_TRANSLATED_VIDEO: 视频翻译的源视频。可取值Yes。 * TRANSLATED_VIDEO: 视频翻译后的视频  3D数字人资产属性： * STYLE_ID：风格Id。 * DH_ID：数字人ID(尚未启用)。 * PLATFORM_AVAILABLE：是否平台可用(尚未启用)。 * RENDER_ENGINE：引擎类型。value可选UE或MetaEngine。 * BACKGROUND_SCENE：视频制作的2D背景场景。value可选Horizontal（横屏）或者Vertical（竖屏）。 * LAYER_CONFIG_ENABLE: 可用前景图层配置 * MEITUAN_MATERIAL_APPROVED: 美团平台已审核标识，value设置成YES。  **默认取值**： 不涉及
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 系统属性属性值。 **约束限制**： 系统属性仅为系统设置，普通用户无法修改。 **取值范围**： 字符长度1-1024位 **默认取值** 不涉及
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SystemProperty_H_
