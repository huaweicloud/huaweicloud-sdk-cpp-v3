
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtsJobFile_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtsJobFile_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TtsJobFile
    : public ModelBase
{
public:
    TtsJobFile();
    virtual ~TtsJobFile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TtsJobFile members

    /// <summary>
    /// 音频文件下载链接，有效期为1个小时。
    /// </summary>

    std::string getAudioFileUrl() const;
    bool audioFileUrlIsSet() const;
    void unsetaudioFileUrl();
    void setAudioFileUrl(const std::string& value);

    /// <summary>
    /// 时间戳文件下载链接，有效期为1个小时。
    /// </summary>

    std::string getAudioInfoFileUrl() const;
    bool audioInfoFileUrlIsSet() const;
    void unsetaudioInfoFileUrl();
    void setAudioInfoFileUrl(const std::string& value);

    /// <summary>
    /// 字幕文件下载链接，有效期为1个小时。
    /// </summary>

    std::string getAudioSrtFileUrl() const;
    bool audioSrtFileUrlIsSet() const;
    void unsetaudioSrtFileUrl();
    void setAudioSrtFileUrl(const std::string& value);

    /// <summary>
    /// 动作分析文件下载链接，有效期为1个小时。
    /// </summary>

    std::string getAudioActionFileUrl() const;
    bool audioActionFileUrlIsSet() const;
    void unsetaudioActionFileUrl();
    void setAudioActionFileUrl(const std::string& value);


protected:
    std::string audioFileUrl_;
    bool audioFileUrlIsSet_;
    std::string audioInfoFileUrl_;
    bool audioInfoFileUrlIsSet_;
    std::string audioSrtFileUrl_;
    bool audioSrtFileUrlIsSet_;
    std::string audioActionFileUrl_;
    bool audioActionFileUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtsJobFile_H_
