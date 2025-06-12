
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVideoMotionCaptureJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVideoMotionCaptureJobResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/VideoMotionCaptureJobReq.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowVideoMotionCaptureJobResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVideoMotionCaptureJobResponse();
    virtual ~ShowVideoMotionCaptureJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVideoMotionCaptureJobResponse members

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

    /// <summary>
    /// 视频驱动任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务的状态。 * WAITING：等待中 * PROCESSING：处理中 * SUCCEED：成功 * FAILED：失败
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 任务开始时间，格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务结束时间，格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string motionCaptureMode_;
    bool motionCaptureModeIsSet_;
    InputInfo inputInfo_;
    bool inputInfoIsSet_;
    OutputInfo outputInfo_;
    bool outputInfoIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowVideoMotionCaptureJobResponse_H_
