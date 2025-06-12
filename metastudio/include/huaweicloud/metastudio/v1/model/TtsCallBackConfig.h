
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtsCallBackConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtsCallBackConfig_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TtsCallBackConfig
    : public ModelBase
{
public:
    TtsCallBackConfig();
    virtual ~TtsCallBackConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TtsCallBackConfig members

    /// <summary>
    /// 回调URL。 回调请求body为json格式，带参数如下： status: FINISHED或ERROR或者WAITING job_id: 任务id audio_file_download_url: 音频文件路径 subtitle_file_download_url: 字幕文件路径 audio_duration: 音频时长（秒）
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);


protected:
    std::string callbackUrl_;
    bool callbackUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtsCallBackConfig_H_
