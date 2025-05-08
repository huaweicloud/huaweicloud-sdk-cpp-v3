
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_EditingSetting_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_EditingSetting_H_


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
class HUAWEICLOUD_VOD_V1_EXPORT  EditingSetting
    : public ModelBase
{
public:
    EditingSetting();
    virtual ~EditingSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EditingSetting members

    /// <summary>
    /// 分辨率自适应策略, 选值：OPEN, CLOSE（默认OPEN） 输入为OPEN时，width表示长边，height表示短边 输入为CLOSE时，width表示宽度，height表示长度 
    /// </summary>

    std::string getResolutionAdaptation() const;
    bool resolutionAdaptationIsSet() const;
    void unsetresolutionAdaptation();
    void setResolutionAdaptation(const std::string& value);

    /// <summary>
    /// 分辨率上采样开关, 选值：ON, OFF（默认OFF） 
    /// </summary>

    std::string getResolutionUpsample() const;
    bool resolutionUpsampleIsSet() const;
    void unsetresolutionUpsample();
    void setResolutionUpsample(const std::string& value);

    /// <summary>
    /// 输出封装格式，HLS、MP4（默认MP4）、MP3、MOV、FLV、AVI 
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 输出宽或长边，整型，输入小数向下取整，默认0，按源  - 当 width、height 均为 0，则分辨率取片源分辨率； - 当 width 为 0，height 非 0，则 width 按片源分辨率比例缩放； - 当 width 非 0，height 为 0，则 height 按片源分辨率比例缩放； - 当 width、height 均非 0，则分辨率按用户指定。 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 输出高或短边，整型，输入小数向下取整，默认0，按源  - 当 Width、Height 均为 0，则分辨率取片源分辨率； - 当 Width 为 0，Height 非 0，则 Width 按片源分辨率比例缩放； - 当 Width 非 0，Height 为 0，则 Height 按片源分辨率比例缩放； - 当 Width、Height 均非 0，则分辨率按用户指定。 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 输出参考基准，可选，默认为空  - NONE 输出分辨率按输入的第一个片源为主，码率按输出分辨率自适应，帧率固定输出25fps - MAX_BITRATE 按码率最大的输入片源参数为基准 - MAX_RESOLUTION 按分辨率最大的输入片源参数为基准 
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
    std::string resolutionAdaptation_;
    bool resolutionAdaptationIsSet_;
    std::string resolutionUpsample_;
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

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_EditingSetting_H_
