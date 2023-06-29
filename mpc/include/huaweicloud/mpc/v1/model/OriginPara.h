
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_OriginPara_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_OriginPara_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/VideoInfo.h>
#include <huaweicloud/mpc/v1/model/AudioInfo.h>
#include <string>

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
class HUAWEICLOUD_MPC_V1_EXPORT  OriginPara
    : public ModelBase
{
public:
    OriginPara();
    virtual ~OriginPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OriginPara members

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
    /// 文件格式 
    /// </summary>

    std::string getFileFormat() const;
    bool fileFormatIsSet() const;
    void unsetfileFormat();
    void setFileFormat(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VideoInfo getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const VideoInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AudioInfo getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const AudioInfo& value);


protected:
    int32_t duration_;
    bool durationIsSet_;
    int64_t durationMs_;
    bool durationMsIsSet_;
    std::string fileFormat_;
    bool fileFormatIsSet_;
    VideoInfo video_;
    bool videoIsSet_;
    AudioInfo audio_;
    bool audioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_OriginPara_H_
