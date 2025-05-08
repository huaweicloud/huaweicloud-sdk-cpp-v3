
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_MetaVideoInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_MetaVideoInfo_H_


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
class HUAWEICLOUD_VOD_V1_EXPORT  MetaVideoInfo
    : public ModelBase
{
public:
    MetaVideoInfo();
    virtual ~MetaVideoInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetaVideoInfo members

    /// <summary>
    /// 视频码率，单位：bit/s 
    /// </summary>

    int64_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int64_t value);

    /// <summary>
    /// 视频编码格式 
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// 帧率 
    /// </summary>

    int32_t getFps() const;
    bool fpsIsSet() const;
    void unsetfps();
    void setFps(int32_t value);

    /// <summary>
    /// 视频高度 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 视频宽度 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);


protected:
    int64_t bitrate_;
    bool bitrateIsSet_;
    std::string codec_;
    bool codecIsSet_;
    int32_t fps_;
    bool fpsIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t width_;
    bool widthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_MetaVideoInfo_H_
