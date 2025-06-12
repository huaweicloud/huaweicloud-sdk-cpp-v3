
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptAudioFileItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptAudioFileItem_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShootScriptAudioFileItem
    : public ModelBase
{
public:
    ShootScriptAudioFileItem();
    virtual ~ShootScriptAudioFileItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShootScriptAudioFileItem members

    /// <summary>
    /// 剧本序号。
    /// </summary>

    int32_t getSequenceNo() const;
    bool sequenceNoIsSet() const;
    void unsetsequenceNo();
    void setSequenceNo(int32_t value);

    /// <summary>
    /// 语音驱动音频文件上传URL。创建和更新脚本时返回。单个文件最大100M。支持上传MP3/WAV/M4A文件。
    /// </summary>

    std::string getAudioFileUploadUrl() const;
    bool audioFileUploadUrlIsSet() const;
    void unsetaudioFileUploadUrl();
    void setAudioFileUploadUrl(const std::string& value);

    /// <summary>
    /// 语音驱动音频文件下载URL。查询脚本详情时返回。
    /// </summary>

    std::string getAudioFileDownloadUrl() const;
    bool audioFileDownloadUrlIsSet() const;
    void unsetaudioFileDownloadUrl();
    void setAudioFileDownloadUrl(const std::string& value);

    /// <summary>
    /// audio id
    /// </summary>

    int32_t getAudioId() const;
    bool audioIdIsSet() const;
    void unsetaudioId();
    void setAudioId(int32_t value);


protected:
    int32_t sequenceNo_;
    bool sequenceNoIsSet_;
    std::string audioFileUploadUrl_;
    bool audioFileUploadUrlIsSet_;
    std::string audioFileDownloadUrl_;
    bool audioFileDownloadUrlIsSet_;
    int32_t audioId_;
    bool audioIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptAudioFileItem_H_
