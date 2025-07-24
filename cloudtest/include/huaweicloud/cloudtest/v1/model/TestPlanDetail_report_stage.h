
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_report_stage_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_report_stage_H_


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
/// 测试计划完成阶段信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestPlanDetail_report_stage
    : public ModelBase
{
public:
    TestPlanDetail_report_stage();
    virtual ~TestPlanDetail_report_stage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestPlanDetail_report_stage members

    /// <summary>
    /// 用例完成率,按状态统计
    /// </summary>

    std::string getCaseCompleteRate() const;
    bool caseCompleteRateIsSet() const;
    void unsetcaseCompleteRate();
    void setCaseCompleteRate(const std::string& value);


protected:
    std::string caseCompleteRate_;
    bool caseCompleteRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_report_stage_H_
