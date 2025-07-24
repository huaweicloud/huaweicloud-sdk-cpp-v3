
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseAutomationDetailsVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseAutomationDetailsVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/NameAndValueVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用例自动化率详情
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CaseAutomationDetailsVo
    : public ModelBase
{
public:
    CaseAutomationDetailsVo();
    virtual ~CaseAutomationDetailsVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaseAutomationDetailsVo members

    /// <summary>
    /// 用例自动化率
    /// </summary>

    std::string getCaseAutomationRate() const;
    bool caseAutomationRateIsSet() const;
    void unsetcaseAutomationRate();
    void setCaseAutomationRate(const std::string& value);

    /// <summary>
    /// 服务类型对应的用例数目
    /// </summary>

    std::vector<NameAndValueVo>& getServiceTypeNumberList();
    bool serviceTypeNumberListIsSet() const;
    void unsetserviceTypeNumberList();
    void setServiceTypeNumberList(const std::vector<NameAndValueVo>& value);


protected:
    std::string caseAutomationRate_;
    bool caseAutomationRateIsSet_;
    std::vector<NameAndValueVo> serviceTypeNumberList_;
    bool serviceTypeNumberListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseAutomationDetailsVo_H_
