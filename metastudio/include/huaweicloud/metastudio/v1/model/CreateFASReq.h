
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateFASReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateFASReq_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateFASReq
    : public ModelBase
{
public:
    CreateFASReq();
    virtual ~CreateFASReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFASReq members

    /// <summary>
    /// 语音驱动音频文件下载URL，格式为AAC或者MP3
    /// </summary>

    std::string getAudioFileDownloadUrl() const;
    bool audioFileDownloadUrlIsSet() const;
    void unsetaudioFileDownloadUrl();
    void setAudioFileDownloadUrl(const std::string& value);

    /// <summary>
    /// 期望的输出帧率
    /// </summary>

    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);

    /// <summary>
    /// 情绪： 0：平静（默认） 1：开心 2：哀伤 3：愤怒
    /// </summary>

    int32_t getEmotion() const;
    bool emotionIsSet() const;
    void unsetemotion();
    void setEmotion(int32_t value);


protected:
    std::string audioFileDownloadUrl_;
    bool audioFileDownloadUrlIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;
    int32_t emotion_;
    bool emotionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateFASReq_H_
