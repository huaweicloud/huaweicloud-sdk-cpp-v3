
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoInfo_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  VideoInfo
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
    /// 视频宽度
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频高度
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 视频码率，单位: kbit/s 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 视频码率，单位: bit/s 
    /// </summary>

    int64_t getBitrateBps() const;
    bool bitrateBpsIsSet() const;
    void unsetbitrateBps();
    void setBitrateBps(int64_t value);

    /// <summary>
    /// 帧率。    取值范围：0或[5,60]，0表示自适应。    单位：帧每秒。    &gt; 若设置的帧率不在取值范围内，则自动调整为0，若设置的帧率高于片源帧率，则自动调整为片源帧率。 
    /// </summary>

    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);

    /// <summary>
    /// 视频编码格式
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);


protected:
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int64_t bitrateBps_;
    bool bitrateBpsIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;
    std::string codec_;
    bool codecIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoInfo_H_
