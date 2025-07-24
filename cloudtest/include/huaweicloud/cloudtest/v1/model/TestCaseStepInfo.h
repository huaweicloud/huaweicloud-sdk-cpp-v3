
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseStepInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseStepInfo_H_


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
/// 对外测试步骤
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseStepInfo
    : public ModelBase
{
public:
    TestCaseStepInfo();
    virtual ~TestCaseStepInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseStepInfo members

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

    /// <summary>
    /// 步骤的实际结果
    /// </summary>

    std::string getStepActual() const;
    bool stepActualIsSet() const;
    void unsetstepActual();
    void setStepActual(const std::string& value);

    /// <summary>
    /// 步骤结果
    /// </summary>

    std::string getStepResult() const;
    bool stepResultIsSet() const;
    void unsetstepResult();
    void setStepResult(const std::string& value);


protected:
    std::string testStep_;
    bool testStepIsSet_;
    std::string expectResult_;
    bool expectResultIsSet_;
    std::string stepActual_;
    bool stepActualIsSet_;
    std::string stepResult_;
    bool stepResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseStepInfo_H_
