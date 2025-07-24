
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_execute_stage_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_execute_stage_H_


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
/// 测试计划执行阶段信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestPlanDetail_execute_stage
    : public ModelBase
{
public:
    TestPlanDetail_execute_stage();
    virtual ~TestPlanDetail_execute_stage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestPlanDetail_execute_stage members

    /// <summary>
    /// 缺陷个数
    /// </summary>

    int32_t getDefectCount() const;
    bool defectCountIsSet() const;
    void unsetdefectCount();
    void setDefectCount(int32_t value);

    /// <summary>
    /// 已完成缺陷个数
    /// </summary>

    int32_t getCompletedDefectCount() const;
    bool completedDefectCountIsSet() const;
    void unsetcompletedDefectCount();
    void setCompletedDefectCount(int32_t value);

    /// <summary>
    /// 用例通过率,按用例结果计算
    /// </summary>

    std::string getCasePassRate() const;
    bool casePassRateIsSet() const;
    void unsetcasePassRate();
    void setCasePassRate(const std::string& value);

    /// <summary>
    /// 已执行用例数, 按用例状态统计
    /// </summary>

    int32_t getExecutedCaseCount() const;
    bool executedCaseCountIsSet() const;
    void unsetexecutedCaseCount();
    void setExecutedCaseCount(int32_t value);


protected:
    int32_t defectCount_;
    bool defectCountIsSet_;
    int32_t completedDefectCount_;
    bool completedDefectCountIsSet_;
    std::string casePassRate_;
    bool casePassRateIsSet_;
    int32_t executedCaseCount_;
    bool executedCaseCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestPlanDetail_execute_stage_H_
