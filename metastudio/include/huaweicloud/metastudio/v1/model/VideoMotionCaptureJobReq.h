
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoMotionCaptureJobReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoMotionCaptureJobReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/OutputInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/InputInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 视频驱动动作任务请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VideoMotionCaptureJobReq
    : public ModelBase
{
public:
    VideoMotionCaptureJobReq();
    virtual ~VideoMotionCaptureJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoMotionCaptureJobReq members

    /// <summary>
    /// 视频驱动模式。 * HEAD：头部 * HALF_BODY：半身 * FULL_BODY：全身 * AUTO：自动
    /// </summary>

    std::string getMotionCaptureMode() const;
    bool motionCaptureModeIsSet() const;
    void unsetmotionCaptureMode();
    void setMotionCaptureMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InputInfo getInputInfo() const;
    bool inputInfoIsSet() const;
    void unsetinputInfo();
    void setInputInfo(const InputInfo& value);

    /// <summary>
    /// 
    /// </summary>

    OutputInfo getOutputInfo() const;
    bool outputInfoIsSet() const;
    void unsetoutputInfo();
    void setOutputInfo(const OutputInfo& value);


protected:
    std::string motionCaptureMode_;
    bool motionCaptureModeIsSet_;
    InputInfo inputInfo_;
    bool inputInfoIsSet_;
    OutputInfo outputInfo_;
    bool outputInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoMotionCaptureJobReq_H_
