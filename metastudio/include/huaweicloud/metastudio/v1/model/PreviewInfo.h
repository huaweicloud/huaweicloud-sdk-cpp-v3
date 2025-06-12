
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PreviewInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PreviewInfo_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PreviewInfo
    : public ModelBase
{
public:
    PreviewInfo();
    virtual ~PreviewInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreviewInfo members

    /// <summary>
    /// 文本内容hash值
    /// </summary>

    std::string getTextSha256() const;
    bool textSha256IsSet() const;
    void unsettextSha256();
    void setTextSha256(const std::string& value);

    /// <summary>
    /// 文本对应音频文件下载链接
    /// </summary>

    std::string getAudioFileDownloadUrl() const;
    bool audioFileDownloadUrlIsSet() const;
    void unsetaudioFileDownloadUrl();
    void setAudioFileDownloadUrl(const std::string& value);

    /// <summary>
    /// 动作编排列表文件下载链接
    /// </summary>

    std::string getActionFileDownloadUrl() const;
    bool actionFileDownloadUrlIsSet() const;
    void unsetactionFileDownloadUrl();
    void setActionFileDownloadUrl(const std::string& value);

    /// <summary>
    /// 音频时长，单位秒。
    /// </summary>

    float getAudioDuration() const;
    bool audioDurationIsSet() const;
    void unsetaudioDuration();
    void setAudioDuration(float value);


protected:
    std::string textSha256_;
    bool textSha256IsSet_;
    std::string audioFileDownloadUrl_;
    bool audioFileDownloadUrlIsSet_;
    std::string actionFileDownloadUrl_;
    bool actionFileDownloadUrlIsSet_;
    float audioDuration_;
    bool audioDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PreviewInfo_H_
