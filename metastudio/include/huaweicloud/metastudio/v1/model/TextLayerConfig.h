
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TextLayerConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TextLayerConfig_H_


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
/// 素材文字图层配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TextLayerConfig
    : public ModelBase
{
public:
    TextLayerConfig();
    virtual ~TextLayerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TextLayerConfig members

    /// <summary>
    /// **参数解释**： 文字图层的文本，内容需做Base64编码。  示例：若想添加文字水印“测试文字水印”，那么text_context的值为：5rWL6K+V5paH5a2X5rC05Y2w **约束限制**： 不涉及。 **取值范围**： 字符长度0-1024位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getTextContext() const;
    bool textContextIsSet() const;
    void unsettextContext();
    void setTextContext(const std::string& value);

    /// <summary>
    /// 字体。当前支持的字体请参考[服务支持的字体](metastudio_02_0041.xml) **约束限制**： 不涉及。 **取值范围**： 字符长度0-64位
    /// </summary>

    std::string getFontName() const;
    bool fontNameIsSet() const;
    void unsetfontName();
    void setFontName(const std::string& value);

    /// <summary>
    /// **参数解释**： 字体大小（像素）。接口的取值范围为0-120，实际业务使用的取值范围要求为4-120，请以业务实际使用要求为准。  **约束限制**： 不涉及。
    /// </summary>

    int32_t getFontSize() const;
    bool fontSizeIsSet() const;
    void unsetfontSize();
    void setFontSize(int32_t value);

    /// <summary>
    /// **参数解释**： 字体颜色。RGB颜色值。  **约束限制**： 不涉及。 **取值范围**： 字符长度0-16位
    /// </summary>

    std::string getFontColor() const;
    bool fontColorIsSet() const;
    void unsetfontColor();
    void setFontColor(const std::string& value);


protected:
    std::string textContext_;
    bool textContextIsSet_;
    std::string fontName_;
    bool fontNameIsSet_;
    int32_t fontSize_;
    bool fontSizeIsSet_;
    std::string fontColor_;
    bool fontColorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TextLayerConfig_H_
