
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_VodEditingSetting_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_VodEditingSetting_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  VodEditingSetting
    : public ModelBase
{
public:
    VodEditingSetting();
    virtual ~VodEditingSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VodEditingSetting members

    /// <summary>
    /// 分辨率自适应策略, 选值：true, false（默认true） 输入为true时，width表示长边，height表示短边 输入为false时，width表示宽度，height表示长度 
    /// </summary>

    bool isResolutionAdaptation() const;
    bool resolutionAdaptationIsSet() const;
    void unsetresolutionAdaptation();
    void setResolutionAdaptation(bool value);

    /// <summary>
    /// 分辨率上采样开关, 选值：true, false（默认false），若为false则按照原片源输出，分辨率不会上浮。 
    /// </summary>

    bool isResolutionUpsample() const;
    bool resolutionUpsampleIsSet() const;
    void unsetresolutionUpsample();
    void setResolutionUpsample(bool value);

    /// <summary>
    /// 输出封装格式，HLS、MP4（默认MP4）、MP3、MOV、FLV、AVI。 不支持将视频文件输出成音频封装格式。 
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 输出宽或长边，整型，输入小数向下取整，默认0，按源  - 当width、height均为0，则分辨率取片源分辨率； - 当width为0，height非0，则width按片源分辨率比例缩放； - 当width非0，height为0，则height按片源分辨率比例缩放； - 当width、height均非0，则分辨率按用户指定。 - 当视频编码为H.264时，则width最小值为32，最大值为4096。 - 当视频编码为H.265，则width最小值为160，最大值为4096。 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 输出高或短边，整型，输入小数向下取整，默认0，按源  - 当Width、Height均为0，则分辨率取片源分辨率； - 当Width为0，Height非0，则Width按片源分辨率比例缩放； - 当Width非0，Height为0，则Height按片源分辨率比例缩放； - 当Width、Height 均非0，则分辨率按用户指定。 - 当视频编码为H.264时，则height最小值为32，最大值为2880。 - 当视频编码为H.265，则height最小值为160，最大值为2880。 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 输出参考基准，可选，默认为NONE  - NONE 输出分辨率按输入的第一个片源为主，码率按输出分辨率自适应 - MAX_BITRATE 按码率最大的输入片源参数为基准 - MAX_RESOLUTION 按分辨率最大的输入片源参数为基准 
    /// </summary>

    std::string getReference() const;
    bool referenceIsSet() const;
    void unsetreference();
    void setReference(const std::string& value);

    /// <summary>
    /// 视频编码格式。 取值如下： - 1：VIDEO_CODEC_H264 - 2：VIDEO_CODEC_H265 
    /// </summary>

    int32_t getVideoCodec() const;
    bool videoCodecIsSet() const;
    void unsetvideoCodec();
    void setVideoCodec(int32_t value);


protected:
    bool resolutionAdaptation_;
    bool resolutionAdaptationIsSet_;
    bool resolutionUpsample_;
    bool resolutionUpsampleIsSet_;
    std::string format_;
    bool formatIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::string reference_;
    bool referenceIsSet_;
    int32_t videoCodec_;
    bool videoCodecIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_VodEditingSetting_H_
