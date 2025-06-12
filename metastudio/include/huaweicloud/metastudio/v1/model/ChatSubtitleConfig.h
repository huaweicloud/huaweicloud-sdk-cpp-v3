
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChatSubtitleConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChatSubtitleConfig_H_


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
/// 字幕配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ChatSubtitleConfig
    : public ModelBase
{
public:
    ChatSubtitleConfig();
    virtual ~ChatSubtitleConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChatSubtitleConfig members

    /// <summary>
    /// **参数解释**： 字幕左上角像素点坐标。  横屏（16:9）视频像素为1920x1080；竖屏（9:16）视频像素为1080x1920。
    /// </summary>

    int32_t getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(int32_t value);

    /// <summary>
    /// **参数解释**： 字幕左上角像素点坐标。  横屏（16:9）视频像素为1920x1080；竖屏（9:16）视频像素为1080x1920。
    /// </summary>

    int32_t getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(int32_t value);

    /// <summary>
    /// **参数解释**： 图层图片宽度像素值（相对画布大小）。 横屏（16:9）画布像素为1920x1080；竖屏（9:16）画布像素为1080x1920。
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// **参数解释**： 图层图片高度像素值（相对画布大小）。 横屏（16:9）画布像素为1920x1080；竖屏（9:16）画布像素为1080x1920。
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);


protected:
    int32_t dx_;
    bool dxIsSet_;
    int32_t dy_;
    bool dyIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChatSubtitleConfig_H_
