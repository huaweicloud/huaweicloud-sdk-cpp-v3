
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputSetting_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputSetting_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/EditVideoInfo.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/EditAudioInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/EditHlsInfo.h>

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
class HUAWEICLOUD_MPC_V1_EXPORT  OutputSetting
    : public ModelBase
{
public:
    OutputSetting();
    virtual ~OutputSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OutputSetting members

    /// <summary>
    /// 剪切或拼接的输出封装格式。
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EditVideoInfo getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const EditVideoInfo& value);

    /// <summary>
    /// 
    /// </summary>

    EditAudioInfo getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const EditAudioInfo& value);

    /// <summary>
    /// 
    /// </summary>

    EditHlsInfo getHls() const;
    bool hlsIsSet() const;
    void unsethls();
    void setHls(const EditHlsInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


protected:
    std::string format_;
    bool formatIsSet_;
    EditVideoInfo video_;
    bool videoIsSet_;
    EditAudioInfo audio_;
    bool audioIsSet_;
    EditHlsInfo hls_;
    bool hlsIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputSetting_H_
