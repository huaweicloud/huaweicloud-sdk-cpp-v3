
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_design_stage_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_design_stage_H_


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
/// 测试计划设计阶段信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestPlanDetail_design_stage
    : public ModelBase
{
public:
    TestPlanDetail_design_stage();
    virtual ~TestPlanDetail_design_stage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestPlanDetail_design_stage members

    /// <summary>
    /// 用例个数
    /// </summary>

    int32_t getCaseCount() const;
    bool caseCountIsSet() const;
    void unsetcaseCount();
    void setCaseCount(int32_t value);

    /// <summary>
    /// 需求个数
    /// </summary>

    int32_t getIssueCount() const;
    bool issueCountIsSet() const;
    void unsetissueCount();
    void setIssueCount(int32_t value);

    /// <summary>
    /// 已被用例关联的需求个数
    /// </summary>

    std::string getIssueCoveredCount() const;
    bool issueCoveredCountIsSet() const;
    void unsetissueCoveredCount();
    void setIssueCoveredCount(const std::string& value);


protected:
    int32_t caseCount_;
    bool caseCountIsSet_;
    int32_t issueCount_;
    bool issueCountIsSet_;
    std::string issueCoveredCount_;
    bool issueCoveredCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_design_stage_H_
