
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_TemplateParamVariableValidation_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_TemplateParamVariableValidation_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 模板的部署参数变量的校验规则。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  TemplateParamVariableValidation
    : public ModelBase
{
public:
    TemplateParamVariableValidation();
    virtual ~TemplateParamVariableValidation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateParamVariableValidation members

    /// <summary>
    /// 校验表达式。
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// 校验失败后的错误信息。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string condition_;
    bool conditionIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_TemplateParamVariableValidation_H_
