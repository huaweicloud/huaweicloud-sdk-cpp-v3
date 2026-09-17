
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseOperationInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseOperationInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cloudtest/v1/model/AssignCaseInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// DevCloud任务关联用例类
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CaseOperationInfo
    : public ModelBase
{
public:
    CaseOperationInfo();
    virtual ~CaseOperationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaseOperationInfo members

    /// <summary>
    /// 用例关联信息
    /// </summary>

    std::vector<AssignCaseInfo>& getTestCasesInfo();
    bool testCasesInfoIsSet() const;
    void unsettestCasesInfo();
    void setTestCasesInfo(const std::vector<AssignCaseInfo>& value);

    /// <summary>
    /// 前置用例关联信息
    /// </summary>

    std::vector<AssignCaseInfo>& getSetUpCasesInfo();
    bool setUpCasesInfoIsSet() const;
    void unsetsetUpCasesInfo();
    void setSetUpCasesInfo(const std::vector<AssignCaseInfo>& value);

    /// <summary>
    /// 后置用例关联信息
    /// </summary>

    std::vector<AssignCaseInfo>& getTearDownCasesInfo();
    bool tearDownCasesInfoIsSet() const;
    void unsettearDownCasesInfo();
    void setTearDownCasesInfo(const std::vector<AssignCaseInfo>& value);


protected:
    std::vector<AssignCaseInfo> testCasesInfo_;
    bool testCasesInfoIsSet_;
    std::vector<AssignCaseInfo> setUpCasesInfo_;
    bool setUpCasesInfoIsSet_;
    std::vector<AssignCaseInfo> tearDownCasesInfo_;
    bool tearDownCasesInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseOperationInfo_H_
