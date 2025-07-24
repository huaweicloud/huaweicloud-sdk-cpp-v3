
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseOperationVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseOperationVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TaskAssignCaseVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务关联用例信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CaseOperationVo
    : public ModelBase
{
public:
    CaseOperationVo();
    virtual ~CaseOperationVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaseOperationVo members

    /// <summary>
    /// 用例关联信息
    /// </summary>

    std::vector<TaskAssignCaseVo>& getTestCasesInfo();
    bool testCasesInfoIsSet() const;
    void unsettestCasesInfo();
    void setTestCasesInfo(const std::vector<TaskAssignCaseVo>& value);

    /// <summary>
    /// 前置用例关联信息
    /// </summary>

    std::vector<TaskAssignCaseVo>& getSetUpCasesInfo();
    bool setUpCasesInfoIsSet() const;
    void unsetsetUpCasesInfo();
    void setSetUpCasesInfo(const std::vector<TaskAssignCaseVo>& value);

    /// <summary>
    /// 后置用例关联信息
    /// </summary>

    std::vector<TaskAssignCaseVo>& getTearDownCasesInfo();
    bool tearDownCasesInfoIsSet() const;
    void unsettearDownCasesInfo();
    void setTearDownCasesInfo(const std::vector<TaskAssignCaseVo>& value);


protected:
    std::vector<TaskAssignCaseVo> testCasesInfo_;
    bool testCasesInfoIsSet_;
    std::vector<TaskAssignCaseVo> setUpCasesInfo_;
    bool setUpCasesInfoIsSet_;
    std::vector<TaskAssignCaseVo> tearDownCasesInfo_;
    bool tearDownCasesInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseOperationVo_H_
