
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoParameters_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoParameters_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/mpc/v1/model/OutputPolicy.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  VideoParameters
    : public ModelBase
{
public:
    VideoParameters();
    virtual ~VideoParameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoParameters members

    /// <summary>
    /// 输出策略。  取值如下： - discard - transcode  &gt;- 当视频参数中的“output_policy”为\&quot;discard\&quot;，且音频参数中的“output_policy”为“transcode”时，表示只输出音频。 &gt;- 当视频参数中的“output_policy”为\&quot;transcode\&quot;，且音频参数中的“output_policy”为“discard”时，表示只输出视频。 &gt;- 同时为\&quot;discard\&quot;时不合法。 &gt;- 同时为“transcode”时，表示输出音视频。 
    /// </summary>

    std::string getOutputPolicy() const;
    bool outputPolicyIsSet() const;
    void unsetoutputPolicy();
    void setOutputPolicy(const std::string& value);

    /// <summary>
    /// 视频编码格式。  取值如下： - 1：VIDEO_CODEC_H264 - 2：VIDEO_CODEC_H265 
    /// </summary>

    int32_t getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(int32_t value);

    /// <summary>
    /// 视频恒定码率控制因子。  取值范围为[0, 51] 
    /// </summary>

    Object getCrf() const;
    bool crfIsSet() const;
    void unsetcrf();
    void setCrf(const Object& value);

    /// <summary>
    /// 输出最大码率，基于crf，设置max_bitrate字段才会开启ccrf  取值范围：0或[40,800000]之间的整数。   单位：kbit/s  带crf时使用，参考原片的平均码率进行设置（一般为1.5倍） 
    /// </summary>

    int32_t getMaxBitrate() const;
    bool maxBitrateIsSet() const;
    void unsetmaxBitrate();
    void setMaxBitrate(int32_t value);

    /// <summary>
    /// 输出平均码率。  取值范围：0或[40,50000]之间的整数。  单位：kbit/s  若设置为0，则输出平均码率为自适应值。 
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// ccrf时的缓冲区大小,建议与max_bitrate保持一致，避免编码器缓冲区溢出  取值范围：0或[40,800000]之间的整数。  单位：kbit 
    /// </summary>

    int32_t getBufSize() const;
    bool bufSizeIsSet() const;
    void unsetbufSize();
    void setBufSize(int32_t value);

    /// <summary>
    /// 编码档次  取值如下： - 1：VIDEO_PROFILE_H264_BASE - 2：VIDEO_PROFILE_H264_MAIN - 3：VIDEO_PROFILE_H264_HIGH - 4：VIDEO_PROFILE_H265_MAIN 
    /// </summary>

    int32_t getProfile() const;
    bool profileIsSet() const;
    void unsetprofile();
    void setProfile(int32_t value);

    /// <summary>
    /// 编码级别  取值如下： - 1：VIDEO_LEVEL_1_0 - 2：VIDEO_LEVEL_1_1 - 3：VIDEO_LEVEL_1_2 - 4：VIDEO_LEVEL_1_3 - 5：VIDEO_LEVEL_2_0 - 6：VIDEO_LEVEL_2_1 - 7：VIDEO_LEVEL_2_2 - 8：VIDEO_LEVEL_3_0 - 9：VIDEO_LEVEL_3_1 - 10：VIDEO_LEVEL_3_2 - 11：VIDEO_LEVEL_4_0 - 12：VIDEO_LEVEL_4_1 - 13：VIDEO_LEVEL_4_2 - 14：VIDEO_LEVEL_5_0 - 15：VIDEO_LEVEL_5_1 - 16：VIDEO_LEVEL_x_x 
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// 编码质量等级  取值如下： - 1：VIDEO_PRESET_SPEED，编码快速档位 - 3：VIDEO_PRESET_HIGHQUALITY，编码高质量档位 - 4：VIDEO_PRESET_QUALITY，编码质量档位 - 5：VIDEO_PRESET_BALANCE，编码平衡档位  默认值1。 
    /// </summary>

    int32_t getPreset() const;
    bool presetIsSet() const;
    void unsetpreset();
    void setPreset(int32_t value);

    /// <summary>
    /// I帧最大间隔  取值范围：[2，10]。  默认值：5。  单位：秒。 
    /// </summary>

    int32_t getMaxIframesInterval() const;
    bool maxIframesIntervalIsSet() const;
    void unsetmaxIframesInterval();
    void setMaxIframesInterval(int32_t value);

    /// <summary>
    /// 最大B帧间隔。  取值范围： - H264：[0，7]，默认值为4。 - H265：[0，7]，默认值为7。  单位：帧。 
    /// </summary>

    int32_t getBframesCount() const;
    bool bframesCountIsSet() const;
    void unsetbframesCount();
    void setBframesCount(int32_t value);

    /// <summary>
    /// 帧率。  取值范围：0或[5,60]，0表示自适应。  单位：帧每秒。  &gt; 若设置的帧率不在取值范围内，则自动调整为0，若设置的帧率高于片源帧率，则自动调整为片源帧率。 
    /// </summary>

    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);

    /// <summary>
    /// 帧率。  取值范围：0或[5,60]，0表示自适应。  单位：帧每秒。  &gt; 若设置的帧率不在取值范围内，则自动调整为0，若设置的帧率高于片源帧率，则自动调整为片源帧率。 
    /// </summary>

    float getFrameRateFloat() const;
    bool frameRateFloatIsSet() const;
    void unsetframeRateFloat();
    void setFrameRateFloat(float value);

    /// <summary>
    /// 视频宽度（单位：像素）  - H264：范围[32,4096]，必须为2的倍数 - H265：范围[320,4096]，必须是4的倍数 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 视频高度（单位：像素）  - H264：范围[32,2880]，必须为2的倍数 - H265：范围[240,2880] ，必须是4的倍数 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 黑边剪裁类型  - 0：不开启黑边剪裁 - 1：开启黑边剪裁，低复杂度算法，针对长视频（&gt;5分钟） - 2：开启黑边剪裁，高复杂度算法，针对短视频（&lt;&#x3D;5分钟） 
    /// </summary>

    int32_t getBlackCut() const;
    bool blackCutIsSet() const;
    void unsetblackCut();
    void setBlackCut(int32_t value);

    /// <summary>
    /// 流名称 
    /// </summary>

    std::string getStreamName() const;
    bool streamNameIsSet() const;
    void unsetstreamName();
    void setStreamName(const std::string& value);


protected:
    std::string outputPolicy_;
    bool outputPolicyIsSet_;
    int32_t codec_;
    bool codecIsSet_;
    Object crf_;
    bool crfIsSet_;
    int32_t maxBitrate_;
    bool maxBitrateIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t bufSize_;
    bool bufSizeIsSet_;
    int32_t profile_;
    bool profileIsSet_;
    int32_t level_;
    bool levelIsSet_;
    int32_t preset_;
    bool presetIsSet_;
    int32_t maxIframesInterval_;
    bool maxIframesIntervalIsSet_;
    int32_t bframesCount_;
    bool bframesCountIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;
    float frameRateFloat_;
    bool frameRateFloatIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    int32_t blackCut_;
    bool blackCutIsSet_;
    std::string streamName_;
    bool streamNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_VideoParameters_H_
