
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CommonInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CommonInfo_H_

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
class HUAWEICLOUD_VOD_V1_EXPORT  CommonInfo
    : public ModelBase
{
public:
    CommonInfo();
    virtual ~CommonInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CommonInfo members

    /// <summary>
    /// pvc开关&lt;br/&gt; 
    /// </summary>

    bool isPvc() const;
    bool pvcIsSet() const;
    void unsetpvc();
    void setPvc(bool value);

    /// <summary>
    /// 视频编码格式&lt;br/&gt; 
    /// </summary>

    std::string getVideoCodec() const;
    bool videoCodecIsSet() const;
    void unsetvideoCodec();
    void setVideoCodec(const std::string& value);

    /// <summary>
    /// 音频编码格式&lt;br/&gt; AAC：AAC格式 (default)&lt;br/&gt; HEAAC1：HEAAC1格式&lt;br/&gt; HEAAC2：HEAAC2格式&lt;br/&gt; MP3：MP3格式&lt;br/&gt; 
    /// </summary>

    std::string getAudioCodec() const;
    bool audioCodecIsSet() const;
    void unsetaudioCodec();
    void setAudioCodec(const std::string& value);

    /// <summary>
    /// 黑边剪裁类型&lt;br/&gt; 
    /// </summary>

    bool isIsBlackCut() const;
    bool isBlackCutIsSet() const;
    void unsetisBlackCut();
    void setIsBlackCut(bool value);

    /// <summary>
    /// 格式&lt;br/&gt; 
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 分片时长(默认为5秒)&lt;br/&gt; 
    /// </summary>

    int32_t getHlsInterval() const;
    bool hlsIntervalIsSet() const;
    void unsethlsInterval();
    void setHlsInterval(int32_t value);

    /// <summary>
    /// 上采样&lt;br/&gt; 
    /// </summary>

    bool isUpsample() const;
    bool upsampleIsSet() const;
    void unsetupsample();
    void setUpsample(bool value);

    /// <summary>
    /// SHORT：短边自适应&lt;br/&gt; LONG：长边自适应&lt;br/&gt; NONE：宽高自适应&lt;br/&gt; 
    /// </summary>

    std::string getAdaptation() const;
    bool adaptationIsSet() const;
    void unsetadaptation();
    void setAdaptation(const std::string& value);


protected:
    bool pvc_;
    bool pvcIsSet_;
    std::string videoCodec_;
    bool videoCodecIsSet_;
    std::string audioCodec_;
    bool audioCodecIsSet_;
    bool isBlackCut_;
    bool isBlackCutIsSet_;
    std::string format_;
    bool formatIsSet_;
    int32_t hlsInterval_;
    bool hlsIntervalIsSet_;
    bool upsample_;
    bool upsampleIsSet_;
    std::string adaptation_;
    bool adaptationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CommonInfo_H_
