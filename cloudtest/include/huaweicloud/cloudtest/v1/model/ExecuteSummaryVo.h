
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteSummaryVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteSummaryVo_H_


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
/// 执行阶段信息汇总
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExecuteSummaryVo
    : public ModelBase
{
public:
    ExecuteSummaryVo();
    virtual ~ExecuteSummaryVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteSummaryVo members

    /// <summary>
    /// 已执行用例数
    /// </summary>

    int32_t getExecuteCaseNum() const;
    bool executeCaseNumIsSet() const;
    void unsetexecuteCaseNum();
    void setExecuteCaseNum(int32_t value);

    /// <summary>
    /// 缺陷总数
    /// </summary>

    int32_t getDefectNum() const;
    bool defectNumIsSet() const;
    void unsetdefectNum();
    void setDefectNum(int32_t value);

    /// <summary>
    /// 已完成缺陷数
    /// </summary>

    int32_t getCompletedDefectNum() const;
    bool completedDefectNumIsSet() const;
    void unsetcompletedDefectNum();
    void setCompletedDefectNum(int32_t value);

    /// <summary>
    /// 测试用例通过率
    /// </summary>

    std::string getCaseSuccessRate() const;
    bool caseSuccessRateIsSet() const;
    void unsetcaseSuccessRate();
    void setCaseSuccessRate(const std::string& value);

    /// <summary>
    /// 用例执行率
    /// </summary>

    std::string getCaseExecutionRate() const;
    bool caseExecutionRateIsSet() const;
    void unsetcaseExecutionRate();
    void setCaseExecutionRate(const std::string& value);


protected:
    int32_t executeCaseNum_;
    bool executeCaseNumIsSet_;
    int32_t defectNum_;
    bool defectNumIsSet_;
    int32_t completedDefectNum_;
    bool completedDefectNumIsSet_;
    std::string caseSuccessRate_;
    bool caseSuccessRateIsSet_;
    std::string caseExecutionRate_;
    bool caseExecutionRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteSummaryVo_H_
