
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ValidateRule_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ValidateRule_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ConditionInstance.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ValidateRule
    : public ModelBase
{
public:
    ValidateRule();
    virtual ~ValidateRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateRule members

    /// <summary>
    /// 依赖信息列表
    /// </summary>

    std::vector<ConditionInstance>& getDependentInfo();
    bool dependentInfoIsSet() const;
    void unsetdependentInfo();
    void setDependentInfo(const std::vector<ConditionInstance>& value);

    /// <summary>
    /// 是否启用的标识符
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 配置依赖的标识符
    /// </summary>

    bool isIsConfigDep() const;
    bool isConfigDepIsSet() const;
    void unsetisConfigDep();
    void setIsConfigDep(bool value);

    /// <summary>
    /// 是否依赖的标识符
    /// </summary>

    bool isIsDependent() const;
    bool isDependentIsSet() const;
    void unsetisDependent();
    void setIsDependent(bool value);

    /// <summary>
    /// 消息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 特殊字符
    /// </summary>

    std::string getSpecialChar() const;
    bool specialCharIsSet() const;
    void unsetspecialChar();
    void setSpecialChar(const std::string& value);

    /// <summary>
    /// 特殊字符的有效性
    /// </summary>

    std::string getSpecialCharValid() const;
    bool specialCharValidIsSet() const;
    void unsetspecialCharValid();
    void setSpecialCharValid(const std::string& value);

    /// <summary>
    /// 示例
    /// </summary>

    std::string getXExample() const;
    bool xExampleIsSet() const;
    void unsetxExample();
    void setXExample(const std::string& value);


protected:
    std::vector<ConditionInstance> dependentInfo_;
    bool dependentInfoIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    bool isConfigDep_;
    bool isConfigDepIsSet_;
    bool isDependent_;
    bool isDependentIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string specialChar_;
    bool specialCharIsSet_;
    std::string specialCharValid_;
    bool specialCharValidIsSet_;
    std::string xExample_;
    bool xExampleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ValidateRule_H_
