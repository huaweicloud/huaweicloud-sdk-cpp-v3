
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestcasePlanVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestcasePlanVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/TestPlanVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestcasePlanVo
    : public ModelBase
{
public:
    TestcasePlanVo();
    virtual ~TestcasePlanVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestcasePlanVo members

    /// <summary>
    /// 测试用例URI
    /// </summary>

    std::string getTestcaseUri() const;
    bool testcaseUriIsSet() const;
    void unsettestcaseUri();
    void setTestcaseUri(const std::string& value);

    /// <summary>
    /// 测试用例用例编号
    /// </summary>

    std::string getTestcaseNumber() const;
    bool testcaseNumberIsSet() const;
    void unsettestcaseNumber();
    void setTestcaseNumber(const std::string& value);

    /// <summary>
    /// 测试计划信息
    /// </summary>

    std::vector<TestPlanVo>& getPlans();
    bool plansIsSet() const;
    void unsetplans();
    void setPlans(const std::vector<TestPlanVo>& value);


protected:
    std::string testcaseUri_;
    bool testcaseUriIsSet_;
    std::string testcaseNumber_;
    bool testcaseNumberIsSet_;
    std::vector<TestPlanVo> plans_;
    bool plansIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestcasePlanVo_H_
