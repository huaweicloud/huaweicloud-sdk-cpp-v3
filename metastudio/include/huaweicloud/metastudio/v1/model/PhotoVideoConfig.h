
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PhotoVideoConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PhotoVideoConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 视频输出配置。照片数字人支持该输出配置查询，不支持修改。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PhotoVideoConfig
    : public ModelBase
{
public:
    PhotoVideoConfig();
    virtual ~PhotoVideoConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PhotoVideoConfig members

    /// <summary>
    /// 视频编码格式及视频文件格式。 * H264：h264编码，输出mp4文件
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// **参数解释**： 输出平均码率。  单位：kbps。  最小值40，最大值30000。
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// 帧率。  单位：FPS。
    /// </summary>

    std::string getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(const std::string& value);


protected:
    std::string codec_;
    bool codecIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    std::string frameRate_;
    bool frameRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PhotoVideoConfig_H_
