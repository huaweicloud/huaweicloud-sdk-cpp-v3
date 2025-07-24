
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestcaseResult_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestcaseResult_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 测试用例结果
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestcaseResult
    : public ModelBase
{
public:
    TestcaseResult();
    virtual ~TestcaseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestcaseResult members

    /// <summary>
    /// 结果
    /// </summary>

    std::string getExecuteResultId() const;
    bool executeResultIdIsSet() const;
    void unsetexecuteResultId();
    void setExecuteResultId(const std::string& value);

    /// <summary>
    /// 测试用例状态
    /// </summary>

    std::string getExecuteStatus() const;
    bool executeStatusIsSet() const;
    void unsetexecuteStatus();
    void setExecuteStatus(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getFailureCause() const;
    bool failureCauseIsSet() const;
    void unsetfailureCause();
    void setFailureCause(const std::string& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 测试计划id
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 执行测试用例用户id
    /// </summary>

    std::string getExecutorId() const;
    bool executorIdIsSet() const;
    void unsetexecutorId();
    void setExecutorId(const std::string& value);

    /// <summary>
    /// 执行测试用例用户name
    /// </summary>

    std::string getExecutorName() const;
    bool executorNameIsSet() const;
    void unsetexecutorName();
    void setExecutorName(const std::string& value);


protected:
    std::string executeResultId_;
    bool executeResultIdIsSet_;
    std::string executeStatus_;
    bool executeStatusIsSet_;
    std::string failureCause_;
    bool failureCauseIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string executorId_;
    bool executorIdIsSet_;
    std::string executorName_;
    bool executorNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestcaseResult_H_
