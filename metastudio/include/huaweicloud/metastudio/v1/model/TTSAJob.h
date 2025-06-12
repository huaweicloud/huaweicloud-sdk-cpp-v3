
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TTSAJob_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TTSAJob_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TTSAJob
    : public ModelBase
{
public:
    TTSAJob();
    virtual ~TTSAJob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TTSAJob members

    /// <summary>
    /// 语音驱动任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务的状态。 * WAITING：等待 * PROCESSING：处理中 * SUCCEED：成功 * FAILED：失败
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
    /// 语音驱动内容时长。  单位:秒。
    /// </summary>

    float getContentDuration() const;
    bool contentDurationIsSet() const;
    void unsetcontentDuration();
    void setContentDuration(float value);

    /// <summary>
    /// 任务类型。 * REAL_JOB：实时任务。如数字人交互。 * UNREAL_JOB：非实时任务。如数字人视频制作
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    float contentDuration_;
    bool contentDurationIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TTSAJob_H_
