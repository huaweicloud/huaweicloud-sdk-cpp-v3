
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartTextLayerConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartTextLayerConfig_H_


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
/// 素材视频图层配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartTextLayerConfig
    : public ModelBase
{
public:
    SmartTextLayerConfig();
    virtual ~SmartTextLayerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartTextLayerConfig members

    /// <summary>
    /// **参数解释**： 文本类型。 * DYNAMIC：动态文本，需要进行关键字替换。 * STATIC：静态文本。
    /// </summary>

    std::string getTextType() const;
    bool textTypeIsSet() const;
    void unsettextType();
    void setTextType(const std::string& value);

    /// <summary>
    /// 文本。
    /// </summary>

    std::string getTextContext() const;
    bool textContextIsSet() const;
    void unsettextContext();
    void setTextContext(const std::string& value);

    /// <summary>
    /// **参数解释**： 字体。当前支持的字体： * HarmonyOS_Sans_SC_Black：鸿蒙粗体 * HarmonyOS_Sans_SC_Regular：鸿蒙常规 * HarmonyOS_Sans_SC_Thin：鸿蒙细体 * fzyouh：方正瘦体
    /// </summary>

    std::string getFontName() const;
    bool fontNameIsSet() const;
    void unsetfontName();
    void setFontName(const std::string& value);

    /// <summary>
    /// **参数解释**： 字体大小（像素）。  业务取值范围：[4, 120]，请以业务取值范围为准。
    /// </summary>

    int32_t getFontSize() const;
    bool fontSizeIsSet() const;
    void unsetfontSize();
    void setFontSize(int32_t value);

    /// <summary>
    /// **参数解释**： 字体颜色。RGB颜色值。
    /// </summary>

    std::string getFontColor() const;
    bool fontColorIsSet() const;
    void unsetfontColor();
    void setFontColor(const std::string& value);

    /// <summary>
    /// **参数解释**： 文本显示时长，单位s。 显示时长规则为，若携带reply_texts、reply_audios，则与播放语音内容时长保持一致；若未携带，则与匹配的关键词语音内容时长保持一致。
    /// </summary>

    int32_t getDisplayDuration() const;
    bool displayDurationIsSet() const;
    void unsetdisplayDuration();
    void setDisplayDuration(int32_t value);


protected:
    std::string textType_;
    bool textTypeIsSet_;
    std::string textContext_;
    bool textContextIsSet_;
    std::string fontName_;
    bool fontNameIsSet_;
    int32_t fontSize_;
    bool fontSizeIsSet_;
    std::string fontColor_;
    bool fontColorIsSet_;
    int32_t displayDuration_;
    bool displayDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartTextLayerConfig_H_
