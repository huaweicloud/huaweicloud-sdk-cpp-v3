
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputVideoPara_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputVideoPara_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/VideoInfo.h>
#include <huaweicloud/mpc/v1/model/AudioInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/XCodeError.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  OutputVideoPara
    : public ModelBase
{
public:
    OutputVideoPara();
    virtual ~OutputVideoPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OutputVideoPara members

    /// <summary>
    /// 输出视频对应的模板ID 
    /// </summary>

    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);

    /// <summary>
    /// 视频大小 
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 视频封装格式 
    /// </summary>

    std::string getPack() const;
    bool packIsSet() const;
    void unsetpack();
    void setPack(const std::string& value);

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

    /// <summary>
    /// 输出片源文件名 
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 折算后视频时长 
    /// </summary>

    double getConverDuration() const;
    bool converDurationIsSet() const;
    void unsetconverDuration();
    void setConverDuration(double value);

    /// <summary>
    /// 
    /// </summary>

    XCodeError getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const XCodeError& value);


protected:
    int32_t templateId_;
    bool templateIdIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string pack_;
    bool packIsSet_;
    VideoInfo video_;
    bool videoIsSet_;
    AudioInfo audio_;
    bool audioIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    double converDuration_;
    bool converDurationIsSet_;
    XCodeError error_;
    bool errorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputVideoPara_H_
