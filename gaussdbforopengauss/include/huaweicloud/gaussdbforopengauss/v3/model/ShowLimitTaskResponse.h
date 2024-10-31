
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowLimitTaskResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowLimitTaskResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/LimitTaskRuleInfoOption.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowLimitTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLimitTaskResponse();
    virtual ~ShowLimitTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLimitTaskResponse members

    /// <summary>
    /// 限流任务名传。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 任务限流类型。
    /// </summary>

    std::string getLimitType() const;
    bool limitTypeIsSet() const;
    void unsetlimitType();
    void setLimitType(const std::string& value);

    /// <summary>
    /// 并发数。
    /// </summary>

    int32_t getParallelSize() const;
    bool parallelSizeIsSet() const;
    void unsetparallelSize();
    void setParallelSize(int32_t value);

    /// <summary>
    /// 限流任务开始时间,格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 限流任务结束时间,格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 限流任务已执行时间，单位秒。
    /// </summary>

    int32_t getTaskRunningTime() const;
    bool taskRunningTimeIsSet() const;
    void unsettaskRunningTime();
    void setTaskRunningTime(int32_t value);

    /// <summary>
    /// 限流任务拦截次数。
    /// </summary>

    int32_t getLimitCount() const;
    bool limitCountIsSet() const;
    void unsetlimitCount();
    void setLimitCount(int32_t value);

    /// <summary>
    /// 规则名。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 内存利用率，仅当任务类型为SESSION_ACTIVE_MAX_COUNT时，返回该值且与请求参数相同。
    /// </summary>

    int32_t getMemoryUtilization() const;
    bool memoryUtilizationIsSet() const;
    void unsetmemoryUtilization();
    void setMemoryUtilization(int32_t value);

    /// <summary>
    /// cpu利用率，仅当任务类型为SESSION_ACTIVE_MAX_COUNT时，返回该值且与请求参数相同。
    /// </summary>

    int32_t getCpuUtilization() const;
    bool cpuUtilizationIsSet() const;
    void unsetcpuUtilization();
    void setCpuUtilization(int32_t value);

    /// <summary>
    /// 限流任务列表
    /// </summary>

    std::vector<LimitTaskRuleInfoOption>& getLimitTaskRuleInfoList();
    bool limitTaskRuleInfoListIsSet() const;
    void unsetlimitTaskRuleInfoList();
    void setLimitTaskRuleInfoList(const std::vector<LimitTaskRuleInfoOption>& value);


protected:
    std::string taskName_;
    bool taskNameIsSet_;
    std::string limitType_;
    bool limitTypeIsSet_;
    int32_t parallelSize_;
    bool parallelSizeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t taskRunningTime_;
    bool taskRunningTimeIsSet_;
    int32_t limitCount_;
    bool limitCountIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    int32_t memoryUtilization_;
    bool memoryUtilizationIsSet_;
    int32_t cpuUtilization_;
    bool cpuUtilizationIsSet_;
    std::vector<LimitTaskRuleInfoOption> limitTaskRuleInfoList_;
    bool limitTaskRuleInfoListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowLimitTaskResponse_H_
