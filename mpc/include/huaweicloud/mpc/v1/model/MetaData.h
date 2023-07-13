
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MetaData_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MetaData_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  MetaData
    : public ModelBase
{
public:
    MetaData();
    virtual ~MetaData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MetaData members

    /// <summary>
    /// 文件大小。 
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 视频时长，带小数位显示。单位：秒。 
    /// </summary>

    double getDurationMs() const;
    bool durationMsIsSet() const;
    void unsetdurationMs();
    void setDurationMs(double value);

    /// <summary>
    /// 视频时长。单位：秒。 
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);

    /// <summary>
    /// 文件封装格式。 
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 总码率。单位：bit/秒 
    /// </summary>

    int64_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int64_t value);

    /// <summary>
    /// 视频流元数据。 
    /// </summary>

    std::vector<VideoInfo>& getVideo();
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const std::vector<VideoInfo>& value);

    /// <summary>
    /// 音频流元数据。 
    /// </summary>

    std::vector<AudioInfo>& getAudio();
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const std::vector<AudioInfo>& value);


protected:
    int64_t size_;
    bool sizeIsSet_;
    double durationMs_;
    bool durationMsIsSet_;
    int64_t duration_;
    bool durationIsSet_;
    std::string format_;
    bool formatIsSet_;
    int64_t bitrate_;
    bool bitrateIsSet_;
    std::vector<VideoInfo> video_;
    bool videoIsSet_;
    std::vector<AudioInfo> audio_;
    bool audioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MetaData_H_
