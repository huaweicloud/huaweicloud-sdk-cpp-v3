
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DigitalHumanModelingJobInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DigitalHumanModelingJobInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务详情
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  DigitalHumanModelingJobInfo
    : public ModelBase
{
public:
    DigitalHumanModelingJobInfo();
    virtual ~DigitalHumanModelingJobInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DigitalHumanModelingJobInfo members

    /// <summary>
    /// 照片建模任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务的状态。 * WAITING：等待任务调度 * PROCESSING：正在处理 * PARTIAL_SUCCEED：部分成功（模型生成，截图失败） * SUCCEED：成功 * FAILED：失败 * CANCELED：取消
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

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DigitalHumanModelingJobInfo_H_
