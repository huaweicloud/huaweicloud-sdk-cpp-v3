
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskResultDetailVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskResultDetailVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cloudtest/v1/model/TaskResultVo.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskResultDetailVo
    : public ModelBase
{
public:
    TaskResultDetailVo();
    virtual ~TaskResultDetailVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskResultDetailVo members

    /// <summary>
    /// 处理人名称
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 用例结果统计信息
    /// </summary>

    Object getCaseResultStatics() const;
    bool caseResultStaticsIsSet() const;
    void unsetcaseResultStatics();
    void setCaseResultStatics(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    TaskResultVo getTaskResult() const;
    bool taskResultIsSet() const;
    void unsettaskResult();
    void setTaskResult(const TaskResultVo& value);

    /// <summary>
    /// 实际的数据类型：单个对象，集合 或 NULL
    /// </summary>

    std::vector<TaskResultVo>& getTestResultList();
    bool testResultListIsSet() const;
    void unsettestResultList();
    void setTestResultList(const std::vector<TaskResultVo>& value);


protected:
    std::string owner_;
    bool ownerIsSet_;
    Object caseResultStatics_;
    bool caseResultStaticsIsSet_;
    TaskResultVo taskResult_;
    bool taskResultIsSet_;
    std::vector<TaskResultVo> testResultList_;
    bool testResultListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskResultDetailVo_H_
