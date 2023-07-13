
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_RecognizeFlashAsrResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_RecognizeFlashAsrResponse_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sis/v1/model/FlashResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  RecognizeFlashAsrResponse
    : public ModelBase, public HttpResponse
{
public:
    RecognizeFlashAsrResponse();
    virtual ~RecognizeFlashAsrResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecognizeFlashAsrResponse members

    /// <summary>
    /// 服务内部的令牌，可用于在日志中追溯具体调用流程
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// 音频时长
    /// </summary>

    int32_t getAudioDuration() const;
    bool audioDurationIsSet() const;
    void unsetaudioDuration();
    void setAudioDuration(int32_t value);

    /// <summary>
    /// 识别结果
    /// </summary>

    std::vector<FlashResult>& getFlashResult();
    bool flashResultIsSet() const;
    void unsetflashResult();
    void setFlashResult(const std::vector<FlashResult>& value);


protected:
    std::string traceId_;
    bool traceIdIsSet_;
    int32_t audioDuration_;
    bool audioDurationIsSet_;
    std::vector<FlashResult> flashResult_;
    bool flashResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_RecognizeFlashAsrResponse_H_
