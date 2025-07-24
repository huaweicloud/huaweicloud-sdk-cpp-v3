
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseStepResultInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseStepResultInfo_H_


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
/// 用例步骤结果信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseStepResultInfo
    : public ModelBase
{
public:
    TestCaseStepResultInfo();
    virtual ~TestCaseStepResultInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseStepResultInfo members

    /// <summary>
    /// 步骤结果值
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 步骤实际结果
    /// </summary>

    std::string getActualResult() const;
    bool actualResultIsSet() const;
    void unsetactualResult();
    void setActualResult(const std::string& value);

    /// <summary>
    /// 步骤期望结果
    /// </summary>

    std::string getExpectResult() const;
    bool expectResultIsSet() const;
    void unsetexpectResult();
    void setExpectResult(const std::string& value);

    /// <summary>
    /// 用例操作步骤
    /// </summary>

    std::string getTestStep() const;
    bool testStepIsSet() const;
    void unsettestStep();
    void setTestStep(const std::string& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::string actualResult_;
    bool actualResultIsSet_;
    std::string expectResult_;
    bool expectResultIsSet_;
    std::string testStep_;
    bool testStepIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseStepResultInfo_H_
