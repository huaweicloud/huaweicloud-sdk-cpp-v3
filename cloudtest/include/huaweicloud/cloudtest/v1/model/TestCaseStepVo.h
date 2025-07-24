
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseStepVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseStepVo_H_


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
/// 用例测试步骤和预期结果
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseStepVo
    : public ModelBase
{
public:
    TestCaseStepVo();
    virtual ~TestCaseStepVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseStepVo members

    /// <summary>
    /// 测试步骤
    /// </summary>

    std::string getTestStep() const;
    bool testStepIsSet() const;
    void unsettestStep();
    void setTestStep(const std::string& value);

    /// <summary>
    /// 预期结果
    /// </summary>

    std::string getExpectResult() const;
    bool expectResultIsSet() const;
    void unsetexpectResult();
    void setExpectResult(const std::string& value);


protected:
    std::string testStep_;
    bool testStepIsSet_;
    std::string expectResult_;
    bool expectResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseStepVo_H_
