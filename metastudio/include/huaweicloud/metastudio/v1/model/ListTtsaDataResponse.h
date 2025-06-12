
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTtsaDataResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTtsaDataResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/MotionItem.h>
#include <string>
#include <vector>
#include <huaweicloud/metastudio/v1/model/AnimationItem.h>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListTtsaDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTtsaDataResponse();
    virtual ~ListTtsaDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTtsaDataResponse members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 驱动任务开始时间，格式遵循：RFC 3339， 例 “2020-07-30T10:43:17Z”
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 驱动任务结束时间，格式遵循：RFC 3339， 例 “2020-07-30T10:45:17Z”
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 是否为尾部(任务数据已全部生成，后续没有新的数据)
    /// </summary>

    bool isIsTail() const;
    bool isTailIsSet() const;
    void unsetisTail();
    void setIsTail(bool value);

    /// <summary>
    /// 音频数据，Base64编码，1秒内的数据。
    /// </summary>

    std::string getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const std::string& value);

    /// <summary>
    /// 语音驱动的表情基数据。
    /// </summary>

    std::vector<std::string>& getBlendshapes();
    bool blendshapesIsSet() const;
    void unsetblendshapes();
    void setBlendshapes(const std::vector<std::string>& value);

    /// <summary>
    /// 手工指定的动作库动作数据。
    /// </summary>

    std::vector<AnimationItem>& getAnimations();
    bool animationsIsSet() const;
    void unsetanimations();
    void setAnimations(const std::vector<AnimationItem>& value);

    /// <summary>
    /// 语义驱动的智能动作数据。
    /// </summary>

    std::vector<MotionItem>& getMotions();
    bool motionsIsSet() const;
    void unsetmotions();
    void setMotions(const std::vector<MotionItem>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    bool isTail_;
    bool isTailIsSet_;
    std::string audio_;
    bool audioIsSet_;
    std::vector<std::string> blendshapes_;
    bool blendshapesIsSet_;
    std::vector<AnimationItem> animations_;
    bool animationsIsSet_;
    std::vector<MotionItem> motions_;
    bool motionsIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTtsaDataResponse_H_
