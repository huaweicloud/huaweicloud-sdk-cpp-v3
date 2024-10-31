
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateLimitTaskResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateLimitTaskResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpdateLimitTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateLimitTaskResponse();
    virtual ~UpdateLimitTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLimitTaskResponse members

    /// <summary>
    /// 限流任务ID。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// CN节点数据库组,每个数据库字符串以逗号形式隔开，仅当任务类型为SQL_TYPE时，返回该值且与请求参数相同。
    /// </summary>

    std::string getDatabases() const;
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::string& value);

    /// <summary>
    /// 限流任务名，与请求参数相同。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 关键词，仅当任务类型为SQL_TYPE时，返回该值且与请求参数相同。
    /// </summary>

    std::string getKeyWords() const;
    bool keyWordsIsSet() const;
    void unsetkeyWords();
    void setKeyWords(const std::string& value);

    /// <summary>
    /// 并发数，与请求参数相同。
    /// </summary>

    int32_t getParallelSize() const;
    bool parallelSizeIsSet() const;
    void unsetparallelSize();
    void setParallelSize(int32_t value);

    /// <summary>
    /// 限流任务开始时间，格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间，SQL范围返回该值。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 限流任务结束时间，格式为yyyy-mm-ddThh:mm:ssZ，当前时间指UTC时间，SQL范围返回该值。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// cpu利用率，仅当任务类型为SESSION_ACTIVE_MAX_COUNT时，返回该值且只保留正整数。
    /// </summary>

    int32_t getCpuUtilization() const;
    bool cpuUtilizationIsSet() const;
    void unsetcpuUtilization();
    void setCpuUtilization(int32_t value);

    /// <summary>
    /// 内存利用率，仅当任务类型为SESSION_ACTIVE_MAX_COUNT时，返回该值且只保留正整数。
    /// </summary>

    int32_t getMemoryUtilization() const;
    bool memoryUtilizationIsSet() const;
    void unsetmemoryUtilization();
    void setMemoryUtilization(int32_t value);

    /// <summary>
    /// 规则名。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 工作流ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string databases_;
    bool databasesIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string keyWords_;
    bool keyWordsIsSet_;
    int32_t parallelSize_;
    bool parallelSizeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t cpuUtilization_;
    bool cpuUtilizationIsSet_;
    int32_t memoryUtilization_;
    bool memoryUtilizationIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpdateLimitTaskResponse_H_