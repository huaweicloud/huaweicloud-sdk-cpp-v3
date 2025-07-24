
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskCaseResponseTimeDetailVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskCaseResponseTimeDetailVo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskCaseResponseTimeDetailVo
    : public ModelBase
{
public:
    TaskCaseResponseTimeDetailVo();
    virtual ~TaskCaseResponseTimeDetailVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskCaseResponseTimeDetailVo members

    /// <summary>
    /// 用例ID
    /// </summary>

    std::string getCaseId() const;
    bool caseIdIsSet() const;
    void unsetcaseId();
    void setCaseId(const std::string& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getCaseName() const;
    bool caseNameIsSet() const;
    void unsetcaseName();
    void setCaseName(const std::string& value);

    /// <summary>
    /// 用例结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 用例状态
    /// </summary>

    std::string getErrorReason() const;
    bool errorReasonIsSet() const;
    void unseterrorReason();
    void setErrorReason(const std::string& value);

    /// <summary>
    /// 用例响应时间
    /// </summary>

    int64_t getResponseTime() const;
    bool responseTimeIsSet() const;
    void unsetresponseTime();
    void setResponseTime(int64_t value);

    /// <summary>
    /// 服务ID
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 服务名称
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// 用例开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 用例状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 子任务ID
    /// </summary>

    std::string getSubTaskId() const;
    bool subTaskIdIsSet() const;
    void unsetsubTaskId();
    void setSubTaskId(const std::string& value);

    /// <summary>
    /// 已废弃
    /// </summary>

    std::string getTagId() const;
    bool tagIdIsSet() const;
    void unsettagId();
    void setTagId(const std::string& value);

    /// <summary>
    /// 已废弃
    /// </summary>

    std::string getTagName() const;
    bool tagNameIsSet() const;
    void unsettagName();
    void setTagName(const std::string& value);

    /// <summary>
    /// 任务和用例关联关系的ID
    /// </summary>

    std::string getTaskCaseId() const;
    bool taskCaseIdIsSet() const;
    void unsettaskCaseId();
    void setTaskCaseId(const std::string& value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 任务类型，1&#x3D;拨测，2&#x3D;冒烟，4&#x3D;部署测试，5&#x3D;小网拨测
    /// </summary>

    std::string getTaskTypeId() const;
    bool taskTypeIdIsSet() const;
    void unsettaskTypeId();
    void setTaskTypeId(const std::string& value);

    /// <summary>
    /// 测试套类型
    /// </summary>

    int32_t getTestSuiteType() const;
    bool testSuiteTypeIsSet() const;
    void unsettestSuiteType();
    void setTestSuiteType(int32_t value);


protected:
    std::string caseId_;
    bool caseIdIsSet_;
    std::string caseName_;
    bool caseNameIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string errorReason_;
    bool errorReasonIsSet_;
    int64_t responseTime_;
    bool responseTimeIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string serviceName_;
    bool serviceNameIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string subTaskId_;
    bool subTaskIdIsSet_;
    std::string tagId_;
    bool tagIdIsSet_;
    std::string tagName_;
    bool tagNameIsSet_;
    std::string taskCaseId_;
    bool taskCaseIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string taskTypeId_;
    bool taskTypeIdIsSet_;
    int32_t testSuiteType_;
    bool testSuiteTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskCaseResponseTimeDetailVo_H_
