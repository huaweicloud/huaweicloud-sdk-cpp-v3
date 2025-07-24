
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultStepVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultStepVo_H_


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
/// 测试步骤信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ResultStepVo
    : public ModelBase
{
public:
    ResultStepVo();
    virtual ~ResultStepVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResultStepVo members

    /// <summary>
    /// 结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

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
    /// 实际结果
    /// </summary>

    std::string getActualResult() const;
    bool actualResultIsSet() const;
    void unsetactualResult();
    void setActualResult(const std::string& value);

    /// <summary>
    /// 测试结果名称
    /// </summary>

    std::string getResultName() const;
    bool resultNameIsSet() const;
    void unsetresultName();
    void setResultName(const std::string& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::string testStep_;
    bool testStepIsSet_;
    std::string expectResult_;
    bool expectResultIsSet_;
    std::string actualResult_;
    bool actualResultIsSet_;
    std::string resultName_;
    bool resultNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ResultStepVo_H_
