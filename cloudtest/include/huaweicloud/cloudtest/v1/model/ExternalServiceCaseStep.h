
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalServiceCaseStep_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalServiceCaseStep_H_


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
/// 测试步骤，数组长度小于10
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExternalServiceCaseStep
    : public ModelBase
{
public:
    ExternalServiceCaseStep();
    virtual ~ExternalServiceCaseStep();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalServiceCaseStep members

    /// <summary>
    /// 测试用例预期结果信息，长度为[0-500]位字符
    /// </summary>

    std::string getExpectResult() const;
    bool expectResultIsSet() const;
    void unsetexpectResult();
    void setExpectResult(const std::string& value);

    /// <summary>
    /// 测试步骤描述信息，长度为[0-500]位字符
    /// </summary>

    std::string getTestStep() const;
    bool testStepIsSet() const;
    void unsettestStep();
    void setTestStep(const std::string& value);


protected:
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExternalServiceCaseStep_H_
