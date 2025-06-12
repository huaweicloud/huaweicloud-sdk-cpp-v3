
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatVideoConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatVideoConfig_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartChatVideoConfig
    : public ModelBase
{
public:
    SmartChatVideoConfig();
    virtual ~SmartChatVideoConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartChatVideoConfig members

    /// <summary>
    /// 视频宽度。  单位：像素。  最小值320，最大值2560。 &gt; * clip_mode&#x3D;RESIZE时，当前支持1920x1080、1080x1920、1280x720、720x1280、3840x2160、2160x3840六种分辨率。4K分辨率视频需要分身数字人模型支持4K的情况下才能使用。 &gt; * clip_mode&#x3D;CROP，裁剪后视频，（dx,dy）为原点，保留视频像宽度为width。 &gt; * 分身数字人直播目前只支持1080x1920。
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频高度。  单位：像素。  最小值320，最大值2560。 &gt; * clip_mode&#x3D;RESIZE时，当前支持1920x1080、1080x1920、1280x720、720x1280、3840x2160、2160x3840六种分辨率分辨率。 &gt; * clip_mode&#x3D;CROP，裁剪后视频，（dx,dy）为原点，保留视频像高度为height。 &gt; * 分身数字人直播目前只支持1080x1920。
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);


protected:
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatVideoConfig_H_
