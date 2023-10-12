
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_VideoTemplateInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_VideoTemplateInfo_H_


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
/// 模板视频信息
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  VideoTemplateInfo
    : public ModelBase
{
public:
    VideoTemplateInfo();
    virtual ~VideoTemplateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoTemplateInfo members

    /// <summary>
    /// 画质。
    /// </summary>

    std::string getQuality() const;
    bool qualityIsSet() const;
    void unsetquality();
    void setQuality(const std::string& value);

    /// <summary>
    /// 视频宽度。
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频高度。
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 码率。
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 帧率（默认为1，1代表自适应，单位是帧每秒）。
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

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_VideoTemplateInfo_H_
