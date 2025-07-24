
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportSummaryVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportSummaryVo_H_


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
/// 报告阶段信息汇总
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ReportSummaryVo
    : public ModelBase
{
public:
    ReportSummaryVo();
    virtual ~ReportSummaryVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportSummaryVo members

    /// <summary>
    /// 用例通过率
    /// </summary>

    std::string getCaseSuccessRate() const;
    bool caseSuccessRateIsSet() const;
    void unsetcaseSuccessRate();
    void setCaseSuccessRate(const std::string& value);

    /// <summary>
    /// 用例完成率
    /// </summary>

    std::string getCaseCompleteRate() const;
    bool caseCompleteRateIsSet() const;
    void unsetcaseCompleteRate();
    void setCaseCompleteRate(const std::string& value);


protected:
    std::string caseSuccessRate_;
    bool caseSuccessRateIsSet_;
    std::string caseCompleteRate_;
    bool caseCompleteRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportSummaryVo_H_
