
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_MetaData_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_MetaData_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 视频的元数据信息。  经过视频解析后产生，包括封装格式、大小、分辨率、码率、帧率。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  MetaData
    : public ModelBase
{
public:
    MetaData();
    virtual ~MetaData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MetaData members

    /// <summary>
    /// 视频封装格式。  取值如下： - MP4 - TS - MOV - MXF - MPG - FLV - WMV - MP3 - WMA - APE - FLAC - AAC - AC3 - MMF - AMR - M4A - M4R - OGG - WAV - WV - MP2 - AVI - F4V - M4V - MPEG - HLS - DASH
    /// </summary>

    std::string getPackType() const;
    bool packTypeIsSet() const;
    void unsetpackType();
    void setPackType(const std::string& value);

    /// <summary>
    /// 视频编码格式。  取值如下： - MPEG-2 - MPEG-4 - H.264 - H.265 - WMV - Vorbis - AAC - AC-3 - AMR - APE - FLAC - MP3 - MP2 - WMA - PCM - ADPCM - WavPack
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// 视频时长。  若视频的原时长为非整数，则该字段值为原时长的向上取整。
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);

    /// <summary>
    /// 视频文件大小。  单位：字节。
    /// </summary>

    int64_t getVideoSize() const;
    bool videoSizeIsSet() const;
    void unsetvideoSize();
    void setVideoSize(int64_t value);

    /// <summary>
    /// 视频宽度（单位：像素）。 - 编码为H.264的取值范围：[32,3840]之间2的倍数。 - 编码为H.265的取值范围：[320,3840]之间4的倍数。
    /// </summary>

    int64_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int64_t value);

    /// <summary>
    /// 视频高度（单位：像素）。 - 编码为H.264的取值范围：[32,2160]之间2的倍数 。 - 编码为H.265的取值范围：[240,2160]之间4的倍数。
    /// </summary>

    int64_t getHight() const;
    bool hightIsSet() const;
    void unsethight();
    void setHight(int64_t value);

    /// <summary>
    /// 视频平均码率。
    /// </summary>

    int64_t getBitRate() const;
    bool bitRateIsSet() const;
    void unsetbitRate();
    void setBitRate(int64_t value);

    /// <summary>
    /// 帧率（单位：帧每秒）。  取值如下： - FRAMERATE_AUTO &#x3D; 1, - FRAMERATE_10 &#x3D; 2, - FRAMERATE_15 &#x3D; 3, - FRAMERATE_2397 &#x3D; 4, // 23.97 fps - FRAMERATE_24 &#x3D; 5, - FRAMERATE_25 &#x3D; 6, - FRAMERATE_2997 &#x3D; 7, // 29.97 fps - FRAMERATE_30 &#x3D; 8, - FRAMERATE_50 &#x3D; 9, - FRAMERATE_60 &#x3D; 10  默认值：1。  单位：帧每秒。
    /// </summary>

    int64_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int64_t value);

    /// <summary>
    /// 清晰度。  取值如下： - FULL_HD：超高清 - HD：高清 - SD：标清 - FLUENT：流畅 - AD：自适应 - 2K - 4K
    /// </summary>

    std::string getQuality() const;
    bool qualityIsSet() const;
    void unsetquality();
    void setQuality(const std::string& value);

    /// <summary>
    /// 音频的声道数。
    /// </summary>

    int32_t getAudioChannels() const;
    bool audioChannelsIsSet() const;
    void unsetaudioChannels();
    void setAudioChannels(int32_t value);


protected:
    std::string packType_;
    bool packTypeIsSet_;
    std::string codec_;
    bool codecIsSet_;
    int64_t duration_;
    bool durationIsSet_;
    int64_t videoSize_;
    bool videoSizeIsSet_;
    int64_t width_;
    bool widthIsSet_;
    int64_t hight_;
    bool hightIsSet_;
    int64_t bitRate_;
    bool bitRateIsSet_;
    int64_t frameRate_;
    bool frameRateIsSet_;
    std::string quality_;
    bool qualityIsSet_;
    int32_t audioChannels_;
    bool audioChannelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_MetaData_H_
