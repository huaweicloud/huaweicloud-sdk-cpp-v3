
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtsJobDetail_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtsJobDetail_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TtsJobFile.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 文本转语音任务合成记录。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TtsJobDetail
    : public ModelBase
{
public:
    TtsJobDetail();
    virtual ~TtsJobDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TtsJobDetail members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// websocket任务ID。
    /// </summary>

    std::string getWebsocketJobId() const;
    bool websocketJobIdIsSet() const;
    void unsetwebsocketJobId();
    void setWebsocketJobId(const std::string& value);

    /// <summary>
    /// 音色ID
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 声音版本
    /// </summary>

    std::string getTtsServiceEnum() const;
    bool ttsServiceEnumIsSet() const;
    void unsetttsServiceEnum();
    void setTtsServiceEnum(const std::string& value);

    /// <summary>
    /// 文本长度
    /// </summary>

    int32_t getTextLength() const;
    bool textLengthIsSet() const;
    void unsettextLength();
    void setTextLength(int32_t value);

    /// <summary>
    /// 任务创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 输出音频文件格式。默认WAV。 * WAV：wav格式。 * MP3：mp3格式。 * PCM：pcm格式。
    /// </summary>

    std::string getAudioFormat() const;
    bool audioFormatIsSet() const;
    void unsetaudioFormat();
    void setAudioFormat(const std::string& value);

    /// <summary>
    /// 是否需要时间戳。false为不需要，true为需要返回时间戳信息。默认值为false。
    /// </summary>

    bool isNeedTimestamp() const;
    bool needTimestampIsSet() const;
    void unsetneedTimestamp();
    void setNeedTimestamp(bool value);

    /// <summary>
    /// 是否开启字幕
    /// </summary>

    bool isGenSrt() const;
    bool genSrtIsSet() const;
    void unsetgenSrt();
    void setGenSrt(bool value);

    /// <summary>
    /// 任务类型。 * PRELOAD：预加载任务 * WEBSOCKET：websocket接口任务 * ASYNC_JOB：异步任务 * AUDITION：试听任务
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 任务状态。 * WAITING：等待中 * PROCESSING：合成中 * FAILED：合成失败 * SUCCEED：合成成功
    /// </summary>

    std::string getJobState() const;
    bool jobStateIsSet() const;
    void unsetjobState();
    void setJobState(const std::string& value);

    /// <summary>
    /// 任务合成错误信息
    /// </summary>

    std::string getFailMsg() const;
    bool failMsgIsSet() const;
    void unsetfailMsg();
    void setFailMsg(const std::string& value);

    /// <summary>
    /// 任务合成文件列表。
    /// </summary>

    std::vector<TtsJobFile>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<TtsJobFile>& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string websocketJobId_;
    bool websocketJobIdIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string ttsServiceEnum_;
    bool ttsServiceEnumIsSet_;
    int32_t textLength_;
    bool textLengthIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string audioFormat_;
    bool audioFormatIsSet_;
    bool needTimestamp_;
    bool needTimestampIsSet_;
    bool genSrt_;
    bool genSrtIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string jobState_;
    bool jobStateIsSet_;
    std::string failMsg_;
    bool failMsgIsSet_;
    std::vector<TtsJobFile> files_;
    bool filesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtsJobDetail_H_
