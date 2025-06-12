
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleConfig_H_


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
/// 字幕配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SubtitleConfig
    : public ModelBase
{
public:
    SubtitleConfig();
    virtual ~SubtitleConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubtitleConfig members

    /// <summary>
    /// **参数解释**： 字幕框左下角像素点坐标。 **约束限制**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(int32_t value);

    /// <summary>
    /// **参数解释**： 字幕框左下角像素点坐标。 **约束限制**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(int32_t value);

    /// <summary>
    /// **参数解释**： 字幕框高度。 **约束限制**： 参数h用于方便前端计算字幕框左上角坐标，后台不使用该参数。
    /// </summary>

    int32_t getH() const;
    bool HIsSet() const;
    void unseth();
    void setH(int32_t value);

    /// <summary>
    /// **参数解释**： 字幕框宽度。 **约束限制**： * 字幕框宽度固定为屏幕宽度的80% * 参数w用于方便前端计算字幕框左上角坐标，后台不使用该参数
    /// </summary>

    int32_t getW() const;
    bool WIsSet() const;
    void unsetw();
    void setW(int32_t value);

    /// <summary>
    /// **参数解释**： 字体。当前支持的字体请参考[服务支持的字体](metastudio_02_0041.xml) **约束限制**： 不涉及。 **取值范围**： 字符长度0-64位
    /// </summary>

    std::string getFontName() const;
    bool fontNameIsSet() const;
    void unsetfontName();
    void setFontName(const std::string& value);

    /// <summary>
    /// **参数解释**： 字体大小。接口的取值范围为0-120，实际业务使用的取值范围要求为24-120，请以业务实际使用要求为准。 **约束限制**： 不涉及。
    /// </summary>

    int32_t getFontSize() const;
    bool fontSizeIsSet() const;
    void unsetfontSize();
    void setFontSize(int32_t value);

    /// <summary>
    /// **参数解释**： 字幕字体颜色的RGB颜色值。 **约束限制**： 无 **取值范围**： 字符长度0-7位，固定长度
    /// </summary>

    std::string getFontColor() const;
    bool fontColorIsSet() const;
    void unsetfontColor();
    void setFontColor(const std::string& value);

    /// <summary>
    /// **参数解释**： 字幕字体描边颜色的RGB颜色值。 **约束限制**： 无 **取值范围**： 字符长度0-7位，固定长度
    /// </summary>

    std::string getStrokeColor() const;
    bool strokeColorIsSet() const;
    void unsetstrokeColor();
    void setStrokeColor(const std::string& value);

    /// <summary>
    /// **参数解释**： 字幕字体描边粗细像素值。 **约束限制**： 无 **取值范围**： 0-50
    /// </summary>

    float getStrokeThickness() const;
    bool strokeThicknessIsSet() const;
    void unsetstrokeThickness();
    void setStrokeThickness(float value);

    /// <summary>
    /// **参数解释**： 字幕字体不透明度，0表示完全透明，1表示完全不透明。默认1。 **约束限制**： 无 **取值范围**： 0-1
    /// </summary>

    float getOpacity() const;
    bool opacityIsSet() const;
    void unsetopacity();
    void setOpacity(float value);


protected:
    int32_t dx_;
    bool dxIsSet_;
    int32_t dy_;
    bool dyIsSet_;
    int32_t h_;
    bool hIsSet_;
    int32_t w_;
    bool wIsSet_;
    std::string fontName_;
    bool fontNameIsSet_;
    int32_t fontSize_;
    bool fontSizeIsSet_;
    std::string fontColor_;
    bool fontColorIsSet_;
    std::string strokeColor_;
    bool strokeColorIsSet_;
    float strokeThickness_;
    bool strokeThicknessIsSet_;
    float opacity_;
    bool opacityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleConfig_H_
