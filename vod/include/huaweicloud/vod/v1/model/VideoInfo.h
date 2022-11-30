
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_VideoInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_VideoInfo_H_

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
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  VideoInfo
    : public ModelBase
{
public:
    VideoInfo();
    virtual ~VideoInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VideoInfo members

    /// <summary>
    /// 画质&lt;br/&gt; 4K默认分辨率3840*2160，码率8000kbit/s&lt;br/&gt; 2K默认分辨率2560*1440，码率7000kbit/s&lt;br/&gt; FULL_HD默认分辨率1920*1080，码率3000kbit/s&lt;br/&gt; HD默认分辨率1280*720，码率1000kbit/s&lt;br/&gt; SD默认分辨率854*480，码率600kbit/s&lt;br/&gt; FLUENT默认分辨率480*270，码率300kbit/s&lt;br/&gt; 
    /// </summary>

    std::string getQuality() const;
    bool qualityIsSet() const;
    void unsetquality();
    void setQuality(const std::string& value);

    /// <summary>
    /// 视频宽度&lt;br/&gt; 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频高度&lt;br/&gt; 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 码率,单位：kbit/s&lt;br/&gt; 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 帧率（默认为0，0代表自适应，单位是帧每秒）&lt;br/&gt; 
    /// </summary>

    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);


protected:
    std::string quality_;
    bool qualityIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_VideoInfo_H_
