
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowAsyncTtsJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowAsyncTtsJobResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowAsyncTtsJobResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAsyncTtsJobResponse();
    virtual ~ShowAsyncTtsJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAsyncTtsJobResponse members

    /// <summary>
    /// 音频文件是否已生成完成。该标记为PROCESSING时，应该每隔3秒再次调用本接口获取音频文件(WAITING 等待中,PROCESSING 处理中,SUCCEED 成功,FAILED 失败)。当存在该字段时，会返回以下文件的下载链接。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 返回码。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 异常信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 音频文件下载链接，有效期为1个小时。
    /// </summary>

    std::string getAudioFileUrl() const;
    bool audioFileUrlIsSet() const;
    void unsetaudioFileUrl();
    void setAudioFileUrl(const std::string& value);

    /// <summary>
    /// 音频信息文件下载链接，有效期为1个小时。
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
    /// 动作信息文件下载链接，有效期为1个小时。
    /// </summary>

    std::string getAudioActionFileUrl() const;
    bool audioActionFileUrlIsSet() const;
    void unsetaudioActionFileUrl();
    void setAudioActionFileUrl(const std::string& value);


protected:
    std::string state_;
    bool stateIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string audioFileUrl_;
    bool audioFileUrlIsSet_;
    std::string audioInfoFileUrl_;
    bool audioInfoFileUrlIsSet_;
    std::string audioSrtFileUrl_;
    bool audioSrtFileUrlIsSet_;
    std::string audioActionFileUrl_;
    bool audioActionFileUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowAsyncTtsJobResponse_H_
