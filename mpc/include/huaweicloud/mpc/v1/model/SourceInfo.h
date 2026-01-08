
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_SourceInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_SourceInfo_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/VideoInfo.h>
#include <huaweicloud/mpc/v1/model/AudioInfo.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_MPC_V1_EXPORT  SourceInfo
    : public ModelBase
{
public:
    SourceInfo();
    virtual ~SourceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SourceInfo members

    /// <summary>
    /// 片源时长，单位：秒
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 片源时长，单位：毫秒
    /// </summary>

    int64_t getDurationMs() const;
    bool durationMsIsSet() const;
    void unsetdurationMs();
    void setDurationMs(int64_t value);

    /// <summary>
    /// 片源格式
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 片源大小
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 独立mpd索引文件名 
    /// </summary>

    std::string getManifestName() const;
    bool manifestNameIsSet() const;
    void unsetmanifestName();
    void setManifestName(const std::string& value);

    /// <summary>
    /// 视频的 md5 值。 
    /// </summary>

    std::string getMd5() const;
    bool md5IsSet() const;
    void unsetmd5();
    void setMd5(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VideoInfo getVideoInfo() const;
    bool videoInfoIsSet() const;
    void unsetvideoInfo();
    void setVideoInfo(const VideoInfo& value);

    /// <summary>
    /// 音频信息
    /// </summary>

    std::vector<AudioInfo>& getAudioInfo();
    bool audioInfoIsSet() const;
    void unsetaudioInfo();
    void setAudioInfo(const std::vector<AudioInfo>& value);


protected:
    int32_t duration_;
    bool durationIsSet_;
    int64_t durationMs_;
    bool durationMsIsSet_;
    std::string format_;
    bool formatIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string manifestName_;
    bool manifestNameIsSet_;
    std::string md5_;
    bool md5IsSet_;
    VideoInfo videoInfo_;
    bool videoInfoIsSet_;
    std::vector<AudioInfo> audioInfo_;
    bool audioInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_SourceInfo_H_
