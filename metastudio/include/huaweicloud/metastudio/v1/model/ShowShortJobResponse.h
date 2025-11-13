
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowShortJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowShortJobResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/AssessResult.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ShortJobType.h>
#include <huaweicloud/metastudio/v1/model/JobState.h>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowShortJobResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowShortJobResponse();
    virtual ~ShowShortJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowShortJobResponse members

    /// <summary>
    /// 
    /// </summary>

    ShortJobType getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const ShortJobType& value);

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobState getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const JobState& value);

    /// <summary>
    /// 当任务失败时呈现,失败错误码。
    /// </summary>

    std::string getJobFailedCode() const;
    bool jobFailedCodeIsSet() const;
    void unsetjobFailedCode();
    void setJobFailedCode(const std::string& value);

    /// <summary>
    /// 当任务失败时呈现,失败原因。
    /// </summary>

    std::string getJobFailedReason() const;
    bool jobFailedReasonIsSet() const;
    void unsetjobFailedReason();
    void setJobFailedReason(const std::string& value);

    /// <summary>
    /// 任务创建时间。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 任务状态更新时间。
    /// </summary>

    int64_t getLastupdateTime() const;
    bool lastupdateTimeIsSet() const;
    void unsetlastupdateTime();
    void setLastupdateTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    AssessResult getAssessResult() const;
    bool assessResultIsSet() const;
    void unsetassessResult();
    void setAssessResult(const AssessResult& value);


protected:
    ShortJobType jobType_;
    bool jobTypeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    JobState state_;
    bool stateIsSet_;
    std::string jobFailedCode_;
    bool jobFailedCodeIsSet_;
    std::string jobFailedReason_;
    bool jobFailedReasonIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t lastupdateTime_;
    bool lastupdateTimeIsSet_;
    AssessResult assessResult_;
    bool assessResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowShortJobResponse_H_
